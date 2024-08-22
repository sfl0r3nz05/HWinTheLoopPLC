# Configuration
- run the docker container as :
```python 
 docker run -it -p 5901:5901 -p 6080:6080 --shm-size=512M sflorenz05/matlab_simulink:v0.3 -vnc

``` 
- Obtain the container ID using `docker ps` for example `6302e7da576f`
- Then use `docker cp` to copy the matlab based simulation of wwtp to the matlab workspace as follows:

```python
docker cp wwtp 6302e7da576f:/home/matlab/Documents/MATALAB/Simulink
```
- after copyting and testing the simulation functionality then save the state of the docker as follows:

```python
docker commit 6302e7da576f <repo_name>/wwtp

```
# WWTP Simulation Setup

There are 4 sensors and 3 actuators in the WWTP Simulation

|Sensor/Actuator Name| Address | Port |
|---|---|---|
|Temperature| 192.168.20.2 | 100001 |
|Oxygen Dissolved| 192.168.20.2 | 100002 |
|Ammonium| 192.168.20.2 | 100003 |
|Nitrate| 192.168.20.2 | 100004 |
|Aeration| 192.168.20.1 | 500001 |
|Purge Flow| 192.168.20.1 | 500002 |
|Internal Recirculation Flow| 192.168.20.1 | 500003 |



# Waster Water Treatment Plant State

*NB:* There is need to verify the names of the variables under measure from the creator of the WWTP. The figure below has correct measurements however the names of compounds need clarification. `So it is therefore important fo us to recieve the variables' names to understand the measurements more accurately.`

This is an abstract view:

 ![WWTP Normal](media/wwtp_running.PNG) 

Water is the source and basis of all life. As a solvent and transport agent, it transports not only vital minerals and nutrients, but also, increasingly, harmful contaminants that accumulate in aquatic or terrestrial organisms. Due to the associated health risks, the World Health Organization (WHO) has issued guideline values ​​for about 200 substances found in water, including nitrogen compounds such as ammonia (NH 3 ) , nitrate (NO 3 - ), and nitrite (NO 2 - ). Therefore, wastewater treatment is a critical issue and compliance with legal limits is very important to help safeguard the environment from these mobile pollutants.

The subsystem is as follows:

 ![WWTP Normal](media/wwtp_subsystem_running.PNG) 


The graphical normal state is given below:

| ![WWTP Normal](media/wwtpnormal.jpg) |
|---| 
|This is an illustration of chemical compunds in WWTP Normal State|


Nitrates are necessary plant nutrients, but excessive levels can cause serious water quality issues. Excess nitrates, when combined with phosphorus, can hasten eutrophication, resulting in substantial increases in aquatic plant growth and changes in the types of plants and animals that dwell in streams. Biological nutrient removal (BNR) processes are implemented in modern wastewater treatment plants (WWTPs) to treat and remove nitrogen compounds, and these involve steps of the nitrification and denitrification process. 

Nitrification  takes place in the aeration tanks where ammonium is oxidized to nitrate via nitrite using oxygen and different species of nitrifiers (bacteria). 

During subsequent denitrification, nitrate is further converted to nitrogen gas (N2) using specialized heterotrophic bacteria in the absence of oxygen (i.e., anoxic zone). After formed, it is harmlessly released into the atmosphere. Therefore, it is very important to measure ammonia, nitrate and nitrite concentrations continuously throughout both process steps to ensure complete nitrogen oxidation and subsequent conversion of gaseous nitrogen.



## Manipulation of Air Pump

- An increase in ammonia levels in the effluent indicates that an insufficient aeration step disturbing the nitrification process. If ammonium decreases nitrates increase. 
- An increase in Nitrate levels in the effluent indicates that a sufficient aeration step in the nitrification process.  if ammonium increases nitrates decrease
- When oxygen levels decrease, aerobic bacteria become less active or die off. This leads to a decrease in the breakdown of organic matter, resulting in an accumulation of suspended solids and sludge.

| ![WWTP Normal](media/wwtpinjection.jpg) | 
|---| 
|This is an illustration of a reduction of air pump in the WWTP which results in an increase in ammonium| 

An increase in aeration is just costly to the business because it is energy intensive process. Increasing aeration can hasten the process to a certain extent of which anything over and above is just wasting resources. The nitrates and oxygen increase whilst ammonium decreases.

