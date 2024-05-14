# Comparative study of latencies and performance of the Modbus protocol, on virtual and real PLCs using the Hardware in the Loop methodology

> **Note:** This repo is under development ⛏.
> > It is maintained by [Oihan Pérez](https://github.com/PerezdeArriluzeaOihan), [Ekaitz Yerobi](eiriarteyer@ceit.es) and [Santiago Figueroa](https://github.com/sfl0r3nz05) as part of the project: *Comparative study of latencies and performance of the Modbus protocol, on virtual and real PLCs using the Hardware in the Loop methodology*.

## Project Description

Device virtualization is a major focus of attention today. The open source project OpenPLC virtualizes Programmable Logic Controllers (PLCs) following the IEC 61131-3 standard. In the article "OpenPLC: An IEC 61,131-3 compliant open source industrial controller for cyber security research" a comparative study of the OpenPLC project with real PLCs in terms of its functionality was carried out, with satisfactory results. However, there is currently no comparative study considering exclusively network parameters such as throughput and latency. Precisely this Final Degree Project (PFG) aims to focus on this analysis. To develop the tests both on OpenPLC and on real PLCs, the "Hardware in the Loop" methodology will be used, which will be carried out by simulating a process in Matlab Simulink which will be connected to the inputs and outputs of the PLCs. Additionally, Modbus clients deployed on the docker tool will be used to perform the connection tests on the PLCs.

## Documentation

1. [State of the Art (SOA)](https://docs.google.com/document/d/15xwSIb0y4NIzIaMRUIs0t0eJ-V2CuZkw/edit?usp=sharing&ouid=112081455839953688829&rtpof=true&sd=true)                        Improving
2. [Diseño](https://docs.google.com/document/d/16R5RU5ItskVm6NDPMELxj9diJbljJUccMOeNoo6CXrY/edit?usp=sharing)                       Improving
3. [Implementación](https://docs.google.com/document/d/10oSrLKRrvdAGgbvsW2g0rURjR7ssxkvX5nWHqeNMi0o/edit?usp=sharing)                       Improving
4. [Results]                    Coming soon
5. [Guía básica configuración módulos PLC](https://docs.google.com/document/d/1xB3YLqI5UiYcW1s1Sb0ApSWaoBoxyXvQtbazRlI4LEY/edit?usp=sharing)
6. [Guía actualizada para configuración de módulos del PLC](./real_plc/Como_Conectar_a_CX.pdf)
7. [Integración con etapa de Hardware In The Loop](./hwintheloop/Resumen_del_Proyecto_Hardware_in_the_Loop.pdf)
8. [Exploits de Omron(PLC CJM2-CPU31/CX-Programmer)](./exploits/Exploits.md)
9. [Documentación detallada de Exploits](./exploits/Documentacion_exploits.pdf)

## To Do

1. Completar el flujo clientes Modbus - PLC Real - Interfaz - WWTP.
2. Utilizar los exploits analizados en [6](./exploits/Exploits.md) y [6.1](./exploits/EXPLOITS_01.pdf) sobre el flujo creado.
3. Integrar el servidor GNS3 con la infraestructura virtualizada actual.
4. Hacer merge entre 5 y 5.1.
5. Hacer merge entre 6 y 6.1.
