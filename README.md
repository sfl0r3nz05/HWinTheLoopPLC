# Comparative study of latencies and performance of the Modbus protocol, on virtual and real PLCs using the Hardware in the Loop methodology

> **Note:** This repo is under development ⛏.
> > It is maintained by [Oihan Pérez](https://github.com/jesusrugarcia), [Ekaitz Yerobi](eiriarteyer@ceit.es) and [Santiago Figueroa](https://github.com/sfl0r3nz05) as part of the project: *Comparative study of latencies and performance of the Modbus protocol, on virtual and real PLCs using the Hardware in the Loop methodology*.

## Project Description

Device virtualization is a major focus of attention today. The open source project OpenPLC virtualizes Programmable Logic Controllers (PLCs) following the IEC 61131-3 standard. In the article "OpenPLC: An IEC 61,131-3 compliant open source industrial controller for cyber security research" a comparative study of the OpenPLC project with real PLCs in terms of its functionality was carried out, with satisfactory results. However, there is currently no comparative study considering exclusively network parameters such as throughput and latency. Precisely this Final Degree Project (PFG) aims to focus on this analysis. To develop the tests both on OpenPLC and on real PLCs, the "Hardware in the Loop" methodology will be used, which will be carried out by simulating a process in Matlab Simulink which will be connected to the inputs and outputs of the PLCs. Additionally, Modbus clients deployed on the docker tool will be used to perform the connection tests on the PLCs.

## Documentation

1. [State of the Art (SOA)](https://docs.google.com/document/d/1RF-ZPgv6yreJHBob4-PP_BmIBN206ZZGRNzRnAIt6dQ)
