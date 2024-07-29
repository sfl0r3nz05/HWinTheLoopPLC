from pyModbusTCP.server import ModbusServer, DataBank
from pyModbusTCP.client import ModbusClient
from random import randint
import time 

server = ModbusServer("0.0.0.0", port=5020, no_block=True)
server.start()
server.data_bank.set_holding_registers(0,[0,0,0,0,0,0,0])
try:
  while True:  

    hrv = server.data_bank.get_holding_registers(0,8)
    print("Receiving Sensors and Actuator Data", hrv)
    print(f" Oxygen:  {hrv[0]}\n Nitrates:  {hrv[1]}\n Ammonium:  {hrv[2]}\n Temperature:  {hrv[3]}")
    print(f" Aeration:  {hrv[5]}\n Internal Recirculation:  {hrv[6]}\n Waste Sludge Flow:  {hrv[7]}\n")
    time.sleep(.1)            
        
except KeyboardInterrupt:
    print("Shutdown server...")
    server.stop()
    print("Server is offline.")

   