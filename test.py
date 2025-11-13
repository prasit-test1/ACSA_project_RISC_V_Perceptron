import cocotb
from cocotb.triggers import Timer, RisingEdge
from cocotb.clock import Clock

@cocotb.test()
async def isa_test(dut):
    """Try accessing the design (fixed LogicArray handling)."""
    # start clock (1 ns period)
    clk = Clock(dut.clk, 1, "ns")
    cocotb.start_soon(clk.start())

    # enable predictor if present
    try:
        dut.usePredictor.value = 1
    except Exception:
        # some testbenches may not expose this signal
        pass

    # reset pulse
    dut.rst.value = 1
    await Timer(1, "ns")
    dut.rst.value = 0

    writeData = []
    writeAddr = []
    writePc = []
    memWriteAddr = []

    # run until break condition encountered
    while True:
        # wait a clock edge to sample synchronous signals
        await RisingEdge(dut.clk)

        # check register-file write (convert LogicArray -> int)
        try:
            if int(dut.uut.decode.regF.writeEn.value) == 1:
                writeData.append(int(dut.uut.decode.regF.writeData.value))
                writeAddr.append(int(dut.uut.decode.regF.writeAddr.value))
                # pcPlus4 appears to be in decode stage in this test
                writePc.append(int(dut.uut.decode.pcPlus4.value) - 4)
        except Exception:
            # if any signals aren't present or are complex, skip
            pass

        # compute goodAddr, load/store flags (convert to ints/bools first)
        try:
            dmem_addr = int(dut.dmemAddr.value)
        except Exception:
            dmem_addr = 0

        try:
            dmem_wen = bool(int(dut.dmemWen.value))
        except Exception:
            dmem_wen = False

        try:
            m_reg_src = int(dut.uut.M_regSrc.value)
        except Exception:
            m_reg_src = 0

        goodAddr = not (dmem_addr == 0xFFFFFFFC or dmem_addr == 0x0)
        load = dmem_wen
        store = (m_reg_src == 1)

        if goodAddr and (load or store):
            # safely read other memory signals and convert to ints before hex()
            try:
                pc_val = int(dut.uut.M_pcPlus4.value) - 4
            except Exception:
                pc_val = 0
            try:
                dmem_wdata = int(dut.dmemWdata.value)
            except Exception:
                dmem_wdata = 0
            try:
                dmem_rdata = int(dut.dmemRdata.value)
            except Exception:
                dmem_rdata = 0

            memWriteAddr.append((hex(dmem_addr), hex(pc_val), hex(dmem_wdata), hex(dmem_rdata), load))

        # termination condition: watch for specific register write or dmem write pattern
        try:
            rf_write_data = int(dut.uut.decode.regF.writeData.value)
        except Exception:
            rf_write_data = None

        try:
            current_dmem_wdata = int(dut.dmemWdata.value)
        except Exception:
            current_dmem_wdata = None

        if (rf_write_data == 0xDEADC0DE) or (current_dmem_wdata == 0x1000ef):
            break

    # Optional: log the collected writebacks and memory writes for inspection
    cocotb.log.info("Register writebacks (pc, addr, data):")
    for pc, addr, data in zip(writePc, writeAddr, writeData):
        cocotb.log.info(f"pc={hex(pc)}, addr={hex(addr)}, data={hex(data)}")

    cocotb.log.info("Load/store memory activity (addr, pc, wdata, rdata, load?):")
    for item in memWriteAddr:
        cocotb.log.info(str(item))
