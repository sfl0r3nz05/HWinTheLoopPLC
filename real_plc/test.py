from pyModbusTCP.client import ModbusClient

# client connects to virtual server
interface = ModbusClient(host='10.63.28.53', port=5020, auto_open=True, debug=False)

# client connects to  real PLC
plc = ModbusClient(host='10.63.28.65', port=502, auto_open=True, debug=False)

if interface.open():
    # read holding registers on virtual server
    regs_list_1 = interface.read_holding_registers(0,7)
    print("Read holding registers on virtual server:", regs_list_1)

    # write to plc simulink values from virtual server
    print("Writing to holding registers on plc...")
    rq = plc.write_single_register(201, regs_list_1[0])
    rq = plc.write_single_register(202, regs_list_1[1])
    rq = plc.write_single_register(203, regs_list_1[2])
    rq = plc.write_single_register(204, regs_list_1[3])
    rq = plc.write_single_register(205, regs_list_1[4])
    rq = plc.write_single_register(206, regs_list_1[5])
    rq = plc.write_single_register(207, regs_list_1[6])
    
    # read to confirm write
    regs_list_1 = plc.read_holding_registers(201,7)
    print("Read holding registers of plc after write:", regs_list_1)
    interface.close()

    # connect to address of virtual server, read holding registers according to mapping of addresses of virtual server, 
    # write to the real plc obtained values from simu that were stored on virtual server
