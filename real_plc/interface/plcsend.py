from pyModbusTCP.client import ModbusClient
from time import sleep

# client connects to virtual server
interface = ModbusClient(host='10.63.28.53', port=5020, auto_open=True, debug=False)

# client connects to  real PLC
plc = ModbusClient(host='10.63.28.65', port=502, auto_open=True, debug=False)

# read holding registers of interface and plc, write
if interface.open():
    while True:
     regs_list_1 = interface.read_holding_registers(0,4)
     actuators = plc.read_holding_registers(205,3)
     if interface.write_multiple_registers(5,[actuators[0],actuators[1],actuators[2]]):
        print("Write Actuator Data to virtual server:", actuators)
     if plc.write_multiple_registers(200, [regs_list_1[0],regs_list_1[1],regs_list_1[2],regs_list_1[3]]):
        print("Write Sensor Data to PLC:", regs_list_1)
     sleep(.1)
