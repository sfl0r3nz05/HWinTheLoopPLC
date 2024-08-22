

// Parametros del modelo n� 1
#include "../ModN1.h"

// CARACTERISTICAS DE LA PLANTA
#define NUMTANKS					1
#define SETTLER						0


#define NUMESTADOSCONTINUOS			0
#define NUMESTADOSDISCRETOS			0


// CARACTERISTICAS DEL BLOQUE
// _____________________________________________________________________

#define NUMPUERTOSENTRADA			2
#define IP_INFLUX					0
#define IP_CONSIGNAS				1

#define ANCHURAPUERTO1ENTRADA		(1+NUMESTADOSMODASM1)		// Caudal + concentraciones entrada D            
#define ANCHURAPUERTO2ENTRADA		1							// QRECF

#define NUMPUERTOSSALIDA			3 
#define OP_SENSORES					0
#define OP_OUTFLUX_EFF				1
#define OP_OUTFLUX_REC				2

#define ANCHURAPUERTO1SALIDA		NUM_SENSORES				// Sensores            
#define ANCHURAPUERTO2SALIDA		(1+NUMESTADOSMODASM1)								
#define ANCHURAPUERTO3SALIDA		(1+NUMESTADOSMODASM1)


// _____________________________________________________________________

// PARAMETROS DE LA S-FUNCTION
#define NUMPARAM_SFUNCT		2
#define PARAM_ESTEQ(S)		ssGetSFcnParam(S,0)
#define PARAMS_SETTLER(S)	ssGetSFcnParam(S,1)


// Dimensiones de los Vectores de Parametros
#define DIMPARAMESTEQ			NUMCOEFESTEQ
#define DIMPARAMS_SETTLER		1


// _____________________________________________________________________
////////////////////////////////////////////////////////////////////////
// ASIGNACION DE VECTORES DE TRABAJO
////////////////////////////////////////////////////////////////////////
// Vectores de TRABAJO
#define NUMPWORKS			3
#define PARAM_ESTEQUIOM		((real_T *)PWork[0])
#define PARAM_SETTL			((real_T *)PWork[1])
#define SENSORES			((real_T *)PWork[2])


// Par�metros
#define F_NS				((real_T*)PWork[1])[0]   

#define NUM_SENSORES			4

// Elementos del vector SENSORES
#define SST_EFF					Sensores[0]
#define NH4_EFF					Sensores[1]
#define NO3_EFF					Sensores[2]
#define MLSS_RECF				Sensores[3]

// _____________________________________________________________________

// PUERTOS DE ENTRADAS
#define Q_INF				(*uPtrs0[0])
#define SS_INF				(*uPtrs0[1])
#define SO_INF				(*uPtrs0[2])
#define SI_INF				(*uPtrs0[3])
#define SNO_INF				(*uPtrs0[4])
#define SNH_INF				(*uPtrs0[5])
#define SND_INF				(*uPtrs0[6])
#define SALK_INF			(*uPtrs0[7])
#define XI_INF				(*uPtrs0[8])
#define XS_INF				(*uPtrs0[9])
#define XBH_INF				(*uPtrs0[10])
#define XBA_INF				(*uPtrs0[11])
#define XP_INF				(*uPtrs0[12])
#define XND_INF				(*uPtrs0[13])
#define XIN_INF				(*uPtrs0[14])


#define QRF_INP				(*uPtrs1[0]) 

