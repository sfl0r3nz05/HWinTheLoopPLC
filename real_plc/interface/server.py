# This file serves to create a virtual server that initially stores plc data. As the wwtp simulation
# runs, it updates the values in the server according to the simulation.

# Written by Isabella Scanlan, last revised on 7-22-24

from pyModbusTCP.server import ModbusServer, DataBank
from pyModbusTCP.client import ModbusClient
from time import sleep


"""Get PLC holding registers."""
plc = ModbusClient(host='10.63.28.65', port=502, auto_open=True, debug=False)
if plc.open():
    regs_list_1 = plc.read_holding_registers(201,7)
    print(regs_list_1)
    plc.close()

# start a virtual Modbus server
server = ModbusServer("0.0.0.0", port=5020, no_block=True)
server.start()
sleep(1)

# set values in the virtual holding registers starting from address 0
server.data_bank.set_holding_registers(0, [regs_list_1[0], regs_list_1[1], regs_list_1[2],
                                            regs_list_1[3], regs_list_1[4], regs_list_1[5], regs_list_1[6]])

# get values from 7 holding registers, starting at address 0
values = server.data_bank.get_holding_registers(0,7)
print("Values in holding registers: ", values)

try:
    state = [None] * 7
    while True:
        if state != server.data_bank.get_holding_registers(0,7):
            state = server.data_bank.get_holding_registers(0,7)

            formatted_output = (
                f"internalrecirculationflowrate: {state[0]}\n"
                f"wastesludgeflowrate: {state[1]}\n"
                f"airflowrate: {state[2]}\n"
                f"oxygen: {state[3]:0.4f}\n"
                f"nitrates: {state[4]:0.4f}\n"
                f"ammonium: {state[5]:0.4f}\n"
                f"temperature: {state[6]}\n"
            )
            print("Value of registers 1 through 7 have changed to:\n" + formatted_output)
            server.data_bank.set_holding_registers(0, [state[0], state[1], state[2], 
                                                       state[3], state[4], state[5], state[6]])
            sleep(0.08)
except KeyboardInterrupt:
    print("Shutdown server...")
    server.stop()
    print("Server is offline.")