|![Increase in sludge](media/wwtpqainc.jpg)|
|---| 
| The illustration shows the effects of a higher air flow rate. 

## Manipulation of Sludge Waste Pump
- When the flow rate of sludge decreases, it means that the sludge spends more time in the treatment process, particularly in settling tanks. 
- As a result the BOD for oxygen increases thus if air pressure remains constant oxygen levels will decrease.
- A reduction in sludge flow rate can lead to a decrease in the supply of organic carbon to the denitrification tank, resulting in lower denitrification efficiency and reduced nitrate removal.
- This longer residence time allows more suspended solids and fine particles to settle out, leading to an increase in the amount of sludge and suspended solids in the effluent.

|![Increase in sludge](media/wwtpwqred.jpg)|
|---| 
| The illustration shows the effects of a lower sludge waste flow rate. |

- However an increase in the sludge waste flow rate affects the biomass bacteria responsible for ammonium conversion thereby affecting the nitrification process negatively (Increase in ammonium).
- There is also an increase in nitrates as a result of more dissolved oxygen because there is less bacteria.

|![Increase in sludge](media/wwtpwqinc.jpg) |
|---| 
| The illustration shows the effects of a higher sludge waste flow rate. |

## Manupulation of Internal Recirculation Flow
When the internal recirculation flow rate is reduced in a water waste treatment plant, it can lead to an increased concentration of ammonium in the anoxic tank and nitrate in the aerobic tank. 

 Internal recirculation also helps in diluting the ammonium and nitrate concentrations in the tanks. When the flow rate is reduced, less fresh influent water is added to dilute the existing ammonium in the anoxic tank and nitrate in the aerobic tank. This lack of dilution can result in the accumulation of ammonium and nitrate.

|![Decrease in IRFR ](media/wwtpqrired.jpg) |
|---| 
| The illustration shows the effects of a higher sludge waste flow rate. |

When the internal recirculation flow rate is increased in a water waste treatment plant, it can lead to a decrease in ammonium concentration and an increase in nitrates and oxygen levels for several reasons:

Dilution effect: Increasing the recirculation flow rate means more fresh water is introduced into the system, diluting the concentration of ammonium. This causes the ammonium levels to decrease.

Enhanced nitrification: Nitrification is the biological process in which ammonium is converted into nitrates by certain bacteria. By increasing the flow rate, the retention time for the wastewater in the treatment process decreases. This promotes nitrification as the wastewater spends less time in the system, resulting in increased conversion of ammonium to nitrate.

|![Increase in sludge](media/wwtpqriinc.jpg) |
|---| 
| The illustration shows the effects of a higher sludge waste flow rate. |


## Impact
The indications of an attack can start to be evidenced within a few days or a few weeks depending on the size of the wwtp and the wasteflow.
### Business
-  regulatory agencies have the authority to pursue legal action against the responsible parties. This can include civil lawsuits or criminal prosecution potentially resulting in additional fines, penalties, or even imprisonment.
- Regulatory agencies often impose financial penalties for non-compliance. The amount of the fine can vary based on factors such as the scale of the violation, the potential harm to the environment or public health.
- Aeration systems, such as blowers or diffusers, require a significant amount of energy to operate. Increasing aeration would result in higher energy consumption, leading to increased operational costs and carbon emissions.

### Environment
- The excess oxygen can result in the oxidation of organic matter to carbon dioxide, which is released into the atmosphere, reducing the organic matter available for microbial digestion and increasing the amount of residual sludge. contributing to global warming. Additionally, increased energy consumption may have indirect environmental consequences associated with the generation of electricity, especially if it relies on fossil fuel-based power sources.
- The decay of this organic matter consumes dissolved oxygen leading to Oxygen depletion in the water, making it hard for other organisms to survive
- High levels of organic matter and nutrients, such as nitrogen and phosphorus, can lead to eutrophication, which is the excessive growth of algae and aquatic plants.
- Elevated ammonia concentrations can be toxic to aquatic life, particularly fish and other sensitive organisms. It can lead to oxygen depletion, impairing the health and survival of these organisms.
- Ammonium can produce unpleasant odors, particularly if it is present in significant amounts and is not adequately treated. This can result in nuisance complaints from nearby residents or businesses.