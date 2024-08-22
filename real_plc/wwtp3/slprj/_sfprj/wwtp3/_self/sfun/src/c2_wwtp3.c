/* Include files */

#include "wwtp3_sfun.h"
#include "c2_wwtp3.h"
#include <string.h>
#include "mwmathutil.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(S);
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

/* Forward Declarations */

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static emlrtMCInfo c2_emlrtMCI = { 22, /* lineNo */
  27,                                  /* colNo */
  "validatege",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatege.m"/* pName */
};

static emlrtMCInfo c2_b_emlrtMCI = { 22,/* lineNo */
  27,                                  /* colNo */
  "validatele",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatele.m"/* pName */
};

static emlrtMCInfo c2_c_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatenonnegative",               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnegative.m"/* pName */
};

static emlrtMCInfo c2_d_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatefinite",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatefinite.m"/* pName */
};

static emlrtMCInfo c2_e_emlrtMCI = { 1,/* lineNo */
  1,                                   /* colNo */
  "TCPClient",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\networklib\\+matlabshared\\+network\\+internal\\+coder\\TCPClient.p"/* pName */
};

static emlrtMCInfo c2_f_emlrtMCI = { 154,/* lineNo */
  13,                                  /* colNo */
  "Channel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Channel.m"/* pName */
};

static emlrtMCInfo c2_g_emlrtMCI = { 790,/* lineNo */
  17,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtMCInfo c2_h_emlrtMCI = { 788,/* lineNo */
  17,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtMCInfo c2_i_emlrtMCI = { 786,/* lineNo */
  17,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtMCInfo c2_j_emlrtMCI = { 784,/* lineNo */
  17,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtMCInfo c2_k_emlrtMCI = { 782,/* lineNo */
  17,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtMCInfo c2_l_emlrtMCI = { 780,/* lineNo */
  17,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtMCInfo c2_m_emlrtMCI = { 778,/* lineNo */
  17,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtMCInfo c2_n_emlrtMCI = { 776,/* lineNo */
  17,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtMCInfo c2_o_emlrtMCI = { 774,/* lineNo */
  17,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtMCInfo c2_p_emlrtMCI = { 772,/* lineNo */
  17,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtMCInfo c2_q_emlrtMCI = { 770,/* lineNo */
  17,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtMCInfo c2_r_emlrtMCI = { 768,/* lineNo */
  17,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtMCInfo c2_s_emlrtMCI = { 766,/* lineNo */
  17,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtMCInfo c2_t_emlrtMCI = { 764,/* lineNo */
  17,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtMCInfo c2_u_emlrtMCI = { 792,/* lineNo */
  17,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtMCInfo c2_v_emlrtMCI = { 800,/* lineNo */
  13,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtMCInfo c2_w_emlrtMCI = { 326,/* lineNo */
  13,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtMCInfo c2_x_emlrtMCI = { 47,/* lineNo */
  5,                                   /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pName */
};

static emlrtMCInfo c2_y_emlrtMCI = { 333,/* lineNo */
  13,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtMCInfo c2_ab_emlrtMCI = { 148,/* lineNo */
  25,                                  /* colNo */
  "BufferChannel",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pName */
};

static emlrtMCInfo c2_bb_emlrtMCI = { 162,/* lineNo */
  25,                                  /* colNo */
  "BufferChannel",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pName */
};

static emlrtMCInfo c2_cb_emlrtMCI = { 168,/* lineNo */
  21,                                  /* colNo */
  "BufferChannel",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pName */
};

static emlrtMCInfo c2_db_emlrtMCI = { 872,/* lineNo */
  21,                                  /* colNo */
  "Modbus",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pName */
};

static emlrtMCInfo c2_eb_emlrtMCI = { 15,/* lineNo */
  9,                                   /* colNo */
  "assertSupportedString",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\assertSupportedString.m"/* pName */
};

static emlrtMCInfo c2_fb_emlrtMCI = { 1,/* lineNo */
  1,                                   /* colNo */
  "AsyncIOTransportChannel",           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\transportlib\\+matlabshared\\+transportlib\\+internal\\+asyncIOTransportChan"
  "nel\\+coder\\AsyncIOTransportChannel.p"/* pName */
};

static emlrtMCInfo c2_gb_emlrtMCI = { 159,/* lineNo */
  13,                                  /* colNo */
  "CoderTimeAPI",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\+time\\CoderTimeAPI.m"/* pName */
};

static emlrtMCInfo c2_hb_emlrtMCI = { 249,/* lineNo */
  17,                                  /* colNo */
  "OutputStream",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\OutputStream.m"/* pName */
};

static emlrtMCInfo c2_ib_emlrtMCI = { 303,/* lineNo */
  25,                                  /* colNo */
  "Modbus",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pName */
};

static emlrtMCInfo c2_jb_emlrtMCI = { 321,/* lineNo */
  21,                                  /* colNo */
  "Modbus",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pName */
};

static emlrtMCInfo c2_kb_emlrtMCI = { 540,/* lineNo */
  25,                                  /* colNo */
  "BufferChannel",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pName */
};

static emlrtMCInfo c2_lb_emlrtMCI = { 122,/* lineNo */
  5,                                   /* colNo */
  "indexShapeCheck",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pName */
};

static emlrtMCInfo c2_mb_emlrtMCI = { 135,/* lineNo */
  13,                                  /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pName */
};

static emlrtMCInfo c2_nb_emlrtMCI = { 147,/* lineNo */
  17,                                  /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pName */
};

static emlrtMCInfo c2_ob_emlrtMCI = { 58,/* lineNo */
  23,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtMCInfo c2_pb_emlrtMCI = { 64,/* lineNo */
  15,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtMCInfo c2_qb_emlrtMCI = { 91,/* lineNo */
  27,                                  /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\cat.m"/* pName */
};

static emlrtMCInfo c2_rb_emlrtMCI = { 87,/* lineNo */
  33,                                  /* colNo */
  "eml_int_forloop_overflow_check",    /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pName */
};

static emlrtMCInfo c2_sb_emlrtMCI = { 288,/* lineNo */
  27,                                  /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtMCInfo c2_tb_emlrtMCI = { 13,/* lineNo */
  37,                                  /* colNo */
  "validatenonempty",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonempty.m"/* pName */
};

static emlrtMCInfo c2_ub_emlrtMCI = { 13,/* lineNo */
  37,                                  /* colNo */
  "validatevector",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatevector.m"/* pName */
};

static emlrtMCInfo c2_vb_emlrtMCI = { 11,/* lineNo */
  24,                                  /* colNo */
  "mustBeNonnegative",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\validators\\mustBeNonnegative.m"/* pName */
};

static emlrtMCInfo c2_wb_emlrtMCI = { 64,/* lineNo */
  9,                                   /* colNo */
  "bitget",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\bitget.m"/* pName */
};

static emlrtMCInfo c2_xb_emlrtMCI = { 82,/* lineNo */
  5,                                   /* colNo */
  "power",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pName */
};

static emlrtMCInfo c2_yb_emlrtMCI = { 1051,/* lineNo */
  21,                                  /* colNo */
  "Modbus",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pName */
};

static emlrtMCInfo c2_ac_emlrtMCI = { 1046,/* lineNo */
  25,                                  /* colNo */
  "Modbus",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pName */
};

static emlrtMCInfo c2_bc_emlrtMCI = { 1048,/* lineNo */
  25,                                  /* colNo */
  "Modbus",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pName */
};

static emlrtMCInfo c2_cc_emlrtMCI = { 1043,/* lineNo */
  21,                                  /* colNo */
  "Modbus",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pName */
};

static emlrtMCInfo c2_dc_emlrtMCI = { 1038,/* lineNo */
  25,                                  /* colNo */
  "Modbus",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pName */
};

static emlrtMCInfo c2_ec_emlrtMCI = { 1040,/* lineNo */
  25,                                  /* colNo */
  "Modbus",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pName */
};

static emlrtMCInfo c2_fc_emlrtMCI = { 1035,/* lineNo */
  21,                                  /* colNo */
  "Modbus",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pName */
};

static emlrtMCInfo c2_gc_emlrtMCI = { 1053,/* lineNo */
  21,                                  /* colNo */
  "Modbus",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pName */
};

static emlrtMCInfo c2_hc_emlrtMCI = { 82,/* lineNo */
  27,                                  /* colNo */
  "bitbinop",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\private\\bitbinop.m"/* pName */
};

static emlrtMCInfo c2_ic_emlrtMCI = { 74,/* lineNo */
  13,                                  /* colNo */
  "reshapeSizeChecks",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\reshapeSizeChecks.m"/* pName */
};

static emlrtMCInfo c2_jc_emlrtMCI = { 79,/* lineNo */
  23,                                  /* colNo */
  "reshapeSizeChecks",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\reshapeSizeChecks.m"/* pName */
};

static emlrtMCInfo c2_kc_emlrtMCI = { 81,/* lineNo */
  23,                                  /* colNo */
  "reshapeSizeChecks",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\reshapeSizeChecks.m"/* pName */
};

static emlrtRSInfo c2_emlrtRSI = { 96, /* lineNo */
  "modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\modbus.m"/* pathName */
};

static emlrtRSInfo c2_b_emlrtRSI = { 45,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_c_emlrtRSI = { 90,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_d_emlrtRSI = { 97,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_e_emlrtRSI = { 119,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_f_emlrtRSI = { 85,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_g_emlrtRSI = { 80,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_h_emlrtRSI = { 83,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_i_emlrtRSI = { 67,/* lineNo */
  "DataConverter",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\DataConverter.m"/* pathName */
};

static emlrtRSInfo c2_j_emlrtRSI = { 70,/* lineNo */
  "DataConverter",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\DataConverter.m"/* pathName */
};

static emlrtRSInfo c2_k_emlrtRSI = { 71,/* lineNo */
  "DataConverter",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\DataConverter.m"/* pathName */
};

static emlrtRSInfo c2_l_emlrtRSI = { 147,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_m_emlrtRSI = { 13,/* lineNo */
  "GetTransport",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\GetTransport.m"/* pathName */
};

static emlrtRSInfo c2_n_emlrtRSI = { 1,/* lineNo */
  "TCPClient",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\networklib\\+matlabshared\\+network\\+internal\\+coder\\TCPClient.p"/* pathName */
};

static emlrtRSInfo c2_o_emlrtRSI = { 93,/* lineNo */
  "validateattributes",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"/* pathName */
};

static emlrtRSInfo c2_p_emlrtRSI = { 1,/* lineNo */
  "ITransport",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\transportlib\\+matlabshared\\+transportlib\\+internal\\ITransport.p"/* pathName */
};

static emlrtRSInfo c2_q_emlrtRSI = { 1,/* lineNo */
  "ITokenReader",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\transportlib\\+matlabshared\\+transportlib\\+internal\\ITokenReader.p"/* pathName */
};

static emlrtRSInfo c2_r_emlrtRSI = { 1,/* lineNo */
  "IFilterable",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\transportlib\\+matlabshared\\+transportlib\\+internal\\IFilterable.p"/* pathName */
};

static emlrtRSInfo c2_s_emlrtRSI = { 29,/* lineNo */
  "sprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\strfun\\sprintf.m"/* pathName */
};

static emlrtRSInfo c2_t_emlrtRSI = { 53,/* lineNo */
  "sprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\strfun\\sprintf.m"/* pathName */
};

static emlrtRSInfo c2_u_emlrtRSI = { 55,/* lineNo */
  "sprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\strfun\\sprintf.m"/* pathName */
};

static emlrtRSInfo c2_v_emlrtRSI = { 54,/* lineNo */
  "Channel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Channel.m"/* pathName */
};

static emlrtRSInfo c2_w_emlrtRSI = { 162,/* lineNo */
  "Channel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Channel.m"/* pathName */
};

static emlrtRSInfo c2_x_emlrtRSI = { 165,/* lineNo */
  "Channel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Channel.m"/* pathName */
};

static emlrtRSInfo c2_y_emlrtRSI = { 168,/* lineNo */
  "Channel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Channel.m"/* pathName */
};

static emlrtRSInfo c2_ab_emlrtRSI = { 169,/* lineNo */
  "Channel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Channel.m"/* pathName */
};

static emlrtRSInfo c2_bb_emlrtRSI = { 252,/* lineNo */
  "API",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pathName */
};

static emlrtRSInfo c2_cb_emlrtRSI = { 761,/* lineNo */
  "API",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pathName */
};

static emlrtRSInfo c2_db_emlrtRSI = { 403,/* lineNo */
  "API",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pathName */
};

static emlrtRSInfo c2_eb_emlrtRSI = { 470,/* lineNo */
  "API",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pathName */
};

static emlrtRSInfo c2_fb_emlrtRSI = { 478,/* lineNo */
  "API",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pathName */
};

static emlrtRSInfo c2_gb_emlrtRSI = { 799,/* lineNo */
  "API",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pathName */
};

static emlrtRSInfo c2_hb_emlrtRSI = { 55,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c2_ib_emlrtRSI = { 76,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c2_jb_emlrtRSI = { 25,/* lineNo */
  "Stream",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m"/* pathName */
};

static emlrtRSInfo c2_kb_emlrtRSI = { 36,/* lineNo */
  "Stream",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m"/* pathName */
};

static emlrtRSInfo c2_lb_emlrtRSI = { 563,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c2_mb_emlrtRSI = { 279,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c2_nb_emlrtRSI = { 292,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c2_ob_emlrtRSI = { 40,/* lineNo */
  "OutputStream",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\OutputStream.m"/* pathName */
};

static emlrtRSInfo c2_pb_emlrtRSI = { 38,/* lineNo */
  "Stream",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m"/* pathName */
};

static emlrtRSInfo c2_qb_emlrtRSI = { 1,/* lineNo */
  "AsyncIOTransportChannel",           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\transportlib\\+matlabshared\\+transportlib\\+internal\\+asyncIOTransportChan"
  "nel\\+coder\\AsyncIOTransportChannel.p"/* pathName */
};

static emlrtRSInfo c2_rb_emlrtRSI = { 1,/* lineNo */
  "ByteOrder",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\transportlib\\+matlabshared\\+transportlib\\+internal\\ByteOrder.p"/* pathName */
};

static emlrtRSInfo c2_sb_emlrtRSI = { 254,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c2_tb_emlrtRSI = { 229,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c2_ub_emlrtRSI = { 255,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c2_vb_emlrtRSI = { 273,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c2_wb_emlrtRSI = { 131,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c2_xb_emlrtRSI = { 133,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c2_yb_emlrtRSI = { 136,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c2_ac_emlrtRSI = { 140,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c2_bc_emlrtRSI = { 154,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c2_cc_emlrtRSI = { 587,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c2_dc_emlrtRSI = { 286,/* lineNo */
  "Channel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Channel.m"/* pathName */
};

static emlrtRSInfo c2_ec_emlrtRSI = { 294,/* lineNo */
  "Channel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Channel.m"/* pathName */
};

static emlrtRSInfo c2_fc_emlrtRSI = { 229,/* lineNo */
  "Channel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Channel.m"/* pathName */
};

static emlrtRSInfo c2_gc_emlrtRSI = { 286,/* lineNo */
  "API",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pathName */
};

static emlrtRSInfo c2_hc_emlrtRSI = { 416,/* lineNo */
  "API",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pathName */
};

static emlrtRSInfo c2_ic_emlrtRSI = { 152,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_jc_emlrtRSI = { 153,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_kc_emlrtRSI = { 155,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_lc_emlrtRSI = { 247,/* lineNo */
  "Channel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Channel.m"/* pathName */
};

static emlrtRSInfo c2_mc_emlrtRSI = { 319,/* lineNo */
  "API",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pathName */
};

static emlrtRSInfo c2_nc_emlrtRSI = { 185,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_oc_emlrtRSI = { 186,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_pc_emlrtRSI = { 187,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_qc_emlrtRSI = { 188,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_rc_emlrtRSI = { 97,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_sc_emlrtRSI = { 106,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_tc_emlrtRSI = { 132,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_uc_emlrtRSI = { 1072,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_vc_emlrtRSI = { 16,/* lineNo */
  "PacketBuilder",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\PacketBuilder.m"/* pathName */
};

static emlrtRSInfo c2_wc_emlrtRSI = { 40,/* lineNo */
  "PacketBuilder",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\PacketBuilder.m"/* pathName */
};

static emlrtRSInfo c2_xc_emlrtRSI = { 285,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_yc_emlrtRSI = { 299,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_ad_emlrtRSI = { 222,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_bd_emlrtRSI = { 858,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_cd_emlrtRSI = { 768,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_dd_emlrtRSI = { 787,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_ed_emlrtRSI = { 790,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_fd_emlrtRSI = { 793,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_gd_emlrtRSI = { 27,/* lineNo */
  "PacketBuilder",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\PacketBuilder.m"/* pathName */
};

static emlrtRSInfo c2_hd_emlrtRSI = { 28,/* lineNo */
  "PacketBuilder",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\PacketBuilder.m"/* pathName */
};

static emlrtRSInfo c2_id_emlrtRSI = { 136,/* lineNo */
  "PacketBuilder",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\PacketBuilder.m"/* pathName */
};

static emlrtRSInfo c2_jd_emlrtRSI = { 138,/* lineNo */
  "PacketBuilder",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\PacketBuilder.m"/* pathName */
};

static emlrtRSInfo c2_kd_emlrtRSI = { 139,/* lineNo */
  "PacketBuilder",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\PacketBuilder.m"/* pathName */
};

static emlrtRSInfo c2_ld_emlrtRSI = { 240,/* lineNo */
  "PacketBuilder",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\PacketBuilder.m"/* pathName */
};

static emlrtRSInfo c2_md_emlrtRSI = { 176,/* lineNo */
  "DataConverter",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\DataConverter.m"/* pathName */
};

static emlrtRSInfo c2_nd_emlrtRSI = { 177,/* lineNo */
  "DataConverter",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\DataConverter.m"/* pathName */
};

static emlrtRSInfo c2_od_emlrtRSI = { 179,/* lineNo */
  "DataConverter",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\DataConverter.m"/* pathName */
};

static emlrtRSInfo c2_pd_emlrtRSI = { 250,/* lineNo */
  "DataConverter",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\DataConverter.m"/* pathName */
};

static emlrtRSInfo c2_qd_emlrtRSI = { 91,/* lineNo */
  "strcmp",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\strcmp.m"/* pathName */
};

static emlrtRSInfo c2_rd_emlrtRSI = { 167,/* lineNo */
  "strcmp",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\strcmp.m"/* pathName */
};

static emlrtRSInfo c2_sd_emlrtRSI = { 240,/* lineNo */
  "strcmp",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\strcmp.m"/* pathName */
};

static emlrtRSInfo c2_td_emlrtRSI = { 241,/* lineNo */
  "strcmp",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\strcmp.m"/* pathName */
};

static emlrtRSInfo c2_ud_emlrtRSI = { 242,/* lineNo */
  "strcmp",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\strcmp.m"/* pathName */
};

static emlrtRSInfo c2_vd_emlrtRSI = { 16,/* lineNo */
  "lower",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\strfun\\lower.m"/* pathName */
};

static emlrtRSInfo c2_wd_emlrtRSI = { 10,/* lineNo */
  "eml_string_transform",              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\strfun\\eml_string_transform.m"/* pathName */
};

static emlrtRSInfo c2_xd_emlrtRSI = { 19,/* lineNo */
  "swapbytes",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\datatypes\\swapbytes.m"/* pathName */
};

static emlrtRSInfo c2_yd_emlrtRSI = { 68,/* lineNo */
  "PacketBuilder",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\PacketBuilder.m"/* pathName */
};

static emlrtRSInfo c2_ae_emlrtRSI = { 78,/* lineNo */
  "PacketBuilder",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\PacketBuilder.m"/* pathName */
};

static emlrtRSInfo c2_be_emlrtRSI = { 83,/* lineNo */
  "PacketBuilder",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\PacketBuilder.m"/* pathName */
};

static emlrtRSInfo c2_ce_emlrtRSI = { 994,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_de_emlrtRSI = { 244,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_ee_emlrtRSI = { 246,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_fe_emlrtRSI = { 247,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_ge_emlrtRSI = { 268,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_he_emlrtRSI = { 137,/* lineNo */
  "OutputStream",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\OutputStream.m"/* pathName */
};

static emlrtRSInfo c2_ie_emlrtRSI = { 140,/* lineNo */
  "OutputStream",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\OutputStream.m"/* pathName */
};

static emlrtRSInfo c2_je_emlrtRSI = { 143,/* lineNo */
  "OutputStream",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\OutputStream.m"/* pathName */
};

static emlrtRSInfo c2_ke_emlrtRSI = { 148,/* lineNo */
  "OutputStream",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\OutputStream.m"/* pathName */
};

static emlrtRSInfo c2_le_emlrtRSI = { 167,/* lineNo */
  "OutputStream",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\OutputStream.m"/* pathName */
};

static emlrtRSInfo c2_me_emlrtRSI = { 232,/* lineNo */
  "Stream",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m"/* pathName */
};

static emlrtRSInfo c2_ne_emlrtRSI = { 527,/* lineNo */
  "API",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pathName */
};

static emlrtRSInfo c2_oe_emlrtRSI = { 585,/* lineNo */
  "API",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pathName */
};

static emlrtRSInfo c2_pe_emlrtRSI = { 186,/* lineNo */
  "Stream",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m"/* pathName */
};

static emlrtRSInfo c2_qe_emlrtRSI = { 187,/* lineNo */
  "Stream",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m"/* pathName */
};

static emlrtRSInfo c2_re_emlrtRSI = { 192,/* lineNo */
  "Stream",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m"/* pathName */
};

static emlrtRSInfo c2_se_emlrtRSI = { 195,/* lineNo */
  "Stream",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m"/* pathName */
};

static emlrtRSInfo c2_te_emlrtRSI = { 197,/* lineNo */
  "Stream",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m"/* pathName */
};

static emlrtRSInfo c2_ue_emlrtRSI = { 200,/* lineNo */
  "Stream",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m"/* pathName */
};

static emlrtRSInfo c2_ve_emlrtRSI = { 202,/* lineNo */
  "Stream",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m"/* pathName */
};

static emlrtRSInfo c2_we_emlrtRSI = { 203,/* lineNo */
  "Stream",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m"/* pathName */
};

static emlrtRSInfo c2_xe_emlrtRSI = { 31,/* lineNo */
  "tic",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\timefun\\tic.m"/* pathName */
};

static emlrtRSInfo c2_ye_emlrtRSI = { 7,/* lineNo */
  "getTime",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\+time\\getTime.m"/* pathName */
};

static emlrtRSInfo c2_af_emlrtRSI = { 21,/* lineNo */
  "CoderTimeAPI",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\+time\\CoderTimeAPI.m"/* pathName */
};

static emlrtRSInfo c2_bf_emlrtRSI = { 148,/* lineNo */
  "CoderTimeAPI",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\+time\\CoderTimeAPI.m"/* pathName */
};

static emlrtRSInfo c2_cf_emlrtRSI = { 36,/* lineNo */
  "toc",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\timefun\\toc.m"/* pathName */
};

static emlrtRSInfo c2_df_emlrtRSI = { 249,/* lineNo */
  "Stream",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m"/* pathName */
};

static emlrtRSInfo c2_ef_emlrtRSI = { 46,/* lineNo */
  "pause",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\timefun\\pause.m"/* pathName */
};

static emlrtRSInfo c2_ff_emlrtRSI = { 90,/* lineNo */
  "Stream",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m"/* pathName */
};

static emlrtRSInfo c2_gf_emlrtRSI = { 509,/* lineNo */
  "API",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pathName */
};

static emlrtRSInfo c2_hf_emlrtRSI = { 225,/* lineNo */
  "Stream",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m"/* pathName */
};

static emlrtRSInfo c2_if_emlrtRSI = { 518,/* lineNo */
  "API",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pathName */
};

static emlrtRSInfo c2_jf_emlrtRSI = { 204,/* lineNo */
  "OutputStream",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\OutputStream.m"/* pathName */
};

static emlrtRSInfo c2_kf_emlrtRSI = { 676,/* lineNo */
  "API",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pathName */
};

static emlrtRSInfo c2_lf_emlrtRSI = { 352,/* lineNo */
  "Channel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Channel.m"/* pathName */
};

static emlrtRSInfo c2_mf_emlrtRSI = { 438,/* lineNo */
  "API",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pathName */
};

static emlrtRSInfo c2_nf_emlrtRSI = { 239,/* lineNo */
  "OutputStream",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\OutputStream.m"/* pathName */
};

static emlrtRSInfo c2_of_emlrtRSI = { 242,/* lineNo */
  "OutputStream",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\OutputStream.m"/* pathName */
};

static emlrtRSInfo c2_pf_emlrtRSI = { 247,/* lineNo */
  "OutputStream",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\OutputStream.m"/* pathName */
};

static emlrtRSInfo c2_qf_emlrtRSI = { 254,/* lineNo */
  "OutputStream",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\OutputStream.m"/* pathName */
};

static emlrtRSInfo c2_rf_emlrtRSI = { 238,/* lineNo */
  "Stream",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m"/* pathName */
};

static emlrtRSInfo c2_sf_emlrtRSI = { 536,/* lineNo */
  "API",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pathName */
};

static emlrtRSInfo c2_tf_emlrtRSI = { 162,/* lineNo */
  "Stream",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m"/* pathName */
};

static emlrtRSInfo c2_uf_emlrtRSI = { 576,/* lineNo */
  "API",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pathName */
};

static emlrtRSInfo c2_vf_emlrtRSI = { 278,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_wf_emlrtRSI = { 283,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_xf_emlrtRSI = { 286,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_yf_emlrtRSI = { 293,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_ag_emlrtRSI = { 297,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_bg_emlrtRSI = { 298,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_cg_emlrtRSI = { 307,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_dg_emlrtRSI = { 310,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_eg_emlrtRSI = { 317,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_fg_emlrtRSI = { 319,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_gg_emlrtRSI = { 323,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_hg_emlrtRSI = { 206,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_ig_emlrtRSI = { 209,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_jg_emlrtRSI = { 210,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_kg_emlrtRSI = { 293,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c2_lg_emlrtRSI = { 270,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c2_mg_emlrtRSI = { 225,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_ng_emlrtRSI = { 226,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_og_emlrtRSI = { 385,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c2_pg_emlrtRSI = { 397,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c2_qg_emlrtRSI = { 535,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c2_rg_emlrtRSI = { 539,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c2_sg_emlrtRSI = { 542,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c2_tg_emlrtRSI = { 544,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c2_ug_emlrtRSI = { 545,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c2_vg_emlrtRSI = { 546,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c2_wg_emlrtRSI = { 548,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c2_xg_emlrtRSI = { 563,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c2_yg_emlrtRSI = { 569,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c2_ah_emlrtRSI = { 572,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c2_bh_emlrtRSI = { 612,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c2_ch_emlrtRSI = { 33,/* lineNo */
  "indexShapeCheck",                   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pathName */
};

static emlrtRSInfo c2_dh_emlrtRSI = { 182,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c2_eh_emlrtRSI = { 186,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c2_fh_emlrtRSI = { 193,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c2_gh_emlrtRSI = { 196,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c2_hh_emlrtRSI = { 199,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c2_ih_emlrtRSI = { 204,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c2_jh_emlrtRSI = { 210,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c2_kh_emlrtRSI = { 220,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c2_lh_emlrtRSI = { 225,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c2_mh_emlrtRSI = { 232,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c2_nh_emlrtRSI = { 233,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c2_oh_emlrtRSI = { 235,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c2_ph_emlrtRSI = { 242,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c2_qh_emlrtRSI = { 533,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c2_rh_emlrtRSI = { 539,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c2_sh_emlrtRSI = { 541,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c2_th_emlrtRSI = { 544,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c2_uh_emlrtRSI = { 307,/* lineNo */
  "Stream",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m"/* pathName */
};

static emlrtRSInfo c2_vh_emlrtRSI = { 371,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c2_wh_emlrtRSI = { 417,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c2_xh_emlrtRSI = { 436,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c2_yh_emlrtRSI = { 440,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c2_ai_emlrtRSI = { 471,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c2_bi_emlrtRSI = { 479,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c2_ci_emlrtRSI = { 613,/* lineNo */
  "API",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pathName */
};

static emlrtRSInfo c2_di_emlrtRSI = { 28,/* lineNo */
  "repmat",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

static emlrtRSInfo c2_ei_emlrtRSI = { 627,/* lineNo */
  "API",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pathName */
};

static emlrtRSInfo c2_fi_emlrtRSI = { 522,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c2_gi_emlrtRSI = { 646,/* lineNo */
  "API",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pathName */
};

static emlrtRSInfo c2_hi_emlrtRSI = { 130,/* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\cat.m"/* pathName */
};

static emlrtRSInfo c2_ii_emlrtRSI = { 20,/* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

static emlrtRSInfo c2_ji_emlrtRSI = { 581,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c2_ki_emlrtRSI = { 41,/* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtRSInfo c2_li_emlrtRSI = { 113,/* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtRSInfo c2_mi_emlrtRSI = { 387,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c2_ni_emlrtRSI = { 333,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c2_oi_emlrtRSI = { 357,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c2_pi_emlrtRSI = { 48,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c2_qi_emlrtRSI = { 456,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_ri_emlrtRSI = { 64,/* lineNo */
  "bitget",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\bitget.m"/* pathName */
};

static emlrtRSInfo c2_si_emlrtRSI = { 27,/* lineNo */
  "all_in_integer_range",              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\private\\all_in_integer_range.m"/* pathName */
};

static emlrtRSInfo c2_ti_emlrtRSI = { 58,/* lineNo */
  "eml_i64relops",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\eml\\eml_i64relops.m"/* pathName */
};

static emlrtRSInfo c2_ui_emlrtRSI = { 47,/* lineNo */
  "ixfun",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m"/* pathName */
};

static emlrtRSInfo c2_vi_emlrtRSI = { 40,/* lineNo */
  "eml_i64relops",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\eml\\eml_i64relops.m"/* pathName */
};

static emlrtRSInfo c2_wi_emlrtRSI = { 103,/* lineNo */
  "eml_i64relops",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\eml\\eml_i64relops.m"/* pathName */
};

static emlrtRSInfo c2_xi_emlrtRSI = { 216,/* lineNo */
  "eml_i64relops",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\eml\\eml_i64relops.m"/* pathName */
};

static emlrtRSInfo c2_yi_emlrtRSI = { 44,/* lineNo */
  "mpower",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\matfun\\mpower.m"/* pathName */
};

static emlrtRSInfo c2_aj_emlrtRSI = { 71,/* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo c2_bj_emlrtRSI = { 63,/* lineNo */
  "function_handle",                   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\function_handle.m"/* pathName */
};

static emlrtRSInfo c2_cj_emlrtRSI = { 38,/* lineNo */
  "eml_i64relops",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\eml\\eml_i64relops.m"/* pathName */
};

static emlrtRSInfo c2_dj_emlrtRSI = { 137,/* lineNo */
  "eml_i64relops",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\eml\\eml_i64relops.m"/* pathName */
};

static emlrtRSInfo c2_ej_emlrtRSI = { 443,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_fj_emlrtRSI = { 444,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_gj_emlrtRSI = { 256,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c2_hj_emlrtRSI = { 259,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c2_ij_emlrtRSI = { 405,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c2_jj_emlrtRSI = { 406,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c2_kj_emlrtRSI = { 407,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c2_lj_emlrtRSI = { 1034,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_mj_emlrtRSI = { 1037,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_nj_emlrtRSI = { 1045,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_oj_emlrtRSI = { 12,/* lineNo */
  "bitand",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\bitand.m"/* pathName */
};

static emlrtRSInfo c2_pj_emlrtRSI = { 82,/* lineNo */
  "bitbinop",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\private\\bitbinop.m"/* pathName */
};

static emlrtRSInfo c2_qj_emlrtRSI = { 1060,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_rj_emlrtRSI = { 1082,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_sj_emlrtRSI = { 1085,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_tj_emlrtRSI = { 436,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_uj_emlrtRSI = { 437,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_vj_emlrtRSI = { 438,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_wj_emlrtRSI = { 316,/* lineNo */
  "Channel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Channel.m"/* pathName */
};

static emlrtRSInfo c2_xj_emlrtRSI = { 321,/* lineNo */
  "Channel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Channel.m"/* pathName */
};

static emlrtRSInfo c2_yj_emlrtRSI = { 424,/* lineNo */
  "API",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pathName */
};

static emlrtRSInfo c2_ak_emlrtRSI = { 85,/* lineNo */
  "DataConverter",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\DataConverter.m"/* pathName */
};

static emlrtRSInfo c2_bk_emlrtRSI = { 88,/* lineNo */
  "DataConverter",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\DataConverter.m"/* pathName */
};

static emlrtRSInfo c2_ck_emlrtRSI = { 51,/* lineNo */
  "reshapeSizeChecks",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\reshapeSizeChecks.m"/* pathName */
};

static emlrtRSInfo c2_dk_emlrtRSI = { 119,/* lineNo */
  "reshapeSizeChecks",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\reshapeSizeChecks.m"/* pathName */
};

static emlrtRSInfo c2_ek_emlrtRSI = { 221,/* lineNo */
  "DataConverter",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\DataConverter.m"/* pathName */
};

static emlrtRSInfo c2_fk_emlrtRSI = { 226,/* lineNo */
  "DataConverter",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\DataConverter.m"/* pathName */
};

static emlrtRSInfo c2_gk_emlrtRSI = { 231,/* lineNo */
  "DataConverter",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\DataConverter.m"/* pathName */
};

static emlrtRSInfo c2_hk_emlrtRSI = { 233,/* lineNo */
  "DataConverter",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\DataConverter.m"/* pathName */
};

static emlrtRSInfo c2_ik_emlrtRSI = { 238,/* lineNo */
  "DataConverter",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\DataConverter.m"/* pathName */
};

static emlrtRSInfo c2_jk_emlrtRSI = { 242,/* lineNo */
  "DataConverter",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\DataConverter.m"/* pathName */
};

static emlrtRSInfo c2_kk_emlrtRSI = { 243,/* lineNo */
  "DataConverter",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\DataConverter.m"/* pathName */
};

static emlrtRSInfo c2_lk_emlrtRSI = { 22,/* lineNo */
  "matlabCodegenHandle",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\matlabCodegenHandle.m"/* pathName */
};

static emlrtRSInfo c2_mk_emlrtRSI = { 124,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_nk_emlrtRSI = { 162,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_ok_emlrtRSI = { 163,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c2_pk_emlrtRSI = { 182,/* lineNo */
  "Channel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Channel.m"/* pathName */
};

static emlrtRSInfo c2_qk_emlrtRSI = { 198,/* lineNo */
  "Channel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Channel.m"/* pathName */
};

static emlrtRSInfo c2_rk_emlrtRSI = { 199,/* lineNo */
  "Channel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Channel.m"/* pathName */
};

static emlrtRSInfo c2_sk_emlrtRSI = { 200,/* lineNo */
  "Channel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Channel.m"/* pathName */
};

static emlrtRSInfo c2_tk_emlrtRSI = { 207,/* lineNo */
  "Channel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Channel.m"/* pathName */
};

static emlrtRSInfo c2_uk_emlrtRSI = { 215,/* lineNo */
  "Channel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Channel.m"/* pathName */
};

static emlrtRSInfo c2_vk_emlrtRSI = { 14,/* lineNo */
  "warning",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pathName */
};

static emlrtRSInfo c2_wk_emlrtRSI = { 446,/* lineNo */
  "API",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pathName */
};

static emlrtRSInfo c2_xk_emlrtRSI = { 324,/* lineNo */
  "Channel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Channel.m"/* pathName */
};

static emlrtRSInfo c2_yk_emlrtRSI = { 673,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c2_al_emlrtRSI = { 414,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c2_bl_emlrtRSI = { 281,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c2_cl_emlrtRSI = { 282,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c2_dl_emlrtRSI = { 3,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#wwtp3:405"                         /* pathName */
};

static emlrtRSInfo c2_el_emlrtRSI = { 1,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#wwtp3:405"                         /* pathName */
};

static emlrtRSInfo c2_fl_emlrtRSI = { 2,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#wwtp3:405"                         /* pathName */
};

static emlrtRTEInfo c2_emlrtRTEI = { 136,/* lineNo */
  13,                                  /* colNo */
  "PacketBuilder",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\PacketBuilder.m"/* pName */
};

static emlrtRTEInfo c2_b_emlrtRTEI = { 44,/* lineNo */
  13,                                  /* colNo */
  "DataConverter",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\DataConverter.m"/* pName */
};

static emlrtRTEInfo c2_c_emlrtRTEI = { 787,/* lineNo */
  13,                                  /* colNo */
  "Modbus",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pName */
};

static emlrtRTEInfo c2_d_emlrtRTEI = { 1,/* lineNo */
  1,                                   /* colNo */
  "AsyncIOTransportChannel",           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\transportlib\\+matlabshared\\+transportlib\\+internal\\+asyncIOTransportChan"
  "nel\\+coder\\AsyncIOTransportChannel.p"/* pName */
};

static emlrtRTEInfo c2_e_emlrtRTEI = { 68,/* lineNo */
  24,                                  /* colNo */
  "typecast",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\datatypes\\typecast.m"/* pName */
};

static emlrtRTEInfo c2_f_emlrtRTEI = { 733,/* lineNo */
  21,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtRTEInfo c2_g_emlrtRTEI = { 126,/* lineNo */
  34,                                  /* colNo */
  "OutputStream",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\OutputStream.m"/* pName */
};

static emlrtRTEInfo c2_h_emlrtRTEI = { 431,/* lineNo */
  13,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtRTEInfo c2_i_emlrtRTEI = { 437,/* lineNo */
  53,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtRTEInfo c2_j_emlrtRTEI = { 145,/* lineNo */
  25,                                  /* colNo */
  "OutputStream",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\OutputStream.m"/* pName */
};

static emlrtRTEInfo c2_k_emlrtRTEI = { 203,/* lineNo */
  26,                                  /* colNo */
  "OutputStream",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\OutputStream.m"/* pName */
};

static emlrtRTEInfo c2_l_emlrtRTEI = { 203,/* lineNo */
  17,                                  /* colNo */
  "OutputStream",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\OutputStream.m"/* pName */
};

static emlrtRTEInfo c2_m_emlrtRTEI = { 2,/* lineNo */
  1,                                   /* colNo */
  "MATLAB Function",                   /* fName */
  "#wwtp3:405"                         /* pName */
};

static emlrtRTEInfo c2_n_emlrtRTEI = { 27,/* lineNo */
  13,                                  /* colNo */
  "PacketBuilder",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\PacketBuilder.m"/* pName */
};

static emlrtRTEInfo c2_o_emlrtRTEI = { 250,/* lineNo */
  28,                                  /* colNo */
  "DataConverter",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\DataConverter.m"/* pName */
};

static emlrtRTEInfo c2_p_emlrtRTEI = { 203,/* lineNo */
  34,                                  /* colNo */
  "OutputStream",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\OutputStream.m"/* pName */
};

static emlrtRTEInfo c2_q_emlrtRTEI = { 39,/* lineNo */
  13,                                  /* colNo */
  "DataConverter",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\DataConverter.m"/* pName */
};

static emlrtRTEInfo c2_r_emlrtRTEI = { 40,/* lineNo */
  13,                                  /* colNo */
  "DataConverter",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\DataConverter.m"/* pName */
};

static emlrtRTEInfo c2_s_emlrtRTEI = { 59,/* lineNo */
  13,                                  /* colNo */
  "DataConverter",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\DataConverter.m"/* pName */
};

static emlrtRTEInfo c2_t_emlrtRTEI = { 60,/* lineNo */
  13,                                  /* colNo */
  "DataConverter",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\DataConverter.m"/* pName */
};

static emlrtRTEInfo c2_u_emlrtRTEI = { 1,/* lineNo */
  1,                                   /* colNo */
  "TCPClient",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\networklib\\+matlabshared\\+network\\+internal\\+coder\\TCPClient.p"/* pName */
};

static emlrtRTEInfo c2_v_emlrtRTEI = { 162,/* lineNo */
  85,                                  /* colNo */
  "Channel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Channel.m"/* pName */
};

static emlrtRTEInfo c2_w_emlrtRTEI = { 162,/* lineNo */
  103,                                 /* colNo */
  "Channel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Channel.m"/* pName */
};

static emlrtRTEInfo c2_x_emlrtRTEI = { 242,/* lineNo */
  88,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtRTEInfo c2_y_emlrtRTEI = { 744,/* lineNo */
  17,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtRTEInfo c2_ab_emlrtRTEI = { 242,/* lineNo */
  13,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtRTEInfo c2_bb_emlrtRTEI = { 243,/* lineNo */
  91,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtRTEInfo c2_cb_emlrtRTEI = { 243,/* lineNo */
  13,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtRTEInfo c2_db_emlrtRTEI = { 731,/* lineNo */
  21,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtRTEInfo c2_eb_emlrtRTEI = { 396,/* lineNo */
  13,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtRTEInfo c2_fb_emlrtRTEI = { 402,/* lineNo */
  44,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtRTEInfo c2_gb_emlrtRTEI = { 138,/* lineNo */
  21,                                  /* colNo */
  "BufferChannel",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pName */
};

static emlrtRTEInfo c2_hb_emlrtRTEI = { 142,/* lineNo */
  25,                                  /* colNo */
  "BufferChannel",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pName */
};

static emlrtRTEInfo c2_ib_emlrtRTEI = { 152,/* lineNo */
  21,                                  /* colNo */
  "BufferChannel",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pName */
};

static emlrtRTEInfo c2_jb_emlrtRTEI = { 156,/* lineNo */
  25,                                  /* colNo */
  "BufferChannel",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pName */
};

static emlrtRTEInfo c2_kb_emlrtRTEI = { 205,/* lineNo */
  50,                                  /* colNo */
  "strcmp",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\strcmp.m"/* pName */
};

static emlrtRTEInfo c2_lb_emlrtRTEI = { 793,/* lineNo */
  38,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtRTEInfo c2_mb_emlrtRTEI = { 756,/* lineNo */
  13,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtRTEInfo c2_nb_emlrtRTEI = { 70,/* lineNo */
  17,                                  /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pName */
};

static emlrtRTEInfo c2_ob_emlrtRTEI = { 72,/* lineNo */
  17,                                  /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pName */
};

static emlrtRTEInfo c2_pb_emlrtRTEI = { 563,/* lineNo */
  102,                                 /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pName */
};

static emlrtRTEInfo c2_qb_emlrtRTEI = { 563,/* lineNo */
  13,                                  /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pName */
};

static emlrtRTEInfo c2_rb_emlrtRTEI = { 409,/* lineNo */
  13,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtRTEInfo c2_sb_emlrtRTEI = { 415,/* lineNo */
  44,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtRTEInfo c2_tb_emlrtRTEI = { 208,/* lineNo */
  17,                                  /* colNo */
  "Stream",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m"/* pName */
};

static emlrtRTEInfo c2_ub_emlrtRTEI = { 210,/* lineNo */
  17,                                  /* colNo */
  "Stream",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m"/* pName */
};

static emlrtRTEInfo c2_vb_emlrtRTEI = { 212,/* lineNo */
  17,                                  /* colNo */
  "Stream",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m"/* pName */
};

static emlrtRTEInfo c2_wb_emlrtRTEI = { 239,/* lineNo */
  13,                                  /* colNo */
  "OutputStream",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\OutputStream.m"/* pName */
};

static emlrtRTEInfo c2_xb_emlrtRTEI = { 225,/* lineNo */
  13,                                  /* colNo */
  "Modbus",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pName */
};

static emlrtRTEInfo c2_yb_emlrtRTEI = { 226,/* lineNo */
  13,                                  /* colNo */
  "Modbus",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pName */
};

static emlrtRTEInfo c2_ac_emlrtRTEI = { 310,/* lineNo */
  25,                                  /* colNo */
  "Modbus",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pName */
};

static emlrtRTEInfo c2_bc_emlrtRTEI = { 300,/* lineNo */
  13,                                  /* colNo */
  "BufferChannel",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pName */
};

static emlrtRTEInfo c2_cc_emlrtRTEI = { 125,/* lineNo */
  9,                                   /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo c2_dc_emlrtRTEI = { 128,/* lineNo */
  30,                                  /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo c2_ec_emlrtRTEI = { 548,/* lineNo */
  25,                                  /* colNo */
  "BufferChannel",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pName */
};

static emlrtRTEInfo c2_fc_emlrtRTEI = { 546,/* lineNo */
  25,                                  /* colNo */
  "BufferChannel",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pName */
};

static emlrtRTEInfo c2_gc_emlrtRTEI = { 542,/* lineNo */
  21,                                  /* colNo */
  "BufferChannel",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pName */
};

static emlrtRTEInfo c2_hc_emlrtRTEI = { 116,/* lineNo */
  1,                                   /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo c2_ic_emlrtRTEI = { 619,/* lineNo */
  21,                                  /* colNo */
  "BufferChannel",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pName */
};

static emlrtRTEInfo c2_jc_emlrtRTEI = { 612,/* lineNo */
  17,                                  /* colNo */
  "BufferChannel",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pName */
};

static emlrtRTEInfo c2_kc_emlrtRTEI = { 165,/* lineNo */
  17,                                  /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pName */
};

static emlrtRTEInfo c2_lc_emlrtRTEI = { 182,/* lineNo */
  14,                                  /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pName */
};

static emlrtRTEInfo c2_mc_emlrtRTEI = { 555,/* lineNo */
  13,                                  /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pName */
};

static emlrtRTEInfo c2_nc_emlrtRTEI = { 235,/* lineNo */
  83,                                  /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pName */
};

static emlrtRTEInfo c2_oc_emlrtRTEI = { 201,/* lineNo */
  25,                                  /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pName */
};

static emlrtRTEInfo c2_pc_emlrtRTEI = { 225,/* lineNo */
  52,                                  /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pName */
};

static emlrtRTEInfo c2_qc_emlrtRTEI = { 232,/* lineNo */
  17,                                  /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pName */
};

static emlrtRTEInfo c2_rc_emlrtRTEI = { 88,/* lineNo */
  43,                                  /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pName */
};

static emlrtRTEInfo c2_sc_emlrtRTEI = { 539,/* lineNo */
  91,                                  /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pName */
};

static emlrtRTEInfo c2_tc_emlrtRTEI = { 533,/* lineNo */
  91,                                  /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pName */
};

static emlrtRTEInfo c2_uc_emlrtRTEI = { 533,/* lineNo */
  21,                                  /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pName */
};

static emlrtRTEInfo c2_vc_emlrtRTEI = { 314,/* lineNo */
  21,                                  /* colNo */
  "Stream",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m"/* pName */
};

static emlrtRTEInfo c2_wc_emlrtRTEI = { 307,/* lineNo */
  17,                                  /* colNo */
  "Stream",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m"/* pName */
};

static emlrtRTEInfo c2_xc_emlrtRTEI = { 378,/* lineNo */
  41,                                  /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pName */
};

static emlrtRTEInfo c2_yc_emlrtRTEI = { 423,/* lineNo */
  31,                                  /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pName */
};

static emlrtRTEInfo c2_ad_emlrtRTEI = { 450,/* lineNo */
  17,                                  /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pName */
};

static emlrtRTEInfo c2_bd_emlrtRTEI = { 31,/* lineNo */
  1,                                   /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pName */
};

static emlrtRTEInfo c2_cd_emlrtRTEI = { 436,/* lineNo */
  17,                                  /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pName */
};

static emlrtRTEInfo c2_dd_emlrtRTEI = { 481,/* lineNo */
  17,                                  /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pName */
};

static emlrtRTEInfo c2_ed_emlrtRTEI = { 106,/* lineNo */
  1,                                   /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\cat.m"/* pName */
};

static emlrtRTEInfo c2_fd_emlrtRTEI = { 114,/* lineNo */
  9,                                   /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\cat.m"/* pName */
};

static emlrtRTEInfo c2_gd_emlrtRTEI = { 357,/* lineNo */
  21,                                  /* colNo */
  "BufferChannel",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pName */
};

static emlrtRTEInfo c2_hd_emlrtRTEI = { 307,/* lineNo */
  18,                                  /* colNo */
  "BufferChannel",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pName */
};

static emlrtRTEInfo c2_id_emlrtRTEI = { 85,/* lineNo */
  37,                                  /* colNo */
  "DataConverter",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\DataConverter.m"/* pName */
};

static emlrtRTEInfo c2_jd_emlrtRTEI = { 85,/* lineNo */
  13,                                  /* colNo */
  "DataConverter",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\DataConverter.m"/* pName */
};

static emlrtRTEInfo c2_kd_emlrtRTEI = { 86,/* lineNo */
  19,                                  /* colNo */
  "DataConverter",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\DataConverter.m"/* pName */
};

static emlrtRTEInfo c2_ld_emlrtRTEI = { 64,/* lineNo */
  13,                                  /* colNo */
  "DataConverter",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\DataConverter.m"/* pName */
};

static emlrtBCInfo c2_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  235,                                 /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "PacketBuilder",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\PacketBuilder.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_b_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  237,                                 /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "PacketBuilder",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\PacketBuilder.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_c_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  241,                                 /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "PacketBuilder",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\PacketBuilder.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_d_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  243,                                 /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "PacketBuilder",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\PacketBuilder.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo c2_md_emlrtRTEI = { 200,/* lineNo */
  22,                                  /* colNo */
  "OutputStream",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\OutputStream.m"/* pName */
};

static emlrtDCInfo c2_emlrtDCI = { 203,/* lineNo */
  34,                                  /* colNo */
  "OutputStream",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\OutputStream.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_e_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  203,                                 /* lineNo */
  34,                                  /* colNo */
  "",                                  /* aName */
  "OutputStream",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\OutputStream.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_b_emlrtDCI = { 234,/* lineNo */
  34,                                  /* colNo */
  "PacketBuilder",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\PacketBuilder.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c2_c_emlrtDCI = { 234,/* lineNo */
  34,                                  /* colNo */
  "PacketBuilder",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\PacketBuilder.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo c2_d_emlrtDCI = { 136,/* lineNo */
  13,                                  /* colNo */
  "PacketBuilder",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\PacketBuilder.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c2_e_emlrtDCI = { 136,/* lineNo */
  13,                                  /* colNo */
  "PacketBuilder",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\PacketBuilder.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo c2_f_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  216,                                 /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "PacketBuilder",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\PacketBuilder.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_g_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  4,                                   /* lineNo */
  13,                                  /* colNo */
  "moddata",                           /* aName */
  "MATLAB Function",                   /* fName */
  "#wwtp3:405",                        /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_h_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  5,                                   /* lineNo */
  14,                                  /* colNo */
  "moddata",                           /* aName */
  "MATLAB Function",                   /* fName */
  "#wwtp3:405",                        /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_i_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  6,                                   /* lineNo */
  14,                                  /* colNo */
  "moddata",                           /* aName */
  "MATLAB Function",                   /* fName */
  "#wwtp3:405",                        /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_f_emlrtDCI = { 57,/* lineNo */
  53,                                  /* colNo */
  "sprintf",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\strfun\\sprintf.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo c2_j_emlrtBCI = { 1,/* iFirst */
  1024,                                /* iLast */
  756,                                 /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_k_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  226,                                 /* lineNo */
  37,                                  /* colNo */
  "",                                  /* aName */
  "Modbus",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_l_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  226,                                 /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "Modbus",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_m_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1,                                   /* lineNo */
  1,                                   /* colNo */
  "",                                  /* aName */
  "AsyncIOTransportChannel",           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\transportlib\\+matlabshared\\+transportlib\\+internal\\+asyncIOTransportChan"
  "nel\\+coder\\AsyncIOTransportChannel.p",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_g_emlrtDCI = { 612,/* lineNo */
  44,                                  /* colNo */
  "BufferChannel",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m",                    /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_n_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  612,                                 /* lineNo */
  44,                                  /* colNo */
  "",                                  /* aName */
  "BufferChannel",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m",                    /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_h_emlrtDCI = { 612,/* lineNo */
  55,                                  /* colNo */
  "BufferChannel",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m",                    /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_o_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  612,                                 /* lineNo */
  55,                                  /* colNo */
  "",                                  /* aName */
  "BufferChannel",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m",                    /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_i_emlrtDCI = { 619,/* lineNo */
  50,                                  /* colNo */
  "BufferChannel",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m",                    /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_p_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  619,                                 /* lineNo */
  50,                                  /* colNo */
  "",                                  /* aName */
  "BufferChannel",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m",                    /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_j_emlrtDCI = { 619,/* lineNo */
  61,                                  /* colNo */
  "BufferChannel",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m",                    /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_q_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  619,                                 /* lineNo */
  61,                                  /* colNo */
  "",                                  /* aName */
  "BufferChannel",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m",                    /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_r_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  225,                                 /* lineNo */
  70,                                  /* colNo */
  "",                                  /* aName */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_k_emlrtDCI = { 307,/* lineNo */
  33,                                  /* colNo */
  "Stream",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_s_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  307,                                 /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "Stream",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_l_emlrtDCI = { 307,/* lineNo */
  44,                                  /* colNo */
  "Stream",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_t_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  307,                                 /* lineNo */
  44,                                  /* colNo */
  "",                                  /* aName */
  "Stream",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_m_emlrtDCI = { 314,/* lineNo */
  39,                                  /* colNo */
  "Stream",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_u_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  314,                                 /* lineNo */
  39,                                  /* colNo */
  "",                                  /* aName */
  "Stream",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_n_emlrtDCI = { 314,/* lineNo */
  50,                                  /* colNo */
  "Stream",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_v_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  314,                                 /* lineNo */
  50,                                  /* colNo */
  "",                                  /* aName */
  "Stream",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo c2_nd_emlrtRTEI = { 433,/* lineNo */
  31,                                  /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pName */
};

static emlrtRTEInfo c2_od_emlrtRTEI = { 448,/* lineNo */
  31,                                  /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pName */
};

static emlrtBCInfo c2_w_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  450,                                 /* lineNo */
  34,                                  /* colNo */
  "",                                  /* aName */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_o_emlrtDCI = { 31,/* lineNo */
  14,                                  /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo c2_x_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  436,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_y_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  481,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_p_emlrtDCI = { 423,/* lineNo */
  31,                                  /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c2_q_emlrtDCI = { 423,/* lineNo */
  31,                                  /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo c2_ab_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  423,                                 /* lineNo */
  31,                                  /* colNo */
  "",                                  /* aName */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_bb_emlrtBCI = { 1,/* iFirst */
  80,                                  /* iLast */
  435,                                 /* lineNo */
  61,                                  /* colNo */
  "",                                  /* aName */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_r_emlrtDCI = { 31,/* lineNo */
  1,                                   /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo c2_cb_emlrtBCI = { 1,/* iFirst */
  80,                                  /* iLast */
  482,                                 /* lineNo */
  54,                                  /* colNo */
  "",                                  /* aName */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_db_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  450,                                 /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_eb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  436,                                 /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_fb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  481,                                 /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_gb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  88,                                  /* lineNo */
  62,                                  /* colNo */
  "",                                  /* aName */
  "DataConverter",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\DataConverter.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_s_emlrtDCI = { 86,/* lineNo */
  27,                                  /* colNo */
  "DataConverter",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\DataConverter.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_hb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  88,                                  /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "DataConverter",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\DataConverter.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRSInfo c2_gl_emlrtRSI = { 165,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c2_hl_emlrtRSI = { 114,/* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\cat.m"/* pathName */
};

static emlrtRSInfo c2_il_emlrtRSI = { 106,/* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\cat.m"/* pathName */
};

static emlrtRSInfo c2_jl_emlrtRSI = { 481,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c2_kl_emlrtRSI = { 450,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c2_ll_emlrtRSI = { 314,/* lineNo */
  "Stream",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m"/* pathName */
};

static emlrtRSInfo c2_ml_emlrtRSI = { 619,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c2_nl_emlrtRSI = { 72,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c2_ol_emlrtRSI = { 423,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c2_pl_emlrtRSI = { 66,/* lineNo */
  "eml_switch_helper",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\eml\\eml_switch_helper.m"/* pathName */
};

static emlrtRSInfo c2_ql_emlrtRSI = { 58,/* lineNo */
  "sprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\strfun\\sprintf.m"/* pathName */
};

static char_T c2_cv[10] = { 'b', 'i', 'g', '-', 'e', 'n', 'd', 'i', 'a', 'n' };

static char_T c2_cv1[13] = { 'l', 'i', 't', 't', 'l', 'e', '-', 'e', 'n', 'd',
  'i', 'a', 'n' };

static char_T c2_cv2[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
  'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't', 'r',
  'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'F', 'i',
  'n', 'i', 't', 'e' };

static char_T c2_cv3[35] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'C', 'h',
  'a', 'n', 'n', 'e', 'l', ':', 'u', 'n', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
  'E', 'x', 'c', 'e', 'p', 't', 'i', 'o', 'n' };

static char_T c2_cv4[39] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'S', 't',
  'r', 'e', 'a', 'm', ':', 'c', 'a', 'n', 'n', 'o', 't', 'A', 'd', 'd', 'F', 'i',
  'l', 't', 'e', 'r', 'W', 'h', 'i', 'l', 'e', 'O', 'p', 'e', 'n' };

static char_T c2_cv5[46] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'O', 'u',
  't', 'p', 'u', 't', 'S', 't', 'r', 'e', 'a', 'm', ':', 'c', 'o', 'u', 'l', 'd',
  'N', 'o', 't', 'C', 'o', 'n', 'v', 'e', 'r', 't', 'O', 'u', 't', 'p', 'u', 't',
  'D', 'a', 't', 'a' };

static char_T c2_cv6[44] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'I', 'n',
  'p', 'u', 't', 'S', 't', 'r', 'e', 'a', 'm', ':', 'c', 'o', 'u', 'l', 'd', 'N',
  'o', 't', 'C', 'o', 'n', 'v', 'e', 'r', 't', 'I', 'n', 'p', 'u', 't', 'D', 'a',
  't', 'a' };

static char_T c2_cv7[37] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'C', 'h',
  'a', 'n', 'n', 'e', 'l', ':', 'c', 'o', 'd', 'e', 'r', 'S', 'y', 'n', 'c', 'h',
  'r', 'o', 'n', 'o', 'u', 's', 'E', 'r', 'r', 'o', 'r' };

static char_T c2_cv8[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'b', 'u', 'i', 'l',
  't', 'i', 'n', 's', ':', 'A', 's', 's', 'e', 'r', 't', 'i', 'o', 'n', 'F', 'a',
  'i', 'l', 'e', 'd' };

static char_T c2_cv9[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm', 'a',
  'x', 's', 'i', 'z', 'e' };

static char_T c2_cv10[128] = { '\x00', '\x01', '\x02', '\x03', '\x04', '\x05',
  '\x06', '\a', '\b', '\t', '\n', '\v', '\f', '\r', '\x0e', '\x0f', '\x10',
  '\x11', '\x12', '\x13', '\x14', '\x15', '\x16', '\x17', '\x18', '\x19', '\x1a',
  '\x1b', '\x1c', '\x1d', '\x1e', '\x1f', ' ', '!', '\"', '#', '$', '%', '&',
  '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5',
  '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'a', 'b', 'c', 'd', 'e',
  'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u',
  'v', 'w', 'x', 'y', 'z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd',
  'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
  'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', '\x7f' };

static char_T c2_cv11[31] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
  'b', 'o', 'x', ':', 'u', 'n', 's', 'u', 'p', 'p', 'o', 'r', 't', 'e', 'd', 'S',
  't', 'r', 'i', 'n', 'g' };

static char_T c2_cv12[9] = { 'c', 'o', 'm', 'p', 'l', 'e', 't', 'e', 'd' };

static char_T c2_cv13[29] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'b', 'i', 't',
  'A', 'n', 'd', 'X', 'o', 'r', 'O', 'r', ':', 'o', 'u', 't', 'O', 'f', 'R', 'a',
  'n', 'g', 'e' };

static char_T c2_cv14[33] = { 'C', 'o', 'd', 'e', 'r', ':', 'F', 'E', ':', 'P',
  'o', 't', 'e', 'n', 't', 'i', 'a', 'l', 'M', 'a', 't', 'r', 'i', 'x', 'M', 'a',
  't', 'r', 'i', 'x', '_', 'M', 'V' };

static char_T c2_cv15[47] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'I', 'n',
  'p', 'u', 't', 'S', 't', 'r', 'e', 'a', 'm', ':', 'c', 'o', 'd', 'e', 'r', 'E',
  'x', 'a', 'm', 'p', 'l', 'e', 'D', 'a', 't', 'a', 'S', 'i', 'z', 'e', 'C', 'h',
  'a', 'n', 'g', 'e', 'd' };

static char_T c2_cv16[41] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'I', 'n',
  'p', 'u', 't', 'S', 't', 'r', 'e', 'a', 'm', ':', 'i', 'n', 'v', 'a', 'l', 'i',
  'd', 'C', 'o', 'u', 'n', 't', 'R', 'e', 'q', 'u', 'e', 's', 't', 'e', 'd' };

static char_T c2_cv17[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
  'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I', 'n', 'p',
  'u', 't' };

/* Function Declarations */
static void initialize_c2_wwtp3(SFc2_wwtp3InstanceStruct *chartInstance);
static void initialize_params_c2_wwtp3(SFc2_wwtp3InstanceStruct *chartInstance);
static void mdl_start_c2_wwtp3(SFc2_wwtp3InstanceStruct *chartInstance);
static void mdl_terminate_c2_wwtp3(SFc2_wwtp3InstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c2_wwtp3(SFc2_wwtp3InstanceStruct
  *chartInstance);
static void mdl_cleanup_runtime_resources_c2_wwtp3(SFc2_wwtp3InstanceStruct
  *chartInstance);
static void enable_c2_wwtp3(SFc2_wwtp3InstanceStruct *chartInstance);
static void disable_c2_wwtp3(SFc2_wwtp3InstanceStruct *chartInstance);
static void sf_gateway_c2_wwtp3(SFc2_wwtp3InstanceStruct *chartInstance);
static void ext_mode_exec_c2_wwtp3(SFc2_wwtp3InstanceStruct *chartInstance);
static void c2_update_jit_animation_c2_wwtp3(SFc2_wwtp3InstanceStruct
  *chartInstance);
static void c2_do_animation_call_c2_wwtp3(SFc2_wwtp3InstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c2_wwtp3(SFc2_wwtp3InstanceStruct
  *chartInstance);
static void set_sim_state_c2_wwtp3(SFc2_wwtp3InstanceStruct *chartInstance,
  const mxArray *c2_st);
static void initSimStructsc2_wwtp3(SFc2_wwtp3InstanceStruct *chartInstance);
static void initSubchartIOPointersc2_wwtp3(SFc2_wwtp3InstanceStruct
  *chartInstance);
static boolean_T c2_vectorAny(SFc2_wwtp3InstanceStruct *chartInstance, boolean_T
  c2_x_data[], int32_T c2_x_size[2]);
static c2_icomm_interface_modbus_tcpip_Modbus *c2_modbus
  (SFc2_wwtp3InstanceStruct *chartInstance, const emlrtStack *c2_sp,
   c2_icomm_interface_modbus_tcpip_Modbus *c2_iobj_0);
static void c2_TCPClient_initializeChannel(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_matlabshared_network_internal_TCPClient *c2_obj,
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_iobj_0,
  c2_matlabshared_asyncio_internal_Channel *c2_iobj_1);
static void c2_sprintf(SFc2_wwtp3InstanceStruct *chartInstance, const emlrtStack
  *c2_sp, uint32_T c2_varargin_1, c2_emxArray_char_T *c2_str);
static void c2_API_dispatchInternalError(SFc2_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, char_T c2_errorID[1024], char_T c2_errorText[1024]);
static void c2_API_trimString(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, char_T c2_in[1024], char_T c2_out_data[], int32_T
  c2_out_size[2]);
static boolean_T c2_strcmp(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, char_T c2_a_data[], int32_T c2_a_size[2]);
static boolean_T c2_b_strcmp(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, char_T c2_a_data[], int32_T c2_a_size[2]);
static boolean_T c2_c_strcmp(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, char_T c2_a_data[], int32_T c2_a_size[2]);
static boolean_T c2_d_strcmp(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, char_T c2_a_data[], int32_T c2_a_size[2]);
static void c2_API_channelErrorIfFailed(SFc2_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, CoderChannel c2_chImpl, int32_T c2_success);
static c2_matlabshared_asyncio_internal_InputStream *c2_InputStream_InputStream
  (SFc2_wwtp3InstanceStruct *chartInstance, const emlrtStack *c2_sp,
   c2_matlabshared_asyncio_internal_InputStream *c2_obj, CoderChannel
   c2_channelImpl);
static void c2_InputStream_clearPartialPacket(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_matlabshared_asyncio_internal_InputStream *c2_obj);
static c2_matlabshared_asyncio_internal_OutputStream
  *c2_OutputStream_OutputStream(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_matlabshared_asyncio_internal_OutputStream *c2_obj,
  CoderChannel c2_channelImpl);
static void c2_TCPClient_connect(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_matlabshared_network_internal_TCPClient *c2_obj);
static boolean_T c2_e_strcmp(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_char_T *c2_b_a, char_T c2_b[13]);
static void c2_DataConverter_word2bytes(SFc2_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_icomm_interface_coder_modbus_DataConverter *c2_obj,
  uint16_T c2_wordval, uint8_T c2_bytes[2]);
static void c2_TCPClient_validateConnected(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_matlabshared_network_internal_TCPClient *c2_obj);
static void c2_b_API_channelErrorIfFailed(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp, CoderChannel c2_chImpl);
static void c2_Stream_wait(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_matlabshared_asyncio_internal_OutputStream *c2_obj,
  char_T c2_status_data[], int32_T c2_status_size[2]);
static emlrtTimespec c2_tic(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp);
static emlrtTimespec c2_getTime(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp);
static real_T c2_toc(SFc2_wwtp3InstanceStruct *chartInstance, const emlrtStack
                     *c2_sp, emlrtTimespec c2_tstart);
static boolean_T c2_f_strcmp(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, char_T c2_a_data[], int32_T c2_a_size[2]);
static boolean_T c2_g_strcmp(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, char_T c2_a_data[], int32_T c2_a_size[2]);
static void c2_OutputStream_drain(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_matlabshared_asyncio_internal_OutputStream *c2_obj);
static boolean_T c2_h_strcmp(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, char_T c2_a_data[], int32_T c2_a_size[2]);
static void c2_Modbus_getReadResponse(SFc2_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_icomm_interface_modbus_tcpip_Modbus *c2_obj,
  uint8_T c2_reqPacketID, real_T c2_data_data[], int32_T c2_data_size[2],
  boolean_T *c2_retry);
static real_T c2_TCPClient_get_NumBytesAvailable(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_matlabshared_network_internal_TCPClient *c2_obj);
static real_T c2_BufferChannel_get_NumElementsAvailable(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_matlabshared_asyncio_buffer_internal_BufferChannel *c2_obj);
static boolean_T c2_AsyncIOTransportChannel_get_StructData
  (SFc2_wwtp3InstanceStruct *chartInstance, const emlrtStack *c2_sp,
   c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_obj);
static void c2_AsyncIOTransportChannel_readRaw(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_obj,
  real_T c2_numBytes, c2_emxArray_uint8_T *c2_data);
static void c2_AsyncIOTransportChannel_getUnreadData(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_obj,
  real_T c2_numToRead, c2_emxArray_uint8_T *c2_data);
static void c2_BufferChannel_readRaw(SFc2_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_matlabshared_asyncio_buffer_internal_BufferChannel
  *c2_obj, real_T c2_numBytesToRead, c2_emxArray_uint8_T *c2_data);
static void c2_BufferChannel_extractFromPacket(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_matlabshared_asyncio_buffer_internal_BufferChannel *c2_obj, real_T
  c2_startIndex, real_T c2_endIndex, c2_emxArray_uint8_T *c2_result);
static void c2_indexShapeCheck(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, int32_T c2_matrixSize[2], int32_T c2_indexSize[2]);
static void c2_InputStream_read(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_matlabshared_asyncio_internal_InputStream *c2_obj,
  real_T c2_countRequested, c2_emxArray_uint8_T *c2_data);
static void c2_InputStream_readPartialPacket(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_matlabshared_asyncio_internal_InputStream *c2_obj, real_T c2_countRequested,
  c2_emxArray_uint8_T *c2_dataRead, real_T *c2_countRead);
static void c2_Stream_extractFromPacket(SFc2_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_emxArray_uint8_T *c2_packet, real_T c2_startIndex,
  real_T c2_endIndex, c2_emxArray_uint8_T *c2_result);
static void c2_b_Stream_extractFromPacket(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_uint8_T *c2_packet,
  real_T c2_endIndex, c2_emxArray_uint8_T *c2_result);
static void c2_b_Stream_wait(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_matlabshared_asyncio_internal_InputStream *c2_obj,
  char_T c2_status_data[], int32_T c2_status_size[2]);
static void c2_InputStream_readPackets(SFc2_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_matlabshared_asyncio_internal_InputStream *c2_obj,
  real_T c2_countRequested, c2_emxArray_cell_wrap_31 *c2_packets, real_T
  *c2_countRead);
static void c2_cat(SFc2_wwtp3InstanceStruct *chartInstance, const emlrtStack
                   *c2_sp, c2_emxArray_uint8_T *c2_varargin_1,
                   c2_emxArray_uint8_T *c2_varargin_2, c2_emxArray_uint8_T *c2_y);
static void c2_check_forloop_overflow_error(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp);
static void c2_b_InputStream_read(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_matlabshared_asyncio_internal_InputStream *c2_obj,
  real_T c2_countRequested, c2_emxArray_uint8_T *c2_data, real_T *c2_countRead,
  char_T c2_err_data[], int32_T c2_err_size[2]);
static void c2_BufferChannel_write(SFc2_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_matlabshared_asyncio_buffer_internal_BufferChannel
  *c2_obj, c2_emxArray_uint8_T *c2_data);
static boolean_T c2_i_strcmp(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_char_T *c2_b);
static void c2_b_indexShapeCheck(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, int32_T c2_matrixSize[2]);
static boolean_T c2_all_in_integer_range(SFc2_wwtp3InstanceStruct *chartInstance,
  real_T c2_x);
static void c2_Modbus_flushIO(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_icomm_interface_modbus_tcpip_Modbus *c2_obj);
static void c2_BufferChannel_flush(SFc2_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_matlabshared_asyncio_buffer_internal_BufferChannel
  *c2_obj);
static boolean_T c2_Modbus_isReadFunction(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp, real_T c2_fcnCode);
static void c2_DataConverter_convertReadValues(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_icomm_interface_coder_modbus_DataConverter *c2_obj, real_T c2_bytes_data[],
  int32_T c2_bytes_size[2], real_T c2_out_data[], int32_T c2_out_size[2]);
static void c2_handle_matlabCodegenDestructor(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_icomm_interface_modbus_tcpip_Modbus *c2_obj);
static void c2_b_handle_matlabCodegenDestructor(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_matlabshared_network_internal_TCPClient *c2_obj);
static void c2_c_handle_matlabCodegenDestructor(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_matlabshared_asyncio_internal_Channel *c2_obj);
static void c2_warning(SFc2_wwtp3InstanceStruct *chartInstance, const emlrtStack
  *c2_sp);
static void c2_d_handle_matlabCodegenDestructor(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_obj);
static void c2_e_handle_matlabCodegenDestructor(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_matlabshared_asyncio_buffer_internal_BufferChannel *c2_obj);
static void c2_Channel_close(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_matlabshared_asyncio_buffer_internal_BufferChannel
  *c2_obj);
static void c2_f_handle_matlabCodegenDestructor(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_matlabshared_asyncio_internal_InputStream *c2_obj);
static void c2_g_handle_matlabCodegenDestructor(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_matlabshared_asyncio_internal_OutputStream *c2_obj);
static real_T c2_emlrt_marshallIn(SFc2_wwtp3InstanceStruct *chartInstance, const
  mxArray *c2_a__output_of_length_, const char_T *c2_identifier);
static real_T c2_b_emlrt_marshallIn(SFc2_wwtp3InstanceStruct *chartInstance,
  const mxArray *c2_b_u, const emlrtMsgIdentifier *c2_parentId);
static void c2_c_emlrt_marshallIn(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, const mxArray *c2_tmpStr, const char_T *c2_identifier,
  c2_emxArray_char_T *c2_y);
static void c2_d_emlrt_marshallIn(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, const mxArray *c2_b_u, const emlrtMsgIdentifier
  *c2_parentId, c2_emxArray_char_T *c2_y);
static void c2_e_emlrt_marshallIn(SFc2_wwtp3InstanceStruct *chartInstance, const
  mxArray *c2_a__output_of_matlabroot_, const char_T *c2_identifier, char_T
  c2_y_data[], int32_T c2_y_size[2]);
static void c2_f_emlrt_marshallIn(SFc2_wwtp3InstanceStruct *chartInstance, const
  mxArray *c2_b_u, const emlrtMsgIdentifier *c2_parentId, char_T c2_y_data[],
  int32_T c2_y_size[2]);
static boolean_T c2_g_emlrt_marshallIn(SFc2_wwtp3InstanceStruct *chartInstance,
  const mxArray *c2_a__output_of_coder_internal_ifWhileCondExtrinsic_, const
  char_T *c2_identifier);
static boolean_T c2_h_emlrt_marshallIn(SFc2_wwtp3InstanceStruct *chartInstance,
  const mxArray *c2_b_u, const emlrtMsgIdentifier *c2_parentId);
static uint8_T c2_i_emlrt_marshallIn(SFc2_wwtp3InstanceStruct *chartInstance,
  const mxArray *c2_b_is_active_c2_wwtp3, const char_T *c2_identifier);
static uint8_T c2_j_emlrt_marshallIn(SFc2_wwtp3InstanceStruct *chartInstance,
  const mxArray *c2_b_u, const emlrtMsgIdentifier *c2_parentId);
static void c2_slStringInitializeDynamicBuffers(SFc2_wwtp3InstanceStruct
  *chartInstance);
static void c2_chart_data_browse_helper(SFc2_wwtp3InstanceStruct *chartInstance,
  int32_T c2_ssIdNumber, const mxArray **c2_mxData, uint8_T *c2_isValueTooBig);
static const mxArray *c2_feval(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, const mxArray *c2_input0, const mxArray *c2_input1, const
  mxArray *c2_input2);
static const mxArray *c2_length(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, const mxArray *c2_input0);
static const mxArray *c2_ver(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, const mxArray *c2_input0);
static const mxArray *c2_getfield(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, const mxArray *c2_input0, const mxArray *c2_input1);
static const mxArray *c2_matlabroot(SFc2_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c2_sp);
static const mxArray *c2_j_strcmp(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, const mxArray *c2_input0, const mxArray *c2_input1);
static const mxArray *c2_coder_internal_ifWhileCondExtrinsic
  (SFc2_wwtp3InstanceStruct *chartInstance, const emlrtStack *c2_sp, const
   mxArray *c2_input0);
static const mxArray *c2_exist(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, const mxArray *c2_input0, const mxArray *c2_input1);
static const mxArray *c2_b_coder_internal_ifWhileCondExtrinsic
  (SFc2_wwtp3InstanceStruct *chartInstance, const emlrtStack *c2_sp, const
   mxArray *c2_input0);
static const mxArray *c2_b_exist(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, const mxArray *c2_input0, const mxArray *c2_input1);
static const mxArray *c2_c_coder_internal_ifWhileCondExtrinsic
  (SFc2_wwtp3InstanceStruct *chartInstance, const emlrtStack *c2_sp, const
   mxArray *c2_input0);
static const mxArray *c2_b_ver(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, const mxArray *c2_input0);
static const mxArray *c2_b_getfield(SFc2_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, const mxArray *c2_input0, const mxArray *c2_input1);
static const mxArray *c2_b_matlabroot(SFc2_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c2_sp);
static const mxArray *c2_k_strcmp(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, const mxArray *c2_input0, const mxArray *c2_input1);
static const mxArray *c2_d_coder_internal_ifWhileCondExtrinsic
  (SFc2_wwtp3InstanceStruct *chartInstance, const emlrtStack *c2_sp, const
   mxArray *c2_input0);
static const mxArray *c2_c_exist(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, const mxArray *c2_input0, const mxArray *c2_input1);
static const mxArray *c2_e_coder_internal_ifWhileCondExtrinsic
  (SFc2_wwtp3InstanceStruct *chartInstance, const emlrtStack *c2_sp, const
   mxArray *c2_input0);
static const mxArray *c2_d_exist(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, const mxArray *c2_input0, const mxArray *c2_input1);
static const mxArray *c2_f_coder_internal_ifWhileCondExtrinsic
  (SFc2_wwtp3InstanceStruct *chartInstance, const emlrtStack *c2_sp, const
   mxArray *c2_input0);
static const mxArray *c2_matlab_internal_language_TimerSuspender
  (SFc2_wwtp3InstanceStruct *chartInstance, const emlrtStack *c2_sp);
static void c2_b_feval(SFc2_wwtp3InstanceStruct *chartInstance, const emlrtStack
  *c2_sp, const mxArray *c2_input0, const mxArray *c2_input1);
static const mxArray *c2_c_feval(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, const mxArray *c2_input0, const mxArray *c2_input1);
static void c2_d_feval(SFc2_wwtp3InstanceStruct *chartInstance, const emlrtStack
  *c2_sp, const mxArray *c2_input0, const mxArray *c2_input1);
static void c2_emxEnsureCapacity_uint8_T(SFc2_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_emxArray_uint8_T *c2_emxArray, int32_T c2_oldNumel,
  const emlrtRTEInfo *c2_srcLocation);
static void c2_emxEnsureCapacity_char_T(SFc2_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_emxArray_char_T *c2_emxArray, int32_T c2_oldNumel,
  const emlrtRTEInfo *c2_srcLocation);
static void c2_emxFree_uint8_T(SFc2_wwtp3InstanceStruct *chartInstance,
  c2_emxArray_uint8_T **c2_pEmxArray);
static void c2_emxFreeStruct_cell_wrap_31(SFc2_wwtp3InstanceStruct
  *chartInstance, c2_cell_wrap_31 *c2_pStruct);
static void c2_emxTrim_cell_wrap_31_1x1(SFc2_wwtp3InstanceStruct *chartInstance,
  c2_cell_wrap_31 c2_data[1], int32_T c2_fromIndex, int32_T c2_toIndex);
static void c2_emxInitStruct_cell_wrap_31(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_cell_wrap_31 *c2_pStruct, const
  emlrtRTEInfo *c2_srcLocation);
static void c2_emxInit_uint8_T(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_uint8_T **c2_pEmxArray, int32_T
  c2_numDimensions, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxExpand_cell_wrap_31_1x1(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_cell_wrap_31 c2_data[1], int32_T
  c2_fromIndex, int32_T c2_toIndex, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxEnsureCapacity_cell_wrap_31(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_cell_wrap_31 c2_data[1], int32_T
  c2_size[2], int32_T c2_oldNumel, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxCopyStruct_cell_wrap_31(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_cell_wrap_31 *c2_dst, const
  c2_cell_wrap_31 *c2_src, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxCopy_uint8_T(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_uint8_T **c2_dst, c2_emxArray_uint8_T * const
  *c2_src, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxTrim_cell_wrap_31_1(SFc2_wwtp3InstanceStruct *chartInstance,
  c2_cell_wrap_31 c2_data[1], int32_T c2_fromIndex, int32_T c2_toIndex);
static void c2_emxExpand_cell_wrap_31_1(SFc2_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_cell_wrap_31 c2_data[1], int32_T c2_fromIndex,
  int32_T c2_toIndex, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxEnsureCapacity_cell_wrap_311(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_cell_wrap_31 c2_data[1], int32_T
  c2_size[1], int32_T c2_oldNumel, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxInitStruct_icomm_interface_m(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_icomm_interface_modbus_tcpip_Modbus *c2_pStruct, const emlrtRTEInfo
  *c2_srcLocation);
static void c2_emxInitStruct_icomm_interface_c(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_icomm_interface_coder_modbus_DataConverter *c2_pStruct, const emlrtRTEInfo *
  c2_srcLocation);
static void c2_emxInit_char_T(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_char_T **c2_pEmxArray, int32_T c2_numDimensions,
  const emlrtRTEInfo *c2_srcLocation);
static void c2_emxInitStruct_matlabshared_netw(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_matlabshared_network_internal_TCPClient *c2_pStruct, const emlrtRTEInfo
  *c2_srcLocation);
static void c2_emxInitStruct_matlabshared_tran(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_pStruct,
  const emlrtRTEInfo *c2_srcLocation);
static void c2_emxInitStruct_matlabshared_asyn(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_matlabshared_asyncio_buffer_internal_BufferChannel *c2_pStruct, const
  emlrtRTEInfo *c2_srcLocation);
static void c2_b_emxInitStruct_matlabshared_asyn(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_matlabshared_asyncio_internal_InputStream *c2_pStruct, const emlrtRTEInfo
  *c2_srcLocation);
static void c2_c_emxInitStruct_matlabshared_asyn(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_matlabshared_asyncio_internal_Channel *c2_pStruct, const emlrtRTEInfo
  *c2_srcLocation);
static void c2_emxInitStruct_s_n2xUWXvqAPN0Osm(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_s_n2xUWXvqAPN0OsmrtE3c5D
  *c2_pStruct, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxInitStruct_cell_33(SFc2_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_cell_33 *c2_pStruct, const emlrtRTEInfo
  *c2_srcLocation);
static void c2_emxInit_cell_wrap_31_1x1(SFc2_wwtp3InstanceStruct *chartInstance,
  c2_emxArray_cell_wrap_31_1x1 *c2_pEmxArray);
static void c2_emxFree_cell_wrap_31_1x1(SFc2_wwtp3InstanceStruct *chartInstance,
  c2_emxArray_cell_wrap_31_1x1 *c2_pEmxArray);
static void c2_emxInit_cell_wrap_31_1(SFc2_wwtp3InstanceStruct *chartInstance,
  c2_emxArray_cell_wrap_31_1 *c2_pEmxArray);
static void c2_emxFree_cell_wrap_31_1(SFc2_wwtp3InstanceStruct *chartInstance,
  c2_emxArray_cell_wrap_31_1 *c2_pEmxArray);
static void c2_emxFree_char_T(SFc2_wwtp3InstanceStruct *chartInstance,
  c2_emxArray_char_T **c2_pEmxArray);
static void c2_emxFreeStruct_icomm_interface_c(SFc2_wwtp3InstanceStruct
  *chartInstance, c2_icomm_interface_coder_modbus_DataConverter *c2_pStruct);
static void c2_emxFreeStruct_icomm_interface_m(SFc2_wwtp3InstanceStruct
  *chartInstance, c2_icomm_interface_modbus_tcpip_Modbus *c2_pStruct);
static void c2_emxFreeStruct_matlabshared_netw(SFc2_wwtp3InstanceStruct
  *chartInstance, c2_matlabshared_network_internal_TCPClient *c2_pStruct);
static void c2_emxFreeStruct_matlabshared_asyn(SFc2_wwtp3InstanceStruct
  *chartInstance, c2_matlabshared_asyncio_internal_InputStream *c2_pStruct);
static void c2_b_emxFreeStruct_matlabshared_asyn(SFc2_wwtp3InstanceStruct
  *chartInstance, c2_matlabshared_asyncio_buffer_internal_BufferChannel
  *c2_pStruct);
static void c2_emxFreeStruct_matlabshared_tran(SFc2_wwtp3InstanceStruct
  *chartInstance,
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_pStruct);
static void c2_c_emxFreeStruct_matlabshared_asyn(SFc2_wwtp3InstanceStruct
  *chartInstance, c2_matlabshared_asyncio_internal_Channel *c2_pStruct);
static void c2_emxFreeStruct_s_n2xUWXvqAPN0Osm(SFc2_wwtp3InstanceStruct
  *chartInstance, c2_s_n2xUWXvqAPN0OsmrtE3c5D *c2_pStruct);
static void c2_emxFreeStruct_cell_33(SFc2_wwtp3InstanceStruct *chartInstance,
  c2_cell_33 *c2_pStruct);
static void c2_emxInitStruct_s_puOqsSoDdBk28aK(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_s_puOqsSoDdBk28aK0dkajGG
  *c2_pStruct, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxInitStruct_cell_11(SFc2_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_cell_11 *c2_pStruct, const emlrtRTEInfo
  *c2_srcLocation);
static void c2_emxFreeStruct_s_puOqsSoDdBk28aK(SFc2_wwtp3InstanceStruct
  *chartInstance, c2_s_puOqsSoDdBk28aK0dkajGG *c2_pStruct);
static void c2_emxFreeStruct_cell_11(SFc2_wwtp3InstanceStruct *chartInstance,
  c2_cell_11 *c2_pStruct);
static void c2_emxInitStruct_s_IiVysWyVj7T2O9P(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_s_IiVysWyVj7T2O9POL8hpXH
  *c2_pStruct, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxInitStruct_cell_17(SFc2_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_cell_17 *c2_pStruct, const emlrtRTEInfo
  *c2_srcLocation);
static void c2_emxFreeStruct_s_IiVysWyVj7T2O9P(SFc2_wwtp3InstanceStruct
  *chartInstance, c2_s_IiVysWyVj7T2O9POL8hpXH *c2_pStruct);
static void c2_emxFreeStruct_cell_17(SFc2_wwtp3InstanceStruct *chartInstance,
  c2_cell_17 *c2_pStruct);
static void c2_emxInitMatrix_cell_wrap_37(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_cell_wrap_37 c2_pMatrix[2], const
  emlrtRTEInfo *c2_srcLocation);
static void c2_emxInitStruct_cell_wrap_37(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_cell_wrap_37 *c2_pStruct, const
  emlrtRTEInfo *c2_srcLocation);
static void c2_emxFreeMatrix_cell_wrap_37(SFc2_wwtp3InstanceStruct
  *chartInstance, c2_cell_wrap_37 c2_pMatrix[2]);
static void c2_emxFreeStruct_cell_wrap_37(SFc2_wwtp3InstanceStruct
  *chartInstance, c2_cell_wrap_37 *c2_pStruct);
static void c2_emxInit_cell_wrap_31(SFc2_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_emxArray_cell_wrap_31 **c2_pEmxArray, int32_T
  c2_numDimensions, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxFree_cell_wrap_31(SFc2_wwtp3InstanceStruct *chartInstance,
  c2_emxArray_cell_wrap_31 **c2_pEmxArray);
static void c2_emxTrim_cell_wrap_31(SFc2_wwtp3InstanceStruct *chartInstance,
  c2_emxArray_cell_wrap_31 *c2_emxArray, int32_T c2_fromIndex, int32_T
  c2_toIndex);
static void c2_emxExpand_cell_wrap_31(SFc2_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_emxArray_cell_wrap_31 *c2_emxArray, int32_T
  c2_fromIndex, int32_T c2_toIndex, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxEnsureCapacity_cell_wrap_312(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_cell_wrap_31 *c2_emxArray,
  int32_T c2_oldNumel, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxEnsureCapacity_boolean_T(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_boolean_T *c2_emxArray,
  int32_T c2_oldNumel, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxInit_boolean_T(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_boolean_T **c2_pEmxArray, int32_T
  c2_numDimensions, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxFree_boolean_T(SFc2_wwtp3InstanceStruct *chartInstance,
  c2_emxArray_boolean_T **c2_pEmxArray);
static void c2_emxTrim_cell_wrap_37_1x1(SFc2_wwtp3InstanceStruct *chartInstance,
  c2_cell_wrap_37 c2_data[1], int32_T c2_fromIndex, int32_T c2_toIndex);
static void c2_emxExpand_cell_wrap_37_1x1(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_cell_wrap_37 c2_data[1], int32_T
  c2_fromIndex, int32_T c2_toIndex, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxEnsureCapacity_cell_wrap_37(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_cell_wrap_37 c2_data[1], int32_T
  c2_size[2], int32_T c2_oldNumel, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxCopyStruct_cell_wrap_37(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_cell_wrap_37 *c2_dst, const
  c2_cell_wrap_37 *c2_src, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxTrim_cell_wrap_37_1(SFc2_wwtp3InstanceStruct *chartInstance,
  c2_cell_wrap_37 c2_data[1], int32_T c2_fromIndex, int32_T c2_toIndex);
static void c2_emxExpand_cell_wrap_37_1(SFc2_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_cell_wrap_37 c2_data[1], int32_T c2_fromIndex,
  int32_T c2_toIndex, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxEnsureCapacity_cell_wrap_371(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_cell_wrap_37 c2_data[1], int32_T
  c2_size[1], int32_T c2_oldNumel, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxInit_cell_wrap_37_1x1(SFc2_wwtp3InstanceStruct *chartInstance,
  c2_emxArray_cell_wrap_37_1x1 *c2_pEmxArray);
static void c2_emxFree_cell_wrap_37_1x1(SFc2_wwtp3InstanceStruct *chartInstance,
  c2_emxArray_cell_wrap_37_1x1 *c2_pEmxArray);
static void c2_emxInit_cell_wrap_37_1(SFc2_wwtp3InstanceStruct *chartInstance,
  c2_emxArray_cell_wrap_37_1 *c2_pEmxArray);
static void c2_emxFree_cell_wrap_37_1(SFc2_wwtp3InstanceStruct *chartInstance,
  c2_emxArray_cell_wrap_37_1 *c2_pEmxArray);
static void init_dsm_address_info(SFc2_wwtp3InstanceStruct *chartInstance);
static void init_simulink_io_address(SFc2_wwtp3InstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c2_wwtp3(SFc2_wwtp3InstanceStruct *chartInstance)
{
  emlrtStack c2_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c2_st.tls = chartInstance->c2_fEmlrtCtx;
  emlrtLicenseCheckR2022a(&c2_st, "EMLRT:runTime:MexFunctionNeedsLicense",
    "opc_toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c2_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c2_is_active_c2_wwtp3 = 0U;
}

static void initialize_params_c2_wwtp3(SFc2_wwtp3InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c2_wwtp3(SFc2_wwtp3InstanceStruct *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c2_wwtp3(SFc2_wwtp3InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c2_wwtp3(SFc2_wwtp3InstanceStruct
  *chartInstance)
{
  static const uint32_T c2_decisionTxtEndIdx = 0U;
  static const uint32_T c2_decisionTxtStartIdx = 0U;
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c2_chart_data_browse_helper);
  chartInstance->c2_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c2_RuntimeVar,
    &chartInstance->c2_IsDebuggerActive,
    &chartInstance->c2_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c2_mlFcnLineNumber, &chartInstance->c2_IsHeatMapPresent, 0);
  covrtCreateStateflowInstanceData(chartInstance->c2_covrtInstance, 1U, 0U, 1U,
    12U);
  covrtChartInitFcn(chartInstance->c2_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c2_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c2_decisionTxtStartIdx, &c2_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c2_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c2_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  1U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 159);
  covrtEmlSaturationInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 0U, 78, -1,
    105);
}

static void mdl_cleanup_runtime_resources_c2_wwtp3(SFc2_wwtp3InstanceStruct
  *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c2_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c2_covrtInstance);
}

static void enable_c2_wwtp3(SFc2_wwtp3InstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c2_wwtp3(SFc2_wwtp3InstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c2_wwtp3(SFc2_wwtp3InstanceStruct *chartInstance)
{
  static char_T c2_b_cv1[37] = { 't', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't',
    'l', 'i', 'b', ':', 't', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't', ':', 'i',
    'n', 'v', 'a', 'l', 'i', 'd', 'D', 'a', 't', 'a', 'D', 'i', 'm' };

  static char_T c2_b_cv3[34] = { 't', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't',
    'l', 'i', 'b', ':', 't', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't', ':', 'w',
    'r', 'i', 't', 'e', 'F', 'a', 'i', 'l', 'e', 'd' };

  static char_T c2_b_cv[26] = { 'm', 'o', 'd', 'b', 'u', 's', ':', 'm', 'o', 'd',
    'b', 'u', 's', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'C', 'o', 'u', 'n',
    't' };

  static char_T c2_b_cv2[4] = { 'd', 'a', 't', 'a' };

  CoderChannel c2_b_chImpl;
  CoderChannel c2_c_chImpl;
  CoderChannel c2_chImpl;
  CoderChannel c2_d_chImpl;
  CoderOutputStream c2_b_streamImpl;
  CoderOutputStream c2_c_streamImpl;
  CoderOutputStream c2_d_streamImpl;
  CoderOutputStream c2_streamImpl;
  c2_cell_33 c2_args;
  c2_cell_wrap_31 c2_r;
  c2_emxArray_cell_wrap_31_1 c2_r1;
  c2_emxArray_cell_wrap_31_1x1 c2_packets;
  c2_emxArray_char_T *c2_out;
  c2_emxArray_uint8_T *c2_data;
  c2_emxArray_uint8_T *c2_pdu;
  c2_emxArray_uint8_T *c2_reqPacket;
  c2_icomm_interface_coder_modbus_DataConverter *c2_f_obj;
  c2_icomm_interface_coder_modbus_DataConverter *c2_g_obj;
  c2_icomm_interface_coder_modbus_DataConverter *c2_h_obj;
  c2_icomm_interface_modbus_tcpip_Modbus c2_m;
  c2_icomm_interface_modbus_tcpip_Modbus *c2_b_obj;
  c2_icomm_interface_modbus_tcpip_Modbus *c2_l_obj;
  c2_icomm_interface_modbus_tcpip_Modbus *c2_m_obj;
  c2_icomm_interface_modbus_tcpip_Modbus *c2_n_obj;
  c2_icomm_interface_modbus_tcpip_Modbus *c2_obj;
  c2_icomm_interface_modbus_tcpip_Modbus *c2_varargin_1;
  c2_icomm_interface_modbus_tcpip_PacketBuilder *c2_c_obj;
  c2_icomm_interface_modbus_tcpip_PacketBuilder *c2_d_obj;
  c2_icomm_interface_modbus_tcpip_PacketBuilder *c2_e_obj;
  c2_icomm_interface_modbus_tcpip_PacketBuilder *c2_j_obj;
  c2_icomm_interface_modbus_tcpip_PacketBuilder *c2_k_obj;
  c2_matlabshared_asyncio_internal_Channel *c2_v_obj;
  c2_matlabshared_asyncio_internal_Channel *c2_x_obj;
  c2_matlabshared_asyncio_internal_OutputStream *c2_u_obj;
  c2_matlabshared_asyncio_internal_OutputStream *c2_w_obj;
  c2_matlabshared_asyncio_internal_OutputStream *c2_y_obj;
  c2_matlabshared_network_internal_TCPClient *c2_b_varargin_1;
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co
    *c2_c_varargin_1;
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co
    *c2_d_varargin_1;
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_o_obj;
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_p_obj;
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_q_obj;
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_s_obj;
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_t_obj;
  c2_s_n2xUWXvqAPN0OsmrtE3c5D c2_options;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  emlrtStack c2_f_st;
  emlrtStack c2_g_st;
  emlrtStack c2_h_st;
  emlrtStack c2_i_st;
  emlrtStack c2_j_st;
  emlrtStack c2_k_st;
  emlrtStack c2_l_st;
  emlrtStack c2_m_st;
  emlrtStack c2_n_st;
  emlrtStack c2_o_st;
  emlrtStack c2_p_st;
  emlrtStack c2_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_g_y = NULL;
  const mxArray *c2_h_y = NULL;
  const mxArray *c2_i_y = NULL;
  const mxArray *c2_j_y = NULL;
  const mxArray *c2_k_y = NULL;
  const mxArray *c2_l_y = NULL;
  const mxArray *c2_y = NULL;
  real_T c2_bytes_data[255];
  real_T c2_moddata_data[127];
  real_T c2_b_r[2];
  real_T c2_b_a;
  real_T c2_b_ir;
  real_T c2_b_packetStartIndex;
  real_T c2_b_ws;
  real_T c2_c_u;
  real_T c2_countToWrite;
  real_T c2_countWrittenThisIteration;
  real_T c2_d;
  real_T c2_d1;
  real_T c2_d2;
  real_T c2_d3;
  real_T c2_d_count;
  real_T c2_d_u;
  real_T c2_e_count;
  real_T c2_f_u;
  real_T c2_index;
  real_T c2_len;
  real_T c2_numBytes;
  real_T c2_packetEndIndex;
  real_T c2_packetStartIndex;
  uint64_T c2_b_exampleValue;
  uint64_T c2_exampleValue;
  uint64_T c2_numBytesWritten;
  int32_T c2_b_packets[2];
  int32_T c2_bytes_size[2];
  int32_T c2_errorStr_size[2];
  int32_T c2_moddata_size[2];
  int32_T c2_status_size[2];
  int32_T c2_iv[1];
  int32_T c2_b;
  int32_T c2_b_k;
  int32_T c2_b_loop_ub;
  int32_T c2_b_success;
  int32_T c2_c_loop_ub;
  int32_T c2_c_success;
  int32_T c2_d_loop_ub;
  int32_T c2_d_success;
  int32_T c2_e_loop_ub;
  int32_T c2_e_success;
  int32_T c2_f_loop_ub;
  int32_T c2_f_success;
  int32_T c2_g_loop_ub;
  int32_T c2_h_loop_ub;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i2;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_i24;
  int32_T c2_i25;
  int32_T c2_i26;
  int32_T c2_i27;
  int32_T c2_i28;
  int32_T c2_i29;
  int32_T c2_i3;
  int32_T c2_i30;
  int32_T c2_i31;
  int32_T c2_i32;
  int32_T c2_i33;
  int32_T c2_i34;
  int32_T c2_i35;
  int32_T c2_i36;
  int32_T c2_i37;
  int32_T c2_i38;
  int32_T c2_i39;
  int32_T c2_i4;
  int32_T c2_i40;
  int32_T c2_i41;
  int32_T c2_i42;
  int32_T c2_i43;
  int32_T c2_i44;
  int32_T c2_i45;
  int32_T c2_i46;
  int32_T c2_i47;
  int32_T c2_i48;
  int32_T c2_i49;
  int32_T c2_i5;
  int32_T c2_i50;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_i_loop_ub;
  int32_T c2_ii;
  int32_T c2_j_loop_ub;
  int32_T c2_k;
  int32_T c2_k_loop_ub;
  int32_T c2_l_loop_ub;
  int32_T c2_loop_ub;
  int32_T c2_m_loop_ub;
  int32_T c2_nx;
  int32_T c2_success;
  uint16_T c2_b_count;
  uint16_T c2_b_quantity;
  uint16_T c2_b_u;
  uint16_T c2_b_x;
  uint16_T c2_c_count;
  uint16_T c2_convertedWordVal;
  uint16_T c2_count;
  uint16_T c2_e_u;
  uint16_T c2_m_y;
  uint16_T c2_packetLen;
  uint16_T c2_quantity;
  uint16_T c2_transactionId;
  uint16_T c2_u1;
  uint16_T c2_u2;
  uint16_T c2_values;
  uint16_T c2_varargin_4;
  uint16_T c2_x;
  char_T c2_i_obj[13];
  char_T c2_r_obj[13];
  char_T c2_errorStr_data[9];
  char_T c2_status_data[9];
  uint8_T c2_mbap[6];
  uint8_T c2_addrBytes[2];
  uint8_T c2_b_b;
  uint8_T c2_transactionID;
  uint8_T c2_xtmp;
  boolean_T c2_c_x[2];
  boolean_T c2_b_out;
  boolean_T c2_b_retry;
  boolean_T c2_c_b;
  boolean_T c2_c_retry;
  boolean_T c2_covSaturation = false;
  boolean_T c2_e_y;
  boolean_T c2_exitg1;
  boolean_T c2_exitg2;
  boolean_T c2_guard1;
  boolean_T c2_retry;
  c2_st.tls = chartInstance->c2_fEmlrtCtx;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_f_st.prev = &c2_e_st;
  c2_f_st.tls = c2_e_st.tls;
  c2_g_st.prev = &c2_f_st;
  c2_g_st.tls = c2_f_st.tls;
  c2_h_st.prev = &c2_g_st;
  c2_h_st.tls = c2_g_st.tls;
  c2_i_st.prev = &c2_h_st;
  c2_i_st.tls = c2_h_st.tls;
  c2_j_st.prev = &c2_i_st;
  c2_j_st.tls = c2_i_st.tls;
  c2_k_st.prev = &c2_j_st;
  c2_k_st.tls = c2_j_st.tls;
  c2_l_st.prev = &c2_k_st;
  c2_l_st.tls = c2_k_st.tls;
  c2_m_st.prev = &c2_l_st;
  c2_m_st.tls = c2_l_st.tls;
  c2_n_st.prev = &c2_m_st;
  c2_n_st.tls = c2_m_st.tls;
  c2_o_st.prev = &c2_n_st;
  c2_o_st.tls = c2_n_st.tls;
  c2_p_st.prev = &c2_o_st;
  c2_p_st.tls = c2_o_st.tls;
  chartInstance->c2_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 0U, (real_T)
                    *chartInstance->c2_u);
  chartInstance->c2_sfEvent = CALL_EVENT;
  c2_b_u = *chartInstance->c2_u;
  emlrtHeapReferenceStackEnterFcnR2012b(&c2_st);
  c2_emxInitStruct_icomm_interface_m(chartInstance, &c2_st, &c2_m,
    &c2_m_emlrtRTEI);
  c2_emxInit_uint8_T(chartInstance, &c2_st, &c2_reqPacket, 2, &c2_c_emlrtRTEI);
  c2_emxInit_uint8_T(chartInstance, &c2_st, &c2_pdu, 2, &c2_n_emlrtRTEI);
  c2_emxInit_char_T(chartInstance, &c2_st, &c2_out, 2, &c2_o_emlrtRTEI);
  c2_emxInit_uint8_T(chartInstance, &c2_st, &c2_data, 2, &c2_d_emlrtRTEI);
  c2_emxInitStruct_s_n2xUWXvqAPN0Osm(chartInstance, &c2_st, &c2_options,
    &c2_d_emlrtRTEI);
  c2_emxInitStruct_cell_wrap_31(chartInstance, &c2_st, &c2_r, (emlrtRTEInfo *)
    NULL);
  c2_emxInitStruct_cell_33(chartInstance, &c2_st, &c2_args, (emlrtRTEInfo *)NULL);
  c2_emxInit_cell_wrap_31_1x1(chartInstance, &c2_packets);
  c2_emxInit_cell_wrap_31_1(chartInstance, &c2_r1);
  emlrtPushHeapReferenceStackR2021a(&c2_st, true,
    &c2_m._pobj0._pobj1.InputStream, (void *)
    &c2_f_handle_matlabCodegenDestructor, chartInstance, NULL, NULL);
  c2_m._pobj0._pobj1.InputStream.matlabCodegenIsDeleted = true;
  emlrtPushHeapReferenceStackR2021a(&c2_st, true,
    &c2_m._pobj0._pobj0.UnreadDataBuffer.InputStream, (void *)
    &c2_f_handle_matlabCodegenDestructor, chartInstance, NULL, NULL);
  c2_m._pobj0._pobj0.UnreadDataBuffer.InputStream.matlabCodegenIsDeleted = true;
  emlrtPushHeapReferenceStackR2021a(&c2_st, true,
    &c2_m._pobj0._pobj1.OutputStream, (void *)
    &c2_g_handle_matlabCodegenDestructor, chartInstance, NULL, NULL);
  c2_m._pobj0._pobj1.OutputStream.matlabCodegenIsDeleted = true;
  emlrtPushHeapReferenceStackR2021a(&c2_st, true,
    &c2_m._pobj0._pobj0.UnreadDataBuffer.OutputStream, (void *)
    &c2_g_handle_matlabCodegenDestructor, chartInstance, NULL, NULL);
  c2_m._pobj0._pobj0.UnreadDataBuffer.OutputStream.matlabCodegenIsDeleted = true;
  emlrtPushHeapReferenceStackR2021a(&c2_st, true, &c2_m._pobj0._pobj1, (void *)
    &c2_c_handle_matlabCodegenDestructor, chartInstance, NULL, NULL);
  c2_m._pobj0._pobj1.matlabCodegenIsDeleted = true;
  emlrtPushHeapReferenceStackR2021a(&c2_st, true,
    &c2_m._pobj0._pobj0.UnreadDataBuffer, (void *)
    &c2_e_handle_matlabCodegenDestructor, chartInstance, NULL, NULL);
  c2_m._pobj0._pobj0.UnreadDataBuffer.matlabCodegenIsDeleted = true;
  emlrtPushHeapReferenceStackR2021a(&c2_st, true, &c2_m._pobj0._pobj0, (void *)
    &c2_d_handle_matlabCodegenDestructor, chartInstance, NULL, NULL);
  c2_m._pobj0._pobj0.matlabCodegenIsDeleted = true;
  emlrtPushHeapReferenceStackR2021a(&c2_st, true, &c2_m._pobj0, (void *)
    &c2_b_handle_matlabCodegenDestructor, chartInstance, NULL, NULL);
  c2_m._pobj0.matlabCodegenIsDeleted = true;
  emlrtPushHeapReferenceStackR2021a(&c2_st, true, &c2_m, (void *)
    &c2_handle_matlabCodegenDestructor, chartInstance, NULL, NULL);
  c2_m.matlabCodegenIsDeleted = true;
  covrtEmlFcnEval(chartInstance->c2_covrtInstance, 4U, 0, 0);
  c2_b_st.site = &c2_fl_emlrtRSI;
  c2_modbus(chartInstance, &c2_b_st, &c2_m);
  c2_b_st.site = &c2_dl_emlrtRSI;
  c2_varargin_1 = &c2_m;
  c2_varargin_4 = c2_b_u;
  c2_c_st.site = &c2_ad_emlrtRSI;
  c2_matlab_internal_language_TimerSuspender(chartInstance, &c2_c_st);
  c2_c_st.site = &c2_xc_emlrtRSI;
  c2_values = c2_varargin_4;
  c2_count = c2_values;
  c2_d_st.site = &c2_bd_emlrtRSI;
  if (((real_T)c2_count < 1.0) || ((real_T)c2_count > 125.0)) {
    c2_y = NULL;
    sf_mex_assign(&c2_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 26),
                  false);
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 26),
                  false);
    c2_c_u = 1.0;
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", &c2_c_u, 0, 0U, 0U, 0U, 0), false);
    c2_d_u = 125.0;
    c2_d_y = NULL;
    sf_mex_assign(&c2_d_y, sf_mex_create("y", &c2_d_u, 0, 0U, 0U, 0U, 0), false);
    sf_mex_call(&c2_d_st, &c2_db_emlrtMCI, "error", 0U, 2U, 14, c2_y, 14,
                sf_mex_call(&c2_d_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_d_st, NULL, "message", 1U, 3U, 14, c2_b_y, 14, c2_c_y, 14, c2_d_y)));
  }

  c2_c_st.site = &c2_yc_emlrtRSI;
  c2_obj = c2_varargin_1;
  c2_b_count = c2_count;
  c2_d_st.site = &c2_cd_emlrtRSI;
  c2_b_obj = c2_obj;
  c2_c_count = c2_b_count;
  c2_e_st.site = &c2_dd_emlrtRSI;
  c2_c_obj = &c2_b_obj->PacketBuilder;
  c2_quantity = c2_c_count;
  c2_f_st.site = &c2_gd_emlrtRSI;
  c2_d_obj = c2_c_obj;
  c2_b_quantity = c2_quantity;
  c2_d_obj->ModbusPDUSize = 6.0;
  c2_g_st.site = &c2_id_emlrtRSI;
  c2_e_obj = c2_d_obj;
  c2_i = c2_pdu->size[0] * c2_pdu->size[1];
  c2_pdu->size[0] = 1;
  if (!(c2_e_obj->ModbusPDUSize >= 0.0)) {
    emlrtNonNegativeCheckR2012b(c2_e_obj->ModbusPDUSize, &c2_c_emlrtDCI,
      &c2_g_st);
  }

  c2_d = c2_e_obj->ModbusPDUSize;
  if (c2_d != (real_T)(int32_T)muDoubleScalarFloor(c2_d)) {
    emlrtIntegerCheckR2012b(c2_d, &c2_b_emlrtDCI, &c2_g_st);
  }

  c2_pdu->size[1] = (int32_T)c2_d;
  c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_g_st, c2_pdu, c2_i,
    &c2_emlrtRTEI);
  if (!(c2_e_obj->ModbusPDUSize >= 0.0)) {
    emlrtNonNegativeCheckR2012b(c2_e_obj->ModbusPDUSize, &c2_e_emlrtDCI,
      &c2_g_st);
  }

  c2_d1 = c2_e_obj->ModbusPDUSize;
  if (c2_d1 != (real_T)(int32_T)muDoubleScalarFloor(c2_d1)) {
    emlrtIntegerCheckR2012b(c2_d1, &c2_d_emlrtDCI, &c2_g_st);
  }

  c2_loop_ub = (int32_T)c2_d1 - 1;
  for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
    c2_pdu->data[c2_i1] = 0U;
  }

  c2_i2 = c2_pdu->size[1];
  c2_i3 = 1;
  if ((c2_i3 < 1) || (c2_i3 > c2_i2)) {
    emlrtDynamicBoundsCheckR2012b(c2_i3, 1, c2_i2, &c2_emlrtBCI, &c2_g_st);
  }

  c2_pdu->data[0] = 1U;
  c2_i4 = c2_pdu->size[1];
  c2_i5 = 2;
  if ((c2_i5 < 1) || (c2_i5 > c2_i4)) {
    emlrtDynamicBoundsCheckR2012b(c2_i5, 1, c2_i4, &c2_b_emlrtBCI, &c2_g_st);
  }

  c2_pdu->data[1] = 3U;
  c2_h_st.site = &c2_ld_emlrtRSI;
  c2_f_obj = c2_e_obj->Converter;
  c2_convertedWordVal = 0U;
  c2_i_st.site = &c2_md_emlrtRSI;
  c2_g_obj = c2_f_obj;
  c2_j_st.site = &c2_pd_emlrtRSI;
  c2_h_obj = c2_g_obj;
  c2_i6 = c2_out->size[0] * c2_out->size[1];
  c2_out->size[0] = 1;
  c2_out->size[1] = c2_h_obj->ByteOrder->size[1];
  c2_emxEnsureCapacity_char_T(chartInstance, &c2_j_st, c2_out, c2_i6,
    &c2_b_emlrtRTEI);
  c2_b_loop_ub = c2_h_obj->ByteOrder->size[1] - 1;
  for (c2_i7 = 0; c2_i7 <= c2_b_loop_ub; c2_i7++) {
    c2_out->data[c2_i7] = c2_h_obj->ByteOrder->data[c2_i7];
  }

  c2_j_st.site = &c2_pd_emlrtRSI;
  for (c2_i8 = 0; c2_i8 < 13; c2_i8++) {
    c2_i_obj[c2_i8] = c2_g_obj->MachineByteOrder[c2_i8];
  }

  c2_b_out = !c2_e_strcmp(chartInstance, &c2_j_st, c2_out, c2_i_obj);
  if (c2_b_out) {
    c2_i_st.site = &c2_nd_emlrtRSI;
    c2_j_st.site = &c2_xd_emlrtRSI;
    c2_b_x = 0U;
    memcpy((void *)&c2_addrBytes[0], (void *)&c2_b_x, (size_t)2 * sizeof(uint8_T));
    c2_xtmp = c2_addrBytes[0];
    c2_addrBytes[0] = c2_addrBytes[1];
    c2_addrBytes[1] = c2_xtmp;
    c2_j_st.site = &c2_xd_emlrtRSI;
    memcpy((void *)&c2_convertedWordVal, (void *)&c2_addrBytes[0], (size_t)1 *
           sizeof(uint16_T));
  }

  c2_i_st.site = &c2_od_emlrtRSI;
  c2_x = c2_convertedWordVal;
  memcpy((void *)&c2_addrBytes[0], (void *)&c2_x, (size_t)2 * sizeof(uint8_T));
  c2_i9 = c2_pdu->size[1];
  c2_i10 = 3;
  if ((c2_i10 < 1) || (c2_i10 > c2_i9)) {
    emlrtDynamicBoundsCheckR2012b(c2_i10, 1, c2_i9, &c2_c_emlrtBCI, &c2_g_st);
  }

  c2_pdu->data[2] = c2_addrBytes[0];
  c2_i11 = c2_pdu->size[1];
  c2_i12 = 4;
  if ((c2_i12 < 1) || (c2_i12 > c2_i11)) {
    emlrtDynamicBoundsCheckR2012b(c2_i12, 1, c2_i11, &c2_d_emlrtBCI, &c2_g_st);
  }

  c2_pdu->data[3] = c2_addrBytes[1];
  c2_g_st.site = &c2_jd_emlrtRSI;
  c2_DataConverter_word2bytes(chartInstance, &c2_g_st, c2_d_obj->Converter,
    c2_b_quantity, c2_addrBytes);
  c2_g_st.site = &c2_kd_emlrtRSI;
  c2_index = 5.0;
  for (c2_b = 0; c2_b < 2; c2_b++) {
    c2_b_b = c2_addrBytes[c2_b];
    c2_i13 = c2_pdu->size[1];
    c2_i14 = (int32_T)c2_index;
    if ((c2_i14 < 1) || (c2_i14 > c2_i13)) {
      emlrtDynamicBoundsCheckR2012b(c2_i14, 1, c2_i13, &c2_f_emlrtBCI, &c2_g_st);
    }

    c2_pdu->data[c2_i14 - 1] = c2_b_b;
    c2_index++;
  }

  c2_f_st.site = &c2_hd_emlrtRSI;
  c2_j_obj = c2_c_obj;
  c2_len = (real_T)c2_pdu->size[1];
  c2_g_st.site = &c2_yd_emlrtRSI;
  c2_k_obj = c2_j_obj;
  c2_d2 = muDoubleScalarRound(c2_j_obj->TransactionId);
  if (c2_d2 < 65536.0) {
    if (c2_d2 >= 0.0) {
      c2_e_u = (uint16_T)c2_d2;
    } else {
      c2_e_u = 0U;
    }
  } else if (c2_d2 >= 65536.0) {
    c2_e_u = MAX_uint16_T;
  } else {
    c2_e_u = 0U;
  }

  c2_transactionId = c2_e_u;
  c2_d3 = muDoubleScalarRound(c2_len);
  c2_covSaturation = false;
  if (c2_d3 < 65536.0) {
    if (c2_d3 >= 0.0) {
      c2_u1 = (uint16_T)c2_d3;
    } else {
      c2_covSaturation = true;
      c2_u1 = 0U;
    }
  } else if (c2_d3 >= 65536.0) {
    c2_covSaturation = true;
    c2_u1 = MAX_uint16_T;
  } else {
    c2_u1 = 0U;
  }

  covrtSaturationUpdateFcn(chartInstance->c2_covrtInstance, 4, 0, 0, 0,
    c2_covSaturation);
  c2_packetLen = c2_u1;
  for (c2_i15 = 0; c2_i15 < 6; c2_i15++) {
    c2_mbap[c2_i15] = 0U;
  }

  c2_h_st.site = &c2_ae_emlrtRSI;
  c2_DataConverter_word2bytes(chartInstance, &c2_h_st, c2_k_obj->Converter,
    c2_transactionId, c2_addrBytes);
  c2_mbap[0] = c2_addrBytes[0];
  c2_mbap[1] = c2_addrBytes[1];
  c2_h_st.site = &c2_be_emlrtRSI;
  c2_DataConverter_word2bytes(chartInstance, &c2_h_st, c2_k_obj->Converter,
    c2_packetLen, c2_addrBytes);
  c2_mbap[4] = c2_addrBytes[0];
  c2_mbap[5] = c2_addrBytes[1];
  c2_j_obj->TransactionId++;
  c2_i16 = c2_reqPacket->size[0] * c2_reqPacket->size[1];
  c2_reqPacket->size[0] = 1;
  c2_reqPacket->size[1] = 6 + c2_pdu->size[1];
  c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_f_st, c2_reqPacket, c2_i16,
    &c2_c_emlrtRTEI);
  for (c2_i17 = 0; c2_i17 < 6; c2_i17++) {
    c2_reqPacket->data[c2_i17] = c2_mbap[c2_i17];
  }

  c2_c_loop_ub = c2_pdu->size[1] - 1;
  for (c2_i18 = 0; c2_i18 <= c2_c_loop_ub; c2_i18++) {
    c2_reqPacket->data[c2_i18 + 6] = c2_pdu->data[c2_i18];
  }

  c2_e_st.site = &c2_ed_emlrtRSI;
  c2_l_obj = c2_b_obj;
  c2_retry = true;
  c2_bytes_size[0] = 0;
  c2_bytes_size[1] = 0;
  while (c2_retry) {
    c2_f_st.site = &c2_ce_emlrtRSI;
    c2_m_obj = c2_l_obj;
    c2_g_st.site = &c2_de_emlrtRSI;
    c2_n_obj = c2_m_obj;
    c2_h_st.site = &c2_ge_emlrtRSI;
    c2_b_varargin_1 = c2_n_obj->TcpIpObj;
    c2_i_st.site = &c2_n_emlrtRSI;
    c2_TCPClient_validateConnected(chartInstance, &c2_i_st, c2_b_varargin_1);
    c2_i_st.site = &c2_n_emlrtRSI;
    c2_c_varargin_1 = c2_b_varargin_1->TransportChannel;
    c2_o_obj = c2_c_varargin_1;
    c2_j_st.site = &c2_qb_emlrtRSI;
    c2_d_varargin_1 = c2_c_varargin_1;
    c2_k_st.site = &c2_qb_emlrtRSI;
    for (c2_i22 = 0; c2_i22 < 2; c2_i22++) {
      c2_b_r[c2_i22] = (real_T)c2_reqPacket->size[c2_i22];
    }

    for (c2_i23 = 0; c2_i23 < 2; c2_i23++) {
      c2_c_x[c2_i23] = (c2_b_r[c2_i23] > 1.0);
    }

    c2_e_y = true;
    c2_k = 1;
    c2_exitg1 = false;
    while ((!c2_exitg1) && (c2_k - 1 < 2)) {
      c2_b_k = c2_k - 1;
      if (!c2_c_x[c2_b_k]) {
        c2_e_y = false;
        c2_exitg1 = true;
      } else {
        c2_k++;
      }
    }

    if (c2_e_y) {
      c2_f_y = NULL;
      sf_mex_assign(&c2_f_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2, 1,
        37), false);
      c2_g_y = NULL;
      sf_mex_assign(&c2_g_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2, 1,
        37), false);
      c2_f_u = 2.0;
      c2_h_y = NULL;
      sf_mex_assign(&c2_h_y, sf_mex_create("y", &c2_f_u, 0, 0U, 0U, 0U, 0),
                    false);
      c2_i_y = NULL;
      sf_mex_assign(&c2_i_y, sf_mex_create("y", c2_b_cv2, 10, 0U, 1U, 0U, 2, 1,
        4), false);
      sf_mex_call(&c2_k_st, &c2_fb_emlrtMCI, "error", 0U, 2U, 14, c2_f_y, 14,
                  sf_mex_call(&c2_k_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c2_k_st, NULL, "message", 1U, 3U, 14, c2_g_y, 14, c2_h_y,
                    14, c2_i_y)));
    }

    c2_i24 = c2_data->size[0] * c2_data->size[1];
    c2_data->size[0] = 1;
    c2_data->size[1] = c2_reqPacket->size[1];
    c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_j_st, c2_data, c2_i24,
      &c2_d_emlrtRTEI);
    c2_d_loop_ub = c2_reqPacket->size[1] - 1;
    for (c2_i25 = 0; c2_i25 <= c2_d_loop_ub; c2_i25++) {
      c2_data->data[c2_i25] = c2_reqPacket->data[c2_i25];
    }

    c2_k_st.site = &c2_qb_emlrtRSI;
    c2_p_obj = c2_d_varargin_1;
    c2_i26 = c2_out->size[0] * c2_out->size[1];
    c2_out->size[0] = 1;
    c2_out->size[1] = c2_p_obj->ByteOrder->size[1];
    c2_emxEnsureCapacity_char_T(chartInstance, &c2_k_st, c2_out, c2_i26,
      &c2_d_emlrtRTEI);
    c2_e_loop_ub = c2_p_obj->ByteOrder->size[1] - 1;
    for (c2_i27 = 0; c2_i27 <= c2_e_loop_ub; c2_i27++) {
      c2_out->data[c2_i27] = c2_p_obj->ByteOrder->data[c2_i27];
    }

    c2_k_st.site = &c2_qb_emlrtRSI;
    c2_q_obj = c2_d_varargin_1;
    c2_l_st.site = &c2_rb_emlrtRSI;
    for (c2_i28 = 0; c2_i28 < 13; c2_i28++) {
      c2_r_obj[c2_i28] = c2_q_obj->MachineByteOrder[c2_i28];
    }

    c2_e_strcmp(chartInstance, &c2_l_st, c2_out, c2_r_obj);
    c2_k_st.site = &c2_qb_emlrtRSI;
    c2_i29 = c2_pdu->size[0] * c2_pdu->size[1];
    c2_pdu->size[0] = 1;
    c2_pdu->size[1] = c2_data->size[1];
    c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_k_st, c2_pdu, c2_i29,
      &c2_d_emlrtRTEI);
    c2_f_loop_ub = c2_data->size[1] - 1;
    for (c2_i30 = 0; c2_i30 <= c2_f_loop_ub; c2_i30++) {
      c2_pdu->data[c2_i30] = c2_data->data[c2_i30];
    }

    c2_nx = c2_pdu->size[1];
    c2_i31 = c2_data->size[0] * c2_data->size[1];
    c2_data->size[0] = 1;
    c2_data->size[1] = c2_nx;
    c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_k_st, c2_data, c2_i31,
      &c2_e_emlrtRTEI);
    memcpy((void *)&c2_data->data[0], (void *)&c2_pdu->data[0], (size_t)c2_nx *
           sizeof(uint8_T));
    if (c2_d_varargin_1->WriteAsync) {
      c2_k_st.site = &c2_qb_emlrtRSI;
      c2_t_obj = c2_d_varargin_1;
      c2_l_st.site = &c2_qb_emlrtRSI;
      c2_u_obj = &c2_t_obj->AsyncIOChannel->OutputStream;
      c2_numBytes = 0.0;
      c2_errorStr_size[1] = 0;
      c2_countToWrite = (real_T)c2_data->size[1];
      c2_i34 = c2_r.f1->size[0] * c2_r.f1->size[1];
      c2_r.f1->size[0] = 1;
      c2_r.f1->size[1] = c2_data->size[1];
      c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_l_st, c2_r.f1, c2_i34,
        &c2_d_emlrtRTEI);
      c2_h_loop_ub = c2_data->size[1] - 1;
      for (c2_i35 = 0; c2_i35 <= c2_h_loop_ub; c2_i35++) {
        c2_r.f1->data[c2_i35] = c2_data->data[c2_i35];
      }

      c2_i36 = c2_packets.size[0] * c2_packets.size[1];
      c2_packets.size[0] = 1;
      c2_packets.size[1] = 1;
      for (c2_i38 = 0; c2_i38 < 2; c2_i38++) {
        c2_b_packets[c2_i38] = c2_packets.size[c2_i38];
      }

      c2_emxEnsureCapacity_cell_wrap_31(chartInstance, &c2_l_st, c2_packets.data,
        c2_b_packets, c2_i36, &c2_g_emlrtRTEI);
      c2_emxCopyStruct_cell_wrap_31(chartInstance, &c2_l_st, &c2_packets.data[0],
        &c2_r, &c2_g_emlrtRTEI);
      c2_packetStartIndex = 1.0;
      c2_exitg1 = false;
      while ((!c2_exitg1) && (c2_numBytes < c2_countToWrite)) {
        c2_m_st.site = &c2_he_emlrtRSI;
        c2_w_obj = c2_u_obj;
        c2_n_st.site = &c2_me_emlrtRSI;
        c2_streamImpl = c2_w_obj->StreamImpl;
        c2_success = coderStreamGetSpaceAvailable(c2_streamImpl, &c2_d_count);
        c2_o_st.site = &c2_ne_emlrtRSI;
        c2_b_streamImpl = c2_streamImpl;
        c2_b_success = c2_success;
        if ((real_T)c2_b_success == 0.0) {
          c2_b_chImpl = coderStreamGetChannel(c2_b_streamImpl);
          c2_p_st.site = &c2_oe_emlrtRSI;
          c2_b_API_channelErrorIfFailed(chartInstance, &c2_p_st, c2_b_chImpl);
        }

        c2_guard1 = false;
        if (c2_d_count == 0.0) {
          c2_m_st.site = &c2_ie_emlrtRSI;
          c2_Stream_wait(chartInstance, &c2_m_st, c2_u_obj, c2_status_data,
                         c2_status_size);
          c2_m_st.site = &c2_je_emlrtRSI;
          if (!c2_f_strcmp(chartInstance, &c2_m_st, c2_status_data,
                           c2_status_size)) {
            c2_errorStr_size[1] = c2_status_size[1];
            c2_l_loop_ub = c2_status_size[1] - 1;
            for (c2_i45 = 0; c2_i45 <= c2_l_loop_ub; c2_i45++) {
              c2_errorStr_data[c2_i45] = c2_status_data[c2_i45];
            }

            c2_m_st.site = &c2_ke_emlrtRSI;
            if (c2_g_strcmp(chartInstance, &c2_m_st, c2_status_data,
                            c2_status_size)) {
              c2_errorStr_size[1] = 0;
            }

            c2_exitg1 = true;
          } else {
            c2_guard1 = true;
          }
        } else {
          c2_guard1 = true;
        }

        if (c2_guard1) {
          c2_m_st.site = &c2_le_emlrtRSI;
          c2_y_obj = c2_u_obj;
          c2_b_packetStartIndex = c2_packetStartIndex;
          c2_e_count = 0.0;
          c2_packetEndIndex = c2_b_packetStartIndex;
          c2_i46 = (int32_T)(1.0 + (1.0 - c2_b_packetStartIndex));
          emlrtForLoopVectorCheckR2021a(c2_b_packetStartIndex, 1.0, 1.0,
            mxDOUBLE_CLASS, c2_i46, &c2_md_emlrtRTEI, &c2_m_st);
          c2_ii = 0;
          c2_exitg2 = false;
          while ((!c2_exitg2) && (c2_ii <= c2_i46 - 1)) {
            c2_i47 = c2_r1.size[0];
            c2_r1.size[0] = 1;
            c2_iv[0] = c2_r1.size[0];
            c2_emxEnsureCapacity_cell_wrap_311(chartInstance, &c2_m_st,
              c2_r1.data, c2_iv, c2_i47, &c2_k_emlrtRTEI);
            c2_emxCopyStruct_cell_wrap_31(chartInstance, &c2_m_st, &c2_r1.data[0],
              &c2_packets.data[0], &c2_k_emlrtRTEI);
            if (c2_b_packetStartIndex != (real_T)(int32_T)muDoubleScalarFloor
                (c2_b_packetStartIndex)) {
              emlrtIntegerCheckR2012b(c2_b_packetStartIndex, &c2_emlrtDCI,
                &c2_m_st);
            }

            c2_i48 = (int32_T)c2_b_packetStartIndex - 1;
            if ((c2_i48 < 0) || (c2_i48 > 0)) {
              emlrtDynamicBoundsCheckR2012b(c2_i48, 0, 0, &c2_e_emlrtBCI,
                &c2_m_st);
            }

            c2_i49 = c2_pdu->size[0] * c2_pdu->size[1];
            c2_pdu->size[0] = 1;
            c2_pdu->size[1] = c2_r1.data[0].f1->size[1];
            c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_m_st, c2_pdu, c2_i49,
              &c2_l_emlrtRTEI);
            c2_m_loop_ub = c2_r1.data[0].f1->size[1] - 1;
            for (c2_i50 = 0; c2_i50 <= c2_m_loop_ub; c2_i50++) {
              c2_pdu->data[c2_i50] = c2_r1.data[0].f1->data[c2_i50];
            }

            c2_n_st.site = &c2_jf_emlrtRSI;
            c2_c_streamImpl = c2_y_obj->StreamImpl;
            c2_e_success = coderOutputStreamWriteTypedDataOld(c2_c_streamImpl,
              &c2_countWrittenThisIteration, 1, "uint8", c2_pdu->size[1],
              &c2_pdu->data[0]);
            c2_o_st.site = &c2_kf_emlrtRSI;
            c2_d_streamImpl = c2_c_streamImpl;
            c2_f_success = c2_e_success;
            if ((real_T)c2_f_success == 0.0) {
              c2_d_chImpl = coderStreamGetChannel(c2_d_streamImpl);
              c2_p_st.site = &c2_oe_emlrtRSI;
              c2_b_API_channelErrorIfFailed(chartInstance, &c2_p_st, c2_d_chImpl);
            }

            if (c2_countWrittenThisIteration == 0.0) {
              c2_exitg2 = true;
            } else {
              c2_e_count += c2_countWrittenThisIteration;
              c2_packetEndIndex++;
              c2_ii++;
            }
          }

          c2_numBytes += c2_e_count;
          c2_packetStartIndex = c2_packetEndIndex;
        }
      }

      c2_c_b = (c2_errorStr_size[1] == 0);
      if (!c2_c_b) {
        c2_j_y = NULL;
        sf_mex_assign(&c2_j_y, sf_mex_create("y", c2_b_cv3, 10, 0U, 1U, 0U, 2, 1,
          34), false);
        c2_k_y = NULL;
        sf_mex_assign(&c2_k_y, sf_mex_create("y", c2_b_cv3, 10, 0U, 1U, 0U, 2, 1,
          34), false);
        c2_l_y = NULL;
        sf_mex_assign(&c2_l_y, sf_mex_create("y", &c2_errorStr_data, 10, 0U, 1U,
          0U, 2, 1, c2_errorStr_size[1]), false);
        sf_mex_call(&c2_k_st, &c2_fb_emlrtMCI, "error", 0U, 2U, 14, c2_j_y, 14,
                    sf_mex_call(&c2_k_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c2_k_st, NULL, "message", 1U, 2U, 14, c2_k_y, 14, c2_l_y)));
      }

      c2_t_obj->NumBytesWritten += c2_numBytes;
    } else {
      c2_k_st.site = &c2_qb_emlrtRSI;
      c2_s_obj = c2_d_varargin_1;
      c2_i32 = c2_options.Data->size[0] * c2_options.Data->size[1];
      c2_options.Data->size[0] = 1;
      c2_options.Data->size[1] = c2_data->size[1];
      c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_k_st, c2_options.Data,
        c2_i32, &c2_d_emlrtRTEI);
      c2_g_loop_ub = c2_data->size[1] - 1;
      for (c2_i33 = 0; c2_i33 <= c2_g_loop_ub; c2_i33++) {
        c2_options.Data->data[c2_i33] = c2_data->data[c2_i33];
      }

      c2_l_st.site = &c2_qb_emlrtRSI;
      c2_v_obj = c2_s_obj->AsyncIOChannel;
      c2_m_st.site = &c2_lf_emlrtRSI;
      c2_chImpl = c2_v_obj->ChannelImpl;
      c2_args.f1 = "Data";
      c2_args.f2 = "uint8";
      c2_args.f3 = c2_options.Data->size[1];
      c2_i37 = c2_pdu->size[0] * c2_pdu->size[1];
      c2_pdu->size[0] = 1;
      c2_pdu->size[1] = c2_options.Data->size[1];
      c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_m_st, c2_pdu, c2_i37,
        &c2_f_emlrtRTEI);
      c2_i_loop_ub = c2_options.Data->size[1] - 1;
      for (c2_i39 = 0; c2_i39 <= c2_i_loop_ub; c2_i39++) {
        c2_pdu->data[c2_i39] = c2_options.Data->data[c2_i39];
      }

      c2_i40 = c2_args.f4->size[0] * c2_args.f4->size[1];
      c2_args.f4->size[0] = 1;
      c2_args.f4->size[1] = c2_pdu->size[1];
      c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_m_st, c2_args.f4, c2_i40,
        &c2_h_emlrtRTEI);
      c2_j_loop_ub = c2_pdu->size[1] - 1;
      for (c2_i41 = 0; c2_i41 <= c2_j_loop_ub; c2_i41++) {
        c2_args.f4->data[c2_i41] = c2_pdu->data[c2_i41];
      }

      c2_i42 = c2_pdu->size[0] * c2_pdu->size[1];
      c2_pdu->size[0] = 1;
      c2_pdu->size[1] = c2_args.f4->size[1];
      c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_m_st, c2_pdu, c2_i42,
        &c2_i_emlrtRTEI);
      c2_k_loop_ub = c2_args.f4->size[1] - 1;
      for (c2_i44 = 0; c2_i44 <= c2_k_loop_ub; c2_i44++) {
        c2_pdu->data[c2_i44] = c2_args.f4->data[c2_i44];
      }

      c2_c_success = coderChannelExecute(c2_chImpl, "Write", 1, c2_args.f1,
        c2_args.f2, c2_args.f3, &c2_pdu->data[0]);
      c2_n_st.site = &c2_mf_emlrtRSI;
      c2_API_channelErrorIfFailed(chartInstance, &c2_n_st, c2_chImpl,
        c2_c_success);
      c2_l_st.site = &c2_qb_emlrtRSI;
      c2_x_obj = c2_s_obj->AsyncIOChannel;
      c2_exampleValue = c2_x_obj->CustomProps.LatestNumBytesWrittenToDevice;
      c2_m_st.site = &c2_lc_emlrtRSI;
      c2_c_chImpl = c2_x_obj->ChannelImpl;
      c2_b_exampleValue = c2_exampleValue;
      c2_numBytesWritten = c2_b_exampleValue;
      c2_d_success = coderChannelGetPropertyValue(c2_c_chImpl,
        "LatestNumBytesWrittenToDevice", "uint64", 1, &c2_numBytesWritten);
      c2_n_st.site = &c2_mc_emlrtRSI;
      c2_API_channelErrorIfFailed(chartInstance, &c2_n_st, c2_c_chImpl,
        c2_d_success);
      c2_s_obj->NumBytesWritten += (real_T)c2_numBytesWritten;
    }

    c2_j_st.site = &c2_qb_emlrtRSI;
    c2_OutputStream_drain(chartInstance, &c2_j_st, &c2_o_obj->
                          AsyncIOChannel->OutputStream);
    c2_g_st.site = &c2_ee_emlrtRSI;
    for (c2_i43 = 0; c2_i43 < 2; c2_i43++) {
      c2_addrBytes[c2_i43] = c2_reqPacket->data[1 - c2_i43];
    }

    memcpy((void *)&c2_m_y, (void *)&c2_addrBytes[0], (size_t)1 * sizeof
           (uint16_T));
    c2_u2 = c2_m_y;
    if (c2_u2 > 255) {
      c2_u2 = 255U;
    }

    c2_transactionID = (uint8_T)c2_u2;
    c2_g_st.site = &c2_fe_emlrtRSI;
    c2_Modbus_getReadResponse(chartInstance, &c2_g_st, c2_m_obj,
      c2_transactionID, c2_bytes_data, c2_bytes_size, &c2_b_retry);
    c2_c_retry = c2_b_retry;
    c2_retry = c2_c_retry;
  }

  c2_e_st.site = &c2_fd_emlrtRSI;
  c2_DataConverter_convertReadValues(chartInstance, &c2_e_st,
    &c2_b_obj->Converter, c2_bytes_data, c2_bytes_size, c2_moddata_data,
    c2_moddata_size);
  c2_i19 = 3;
  if ((c2_i19 < 1) || (c2_i19 > c2_moddata_size[1])) {
    emlrtDynamicBoundsCheckR2012b(c2_i19, 1, c2_moddata_size[1], &c2_g_emlrtBCI,
      &c2_st);
  }

  c2_b_a = c2_moddata_data[c2_i19 - 1];
  c2_i20 = 1;
  if ((c2_i20 < 1) || (c2_i20 > c2_moddata_size[1])) {
    emlrtDynamicBoundsCheckR2012b(c2_i20, 1, c2_moddata_size[1], &c2_h_emlrtBCI,
      &c2_st);
  }

  c2_b_ir = c2_moddata_data[c2_i20 - 1];
  c2_i21 = 2;
  if ((c2_i21 < 1) || (c2_i21 > c2_moddata_size[1])) {
    emlrtDynamicBoundsCheckR2012b(c2_i21, 1, c2_moddata_size[1], &c2_i_emlrtBCI,
      &c2_st);
  }

  c2_b_ws = c2_moddata_data[c2_i21 - 1];
  c2_b_st.site = &c2_el_emlrtRSI;
  c2_handle_matlabCodegenDestructor(chartInstance, &c2_b_st, &c2_m);
  c2_b_st.site = &c2_el_emlrtRSI;
  c2_b_handle_matlabCodegenDestructor(chartInstance, &c2_b_st, &c2_m._pobj0);
  c2_b_st.site = &c2_el_emlrtRSI;
  c2_d_handle_matlabCodegenDestructor(chartInstance, &c2_b_st,
    &c2_m._pobj0._pobj0);
  c2_b_st.site = &c2_el_emlrtRSI;
  c2_e_handle_matlabCodegenDestructor(chartInstance, &c2_b_st,
    &c2_m._pobj0._pobj0.UnreadDataBuffer);
  c2_b_st.site = &c2_el_emlrtRSI;
  c2_c_handle_matlabCodegenDestructor(chartInstance, &c2_b_st,
    &c2_m._pobj0._pobj1);
  c2_b_st.site = &c2_el_emlrtRSI;
  c2_g_handle_matlabCodegenDestructor(chartInstance, &c2_b_st,
    &c2_m._pobj0._pobj0.UnreadDataBuffer.OutputStream);
  c2_b_st.site = &c2_el_emlrtRSI;
  c2_g_handle_matlabCodegenDestructor(chartInstance, &c2_b_st,
    &c2_m._pobj0._pobj1.OutputStream);
  c2_b_st.site = &c2_el_emlrtRSI;
  c2_f_handle_matlabCodegenDestructor(chartInstance, &c2_b_st,
    &c2_m._pobj0._pobj0.UnreadDataBuffer.InputStream);
  c2_b_st.site = &c2_el_emlrtRSI;
  c2_f_handle_matlabCodegenDestructor(chartInstance, &c2_b_st,
    &c2_m._pobj0._pobj1.InputStream);
  c2_emxFree_cell_wrap_31_1(chartInstance, &c2_r1);
  c2_emxFree_cell_wrap_31_1x1(chartInstance, &c2_packets);
  c2_emxFreeStruct_cell_33(chartInstance, &c2_args);
  c2_emxFreeStruct_cell_wrap_31(chartInstance, &c2_r);
  c2_emxFreeStruct_s_n2xUWXvqAPN0Osm(chartInstance, &c2_options);
  c2_emxFree_uint8_T(chartInstance, &c2_data);
  c2_emxFree_char_T(chartInstance, &c2_out);
  c2_emxFree_uint8_T(chartInstance, &c2_pdu);
  c2_emxFree_uint8_T(chartInstance, &c2_reqPacket);
  c2_emxFreeStruct_icomm_interface_m(chartInstance, &c2_m);
  emlrtHeapReferenceStackLeaveFcnR2012b(&c2_st);
  *chartInstance->c2_a = c2_b_a;
  *chartInstance->c2_ir = c2_b_ir;
  *chartInstance->c2_ws = c2_b_ws;
  c2_do_animation_call_c2_wwtp3(chartInstance);
  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 1U, *chartInstance->c2_a);
  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 2U, *chartInstance->c2_ir);
  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 3U, *chartInstance->c2_ws);
}

static void ext_mode_exec_c2_wwtp3(SFc2_wwtp3InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c2_update_jit_animation_c2_wwtp3(SFc2_wwtp3InstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c2_do_animation_call_c2_wwtp3(SFc2_wwtp3InstanceStruct
  *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c2_wwtp3(SFc2_wwtp3InstanceStruct
  *chartInstance)
{
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_st;
  const mxArray *c2_y = NULL;
  c2_st = NULL;
  c2_st = NULL;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_createcellmatrix(4, 1), false);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", chartInstance->c2_a, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c2_y, 0, c2_b_y);
  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y", chartInstance->c2_ir, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c2_y, 1, c2_c_y);
  c2_d_y = NULL;
  sf_mex_assign(&c2_d_y, sf_mex_create("y", chartInstance->c2_ws, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c2_y, 2, c2_d_y);
  c2_e_y = NULL;
  sf_mex_assign(&c2_e_y, sf_mex_create("y",
    &chartInstance->c2_is_active_c2_wwtp3, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c2_y, 3, c2_e_y);
  sf_mex_assign(&c2_st, c2_y, false);
  return c2_st;
}

static void set_sim_state_c2_wwtp3(SFc2_wwtp3InstanceStruct *chartInstance,
  const mxArray *c2_st)
{
  const mxArray *c2_b_u;
  chartInstance->c2_doneDoubleBufferReInit = true;
  c2_b_u = sf_mex_dup(c2_st);
  *chartInstance->c2_a = c2_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_b_u, 0)), "a");
  *chartInstance->c2_ir = c2_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_b_u, 1)), "ir");
  *chartInstance->c2_ws = c2_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_b_u, 2)), "ws");
  chartInstance->c2_is_active_c2_wwtp3 = c2_i_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c2_b_u, 3)), "is_active_c2_wwtp3");
  sf_mex_destroy(&c2_b_u);
  sf_mex_destroy(&c2_st);
}

static void initSimStructsc2_wwtp3(SFc2_wwtp3InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void initSubchartIOPointersc2_wwtp3(SFc2_wwtp3InstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static boolean_T c2_vectorAny(SFc2_wwtp3InstanceStruct *chartInstance, boolean_T
  c2_x_data[], int32_T c2_x_size[2])
{
  real_T c2_b_k;
  real_T c2_d;
  int32_T c2_i;
  int32_T c2_k;
  boolean_T c2_b;
  boolean_T c2_exitg1;
  boolean_T c2_y;
  (void)chartInstance;
  c2_y = false;
  c2_d = (real_T)c2_x_size[1];
  c2_i = (int32_T)c2_d - 1;
  c2_k = 0;
  c2_exitg1 = false;
  while ((!c2_exitg1) && (c2_k <= c2_i)) {
    c2_b_k = (real_T)c2_k + 1.0;
    if (!c2_x_data[(int32_T)c2_b_k - 1]) {
      c2_b = true;
    } else {
      c2_b = false;
    }

    if (!c2_b) {
      c2_y = true;
      c2_exitg1 = true;
    } else {
      c2_k++;
    }
  }

  return c2_y;
}

static c2_icomm_interface_modbus_tcpip_Modbus *c2_modbus
  (SFc2_wwtp3InstanceStruct *chartInstance, const emlrtStack *c2_sp,
   c2_icomm_interface_modbus_tcpip_Modbus *c2_iobj_0)
{
  static char_T c2_b_cv11[51] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't',
    't', 'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'N', 'o', 'n', 'n', 'e', 'g', 'a', 't', 'i', 'v', 'e' };

  static char_T c2_b_cv2[40] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'a',
    'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't', 'r', 'i', 'b', 'u', 't', 'e',
    's', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'S', 'c', 'a', 'l', 'a',
    'r' };

  static char_T c2_b_cv6[40] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'a',
    'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't', 'r', 'i', 'b', 'u', 't', 'e',
    's', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'S', 'c', 'a', 'l', 'a',
    'r' };

  static char_T c2_b_cv10[36] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'T', 'C',
    'P', 'C', 'l', 'i', 'e', 'n', 't', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'N', 'o', 'n', 'n', 'e', 'g', 'a', 't', 'i', 'v', 'e' };

  static char_T c2_b_cv1[32] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'T', 'C',
    'P', 'C', 'l', 'i', 'e', 'n', 't', ':', 'n', 'o', 't', 'G', 'r', 'e', 'a',
    't', 'e', 'r', 'E', 'q', 'u', 'a', 'l' };

  static char_T c2_b_cv13[31] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'T', 'C',
    'P', 'C', 'l', 'i', 'e', 'n', 't', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static char_T c2_b_cv5[29] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'T', 'C',
    'P', 'C', 'l', 'i', 'e', 'n', 't', ':', 'n', 'o', 't', 'L', 'e', 's', 's',
    'E', 'q', 'u', 'a', 'l' };

  static char_T c2_b_cv12[27] = { 'i', 'n', 'p', 'u', 't', ' ', 'n', 'u', 'm',
    'b', 'e', 'r', ' ', '2', ',', ' ', 'P', 'O', 'R', 'T', 'N', 'U', 'M', 'B',
    'E', 'R', ',' };

  static char_T c2_b_cv14[27] = { 'i', 'n', 'p', 'u', 't', ' ', 'n', 'u', 'm',
    'b', 'e', 'r', ' ', '2', ',', ' ', 'P', 'O', 'R', 'T', 'N', 'U', 'M', 'B',
    'E', 'R', ',' };

  static char_T c2_b_cv3[27] = { 'i', 'n', 'p', 'u', 't', ' ', 'n', 'u', 'm',
    'b', 'e', 'r', ' ', '2', ',', ' ', 'P', 'O', 'R', 'T', 'N', 'U', 'M', 'B',
    'E', 'R', ',' };

  static char_T c2_b_cv7[27] = { 'i', 'n', 'p', 'u', 't', ' ', 'n', 'u', 'm',
    'b', 'e', 'r', ' ', '2', ',', ' ', 'P', 'O', 'R', 'T', 'N', 'U', 'M', 'B',
    'E', 'R', ',' };

  static char_T c2_b_cv[11] = { '1', '0', '.', '6', '3', '.', '2', '8', '.', '5',
    '3' };

  static char_T c2_b_cv9[5] = { '6', '5', '5', '3', '5' };

  static char_T c2_val[5] = { 'u', 'i', 'n', 't', '8' };

  static char_T c2_b_val[4] = { 'D', 'a', 't', 'a' };

  static char_T c2_b_cv4[2] = { '>', '=' };

  static char_T c2_b_cv8[2] = { '<', '=' };

  CoderChannel c2_chImpl;
  c2_emxArray_char_T *c2_out;
  c2_icomm_interface_coder_modbus_DataConverter *c2_b_converter;
  c2_icomm_interface_coder_modbus_DataConverter *c2_b_this;
  c2_icomm_interface_coder_modbus_DataConverter *c2_converter;
  c2_icomm_interface_coder_modbus_DataConverter *c2_d_obj;
  c2_icomm_interface_coder_modbus_DataConverter *c2_e_obj;
  c2_icomm_interface_coder_modbus_DataConverter *c2_eb_obj;
  c2_icomm_interface_coder_modbus_DataConverter *c2_f_obj;
  c2_icomm_interface_coder_modbus_DataConverter *c2_g_obj;
  c2_icomm_interface_coder_modbus_DataConverter *c2_gb_obj;
  c2_icomm_interface_modbus_tcpip_Modbus *c2_ab_obj;
  c2_icomm_interface_modbus_tcpip_Modbus *c2_b_obj;
  c2_icomm_interface_modbus_tcpip_Modbus *c2_c_obj;
  c2_icomm_interface_modbus_tcpip_Modbus *c2_cb_obj;
  c2_icomm_interface_modbus_tcpip_Modbus *c2_fb_obj;
  c2_icomm_interface_modbus_tcpip_Modbus *c2_hb_obj;
  c2_icomm_interface_modbus_tcpip_Modbus *c2_i_obj;
  c2_icomm_interface_modbus_tcpip_Modbus *c2_ib_obj;
  c2_icomm_interface_modbus_tcpip_Modbus *c2_jb_obj;
  c2_icomm_interface_modbus_tcpip_Modbus *c2_obj;
  c2_icomm_interface_modbus_tcpip_Modbus *c2_this;
  c2_icomm_interface_modbus_tcpip_Modbus *c2_v_obj;
  c2_icomm_interface_modbus_tcpip_PacketBuilder *c2_g_this;
  c2_icomm_interface_modbus_tcpip_PacketBuilder *c2_mb_obj;
  c2_icomm_interface_modbus_tcpip_PacketBuilder *c2_ob_obj;
  c2_icomm_interface_modbus_tcpip_PacketBuilder *c2_pb_obj;
  c2_matlabshared_asyncio_internal_Channel *c2_y_obj;
  c2_matlabshared_asyncio_internal_InputStream *c2_inputStream;
  c2_matlabshared_asyncio_internal_InputStream *c2_qb_obj;
  c2_matlabshared_asyncio_internal_OutputStream *c2_nb_obj;
  c2_matlabshared_asyncio_internal_OutputStream *c2_outputStream;
  c2_matlabshared_network_internal_TCPClient *c2_b_iobj_0;
  c2_matlabshared_network_internal_TCPClient *c2_b_transportObj;
  c2_matlabshared_network_internal_TCPClient *c2_bb_obj;
  c2_matlabshared_network_internal_TCPClient *c2_c_iobj_0;
  c2_matlabshared_network_internal_TCPClient *c2_c_this;
  c2_matlabshared_network_internal_TCPClient *c2_d_this;
  c2_matlabshared_network_internal_TCPClient *c2_e_this;
  c2_matlabshared_network_internal_TCPClient *c2_f_this;
  c2_matlabshared_network_internal_TCPClient *c2_j_obj;
  c2_matlabshared_network_internal_TCPClient *c2_k_obj;
  c2_matlabshared_network_internal_TCPClient *c2_kb_obj;
  c2_matlabshared_network_internal_TCPClient *c2_l_obj;
  c2_matlabshared_network_internal_TCPClient *c2_lb_obj;
  c2_matlabshared_network_internal_TCPClient *c2_m_obj;
  c2_matlabshared_network_internal_TCPClient *c2_n_obj;
  c2_matlabshared_network_internal_TCPClient *c2_o_obj;
  c2_matlabshared_network_internal_TCPClient *c2_r_obj;
  c2_matlabshared_network_internal_TCPClient *c2_t_obj;
  c2_matlabshared_network_internal_TCPClient *c2_transportObj;
  c2_matlabshared_network_internal_TCPClient *c2_w_obj;
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_db_obj;
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_p_obj;
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_q_obj;
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_s_obj;
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_u_obj;
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_x_obj;
  c2_rtString c2_h_obj;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  emlrtStack c2_f_st;
  emlrtStack c2_g_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_g_y = NULL;
  const mxArray *c2_h_y = NULL;
  const mxArray *c2_i_y = NULL;
  const mxArray *c2_j_y = NULL;
  const mxArray *c2_k_y = NULL;
  const mxArray *c2_l_y = NULL;
  const mxArray *c2_m_y = NULL;
  const mxArray *c2_n_y = NULL;
  const mxArray *c2_o_y = NULL;
  const mxArray *c2_p_y = NULL;
  const mxArray *c2_y = NULL;
  real_T c2_b_a;
  real_T c2_b_x;
  real_T c2_c_a;
  real_T c2_c_x;
  real_T c2_d_a;
  real_T c2_d_x;
  real_T c2_e_a;
  real_T c2_f_a;
  real_T c2_g_a;
  real_T c2_h_a;
  real_T c2_i_a;
  real_T c2_j_a;
  real_T c2_portNumber;
  real_T c2_varargin_2;
  real_T c2_x;
  int32_T c2_b_size[2];
  int32_T c2_b_loop_ub;
  int32_T c2_c_loop_ub;
  int32_T c2_d_loop_ub;
  int32_T c2_e_loop_ub;
  int32_T c2_f_loop_ub;
  int32_T c2_g_loop_ub;
  int32_T c2_h_loop_ub;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i2;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_i24;
  int32_T c2_i25;
  int32_T c2_i26;
  int32_T c2_i27;
  int32_T c2_i28;
  int32_T c2_i29;
  int32_T c2_i3;
  int32_T c2_i30;
  int32_T c2_i31;
  int32_T c2_i32;
  int32_T c2_i33;
  int32_T c2_i34;
  int32_T c2_i35;
  int32_T c2_i36;
  int32_T c2_i37;
  int32_T c2_i38;
  int32_T c2_i39;
  int32_T c2_i4;
  int32_T c2_i40;
  int32_T c2_i41;
  int32_T c2_i42;
  int32_T c2_i43;
  int32_T c2_i44;
  int32_T c2_i45;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_i_loop_ub;
  int32_T c2_j_loop_ub;
  int32_T c2_k_loop_ub;
  int32_T c2_l_loop_ub;
  int32_T c2_loop_ub;
  int32_T c2_success;
  char_T c2_b_data[512];
  char_T c2_hostName[11];
  char_T c2_b_u;
  boolean_T c2_b;
  boolean_T c2_b1;
  boolean_T c2_b2;
  boolean_T c2_b3;
  boolean_T c2_b_b;
  boolean_T c2_b_out;
  boolean_T c2_b_p;
  boolean_T c2_b_value;
  boolean_T c2_c_b;
  boolean_T c2_c_p;
  boolean_T c2_d_b;
  boolean_T c2_d_p;
  boolean_T c2_e_p;
  boolean_T c2_p;
  boolean_T c2_value;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_f_st.prev = &c2_e_st;
  c2_f_st.tls = c2_e_st.tls;
  c2_g_st.prev = &c2_f_st;
  c2_g_st.tls = c2_f_st.tls;
  c2_st.site = &c2_emlrtRSI;
  c2_b_obj = c2_iobj_0;
  c2_obj = c2_b_obj;
  c2_b_st.site = &c2_b_emlrtRSI;
  c2_c_obj = c2_obj;
  c2_obj = c2_c_obj;
  c2_obj->TransportInjected = false;
  c2_c_st.site = &c2_g_emlrtRSI;
  c2_this = c2_obj;
  c2_obj = c2_this;
  c2_c_st.site = &c2_h_emlrtRSI;
  c2_d_obj = &c2_obj->Converter;
  c2_e_obj = c2_d_obj;
  c2_d_st.site = &c2_i_emlrtRSI;
  c2_b_this = c2_e_obj;
  c2_e_obj = c2_b_this;
  c2_d_st.site = &c2_j_emlrtRSI;
  c2_f_obj = c2_e_obj;
  c2_b_size[1] = 0;
  c2_i = c2_f_obj->ByteOrder->size[0] * c2_f_obj->ByteOrder->size[1];
  c2_f_obj->ByteOrder->size[0] = 1;
  c2_f_obj->ByteOrder->size[1] = c2_b_size[1];
  c2_emxEnsureCapacity_char_T(chartInstance, &c2_d_st, c2_f_obj->ByteOrder, c2_i,
    &c2_q_emlrtRTEI);
  c2_loop_ub = c2_b_size[1] - 1;
  for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
    c2_f_obj->ByteOrder->data[c2_i1] = c2_b_data[c2_i1];
  }

  c2_i2 = c2_f_obj->ByteOrder->size[0] * c2_f_obj->ByteOrder->size[1];
  c2_f_obj->ByteOrder->size[0] = 1;
  c2_f_obj->ByteOrder->size[1] = 10;
  c2_emxEnsureCapacity_char_T(chartInstance, &c2_d_st, c2_f_obj->ByteOrder,
    c2_i2, &c2_r_emlrtRTEI);
  for (c2_i3 = 0; c2_i3 < 10; c2_i3++) {
    c2_f_obj->ByteOrder->data[c2_i3] = c2_cv[c2_i3];
  }

  c2_d_st.site = &c2_k_emlrtRSI;
  c2_g_obj = c2_e_obj;
  c2_b_size[1] = 0;
  c2_i4 = c2_g_obj->WordOrder->size[0] * c2_g_obj->WordOrder->size[1];
  c2_g_obj->WordOrder->size[0] = 1;
  c2_g_obj->WordOrder->size[1] = c2_b_size[1];
  c2_emxEnsureCapacity_char_T(chartInstance, &c2_d_st, c2_g_obj->WordOrder,
    c2_i4, &c2_s_emlrtRTEI);
  c2_b_loop_ub = c2_b_size[1] - 1;
  for (c2_i5 = 0; c2_i5 <= c2_b_loop_ub; c2_i5++) {
    c2_g_obj->WordOrder->data[c2_i5] = c2_b_data[c2_i5];
  }

  c2_i6 = c2_g_obj->WordOrder->size[0] * c2_g_obj->WordOrder->size[1];
  c2_g_obj->WordOrder->size[0] = 1;
  c2_g_obj->WordOrder->size[1] = 10;
  c2_emxEnsureCapacity_char_T(chartInstance, &c2_d_st, c2_g_obj->WordOrder,
    c2_i6, &c2_t_emlrtRTEI);
  for (c2_i7 = 0; c2_i7 < 10; c2_i7++) {
    c2_g_obj->WordOrder->data[c2_i7] = c2_cv[c2_i7];
  }

  for (c2_i8 = 0; c2_i8 < 13; c2_i8++) {
    c2_e_obj->MachineByteOrder[c2_i8] = c2_cv1[c2_i8];
  }

  for (c2_i9 = 0; c2_i9 < 11; c2_i9++) {
    c2_h_obj.Value[c2_i9] = c2_b_cv[c2_i9];
  }

  c2_obj->DeviceAddress = c2_h_obj;
  c2_obj->Port = 5020.0;
  c2_b_st.site = &c2_f_emlrtRSI;
  c2_i_obj = c2_obj;
  c2_b_iobj_0 = &c2_obj->_pobj0;
  c2_c_st.site = &c2_l_emlrtRSI;
  c2_h_obj = c2_i_obj->DeviceAddress;
  c2_varargin_2 = c2_i_obj->Port;
  c2_c_iobj_0 = c2_b_iobj_0;
  c2_d_st.site = &c2_m_emlrtRSI;
  c2_j_obj = c2_c_iobj_0;
  c2_portNumber = c2_varargin_2;
  c2_transportObj = c2_j_obj;
  c2_transportObj->ConnectTimeout = rtInf;
  c2_transportObj->InputBufferSize = rtInf;
  c2_transportObj->OutputBufferSize = rtInf;
  c2_transportObj->TransferDelay = true;
  for (c2_i10 = 0; c2_i10 < 11; c2_i10++) {
    c2_hostName[c2_i10] = c2_h_obj.Value[c2_i10];
  }

  c2_e_st.site = &c2_n_emlrtRSI;
  c2_b_a = c2_portNumber;
  c2_f_st.site = &c2_o_emlrtRSI;
  c2_c_a = c2_b_a;
  c2_d_a = c2_c_a;
  c2_p = true;
  if (!(c2_d_a >= 1.0)) {
    c2_p = false;
  }

  if (!c2_p) {
    c2_y = NULL;
    sf_mex_assign(&c2_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2, 1, 32),
                  false);
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_cv2, 10, 0U, 1U, 0U, 2, 1, 40),
                  false);
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_b_cv3, 10, 0U, 1U, 0U, 2, 1, 27),
                  false);
    c2_d_y = NULL;
    sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_b_cv4, 10, 0U, 1U, 0U, 2, 1, 2),
                  false);
    c2_b_u = '1';
    c2_f_y = NULL;
    sf_mex_assign(&c2_f_y, sf_mex_create("y", &c2_b_u, 10, 0U, 0U, 0U, 0), false);
    sf_mex_call(&c2_f_st, &c2_emlrtMCI, "error", 0U, 2U, 14, c2_y, 14,
                sf_mex_call(&c2_f_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_f_st, NULL, "message", 1U, 4U, 14, c2_b_y, 14, c2_c_y, 14, c2_d_y, 14,
       c2_f_y)));
  }

  c2_f_st.site = &c2_o_emlrtRSI;
  c2_e_a = c2_b_a;
  c2_f_a = c2_e_a;
  c2_b_p = true;
  if (!(c2_f_a <= 65535.0)) {
    c2_b_p = false;
  }

  if (!c2_b_p) {
    c2_e_y = NULL;
    sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_b_cv5, 10, 0U, 1U, 0U, 2, 1, 29),
                  false);
    c2_g_y = NULL;
    sf_mex_assign(&c2_g_y, sf_mex_create("y", c2_b_cv6, 10, 0U, 1U, 0U, 2, 1, 40),
                  false);
    c2_h_y = NULL;
    sf_mex_assign(&c2_h_y, sf_mex_create("y", c2_b_cv7, 10, 0U, 1U, 0U, 2, 1, 27),
                  false);
    c2_i_y = NULL;
    sf_mex_assign(&c2_i_y, sf_mex_create("y", c2_b_cv8, 10, 0U, 1U, 0U, 2, 1, 2),
                  false);
    c2_j_y = NULL;
    sf_mex_assign(&c2_j_y, sf_mex_create("y", c2_b_cv9, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(&c2_f_st, &c2_b_emlrtMCI, "error", 0U, 2U, 14, c2_e_y, 14,
                sf_mex_call(&c2_f_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_f_st, NULL, "message", 1U, 4U, 14, c2_g_y, 14, c2_h_y, 14, c2_i_y, 14,
       c2_j_y)));
  }

  c2_f_st.site = &c2_o_emlrtRSI;
  c2_g_a = c2_b_a;
  c2_h_a = c2_g_a;
  c2_c_p = true;
  c2_x = c2_h_a;
  c2_d_p = !(c2_x < 0.0);
  if (!c2_d_p) {
    c2_c_p = false;
  }

  if (c2_c_p) {
    c2_b = true;
  } else {
    c2_b = false;
  }

  if (!c2_b) {
    c2_k_y = NULL;
    sf_mex_assign(&c2_k_y, sf_mex_create("y", c2_b_cv10, 10, 0U, 1U, 0U, 2, 1,
      36), false);
    c2_l_y = NULL;
    sf_mex_assign(&c2_l_y, sf_mex_create("y", c2_b_cv11, 10, 0U, 1U, 0U, 2, 1,
      51), false);
    c2_m_y = NULL;
    sf_mex_assign(&c2_m_y, sf_mex_create("y", c2_b_cv12, 10, 0U, 1U, 0U, 2, 1,
      27), false);
    sf_mex_call(&c2_f_st, &c2_c_emlrtMCI, "error", 0U, 2U, 14, c2_k_y, 14,
                sf_mex_call(&c2_f_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_f_st, NULL, "message", 1U, 2U, 14, c2_l_y, 14, c2_m_y)));
  }

  c2_f_st.site = &c2_o_emlrtRSI;
  c2_i_a = c2_b_a;
  c2_j_a = c2_i_a;
  c2_e_p = true;
  c2_b_x = c2_j_a;
  c2_c_x = c2_b_x;
  c2_b_b = muDoubleScalarIsInf(c2_c_x);
  c2_b1 = !c2_b_b;
  c2_d_x = c2_b_x;
  c2_c_b = muDoubleScalarIsNaN(c2_d_x);
  c2_b2 = !c2_c_b;
  c2_d_b = (c2_b1 && c2_b2);
  if (!c2_d_b) {
    c2_e_p = false;
  }

  if (c2_e_p) {
    c2_b3 = true;
  } else {
    c2_b3 = false;
  }

  if (!c2_b3) {
    c2_n_y = NULL;
    sf_mex_assign(&c2_n_y, sf_mex_create("y", c2_b_cv13, 10, 0U, 1U, 0U, 2, 1,
      31), false);
    c2_o_y = NULL;
    sf_mex_assign(&c2_o_y, sf_mex_create("y", c2_cv2, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c2_p_y = NULL;
    sf_mex_assign(&c2_p_y, sf_mex_create("y", c2_b_cv14, 10, 0U, 1U, 0U, 2, 1,
      27), false);
    sf_mex_call(&c2_f_st, &c2_d_emlrtMCI, "error", 0U, 2U, 14, c2_n_y, 14,
                sf_mex_call(&c2_f_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_f_st, NULL, "message", 1U, 2U, 14, c2_o_y, 14, c2_p_y)));
  }

  c2_e_st.site = &c2_n_emlrtRSI;
  c2_k_obj = c2_transportObj;
  c2_transportObj = c2_k_obj;
  c2_f_st.site = &c2_p_emlrtRSI;
  c2_c_this = c2_transportObj;
  c2_transportObj = c2_c_this;
  c2_e_st.site = &c2_n_emlrtRSI;
  c2_l_obj = c2_transportObj;
  c2_transportObj = c2_l_obj;
  c2_f_st.site = &c2_q_emlrtRSI;
  c2_d_this = c2_transportObj;
  c2_transportObj = c2_d_this;
  c2_e_st.site = &c2_n_emlrtRSI;
  c2_m_obj = c2_transportObj;
  c2_transportObj = c2_m_obj;
  c2_f_st.site = &c2_r_emlrtRSI;
  c2_e_this = c2_transportObj;
  c2_transportObj = c2_e_this;
  c2_e_st.site = &c2_n_emlrtRSI;
  c2_f_this = c2_transportObj;
  c2_transportObj = c2_f_this;
  for (c2_i11 = 0; c2_i11 < 11; c2_i11++) {
    c2_transportObj->RemoteHost[c2_i11] = c2_hostName[c2_i11];
  }

  c2_transportObj->RemotePort = c2_portNumber;
  c2_e_st.site = &c2_n_emlrtRSI;
  c2_TCPClient_initializeChannel(chartInstance, &c2_e_st, c2_transportObj,
    &c2_transportObj->_pobj0, &c2_transportObj->_pobj1);
  c2_e_st.site = &c2_n_emlrtRSI;
  c2_n_obj = c2_transportObj;
  c2_n_obj->IsWriteOnly = false;
  c2_n_obj->IsSharingPort = false;
  c2_e_st.site = &c2_n_emlrtRSI;
  c2_o_obj = c2_transportObj;
  c2_f_st.site = &c2_n_emlrtRSI;
  c2_p_obj = c2_o_obj->TransportChannel;
  c2_b_size[1] = 0;
  c2_i12 = c2_p_obj->ByteOrder->size[0] * c2_p_obj->ByteOrder->size[1];
  c2_p_obj->ByteOrder->size[0] = 1;
  c2_p_obj->ByteOrder->size[1] = c2_b_size[1];
  c2_emxEnsureCapacity_char_T(chartInstance, &c2_f_st, c2_p_obj->ByteOrder,
    c2_i12, &c2_d_emlrtRTEI);
  c2_c_loop_ub = c2_b_size[1] - 1;
  for (c2_i13 = 0; c2_i13 <= c2_c_loop_ub; c2_i13++) {
    c2_p_obj->ByteOrder->data[c2_i13] = c2_b_data[c2_i13];
  }

  c2_i14 = c2_p_obj->ByteOrder->size[0] * c2_p_obj->ByteOrder->size[1];
  c2_p_obj->ByteOrder->size[0] = 1;
  c2_p_obj->ByteOrder->size[1] = 13;
  c2_emxEnsureCapacity_char_T(chartInstance, &c2_f_st, c2_p_obj->ByteOrder,
    c2_i14, &c2_d_emlrtRTEI);
  for (c2_i15 = 0; c2_i15 < 13; c2_i15++) {
    c2_p_obj->ByteOrder->data[c2_i15] = c2_cv1[c2_i15];
  }

  c2_b_size[1] = 0;
  c2_i16 = c2_o_obj->ByteOrder->size[0] * c2_o_obj->ByteOrder->size[1];
  c2_o_obj->ByteOrder->size[0] = 1;
  c2_o_obj->ByteOrder->size[1] = c2_b_size[1];
  c2_emxEnsureCapacity_char_T(chartInstance, &c2_e_st, c2_o_obj->ByteOrder,
    c2_i16, &c2_u_emlrtRTEI);
  c2_d_loop_ub = c2_b_size[1] - 1;
  for (c2_i17 = 0; c2_i17 <= c2_d_loop_ub; c2_i17++) {
    c2_o_obj->ByteOrder->data[c2_i17] = c2_b_data[c2_i17];
  }

  c2_emxInit_char_T(chartInstance, &c2_e_st, &c2_out, 2, &c2_u_emlrtRTEI);
  c2_f_st.site = &c2_n_emlrtRSI;
  c2_q_obj = c2_o_obj->TransportChannel;
  c2_i18 = c2_out->size[0] * c2_out->size[1];
  c2_out->size[0] = 1;
  c2_out->size[1] = c2_q_obj->ByteOrder->size[1];
  c2_emxEnsureCapacity_char_T(chartInstance, &c2_f_st, c2_out, c2_i18,
    &c2_d_emlrtRTEI);
  c2_e_loop_ub = c2_q_obj->ByteOrder->size[1] - 1;
  for (c2_i19 = 0; c2_i19 <= c2_e_loop_ub; c2_i19++) {
    c2_out->data[c2_i19] = c2_q_obj->ByteOrder->data[c2_i19];
  }

  c2_i20 = c2_o_obj->ByteOrder->size[0] * c2_o_obj->ByteOrder->size[1];
  c2_o_obj->ByteOrder->size[0] = 1;
  c2_o_obj->ByteOrder->size[1] = c2_out->size[1];
  c2_emxEnsureCapacity_char_T(chartInstance, &c2_e_st, c2_o_obj->ByteOrder,
    c2_i20, &c2_u_emlrtRTEI);
  c2_f_loop_ub = c2_out->size[1] - 1;
  for (c2_i21 = 0; c2_i21 <= c2_f_loop_ub; c2_i21++) {
    c2_o_obj->ByteOrder->data[c2_i21] = c2_out->data[c2_i21];
  }

  c2_emxFree_char_T(chartInstance, &c2_out);
  c2_e_st.site = &c2_n_emlrtRSI;
  c2_r_obj = c2_transportObj;
  c2_b_size[1] = 0;
  c2_i22 = c2_r_obj->NativeDataType->size[0] * c2_r_obj->NativeDataType->size[1];
  c2_r_obj->NativeDataType->size[0] = 1;
  c2_r_obj->NativeDataType->size[1] = c2_b_size[1];
  c2_emxEnsureCapacity_char_T(chartInstance, &c2_e_st, c2_r_obj->NativeDataType,
    c2_i22, &c2_u_emlrtRTEI);
  c2_g_loop_ub = c2_b_size[1] - 1;
  for (c2_i23 = 0; c2_i23 <= c2_g_loop_ub; c2_i23++) {
    c2_r_obj->NativeDataType->data[c2_i23] = c2_b_data[c2_i23];
  }

  c2_i24 = c2_r_obj->NativeDataType->size[0] * c2_r_obj->NativeDataType->size[1];
  c2_r_obj->NativeDataType->size[0] = 1;
  c2_r_obj->NativeDataType->size[1] = 5;
  c2_emxEnsureCapacity_char_T(chartInstance, &c2_e_st, c2_r_obj->NativeDataType,
    c2_i24, &c2_u_emlrtRTEI);
  for (c2_i25 = 0; c2_i25 < 5; c2_i25++) {
    c2_r_obj->NativeDataType->data[c2_i25] = c2_val[c2_i25];
  }

  c2_f_st.site = &c2_n_emlrtRSI;
  c2_s_obj = c2_r_obj->TransportChannel;
  c2_b_size[1] = 0;
  c2_i26 = c2_s_obj->NativeDataType->size[0] * c2_s_obj->NativeDataType->size[1];
  c2_s_obj->NativeDataType->size[0] = 1;
  c2_s_obj->NativeDataType->size[1] = c2_b_size[1];
  c2_emxEnsureCapacity_char_T(chartInstance, &c2_f_st, c2_s_obj->NativeDataType,
    c2_i26, &c2_d_emlrtRTEI);
  c2_h_loop_ub = c2_b_size[1] - 1;
  for (c2_i27 = 0; c2_i27 <= c2_h_loop_ub; c2_i27++) {
    c2_s_obj->NativeDataType->data[c2_i27] = c2_b_data[c2_i27];
  }

  c2_i28 = c2_s_obj->NativeDataType->size[0] * c2_s_obj->NativeDataType->size[1];
  c2_s_obj->NativeDataType->size[0] = 1;
  c2_s_obj->NativeDataType->size[1] = 5;
  c2_emxEnsureCapacity_char_T(chartInstance, &c2_f_st, c2_s_obj->NativeDataType,
    c2_i28, &c2_d_emlrtRTEI);
  for (c2_i29 = 0; c2_i29 < 5; c2_i29++) {
    c2_s_obj->NativeDataType->data[c2_i29] = c2_val[c2_i29];
  }

  c2_e_st.site = &c2_n_emlrtRSI;
  c2_t_obj = c2_transportObj;
  c2_b_size[1] = 0;
  c2_i30 = c2_t_obj->DataFieldName->size[0] * c2_t_obj->DataFieldName->size[1];
  c2_t_obj->DataFieldName->size[0] = 1;
  c2_t_obj->DataFieldName->size[1] = c2_b_size[1];
  c2_emxEnsureCapacity_char_T(chartInstance, &c2_e_st, c2_t_obj->DataFieldName,
    c2_i30, &c2_u_emlrtRTEI);
  c2_i_loop_ub = c2_b_size[1] - 1;
  for (c2_i31 = 0; c2_i31 <= c2_i_loop_ub; c2_i31++) {
    c2_t_obj->DataFieldName->data[c2_i31] = c2_b_data[c2_i31];
  }

  c2_i32 = c2_t_obj->DataFieldName->size[0] * c2_t_obj->DataFieldName->size[1];
  c2_t_obj->DataFieldName->size[0] = 1;
  c2_t_obj->DataFieldName->size[1] = 4;
  c2_emxEnsureCapacity_char_T(chartInstance, &c2_e_st, c2_t_obj->DataFieldName,
    c2_i32, &c2_u_emlrtRTEI);
  for (c2_i33 = 0; c2_i33 < 4; c2_i33++) {
    c2_t_obj->DataFieldName->data[c2_i33] = c2_b_val[c2_i33];
  }

  c2_f_st.site = &c2_n_emlrtRSI;
  c2_u_obj = c2_t_obj->TransportChannel;
  c2_b_size[1] = 0;
  c2_i34 = c2_u_obj->DataFieldName->size[0] * c2_u_obj->DataFieldName->size[1];
  c2_u_obj->DataFieldName->size[0] = 1;
  c2_u_obj->DataFieldName->size[1] = c2_b_size[1];
  c2_emxEnsureCapacity_char_T(chartInstance, &c2_f_st, c2_u_obj->DataFieldName,
    c2_i34, &c2_d_emlrtRTEI);
  c2_j_loop_ub = c2_b_size[1] - 1;
  for (c2_i35 = 0; c2_i35 <= c2_j_loop_ub; c2_i35++) {
    c2_u_obj->DataFieldName->data[c2_i35] = c2_b_data[c2_i35];
  }

  c2_i36 = c2_u_obj->DataFieldName->size[0] * c2_u_obj->DataFieldName->size[1];
  c2_u_obj->DataFieldName->size[0] = 1;
  c2_u_obj->DataFieldName->size[1] = 4;
  c2_emxEnsureCapacity_char_T(chartInstance, &c2_f_st, c2_u_obj->DataFieldName,
    c2_i36, &c2_d_emlrtRTEI);
  for (c2_i37 = 0; c2_i37 < 4; c2_i37++) {
    c2_u_obj->DataFieldName->data[c2_i37] = c2_b_val[c2_i37];
  }

  c2_transportObj->matlabCodegenIsDeleted = false;
  c2_i_obj->TcpIpObj = c2_transportObj;
  c2_b_st.site = &c2_c_emlrtRSI;
  c2_v_obj = c2_obj;
  c2_c_st.site = &c2_ic_emlrtRSI;
  c2_w_obj = c2_v_obj->TcpIpObj;
  c2_d_st.site = &c2_n_emlrtRSI;
  c2_x_obj = c2_w_obj->TransportChannel;
  c2_e_st.site = &c2_qb_emlrtRSI;
  c2_y_obj = c2_x_obj->AsyncIOChannel;
  c2_f_st.site = &c2_fc_emlrtRSI;
  c2_chImpl = c2_y_obj->ChannelImpl;
  c2_success = coderChannelIsOpen(c2_chImpl, &c2_b_out);
  c2_g_st.site = &c2_gc_emlrtRSI;
  c2_API_channelErrorIfFailed(chartInstance, &c2_g_st, c2_chImpl, c2_success);
  if (c2_b_out) {
    c2_value = true;
  } else {
    c2_value = false;
  }

  c2_b_value = c2_value;
  if ((!c2_b_value) && (!c2_v_obj->TransportInjected)) {
    c2_c_st.site = &c2_jc_emlrtRSI;
    c2_TCPClient_connect(chartInstance, &c2_c_st, c2_v_obj->TcpIpObj);
    c2_c_st.site = &c2_kc_emlrtRSI;
    c2_bb_obj = c2_v_obj->TcpIpObj;
    c2_db_obj = c2_bb_obj->TransportChannel;
    c2_db_obj->WriteAsync = false;
  }

  c2_b_st.site = &c2_d_emlrtRSI;
  c2_ab_obj = c2_obj;
  c2_c_st.site = &c2_nc_emlrtRSI;
  c2_cb_obj = c2_ab_obj;
  c2_d_st.site = &c2_rc_emlrtRSI;
  c2_eb_obj = &c2_cb_obj->Converter;
  c2_b_size[1] = 0;
  c2_i38 = c2_eb_obj->ByteOrder->size[0] * c2_eb_obj->ByteOrder->size[1];
  c2_eb_obj->ByteOrder->size[0] = 1;
  c2_eb_obj->ByteOrder->size[1] = c2_b_size[1];
  c2_emxEnsureCapacity_char_T(chartInstance, &c2_d_st, c2_eb_obj->ByteOrder,
    c2_i38, &c2_q_emlrtRTEI);
  c2_k_loop_ub = c2_b_size[1] - 1;
  for (c2_i39 = 0; c2_i39 <= c2_k_loop_ub; c2_i39++) {
    c2_eb_obj->ByteOrder->data[c2_i39] = c2_b_data[c2_i39];
  }

  c2_i40 = c2_eb_obj->ByteOrder->size[0] * c2_eb_obj->ByteOrder->size[1];
  c2_eb_obj->ByteOrder->size[0] = 1;
  c2_eb_obj->ByteOrder->size[1] = 10;
  c2_emxEnsureCapacity_char_T(chartInstance, &c2_d_st, c2_eb_obj->ByteOrder,
    c2_i40, &c2_r_emlrtRTEI);
  for (c2_i41 = 0; c2_i41 < 10; c2_i41++) {
    c2_eb_obj->ByteOrder->data[c2_i41] = c2_cv[c2_i41];
  }

  c2_c_st.site = &c2_oc_emlrtRSI;
  c2_fb_obj = c2_ab_obj;
  c2_d_st.site = &c2_sc_emlrtRSI;
  c2_gb_obj = &c2_fb_obj->Converter;
  c2_b_size[1] = 0;
  c2_i42 = c2_gb_obj->WordOrder->size[0] * c2_gb_obj->WordOrder->size[1];
  c2_gb_obj->WordOrder->size[0] = 1;
  c2_gb_obj->WordOrder->size[1] = c2_b_size[1];
  c2_emxEnsureCapacity_char_T(chartInstance, &c2_d_st, c2_gb_obj->WordOrder,
    c2_i42, &c2_s_emlrtRTEI);
  c2_l_loop_ub = c2_b_size[1] - 1;
  for (c2_i43 = 0; c2_i43 <= c2_l_loop_ub; c2_i43++) {
    c2_gb_obj->WordOrder->data[c2_i43] = c2_b_data[c2_i43];
  }

  c2_i44 = c2_gb_obj->WordOrder->size[0] * c2_gb_obj->WordOrder->size[1];
  c2_gb_obj->WordOrder->size[0] = 1;
  c2_gb_obj->WordOrder->size[1] = 10;
  c2_emxEnsureCapacity_char_T(chartInstance, &c2_d_st, c2_gb_obj->WordOrder,
    c2_i44, &c2_t_emlrtRTEI);
  for (c2_i45 = 0; c2_i45 < 10; c2_i45++) {
    c2_gb_obj->WordOrder->data[c2_i45] = c2_cv[c2_i45];
  }

  c2_c_st.site = &c2_pc_emlrtRSI;
  c2_hb_obj = c2_ab_obj;
  c2_hb_obj->NumRetries = 1.0;
  c2_c_st.site = &c2_qc_emlrtRSI;
  c2_ib_obj = c2_ab_obj;
  c2_d_st.site = &c2_tc_emlrtRSI;
  c2_jb_obj = c2_ib_obj;
  c2_b_transportObj = c2_ib_obj->TcpIpObj;
  if (!c2_jb_obj->TransportInjected) {
    c2_e_st.site = &c2_uc_emlrtRSI;
    c2_kb_obj = c2_b_transportObj;
    c2_f_st.site = &c2_n_emlrtRSI;
    c2_lb_obj = c2_kb_obj;
    c2_outputStream = &c2_lb_obj->AsyncIOChannel->OutputStream;
    c2_nb_obj = c2_outputStream;
    c2_nb_obj->Timeout = 10.0;
    c2_inputStream = &c2_lb_obj->AsyncIOChannel->InputStream;
    c2_qb_obj = c2_inputStream;
    c2_qb_obj->Timeout = 10.0;
    c2_kb_obj->Timeout = 10.0;
  }

  c2_jb_obj->TransactionTimeout = 10.0;
  c2_jb_obj->RetryCount = 0.0;
  c2_b_st.site = &c2_e_emlrtRSI;
  c2_mb_obj = &c2_obj->PacketBuilder;
  c2_converter = &c2_obj->Converter;
  c2_ob_obj = c2_mb_obj;
  c2_c_st.site = &c2_vc_emlrtRSI;
  c2_pb_obj = c2_ob_obj;
  c2_b_converter = c2_converter;
  c2_ob_obj = c2_pb_obj;
  c2_d_st.site = &c2_wc_emlrtRSI;
  c2_g_this = c2_ob_obj;
  c2_ob_obj = c2_g_this;
  c2_ob_obj->Converter = c2_b_converter;
  c2_ob_obj->TransactionId = 1.0;
  c2_obj->matlabCodegenIsDeleted = false;
  return c2_obj;
}

static void c2_TCPClient_initializeChannel(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_matlabshared_network_internal_TCPClient *c2_obj,
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_iobj_0,
  c2_matlabshared_asyncio_internal_Channel *c2_iobj_1)
{
  static c2_syRUN6P8dnDtW4zHaczOEwG c2_r = { true,/* InitAccess */
    true,                              /* TransferDelay */
    0ULL                               /* LatestNumBytesWrittenToDevice */
  };

  static real_T c2_streamLimits[2] = { 0.0, 0.0 };

  static int32_T c2_iv[2] = { 1, 2 };

  static char_T c2_b_cv12[44] = { 't', 'e', 's', 't', 'm', 'e', 'a', 's', 'l',
    'i', 'b', ':', 'A', 's', 'y', 'n', 'c', 'i', 'o', 'B', 'u', 'f', 'f', 'e',
    'r', ':', 'W', 'r', 'o', 'n', 'g', 'M', 'A', 'T', 'L', 'A', 'B', 'V', 'e',
    'r', 's', 'i', 'o', 'n' };

  static char_T c2_b_cv14[44] = { 't', 'o', 'o', 'l', 'b', 'o', 'x', '\\', 's',
    'h', 'a', 'r', 'e', 'd', '\\', 't', 'e', 's', 't', 'm', 'e', 'a', 's', 'l',
    'i', 'b', '\\', 'g', 'e', 'n', 'e', 'r', 'a', 'l', '\\', 'b', 'i', 'n', '\\',
    'w', 'i', 'n', '6', '4' };

  static char_T c2_b_cv16[42] = { 't', 'e', 's', 't', 'm', 'e', 'a', 's', 'l',
    'i', 'b', ':', 'A', 's', 'y', 'n', 'c', 'i', 'o', 'B', 'u', 'f', 'f', 'e',
    'r', ':', 'C', 'a', 'n', 'n', 'o', 't', 'F', 'i', 'n', 'd', 'P', 'l', 'u',
    'g', 'i', 'n' };

  static char_T c2_b_cv3[36] = { 'n', 'e', 't', 'w', 'o', 'r', 'k', ':', 't',
    'c', 'p', 'c', 'l', 'i', 'e', 'n', 't', ':', 'W', 'r', 'o', 'n', 'g', 'M',
    'A', 'T', 'L', 'A', 'B', 'V', 'e', 'r', 's', 'i', 'o', 'n' };

  static char_T c2_b_cv5[35] = { 't', 'o', 'o', 'l', 'b', 'o', 'x', '\\', 's',
    'h', 'a', 'r', 'e', 'd', '\\', 'n', 'e', 't', 'w', 'o', 'r', 'k', 'l', 'i',
    'b', '\\', 'b', 'i', 'n', '\\', 'w', 'i', 'n', '6', '4' };

  static char_T c2_b_cv8[35] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'C',
    'h', 'a', 'n', 'n', 'e', 'l', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'S',
    't', 'r', 'e', 'a', 'm', 'L', 'i', 'm', 'i', 't', 's' };

  static char_T c2_b_cv7[34] = { 'n', 'e', 't', 'w', 'o', 'r', 'k', ':', 't',
    'c', 'p', 'c', 'l', 'i', 'e', 'n', 't', ':', 'C', 'a', 'n', 'n', 'o', 't',
    'F', 'i', 'n', 'd', 'P', 'l', 'u', 'g', 'i', 'n' };

  static char_T c2_converterFullName[25] = { 'n', 'e', 't', 'w', 'o', 'r', 'k',
    'c', 'o', 'd', 'e', 'r', 'c', 'o', 'n', 'v', 'e', 'r', 't', 'e', 'r', '.',
    'd', 'l', 'l' };

  static char_T c2_b_converterFullName[24] = { 'b', 'u', 'f', 'f', 'e', 'r', 'c',
    'o', 'd', 'e', 'r', 'c', 'o', 'n', 'v', 'e', 'r', 't', 'e', 'r', '.', 'd',
    'l', 'l' };

  static char_T c2_deviceFullName[19] = { 't', 'c', 'p', 'c', 'l', 'i', 'e', 'n',
    't', 'd', 'e', 'v', 'i', 'c', 'e', '.', 'd', 'l', 'l' };

  static char_T c2_b_deviceFullName[10] = { 'b', 'u', 'f', 'f', 'e', 'r', '.',
    'd', 'l', 'l' };

  static char_T c2_b_cv11[8] = { '(', 'R', '2', '0', '2', '3', 'a', ')' };

  static char_T c2_b_cv2[8] = { '(', 'R', '2', '0', '2', '3', 'a', ')' };

  static char_T c2_b_cv1[7] = { 'R', 'e', 'l', 'e', 'a', 's', 'e' };

  static char_T c2_b_cv10[7] = { 'R', 'e', 'l', 'e', 'a', 's', 'e' };

  static char_T c2_b_cv[6] = { 'm', 'a', 't', 'l', 'a', 'b' };

  static char_T c2_b_cv9[6] = { 'm', 'a', 't', 'l', 'a', 'b' };

  static char_T c2_b_cv13[5] = { 'w', 'i', 'n', '6', '4' };

  static char_T c2_b_cv4[5] = { 'w', 'i', 'n', '6', '4' };

  static char_T c2_b_val[5] = { 'u', 'i', 'n', 't', '8' };

  static char_T c2_b_cv15[4] = { 'f', 'i', 'l', 'e' };

  static char_T c2_b_cv6[4] = { 'f', 'i', 'l', 'e' };

  static char_T c2_val[4] = { 'D', 'a', 't', 'a' };

  CoderChannel c2_b_chImpl;
  CoderChannel c2_c_chImpl;
  CoderChannel c2_chImpl;
  CoderChannel c2_d_chImpl;
  CoderChannel c2_e_chImpl;
  CoderChannel c2_f_chImpl;
  c2_cell_11 c2_args;
  c2_emxArray_char_T *c2_b_value;
  c2_matlabshared_asyncio_buffer_internal_BufferChannel *c2_d_this;
  c2_matlabshared_asyncio_buffer_internal_BufferChannel *c2_e_this;
  c2_matlabshared_asyncio_buffer_internal_BufferChannel *c2_j_obj;
  c2_matlabshared_asyncio_buffer_internal_BufferChannel *c2_k_obj;
  c2_matlabshared_asyncio_buffer_internal_BufferChannel *c2_l_obj;
  c2_matlabshared_asyncio_buffer_internal_BufferChannel *c2_m_obj;
  c2_matlabshared_asyncio_buffer_internal_BufferChannel *c2_n_obj;
  c2_matlabshared_asyncio_buffer_internal_BufferChannel *c2_o_obj;
  c2_matlabshared_asyncio_buffer_internal_BufferChannel *c2_p_obj;
  c2_matlabshared_asyncio_buffer_internal_BufferChannel *c2_q_obj;
  c2_matlabshared_asyncio_internal_Channel *c2_b_obj;
  c2_matlabshared_asyncio_internal_Channel *c2_c_obj;
  c2_matlabshared_asyncio_internal_Channel *c2_channel;
  c2_matlabshared_asyncio_internal_Channel *c2_this;
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_b_this;
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_c_this;
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_d_obj;
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_e_obj;
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_f_obj;
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_g_obj;
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_h_obj;
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_i_obj;
  c2_s_puOqsSoDdBk28aK0dkajGG c2_options;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  emlrtStack c2_st;
  const mxArray *c2_ab_y = NULL;
  const mxArray *c2_b_thisMLVersion = NULL;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_bb_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_cb_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_db_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_eb_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_fb_y = NULL;
  const mxArray *c2_g_y = NULL;
  const mxArray *c2_gb_y = NULL;
  const mxArray *c2_h_y = NULL;
  const mxArray *c2_hb_y = NULL;
  const mxArray *c2_i_y = NULL;
  const mxArray *c2_ib_y = NULL;
  const mxArray *c2_j_y = NULL;
  const mxArray *c2_k_y = NULL;
  const mxArray *c2_n_y = NULL;
  const mxArray *c2_o_y = NULL;
  const mxArray *c2_p_y = NULL;
  const mxArray *c2_q_y = NULL;
  const mxArray *c2_r_y = NULL;
  const mxArray *c2_s_y = NULL;
  const mxArray *c2_t_y = NULL;
  const mxArray *c2_thisMLVersion = NULL;
  const mxArray *c2_u_y = NULL;
  const mxArray *c2_v_y = NULL;
  const mxArray *c2_w_y = NULL;
  const mxArray *c2_x_y = NULL;
  const mxArray *c2_y = NULL;
  const mxArray *c2_y_y = NULL;
  real_T c2_b_streamLimits[2];
  real_T c2_d;
  int32_T c2_b_converterFullPathML_size[2];
  int32_T c2_b_converterPluginPath_size[2];
  int32_T c2_converterFullPathML_size[2];
  int32_T c2_converterPath_size[2];
  int32_T c2_converterPluginPath_size[2];
  int32_T c2_converterPlugin_size[2];
  int32_T c2_deviceFullPathML_size[2];
  int32_T c2_devicePath_size[2];
  int32_T c2_devicePluginPath_size[2];
  int32_T c2_devicePlugin_size[2];
  int32_T c2_out_size[2];
  int32_T c2_thisMatlabRoot_size[2];
  int32_T c2_ab_loop_ub;
  int32_T c2_b_loop_ub;
  int32_T c2_b_success;
  int32_T c2_bb_loop_ub;
  int32_T c2_c_loop_ub;
  int32_T c2_c_success;
  int32_T c2_cb_loop_ub;
  int32_T c2_d_loop_ub;
  int32_T c2_d_success;
  int32_T c2_db_loop_ub;
  int32_T c2_e_loop_ub;
  int32_T c2_eb_loop_ub;
  int32_T c2_f_loop_ub;
  int32_T c2_fb_loop_ub;
  int32_T c2_g_loop_ub;
  int32_T c2_h_loop_ub;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i2;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_i24;
  int32_T c2_i25;
  int32_T c2_i26;
  int32_T c2_i27;
  int32_T c2_i28;
  int32_T c2_i29;
  int32_T c2_i3;
  int32_T c2_i30;
  int32_T c2_i31;
  int32_T c2_i32;
  int32_T c2_i33;
  int32_T c2_i34;
  int32_T c2_i35;
  int32_T c2_i36;
  int32_T c2_i37;
  int32_T c2_i38;
  int32_T c2_i39;
  int32_T c2_i4;
  int32_T c2_i40;
  int32_T c2_i41;
  int32_T c2_i42;
  int32_T c2_i43;
  int32_T c2_i44;
  int32_T c2_i45;
  int32_T c2_i46;
  int32_T c2_i47;
  int32_T c2_i48;
  int32_T c2_i49;
  int32_T c2_i5;
  int32_T c2_i50;
  int32_T c2_i51;
  int32_T c2_i52;
  int32_T c2_i53;
  int32_T c2_i54;
  int32_T c2_i55;
  int32_T c2_i56;
  int32_T c2_i57;
  int32_T c2_i58;
  int32_T c2_i59;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_i_loop_ub;
  int32_T c2_j_loop_ub;
  int32_T c2_k_loop_ub;
  int32_T c2_l_loop_ub;
  int32_T c2_loop_ub;
  int32_T c2_m_loop_ub;
  int32_T c2_n_loop_ub;
  int32_T c2_o_loop_ub;
  int32_T c2_p_loop_ub;
  int32_T c2_q_loop_ub;
  int32_T c2_r_loop_ub;
  int32_T c2_s_loop_ub;
  int32_T c2_success;
  int32_T c2_t_loop_ub;
  int32_T c2_u_loop_ub;
  int32_T c2_v_loop_ub;
  int32_T c2_w_loop_ub;
  int32_T c2_x_loop_ub;
  int32_T c2_y_loop_ub;
  uint32_T c2_b_u;
  char_T c2_errorID[1024];
  char_T c2_errorText[1024];
  char_T c2_b_converterPluginPath_data[583];
  char_T c2_out_data[583];
  char_T c2_b_converterFullPathML_data[582];
  char_T c2_converterPath_data[582];
  char_T c2_converterPluginPath_data[575];
  char_T c2_converterFullPathML_data[574];
  char_T c2_converterPlugin_data[574];
  char_T c2_devicePluginPath_data[569];
  char_T c2_deviceFullPathML_data[568];
  char_T c2_devicePath_data[568];
  char_T c2_devicePlugin_data[568];
  char_T c2_thisMatlabRoot_data[512];
  char_T c2_value[11];
  boolean_T c2_b[2];
  boolean_T c2_b_b;
  boolean_T c2_invalidStreamLimits;
  boolean_T c2_l_y;
  boolean_T c2_m_y;
  boolean_T c2_result;
  c2_streamLimits[0U] = rtInf;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_emxInitStruct_s_puOqsSoDdBk28aK(chartInstance, c2_sp, &c2_options,
    &c2_u_emlrtRTEI);
  for (c2_i = 0; c2_i < 11; c2_i++) {
    c2_options.HostName[c2_i] = c2_obj->RemoteHost[c2_i];
  }

  c2_st.site = &c2_n_emlrtRSI;
  c2_d = muDoubleScalarRound(c2_obj->RemotePort);
  if (c2_d < 4.294967296E+9) {
    if (c2_d >= 0.0) {
      c2_b_u = (uint32_T)c2_d;
    } else {
      c2_b_u = 0U;
    }
  } else if (c2_d >= 4.294967296E+9) {
    c2_b_u = MAX_uint32_T;
  } else {
    c2_b_u = 0U;
  }

  c2_sprintf(chartInstance, &c2_st, c2_b_u, c2_options.ServiceName);
  c2_st.site = &c2_n_emlrtRSI;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 6),
                false);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c2_b_st.site = &c2_n_emlrtRSI;
  sf_mex_assign(&c2_thisMLVersion, c2_getfield(chartInstance, &c2_b_st, c2_ver
    (chartInstance, &c2_b_st, c2_y), c2_b_y), false);
  c2_b_st.site = &c2_n_emlrtRSI;
  c2_e_emlrt_marshallIn(chartInstance, c2_matlabroot(chartInstance, &c2_b_st),
                        "<output of matlabroot>", c2_thisMatlabRoot_data,
                        c2_thisMatlabRoot_size);
  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_b_cv2, 10, 0U, 1U, 0U, 2, 1, 8),
                false);
  c2_b_st.site = &c2_n_emlrtRSI;
  if (c2_g_emlrt_marshallIn(chartInstance,
       c2_coder_internal_ifWhileCondExtrinsic(chartInstance, &c2_b_st,
        c2_j_strcmp(chartInstance, &c2_b_st, sf_mex_dup(c2_thisMLVersion),
                    c2_c_y)), "<output of coder.internal.ifWhileCondExtrinsic>"))
  {
    c2_deviceFullPathML_size[1] = c2_thisMatlabRoot_size[1] + 56;
    c2_loop_ub = c2_thisMatlabRoot_size[1] - 1;
    for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
      c2_deviceFullPathML_data[c2_i1] = c2_thisMatlabRoot_data[c2_i1];
    }

    c2_deviceFullPathML_data[c2_thisMatlabRoot_size[1]] = '\\';
    for (c2_i2 = 0; c2_i2 < 35; c2_i2++) {
      c2_deviceFullPathML_data[(c2_i2 + c2_thisMatlabRoot_size[1]) + 1] =
        c2_b_cv5[c2_i2];
    }

    c2_deviceFullPathML_data[c2_thisMatlabRoot_size[1] + 36] = '\\';
    for (c2_i3 = 0; c2_i3 < 19; c2_i3++) {
      c2_deviceFullPathML_data[(c2_i3 + c2_thisMatlabRoot_size[1]) + 37] =
        c2_deviceFullName[c2_i3];
    }

    c2_h_y = NULL;
    sf_mex_assign(&c2_h_y, sf_mex_create("y", &c2_deviceFullPathML_data, 10, 0U,
      1U, 0U, 2, 1, c2_deviceFullPathML_size[1]), false);
    c2_i_y = NULL;
    sf_mex_assign(&c2_i_y, sf_mex_create("y", c2_b_cv6, 10, 0U, 1U, 0U, 2, 1, 4),
                  false);
    c2_b_st.site = &c2_n_emlrtRSI;
    if (c2_g_emlrt_marshallIn(chartInstance,
         c2_b_coder_internal_ifWhileCondExtrinsic(chartInstance, &c2_b_st,
          c2_exist(chartInstance, &c2_b_st, c2_h_y, c2_i_y)),
         "<output of coder.internal.ifWhileCondExtrinsic>")) {
      c2_devicePlugin_size[1] = c2_deviceFullPathML_size[1];
      c2_b_loop_ub = c2_deviceFullPathML_size[1] - 1;
      for (c2_i4 = 0; c2_i4 <= c2_b_loop_ub; c2_i4++) {
        c2_devicePlugin_data[c2_i4] = c2_deviceFullPathML_data[c2_i4];
      }
    } else {
      c2_j_y = NULL;
      sf_mex_assign(&c2_j_y, sf_mex_create("y", c2_b_cv7, 10, 0U, 1U, 0U, 2, 1,
        34), false);
      c2_k_y = NULL;
      sf_mex_assign(&c2_k_y, sf_mex_create("y", c2_b_cv7, 10, 0U, 1U, 0U, 2, 1,
        34), false);
      sf_mex_call(&c2_st, &c2_e_emlrtMCI, "error", 0U, 2U, 14, c2_j_y, 14,
                  sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (&c2_st, NULL, "message", 1U, 1U, 14, c2_k_y)));
    }

    c2_converterFullPathML_size[1] = c2_thisMatlabRoot_size[1] + 62;
    c2_c_loop_ub = c2_thisMatlabRoot_size[1] - 1;
    for (c2_i6 = 0; c2_i6 <= c2_c_loop_ub; c2_i6++) {
      c2_converterFullPathML_data[c2_i6] = c2_thisMatlabRoot_data[c2_i6];
    }

    c2_converterFullPathML_data[c2_thisMatlabRoot_size[1]] = '\\';
    for (c2_i8 = 0; c2_i8 < 35; c2_i8++) {
      c2_converterFullPathML_data[(c2_i8 + c2_thisMatlabRoot_size[1]) + 1] =
        c2_b_cv5[c2_i8];
    }

    c2_converterFullPathML_data[c2_thisMatlabRoot_size[1] + 36] = '\\';
    for (c2_i9 = 0; c2_i9 < 25; c2_i9++) {
      c2_converterFullPathML_data[(c2_i9 + c2_thisMatlabRoot_size[1]) + 37] =
        c2_converterFullName[c2_i9];
    }

    c2_p_y = NULL;
    sf_mex_assign(&c2_p_y, sf_mex_create("y", &c2_converterFullPathML_data, 10,
      0U, 1U, 0U, 2, 1, c2_converterFullPathML_size[1]), false);
    c2_q_y = NULL;
    sf_mex_assign(&c2_q_y, sf_mex_create("y", c2_b_cv6, 10, 0U, 1U, 0U, 2, 1, 4),
                  false);
    c2_b_st.site = &c2_n_emlrtRSI;
    if (c2_g_emlrt_marshallIn(chartInstance,
         c2_c_coder_internal_ifWhileCondExtrinsic(chartInstance, &c2_b_st,
          c2_b_exist(chartInstance, &c2_b_st, c2_p_y, c2_q_y)),
         "<output of coder.internal.ifWhileCondExtrinsic>")) {
      c2_converterPlugin_size[1] = c2_converterFullPathML_size[1];
      c2_f_loop_ub = c2_converterFullPathML_size[1] - 1;
      for (c2_i12 = 0; c2_i12 <= c2_f_loop_ub; c2_i12++) {
        c2_converterPlugin_data[c2_i12] = c2_converterFullPathML_data[c2_i12];
      }
    } else {
      c2_r_y = NULL;
      sf_mex_assign(&c2_r_y, sf_mex_create("y", c2_b_cv7, 10, 0U, 1U, 0U, 2, 1,
        34), false);
      c2_s_y = NULL;
      sf_mex_assign(&c2_s_y, sf_mex_create("y", c2_b_cv7, 10, 0U, 1U, 0U, 2, 1,
        34), false);
      sf_mex_call(&c2_st, &c2_e_emlrtMCI, "error", 0U, 2U, 14, c2_r_y, 14,
                  sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (&c2_st, NULL, "message", 1U, 1U, 14, c2_s_y)));
    }
  } else {
    c2_d_y = NULL;
    sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_b_cv3, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    c2_e_y = NULL;
    sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_b_cv3, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    c2_f_y = NULL;
    sf_mex_assign(&c2_f_y, sf_mex_create("y", c2_b_cv2, 10, 0U, 1U, 0U, 2, 1, 8),
                  false);
    c2_g_y = NULL;
    sf_mex_assign(&c2_g_y, sf_mex_create("y", c2_b_cv4, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(&c2_st, &c2_e_emlrtMCI, "error", 0U, 2U, 14, c2_d_y, 14,
                sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_st, NULL, "message", 1U, 3U, 14, c2_e_y, 14, c2_f_y, 14, c2_g_y)));
  }

  sf_mex_destroy(&c2_thisMLVersion);
  c2_st.site = &c2_n_emlrtRSI;
  c2_b_obj = c2_iobj_1;
  c2_b_streamLimits[0] = c2_obj->InputBufferSize;
  c2_b_streamLimits[1] = c2_obj->OutputBufferSize;
  c2_c_obj = c2_b_obj;
  c2_b_st.site = &c2_v_emlrtRSI;
  c2_this = c2_c_obj;
  c2_c_obj = c2_this;
  c2_c_obj->CustomProps = c2_r;
  for (c2_i5 = 0; c2_i5 < 2; c2_i5++) {
    c2_b[c2_i5] = muDoubleScalarIsNaN(c2_b_streamLimits[c2_i5]);
  }

  c2_l_y = c2_vectorAny(chartInstance, c2_b, c2_iv);
  if (c2_l_y) {
    c2_invalidStreamLimits = true;
  } else {
    for (c2_i7 = 0; c2_i7 < 2; c2_i7++) {
      c2_b[c2_i7] = (c2_b_streamLimits[c2_i7] < 0.0);
    }

    c2_m_y = c2_vectorAny(chartInstance, c2_b, c2_iv);
    if (c2_m_y) {
      c2_invalidStreamLimits = true;
    } else {
      c2_invalidStreamLimits = false;
    }
  }

  if (c2_invalidStreamLimits) {
    c2_n_y = NULL;
    sf_mex_assign(&c2_n_y, sf_mex_create("y", c2_b_cv8, 10, 0U, 1U, 0U, 2, 1, 35),
                  false);
    c2_o_y = NULL;
    sf_mex_assign(&c2_o_y, sf_mex_create("y", c2_b_cv8, 10, 0U, 1U, 0U, 2, 1, 35),
                  false);
    sf_mex_call(&c2_st, &c2_f_emlrtMCI, "error", 0U, 2U, 14, c2_n_y, 14,
                sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_st, NULL, "message", 1U, 1U, 14, c2_o_y)));
  }

  c2_c_obj->ChannelImpl = 0;
  c2_b_st.site = &c2_w_emlrtRSI;
  c2_devicePluginPath_size[1] = c2_devicePlugin_size[1];
  c2_d_loop_ub = c2_devicePlugin_size[1] - 1;
  for (c2_i10 = 0; c2_i10 <= c2_d_loop_ub; c2_i10++) {
    c2_devicePluginPath_data[c2_i10] = c2_devicePlugin_data[c2_i10];
  }

  c2_converterPluginPath_size[1] = c2_converterPlugin_size[1];
  c2_e_loop_ub = c2_converterPlugin_size[1] - 1;
  for (c2_i11 = 0; c2_i11 <= c2_e_loop_ub; c2_i11++) {
    c2_converterPluginPath_data[c2_i11] = c2_converterPlugin_data[c2_i11];
  }

  c2_b_converterFullPathML_size[1] = c2_devicePluginPath_size[1];
  c2_g_loop_ub = c2_devicePluginPath_size[1] - 1;
  for (c2_i13 = 0; c2_i13 <= c2_g_loop_ub; c2_i13++) {
    c2_b_converterFullPathML_data[c2_i13] = c2_devicePluginPath_data[c2_i13];
  }

  c2_out_size[1] = c2_b_converterFullPathML_size[1] + 1;
  c2_h_loop_ub = c2_b_converterFullPathML_size[1] - 1;
  for (c2_i14 = 0; c2_i14 <= c2_h_loop_ub; c2_i14++) {
    c2_out_data[c2_i14] = c2_b_converterFullPathML_data[c2_i14];
  }

  c2_out_data[c2_b_converterFullPathML_size[1]] = '\x00';
  c2_i_loop_ub = c2_out_size[1] - 1;
  for (c2_i15 = 0; c2_i15 <= c2_i_loop_ub; c2_i15++) {
    c2_devicePluginPath_data[c2_i15] = c2_out_data[c2_i15];
  }

  c2_b_converterFullPathML_size[1] = c2_converterPluginPath_size[1];
  c2_j_loop_ub = c2_converterPluginPath_size[1] - 1;
  for (c2_i16 = 0; c2_i16 <= c2_j_loop_ub; c2_i16++) {
    c2_b_converterFullPathML_data[c2_i16] = c2_converterPluginPath_data[c2_i16];
  }

  c2_out_size[1] = c2_b_converterFullPathML_size[1] + 1;
  c2_k_loop_ub = c2_b_converterFullPathML_size[1] - 1;
  for (c2_i17 = 0; c2_i17 <= c2_k_loop_ub; c2_i17++) {
    c2_out_data[c2_i17] = c2_b_converterFullPathML_data[c2_i17];
  }

  c2_out_data[c2_b_converterFullPathML_size[1]] = '\x00';
  c2_l_loop_ub = c2_out_size[1] - 1;
  for (c2_i18 = 0; c2_i18 <= c2_l_loop_ub; c2_i18++) {
    c2_converterPluginPath_data[c2_i18] = c2_out_data[c2_i18];
  }

  c2_chImpl = coderChannelCreate(&c2_devicePluginPath_data[0],
    &c2_converterPluginPath_data[0], c2_b_streamLimits[0], c2_b_streamLimits[1],
    &c2_errorID[0], &c2_errorText[0]);
  if (c2_chImpl == 0) {
    c2_c_st.site = &c2_bb_emlrtRSI;
    c2_API_dispatchInternalError(chartInstance, &c2_c_st, c2_errorID,
      c2_errorText);
  }

  c2_c_obj->ChannelImpl = c2_chImpl;
  c2_b_st.site = &c2_x_emlrtRSI;
  c2_b_chImpl = c2_c_obj->ChannelImpl;
  c2_emxInitStruct_cell_11(chartInstance, &c2_b_st, &c2_args, &c2_u_emlrtRTEI);
  c2_args.f1 = "HostName";
  c2_args.f2 = "char";
  for (c2_i19 = 0; c2_i19 < 11; c2_i19++) {
    c2_value[c2_i19] = c2_options.HostName[c2_i19];
  }

  for (c2_i20 = 0; c2_i20 < 11; c2_i20++) {
    c2_args.f4[c2_i20] = c2_value[c2_i20];
  }

  c2_args.f5 = "ServiceName";
  c2_args.f6 = "char";
  c2_args.f7 = c2_options.ServiceName->size[1];
  c2_b_b = (c2_options.ServiceName->size[1] == 1);
  c2_emxInit_char_T(chartInstance, &c2_b_st, &c2_b_value, 2, &c2_db_emlrtRTEI);
  if (c2_b_b) {
    c2_i22 = c2_b_value->size[0] * c2_b_value->size[1];
    c2_b_value->size[0] = 1;
    c2_b_value->size[1] = c2_options.ServiceName->size[1] +
      c2_options.ServiceName->size[1];
    c2_emxEnsureCapacity_char_T(chartInstance, &c2_b_st, c2_b_value, c2_i22,
      &c2_db_emlrtRTEI);
    c2_n_loop_ub = c2_options.ServiceName->size[1] - 1;
    for (c2_i24 = 0; c2_i24 <= c2_n_loop_ub; c2_i24++) {
      c2_b_value->data[c2_i24] = c2_options.ServiceName->data[c2_i24];
    }

    c2_o_loop_ub = c2_options.ServiceName->size[1] - 1;
    for (c2_i25 = 0; c2_i25 <= c2_o_loop_ub; c2_i25++) {
      c2_b_value->data[c2_i25 + c2_options.ServiceName->size[1]] =
        c2_options.ServiceName->data[c2_i25];
    }
  } else {
    c2_i21 = c2_b_value->size[0] * c2_b_value->size[1];
    c2_b_value->size[0] = 1;
    c2_b_value->size[1] = c2_options.ServiceName->size[1];
    c2_emxEnsureCapacity_char_T(chartInstance, &c2_b_st, c2_b_value, c2_i21,
      &c2_f_emlrtRTEI);
    c2_m_loop_ub = c2_options.ServiceName->size[1] - 1;
    for (c2_i23 = 0; c2_i23 <= c2_m_loop_ub; c2_i23++) {
      c2_b_value->data[c2_i23] = c2_options.ServiceName->data[c2_i23];
    }
  }

  c2_emxFreeStruct_s_puOqsSoDdBk28aK(chartInstance, &c2_options);
  c2_i26 = c2_args.f8->size[0] * c2_args.f8->size[1];
  c2_args.f8->size[0] = 1;
  c2_args.f8->size[1] = c2_b_value->size[1];
  c2_emxEnsureCapacity_char_T(chartInstance, &c2_b_st, c2_args.f8, c2_i26,
    &c2_eb_emlrtRTEI);
  c2_p_loop_ub = c2_b_value->size[1] - 1;
  for (c2_i27 = 0; c2_i27 <= c2_p_loop_ub; c2_i27++) {
    c2_args.f8->data[c2_i27] = c2_b_value->data[c2_i27];
  }

  for (c2_i28 = 0; c2_i28 < 11; c2_i28++) {
    c2_value[c2_i28] = c2_args.f4[c2_i28];
  }

  c2_i29 = c2_b_value->size[0] * c2_b_value->size[1];
  c2_b_value->size[0] = 1;
  c2_b_value->size[1] = c2_args.f8->size[1];
  c2_emxEnsureCapacity_char_T(chartInstance, &c2_b_st, c2_b_value, c2_i29,
    &c2_fb_emlrtRTEI);
  c2_q_loop_ub = c2_args.f8->size[1] - 1;
  for (c2_i30 = 0; c2_i30 <= c2_q_loop_ub; c2_i30++) {
    c2_b_value->data[c2_i30] = c2_args.f8->data[c2_i30];
  }

  c2_success = coderChannelInit(c2_b_chImpl, 2, c2_args.f1, c2_args.f2, 11,
    &c2_value[0], c2_args.f5, c2_args.f6, c2_args.f7, &c2_b_value->data[0]);
  c2_emxFree_char_T(chartInstance, &c2_b_value);
  c2_emxFreeStruct_cell_11(chartInstance, &c2_args);
  c2_c_st.site = &c2_db_emlrtRSI;
  c2_API_channelErrorIfFailed(chartInstance, &c2_c_st, c2_b_chImpl, c2_success);
  c2_b_st.site = &c2_y_emlrtRSI;
  c2_InputStream_InputStream(chartInstance, &c2_b_st, &c2_c_obj->InputStream,
    c2_c_obj->ChannelImpl);
  c2_b_st.site = &c2_ab_emlrtRSI;
  c2_OutputStream_OutputStream(chartInstance, &c2_b_st, &c2_c_obj->OutputStream,
    c2_c_obj->ChannelImpl);
  c2_c_obj->matlabCodegenIsDeleted = false;
  c2_obj->AsyncIOChannel = c2_c_obj;
  c2_st.site = &c2_n_emlrtRSI;
  c2_d_obj = c2_iobj_0;
  c2_channel = c2_obj->AsyncIOChannel;
  c2_e_obj = c2_d_obj;
  c2_e_obj->NumBytesWritten = 0.0;
  c2_e_obj->AllowPartialReads = false;
  c2_e_obj->WriteAsync = true;
  c2_b_st.site = &c2_qb_emlrtRSI;
  c2_b_this = c2_e_obj;
  c2_e_obj = c2_b_this;
  c2_b_st.site = &c2_qb_emlrtRSI;
  c2_f_obj = c2_e_obj;
  c2_e_obj = c2_f_obj;
  c2_c_st.site = &c2_rb_emlrtRSI;
  c2_c_this = c2_e_obj;
  c2_e_obj = c2_c_this;
  for (c2_i31 = 0; c2_i31 < 13; c2_i31++) {
    c2_e_obj->MachineByteOrder[c2_i31] = c2_cv1[c2_i31];
  }

  c2_e_obj->AsyncIOChannel = c2_channel;
  c2_b_st.site = &c2_qb_emlrtRSI;
  c2_g_obj = c2_e_obj;
  c2_thisMatlabRoot_size[1] = 0;
  c2_i32 = c2_g_obj->ByteOrder->size[0] * c2_g_obj->ByteOrder->size[1];
  c2_g_obj->ByteOrder->size[0] = 1;
  c2_g_obj->ByteOrder->size[1] = c2_thisMatlabRoot_size[1];
  c2_emxEnsureCapacity_char_T(chartInstance, &c2_b_st, c2_g_obj->ByteOrder,
    c2_i32, &c2_d_emlrtRTEI);
  c2_r_loop_ub = c2_thisMatlabRoot_size[1] - 1;
  for (c2_i33 = 0; c2_i33 <= c2_r_loop_ub; c2_i33++) {
    c2_g_obj->ByteOrder->data[c2_i33] = c2_thisMatlabRoot_data[c2_i33];
  }

  c2_i34 = c2_g_obj->ByteOrder->size[0] * c2_g_obj->ByteOrder->size[1];
  c2_g_obj->ByteOrder->size[0] = 1;
  c2_g_obj->ByteOrder->size[1] = 13;
  c2_emxEnsureCapacity_char_T(chartInstance, &c2_b_st, c2_g_obj->ByteOrder,
    c2_i34, &c2_d_emlrtRTEI);
  for (c2_i35 = 0; c2_i35 < 13; c2_i35++) {
    c2_g_obj->ByteOrder->data[c2_i35] = c2_cv1[c2_i35];
  }

  c2_b_st.site = &c2_qb_emlrtRSI;
  c2_h_obj = c2_e_obj;
  c2_thisMatlabRoot_size[1] = 0;
  c2_i36 = c2_h_obj->DataFieldName->size[0] * c2_h_obj->DataFieldName->size[1];
  c2_h_obj->DataFieldName->size[0] = 1;
  c2_h_obj->DataFieldName->size[1] = c2_thisMatlabRoot_size[1];
  c2_emxEnsureCapacity_char_T(chartInstance, &c2_b_st, c2_h_obj->DataFieldName,
    c2_i36, &c2_d_emlrtRTEI);
  c2_s_loop_ub = c2_thisMatlabRoot_size[1] - 1;
  for (c2_i37 = 0; c2_i37 <= c2_s_loop_ub; c2_i37++) {
    c2_h_obj->DataFieldName->data[c2_i37] = c2_thisMatlabRoot_data[c2_i37];
  }

  c2_i38 = c2_h_obj->DataFieldName->size[0] * c2_h_obj->DataFieldName->size[1];
  c2_h_obj->DataFieldName->size[0] = 1;
  c2_h_obj->DataFieldName->size[1] = 4;
  c2_emxEnsureCapacity_char_T(chartInstance, &c2_b_st, c2_h_obj->DataFieldName,
    c2_i38, &c2_d_emlrtRTEI);
  for (c2_i39 = 0; c2_i39 < 4; c2_i39++) {
    c2_h_obj->DataFieldName->data[c2_i39] = c2_val[c2_i39];
  }

  c2_b_st.site = &c2_qb_emlrtRSI;
  c2_i_obj = c2_e_obj;
  c2_thisMatlabRoot_size[1] = 0;
  c2_i40 = c2_i_obj->NativeDataType->size[0] * c2_i_obj->NativeDataType->size[1];
  c2_i_obj->NativeDataType->size[0] = 1;
  c2_i_obj->NativeDataType->size[1] = c2_thisMatlabRoot_size[1];
  c2_emxEnsureCapacity_char_T(chartInstance, &c2_b_st, c2_i_obj->NativeDataType,
    c2_i40, &c2_d_emlrtRTEI);
  c2_t_loop_ub = c2_thisMatlabRoot_size[1] - 1;
  for (c2_i41 = 0; c2_i41 <= c2_t_loop_ub; c2_i41++) {
    c2_i_obj->NativeDataType->data[c2_i41] = c2_thisMatlabRoot_data[c2_i41];
  }

  c2_i42 = c2_i_obj->NativeDataType->size[0] * c2_i_obj->NativeDataType->size[1];
  c2_i_obj->NativeDataType->size[0] = 1;
  c2_i_obj->NativeDataType->size[1] = 5;
  c2_emxEnsureCapacity_char_T(chartInstance, &c2_b_st, c2_i_obj->NativeDataType,
    c2_i42, &c2_d_emlrtRTEI);
  for (c2_i43 = 0; c2_i43 < 5; c2_i43++) {
    c2_i_obj->NativeDataType->data[c2_i43] = c2_b_val[c2_i43];
  }

  c2_b_st.site = &c2_qb_emlrtRSI;
  c2_j_obj = &c2_e_obj->UnreadDataBuffer;
  c2_k_obj = c2_j_obj;
  c2_k_obj->BytesPerElement = 1.0;
  c2_c_st.site = &c2_sb_emlrtRSI;
  c2_t_y = NULL;
  sf_mex_assign(&c2_t_y, sf_mex_create("y", c2_b_cv9, 10, 0U, 1U, 0U, 2, 1, 6),
                false);
  c2_u_y = NULL;
  sf_mex_assign(&c2_u_y, sf_mex_create("y", c2_b_cv10, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c2_d_st.site = &c2_wb_emlrtRSI;
  sf_mex_assign(&c2_b_thisMLVersion, c2_b_getfield(chartInstance, &c2_d_st,
    c2_b_ver(chartInstance, &c2_d_st, c2_t_y), c2_u_y), false);
  c2_d_st.site = &c2_xb_emlrtRSI;
  c2_e_emlrt_marshallIn(chartInstance, c2_b_matlabroot(chartInstance, &c2_d_st),
                        "<output of matlabroot>", c2_thisMatlabRoot_data,
                        c2_thisMatlabRoot_size);
  c2_v_y = NULL;
  sf_mex_assign(&c2_v_y, sf_mex_create("y", c2_b_cv11, 10, 0U, 1U, 0U, 2, 1, 8),
                false);
  c2_d_st.site = &c2_yb_emlrtRSI;
  if (c2_g_emlrt_marshallIn(chartInstance,
       c2_d_coder_internal_ifWhileCondExtrinsic(chartInstance, &c2_d_st,
        c2_k_strcmp(chartInstance, &c2_d_st, sf_mex_dup(c2_b_thisMLVersion),
                    c2_v_y)), "<output of coder.internal.ifWhileCondExtrinsic>"))
  {
    c2_deviceFullPathML_size[1] = c2_thisMatlabRoot_size[1] + 56;
    c2_u_loop_ub = c2_thisMatlabRoot_size[1] - 1;
    for (c2_i44 = 0; c2_i44 <= c2_u_loop_ub; c2_i44++) {
      c2_deviceFullPathML_data[c2_i44] = c2_thisMatlabRoot_data[c2_i44];
    }

    c2_deviceFullPathML_data[c2_thisMatlabRoot_size[1]] = '\\';
    for (c2_i45 = 0; c2_i45 < 44; c2_i45++) {
      c2_deviceFullPathML_data[(c2_i45 + c2_thisMatlabRoot_size[1]) + 1] =
        c2_b_cv14[c2_i45];
    }

    c2_deviceFullPathML_data[c2_thisMatlabRoot_size[1] + 45] = '\\';
    for (c2_i46 = 0; c2_i46 < 10; c2_i46++) {
      c2_deviceFullPathML_data[(c2_i46 + c2_thisMatlabRoot_size[1]) + 46] =
        c2_b_deviceFullName[c2_i46];
    }

    c2_bb_y = NULL;
    sf_mex_assign(&c2_bb_y, sf_mex_create("y", &c2_deviceFullPathML_data, 10, 0U,
      1U, 0U, 2, 1, c2_deviceFullPathML_size[1]), false);
    c2_cb_y = NULL;
    sf_mex_assign(&c2_cb_y, sf_mex_create("y", c2_b_cv15, 10, 0U, 1U, 0U, 2, 1,
      4), false);
    c2_d_st.site = &c2_ac_emlrtRSI;
    if (c2_g_emlrt_marshallIn(chartInstance,
         c2_e_coder_internal_ifWhileCondExtrinsic(chartInstance, &c2_d_st,
          c2_c_exist(chartInstance, &c2_d_st, c2_bb_y, c2_cb_y)),
         "<output of coder.internal.ifWhileCondExtrinsic>")) {
      c2_devicePath_size[1] = c2_deviceFullPathML_size[1];
      c2_v_loop_ub = c2_deviceFullPathML_size[1] - 1;
      for (c2_i47 = 0; c2_i47 <= c2_v_loop_ub; c2_i47++) {
        c2_devicePath_data[c2_i47] = c2_deviceFullPathML_data[c2_i47];
      }
    } else {
      c2_db_y = NULL;
      sf_mex_assign(&c2_db_y, sf_mex_create("y", c2_b_cv16, 10, 0U, 1U, 0U, 2, 1,
        42), false);
      c2_eb_y = NULL;
      sf_mex_assign(&c2_eb_y, sf_mex_create("y", c2_b_cv16, 10, 0U, 1U, 0U, 2, 1,
        42), false);
      sf_mex_call(&c2_c_st, &c2_ab_emlrtMCI, "error", 0U, 2U, 14, c2_db_y, 14,
                  sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c2_c_st, NULL, "message", 1U, 1U, 14, c2_eb_y)));
    }

    c2_b_converterFullPathML_size[1] = c2_thisMatlabRoot_size[1] + 70;
    c2_w_loop_ub = c2_thisMatlabRoot_size[1] - 1;
    for (c2_i48 = 0; c2_i48 <= c2_w_loop_ub; c2_i48++) {
      c2_b_converterFullPathML_data[c2_i48] = c2_thisMatlabRoot_data[c2_i48];
    }

    c2_b_converterFullPathML_data[c2_thisMatlabRoot_size[1]] = '\\';
    for (c2_i50 = 0; c2_i50 < 44; c2_i50++) {
      c2_b_converterFullPathML_data[(c2_i50 + c2_thisMatlabRoot_size[1]) + 1] =
        c2_b_cv14[c2_i50];
    }

    c2_b_converterFullPathML_data[c2_thisMatlabRoot_size[1] + 45] = '\\';
    for (c2_i52 = 0; c2_i52 < 24; c2_i52++) {
      c2_b_converterFullPathML_data[(c2_i52 + c2_thisMatlabRoot_size[1]) + 46] =
        c2_b_converterFullName[c2_i52];
    }

    c2_fb_y = NULL;
    sf_mex_assign(&c2_fb_y, sf_mex_create("y", &c2_b_converterFullPathML_data,
      10, 0U, 1U, 0U, 2, 1, c2_b_converterFullPathML_size[1]), false);
    c2_gb_y = NULL;
    sf_mex_assign(&c2_gb_y, sf_mex_create("y", c2_b_cv15, 10, 0U, 1U, 0U, 2, 1,
      4), false);
    c2_d_st.site = &c2_bc_emlrtRSI;
    if (c2_g_emlrt_marshallIn(chartInstance,
         c2_f_coder_internal_ifWhileCondExtrinsic(chartInstance, &c2_d_st,
          c2_d_exist(chartInstance, &c2_d_st, c2_fb_y, c2_gb_y)),
         "<output of coder.internal.ifWhileCondExtrinsic>")) {
      c2_converterPath_size[1] = c2_b_converterFullPathML_size[1];
      c2_cb_loop_ub = c2_b_converterFullPathML_size[1] - 1;
      for (c2_i55 = 0; c2_i55 <= c2_cb_loop_ub; c2_i55++) {
        c2_converterPath_data[c2_i55] = c2_b_converterFullPathML_data[c2_i55];
      }
    } else {
      c2_hb_y = NULL;
      sf_mex_assign(&c2_hb_y, sf_mex_create("y", c2_b_cv16, 10, 0U, 1U, 0U, 2, 1,
        42), false);
      c2_ib_y = NULL;
      sf_mex_assign(&c2_ib_y, sf_mex_create("y", c2_b_cv16, 10, 0U, 1U, 0U, 2, 1,
        42), false);
      sf_mex_call(&c2_c_st, &c2_bb_emlrtMCI, "error", 0U, 2U, 14, c2_hb_y, 14,
                  sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c2_c_st, NULL, "message", 1U, 1U, 14, c2_ib_y)));
    }
  } else {
    c2_w_y = NULL;
    sf_mex_assign(&c2_w_y, sf_mex_create("y", c2_b_cv12, 10, 0U, 1U, 0U, 2, 1,
      44), false);
    c2_x_y = NULL;
    sf_mex_assign(&c2_x_y, sf_mex_create("y", c2_b_cv12, 10, 0U, 1U, 0U, 2, 1,
      44), false);
    c2_y_y = NULL;
    sf_mex_assign(&c2_y_y, sf_mex_create("y", c2_b_cv11, 10, 0U, 1U, 0U, 2, 1, 8),
                  false);
    c2_ab_y = NULL;
    sf_mex_assign(&c2_ab_y, sf_mex_create("y", c2_b_cv13, 10, 0U, 1U, 0U, 2, 1,
      5), false);
    sf_mex_call(&c2_c_st, &c2_cb_emlrtMCI, "error", 0U, 2U, 14, c2_w_y, 14,
                sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_c_st, NULL, "message", 1U, 3U, 14, c2_x_y, 14, c2_y_y, 14, c2_ab_y)));
  }

  sf_mex_destroy(&c2_b_thisMLVersion);
  c2_c_st.site = &c2_tb_emlrtRSI;
  c2_d_this = c2_k_obj;
  c2_k_obj = c2_d_this;
  c2_c_st.site = &c2_ub_emlrtRSI;
  c2_l_obj = c2_k_obj;
  c2_k_obj = c2_l_obj;
  c2_d_st.site = &c2_v_emlrtRSI;
  c2_e_this = c2_k_obj;
  c2_k_obj = c2_e_this;
  c2_k_obj->ChannelImpl = 0;
  c2_d_st.site = &c2_w_emlrtRSI;
  c2_converterPluginPath_size[1] = c2_devicePath_size[1];
  c2_x_loop_ub = c2_devicePath_size[1] - 1;
  for (c2_i49 = 0; c2_i49 <= c2_x_loop_ub; c2_i49++) {
    c2_converterPluginPath_data[c2_i49] = c2_devicePath_data[c2_i49];
  }

  c2_b_converterPluginPath_size[1] = c2_converterPath_size[1];
  c2_y_loop_ub = c2_converterPath_size[1] - 1;
  for (c2_i51 = 0; c2_i51 <= c2_y_loop_ub; c2_i51++) {
    c2_b_converterPluginPath_data[c2_i51] = c2_converterPath_data[c2_i51];
  }

  c2_b_converterFullPathML_size[1] = c2_converterPluginPath_size[1];
  c2_ab_loop_ub = c2_converterPluginPath_size[1] - 1;
  for (c2_i53 = 0; c2_i53 <= c2_ab_loop_ub; c2_i53++) {
    c2_b_converterFullPathML_data[c2_i53] = c2_converterPluginPath_data[c2_i53];
  }

  c2_out_size[1] = c2_b_converterFullPathML_size[1] + 1;
  c2_bb_loop_ub = c2_b_converterFullPathML_size[1] - 1;
  for (c2_i54 = 0; c2_i54 <= c2_bb_loop_ub; c2_i54++) {
    c2_out_data[c2_i54] = c2_b_converterFullPathML_data[c2_i54];
  }

  c2_out_data[c2_b_converterFullPathML_size[1]] = '\x00';
  c2_db_loop_ub = c2_out_size[1] - 1;
  for (c2_i56 = 0; c2_i56 <= c2_db_loop_ub; c2_i56++) {
    c2_converterPluginPath_data[c2_i56] = c2_out_data[c2_i56];
  }

  c2_b_converterFullPathML_size[1] = c2_b_converterPluginPath_size[1];
  c2_eb_loop_ub = c2_b_converterPluginPath_size[1] - 1;
  for (c2_i57 = 0; c2_i57 <= c2_eb_loop_ub; c2_i57++) {
    c2_b_converterFullPathML_data[c2_i57] = c2_b_converterPluginPath_data[c2_i57];
  }

  c2_fb_loop_ub = c2_b_converterFullPathML_size[1] - 1;
  for (c2_i58 = 0; c2_i58 <= c2_fb_loop_ub; c2_i58++) {
    c2_b_converterPluginPath_data[c2_i58] = c2_b_converterFullPathML_data[c2_i58];
  }

  c2_b_converterPluginPath_data[c2_b_converterFullPathML_size[1]] = '\x00';
  c2_c_chImpl = coderChannelCreate(&c2_converterPluginPath_data[0],
    &c2_b_converterPluginPath_data[0], rtInf, 0.0, &c2_errorID[0],
    &c2_errorText[0]);
  if (c2_c_chImpl == 0) {
    c2_e_st.site = &c2_bb_emlrtRSI;
    c2_API_dispatchInternalError(chartInstance, &c2_e_st, c2_errorID,
      c2_errorText);
  }

  c2_k_obj->ChannelImpl = c2_c_chImpl;
  c2_d_st.site = &c2_x_emlrtRSI;
  c2_d_chImpl = c2_k_obj->ChannelImpl;
  c2_b_success = coderChannelInit(c2_d_chImpl, 0);
  c2_e_st.site = &c2_db_emlrtRSI;
  c2_API_channelErrorIfFailed(chartInstance, &c2_e_st, c2_d_chImpl, c2_b_success);
  c2_d_st.site = &c2_y_emlrtRSI;
  c2_InputStream_InputStream(chartInstance, &c2_d_st, &c2_k_obj->InputStream,
    c2_k_obj->ChannelImpl);
  c2_d_st.site = &c2_ab_emlrtRSI;
  c2_OutputStream_OutputStream(chartInstance, &c2_d_st, &c2_k_obj->OutputStream,
    c2_k_obj->ChannelImpl);
  c2_k_obj->DataEventsDisabled = true;
  for (c2_i59 = 0; c2_i59 < 2; c2_i59++) {
    c2_k_obj->StreamLimits[c2_i59] = c2_streamLimits[c2_i59];
  }

  c2_m_obj = c2_k_obj;
  c2_m_obj->TotalElementsWritten = 0.0;
  c2_c_st.site = &c2_vb_emlrtRSI;
  c2_n_obj = c2_k_obj;
  c2_d_st.site = &c2_cc_emlrtRSI;
  c2_o_obj = c2_n_obj;
  c2_o_obj->PartialPacket->size[0] = 1;
  c2_o_obj->PartialPacket->size[1] = 0;
  c2_o_obj->PartialPacket->size[0] = 0;
  c2_o_obj->PartialPacket->size[1] = 0;
  c2_n_obj->PartialPacketStart = 0.0;
  c2_n_obj->PartialPacketCount = 0.0;
  c2_k_obj->matlabCodegenIsDeleted = false;
  c2_b_st.site = &c2_qb_emlrtRSI;
  c2_p_obj = &c2_e_obj->UnreadDataBuffer;
  c2_c_st.site = &c2_dc_emlrtRSI;
  c2_q_obj = c2_p_obj;
  c2_d_st.site = &c2_fc_emlrtRSI;
  c2_e_chImpl = c2_q_obj->ChannelImpl;
  c2_c_success = coderChannelIsOpen(c2_e_chImpl, &c2_result);
  c2_e_st.site = &c2_gc_emlrtRSI;
  c2_API_channelErrorIfFailed(chartInstance, &c2_e_st, c2_e_chImpl, c2_c_success);
  if (!c2_result) {
    c2_c_st.site = &c2_ec_emlrtRSI;
    c2_f_chImpl = c2_p_obj->ChannelImpl;
    c2_d_success = coderChannelOpen(c2_f_chImpl, 0);
    c2_d_st.site = &c2_hc_emlrtRSI;
    c2_API_channelErrorIfFailed(chartInstance, &c2_d_st, c2_f_chImpl,
      c2_d_success);
  }

  c2_e_obj->matlabCodegenIsDeleted = false;
  c2_obj->TransportChannel = c2_e_obj;
}

static void c2_sprintf(SFc2_wwtp3InstanceStruct *chartInstance, const emlrtStack
  *c2_sp, uint32_T c2_varargin_1, c2_emxArray_char_T *c2_str)
{
  static char_T c2_b_cv[7] = { 's', 'p', 'r', 'i', 'n', 't', 'f' };

  static char_T c2_formatSpec[2] = { '%', 'u' };

  emlrtStack c2_b_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_tmpStr = NULL;
  const mxArray *c2_y = NULL;
  real_T c2_strSize;
  uint32_T c2_b_varargin_1;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_st.site = &c2_s_emlrtRSI;
  c2_b_varargin_1 = c2_varargin_1;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_formatSpec, 10, 0U, 1U, 0U, 2, 1,
    2), false);
  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y", &c2_b_varargin_1, 7, 0U, 0U, 0U, 0),
                false);
  c2_b_st.site = &c2_t_emlrtRSI;
  sf_mex_assign(&c2_tmpStr, c2_feval(chartInstance, &c2_b_st, c2_y, c2_b_y,
    c2_c_y), false);
  c2_b_st.site = &c2_u_emlrtRSI;
  c2_strSize = c2_emlrt_marshallIn(chartInstance, c2_length(chartInstance,
    &c2_b_st, sf_mex_dup(c2_tmpStr)), "<output of length>");
  if (!(c2_strSize >= 0.0)) {
    emlrtNonNegativeCheckR2012b(c2_strSize, &c2_f_emlrtDCI, &c2_st);
  }

  c2_b_st.site = &c2_ql_emlrtRSI;
  c2_c_emlrt_marshallIn(chartInstance, &c2_b_st, sf_mex_dup(c2_tmpStr), "tmpStr",
                        c2_str);
  sf_mex_destroy(&c2_tmpStr);
}

static void c2_API_dispatchInternalError(SFc2_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, char_T c2_errorID[1024], char_T c2_errorText[1024])
{
  static char_T c2_b_cv10[49] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'O',
    'u', 't', 'p', 'u', 't', 'S', 't', 'r', 'e', 'a', 'm', ':', 's', 'y', 'n',
    'c', 'h', 'r', 'o', 'n', 'o', 'u', 's', 'O', 'u', 't', 'p', 'u', 't', 'N',
    'o', 't', 'P', 'o', 's', 's', 'i', 'b', 'l', 'e' };

  static char_T c2_cv21[49] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'O', 'u',
    't', 'p', 'u', 't', 'S', 't', 'r', 'e', 'a', 'm', ':', 's', 'y', 'n', 'c',
    'h', 'r', 'o', 'n', 'o', 'u', 's', 'O', 'u', 't', 'p', 'u', 't', 'N', 'o',
    't', 'P', 'o', 's', 's', 'i', 'b', 'l', 'e' };

  static char_T c2_b_cv9[47] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'I',
    'n', 'p', 'u', 't', 'S', 't', 'r', 'e', 'a', 'm', ':', 's', 'y', 'n', 'c',
    'h', 'r', 'o', 'n', 'o', 'u', 's', 'I', 'n', 'p', 'u', 't', 'N', 'o', 't',
    'P', 'o', 's', 's', 'i', 'b', 'l', 'e' };

  static char_T c2_cv20[47] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'I', 'n',
    'p', 'u', 't', 'S', 't', 'r', 'e', 'a', 'm', ':', 's', 'y', 'n', 'c', 'h',
    'r', 'o', 'n', 'o', 'u', 's', 'I', 'n', 'p', 'u', 't', 'N', 'o', 't', 'P',
    'o', 's', 's', 'i', 'b', 'l', 'e' };

  static char_T c2_b_cv7[39] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'C',
    'h', 'a', 'n', 'n', 'e', 'l', ':', 'c', 'o', 'u', 'l', 'd', 'N', 'o', 't',
    'C', 'r', 'e', 'a', 't', 'e', 'C', 'o', 'n', 'v', 'e', 'r', 't', 'e', 'r' };

  static char_T c2_cv18[39] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'C', 'h',
    'a', 'n', 'n', 'e', 'l', ':', 'c', 'o', 'u', 'l', 'd', 'N', 'o', 't', 'C',
    'r', 'e', 'a', 't', 'e', 'C', 'o', 'n', 'v', 'e', 'r', 't', 'e', 'r' };

  static char_T c2_b_cv15[37] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'C',
    'h', 'a', 'n', 'n', 'e', 'l', ':', 'c', 'o', 'u', 'l', 'd', 'N', 'o', 't',
    'L', 'o', 'a', 'd', 'C', 'o', 'n', 'v', 'e', 'r', 't', 'e', 'r' };

  static char_T c2_b_cv4[37] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'C',
    'h', 'a', 'n', 'n', 'e', 'l', ':', 'c', 'o', 'u', 'l', 'd', 'N', 'o', 't',
    'L', 'o', 'a', 'd', 'C', 'o', 'n', 'v', 'e', 'r', 't', 'e', 'r' };

  static char_T c2_b_cv17[36] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'C',
    'h', 'a', 'n', 'n', 'e', 'l', ':', 'c', 'o', 'u', 'l', 'd', 'N', 'o', 't',
    'C', 'r', 'e', 'a', 't', 'e', 'D', 'e', 'v', 'i', 'c', 'e' };

  static char_T c2_b_cv6[36] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'C',
    'h', 'a', 'n', 'n', 'e', 'l', ':', 'c', 'o', 'u', 'l', 'd', 'N', 'o', 't',
    'C', 'r', 'e', 'a', 't', 'e', 'D', 'e', 'v', 'i', 'c', 'e' };

  static char_T c2_b_cv8[35] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'S',
    't', 'r', 'e', 'a', 'm', ':', 'c', 'o', 'u', 'l', 'd', 'N', 'o', 't', 'C',
    'r', 'e', 'a', 't', 'e', 'F', 'i', 'l', 't', 'e', 'r' };

  static char_T c2_cv19[35] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'S', 't',
    'r', 'e', 'a', 'm', ':', 'c', 'o', 'u', 'l', 'd', 'N', 'o', 't', 'C', 'r',
    'e', 'a', 't', 'e', 'F', 'i', 'l', 't', 'e', 'r' };

  static char_T c2_b_cv14[34] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'C',
    'h', 'a', 'n', 'n', 'e', 'l', ':', 'c', 'o', 'u', 'l', 'd', 'N', 'o', 't',
    'L', 'o', 'a', 'd', 'D', 'e', 'v', 'i', 'c', 'e' };

  static char_T c2_b_cv3[34] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'C',
    'h', 'a', 'n', 'n', 'e', 'l', ':', 'c', 'o', 'u', 'l', 'd', 'N', 'o', 't',
    'L', 'o', 'a', 'd', 'D', 'e', 'v', 'i', 'c', 'e' };

  static char_T c2_b_cv12[33] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'O',
    'u', 't', 'p', 'u', 't', 'S', 't', 'r', 'e', 'a', 'm', ':', 'n', 'o', 't',
    'S', 'u', 'p', 'p', 'o', 'r', 't', 'e', 'd' };

  static char_T c2_b_cv16[33] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'S',
    't', 'r', 'e', 'a', 'm', ':', 'c', 'o', 'u', 'l', 'd', 'N', 'o', 't', 'L',
    'o', 'a', 'd', 'F', 'i', 'l', 't', 'e', 'r' };

  static char_T c2_b_cv2[33] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'O',
    'u', 't', 'p', 'u', 't', 'S', 't', 'r', 'e', 'a', 'm', ':', 'n', 'o', 't',
    'S', 'u', 'p', 'p', 'o', 'r', 't', 'e', 'd' };

  static char_T c2_b_cv5[33] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'S',
    't', 'r', 'e', 'a', 'm', ':', 'c', 'o', 'u', 'l', 'd', 'N', 'o', 't', 'L',
    'o', 'a', 'd', 'F', 'i', 'l', 't', 'e', 'r' };

  static char_T c2_b_cv[32] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'I', 'n',
    'p', 'u', 't', 'S', 't', 'r', 'e', 'a', 'm', ':', 'n', 'o', 't', 'S', 'u',
    'p', 'p', 'o', 'r', 't', 'e', 'd' };

  static char_T c2_b_cv1[32] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'I',
    'n', 'p', 'u', 't', 'S', 't', 'r', 'e', 'a', 'm', ':', 'n', 'o', 't', 'S',
    'u', 'p', 'p', 'o', 'r', 't', 'e', 'd' };

  static char_T c2_b_cv11[7] = { 'E', 'r', 'r', 'I', 'D', ':', ' ' };

  static char_T c2_b_cv13[7] = { ',', ' ', 'M', 's', 'g', ':', ' ' };

  c2_emxArray_char_T *c2_x;
  emlrtStack c2_st;
  const mxArray *c2_ab_y = NULL;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_bb_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_cb_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_db_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_eb_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_fb_y = NULL;
  const mxArray *c2_g_y = NULL;
  const mxArray *c2_gb_y = NULL;
  const mxArray *c2_h_y = NULL;
  const mxArray *c2_i_y = NULL;
  const mxArray *c2_j_y = NULL;
  const mxArray *c2_k_y = NULL;
  const mxArray *c2_l_y = NULL;
  const mxArray *c2_m_y = NULL;
  const mxArray *c2_n_y = NULL;
  const mxArray *c2_o_y = NULL;
  const mxArray *c2_p_y = NULL;
  const mxArray *c2_q_y = NULL;
  const mxArray *c2_r_y = NULL;
  const mxArray *c2_s_y = NULL;
  const mxArray *c2_t_y = NULL;
  const mxArray *c2_u_y = NULL;
  const mxArray *c2_v_y = NULL;
  const mxArray *c2_w_y = NULL;
  const mxArray *c2_x_y = NULL;
  const mxArray *c2_y = NULL;
  const mxArray *c2_y_y = NULL;
  real_T c2_index;
  int32_T c2_errorID_size[2];
  int32_T c2_u_size[2];
  int32_T c2_b_kstr;
  int32_T c2_b_loop_ub;
  int32_T c2_b_remainingDimsA;
  int32_T c2_c_kstr;
  int32_T c2_c_loop_ub;
  int32_T c2_c_remainingDimsA;
  int32_T c2_d_kstr;
  int32_T c2_d_loop_ub;
  int32_T c2_d_remainingDimsA;
  int32_T c2_e_kstr;
  int32_T c2_e_loop_ub;
  int32_T c2_e_remainingDimsA;
  int32_T c2_exitg1;
  int32_T c2_f_kstr;
  int32_T c2_f_loop_ub;
  int32_T c2_f_remainingDimsA;
  int32_T c2_g_kstr;
  int32_T c2_g_loop_ub;
  int32_T c2_g_remainingDimsA;
  int32_T c2_h_kstr;
  int32_T c2_h_loop_ub;
  int32_T c2_h_remainingDimsA;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i2;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_i_kstr;
  int32_T c2_i_loop_ub;
  int32_T c2_i_remainingDimsA;
  int32_T c2_j_kstr;
  int32_T c2_j_loop_ub;
  int32_T c2_j_remainingDimsA;
  int32_T c2_k_kstr;
  int32_T c2_k_loop_ub;
  int32_T c2_kstr;
  int32_T c2_l_kstr;
  int32_T c2_loop_ub;
  int32_T c2_m_kstr;
  int32_T c2_n_kstr;
  int32_T c2_o_kstr;
  int32_T c2_p_kstr;
  int32_T c2_q_kstr;
  int32_T c2_r_kstr;
  int32_T c2_remainingDimsA;
  int32_T c2_s_kstr;
  int32_T c2_t_kstr;
  char_T c2_u_data[2062];
  char_T c2_errorID_data[1024];
  boolean_T c2_b_bool;
  boolean_T c2_b_result;
  boolean_T c2_bool;
  boolean_T c2_c_bool;
  boolean_T c2_c_result;
  boolean_T c2_d_bool;
  boolean_T c2_d_result;
  boolean_T c2_e_bool;
  boolean_T c2_e_result;
  boolean_T c2_f_bool;
  boolean_T c2_f_result;
  boolean_T c2_g_bool;
  boolean_T c2_g_result;
  boolean_T c2_h_bool;
  boolean_T c2_h_result;
  boolean_T c2_i_bool;
  boolean_T c2_i_result;
  boolean_T c2_j_bool;
  boolean_T c2_j_result;
  boolean_T c2_k_result;
  boolean_T c2_l_result;
  boolean_T c2_m_result;
  boolean_T c2_n_result;
  boolean_T c2_result;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_cb_emlrtRSI;
  c2_API_trimString(chartInstance, &c2_st, c2_errorID, c2_errorID_data,
                    c2_errorID_size);
  c2_bool = false;
  c2_emxInit_char_T(chartInstance, c2_sp, &c2_x, 2, &c2_kb_emlrtRTEI);
  c2_i = c2_x->size[0] * c2_x->size[1];
  c2_x->size[0] = 1;
  c2_x->size[1] = c2_errorID_size[1];
  c2_emxEnsureCapacity_char_T(chartInstance, c2_sp, c2_x, c2_i, &c2_kb_emlrtRTEI);
  c2_loop_ub = c2_errorID_size[1] - 1;
  for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
    c2_x->data[c2_i1] = c2_errorID_data[c2_i1];
  }

  c2_remainingDimsA = c2_x->size[1];
  if (c2_remainingDimsA != 32) {
  } else {
    c2_kstr = 1;
    do {
      c2_exitg1 = 0;
      if (c2_kstr - 1 < 32) {
        c2_b_kstr = c2_kstr - 1;
        if (c2_errorID_data[c2_b_kstr] != c2_b_cv[c2_b_kstr]) {
          c2_exitg1 = 1;
        } else {
          c2_kstr++;
        }
      } else {
        c2_bool = true;
        c2_exitg1 = 1;
      }
    } while (c2_exitg1 == 0);
  }

  if (c2_bool) {
    c2_result = true;
  } else {
    c2_result = false;
  }

  if (c2_result) {
    c2_index = 0.0;
  } else {
    c2_b_bool = false;
    c2_i2 = c2_x->size[0] * c2_x->size[1];
    c2_x->size[0] = 1;
    c2_x->size[1] = c2_errorID_size[1];
    c2_emxEnsureCapacity_char_T(chartInstance, c2_sp, c2_x, c2_i2,
      &c2_kb_emlrtRTEI);
    c2_b_loop_ub = c2_errorID_size[1] - 1;
    for (c2_i3 = 0; c2_i3 <= c2_b_loop_ub; c2_i3++) {
      c2_x->data[c2_i3] = c2_errorID_data[c2_i3];
    }

    c2_b_remainingDimsA = c2_x->size[1];
    if (c2_b_remainingDimsA != 33) {
    } else {
      c2_c_kstr = 1;
      do {
        c2_exitg1 = 0;
        if (c2_c_kstr - 1 < 33) {
          c2_d_kstr = c2_c_kstr - 1;
          if (c2_errorID_data[c2_d_kstr] != c2_b_cv12[c2_d_kstr]) {
            c2_exitg1 = 1;
          } else {
            c2_c_kstr++;
          }
        } else {
          c2_b_bool = true;
          c2_exitg1 = 1;
        }
      } while (c2_exitg1 == 0);
    }

    if (c2_b_bool) {
      c2_b_result = true;
    } else {
      c2_b_result = false;
    }

    if (c2_b_result) {
      c2_index = 1.0;
    } else {
      c2_c_bool = false;
      c2_i7 = c2_x->size[0] * c2_x->size[1];
      c2_x->size[0] = 1;
      c2_x->size[1] = c2_errorID_size[1];
      c2_emxEnsureCapacity_char_T(chartInstance, c2_sp, c2_x, c2_i7,
        &c2_kb_emlrtRTEI);
      c2_d_loop_ub = c2_errorID_size[1] - 1;
      for (c2_i9 = 0; c2_i9 <= c2_d_loop_ub; c2_i9++) {
        c2_x->data[c2_i9] = c2_errorID_data[c2_i9];
      }

      c2_c_remainingDimsA = c2_x->size[1];
      if (c2_c_remainingDimsA != 34) {
      } else {
        c2_e_kstr = 1;
        do {
          c2_exitg1 = 0;
          if (c2_e_kstr - 1 < 34) {
            c2_f_kstr = c2_e_kstr - 1;
            if (c2_errorID_data[c2_f_kstr] != c2_b_cv14[c2_f_kstr]) {
              c2_exitg1 = 1;
            } else {
              c2_e_kstr++;
            }
          } else {
            c2_c_bool = true;
            c2_exitg1 = 1;
          }
        } while (c2_exitg1 == 0);
      }

      if (c2_c_bool) {
        c2_c_result = true;
      } else {
        c2_c_result = false;
      }

      if (c2_c_result) {
        c2_index = 2.0;
      } else {
        c2_d_bool = false;
        c2_i10 = c2_x->size[0] * c2_x->size[1];
        c2_x->size[0] = 1;
        c2_x->size[1] = c2_errorID_size[1];
        c2_emxEnsureCapacity_char_T(chartInstance, c2_sp, c2_x, c2_i10,
          &c2_kb_emlrtRTEI);
        c2_e_loop_ub = c2_errorID_size[1] - 1;
        for (c2_i11 = 0; c2_i11 <= c2_e_loop_ub; c2_i11++) {
          c2_x->data[c2_i11] = c2_errorID_data[c2_i11];
        }

        c2_d_remainingDimsA = c2_x->size[1];
        if (c2_d_remainingDimsA != 37) {
        } else {
          c2_g_kstr = 1;
          do {
            c2_exitg1 = 0;
            if (c2_g_kstr - 1 < 37) {
              c2_h_kstr = c2_g_kstr - 1;
              if (c2_errorID_data[c2_h_kstr] != c2_b_cv15[c2_h_kstr]) {
                c2_exitg1 = 1;
              } else {
                c2_g_kstr++;
              }
            } else {
              c2_d_bool = true;
              c2_exitg1 = 1;
            }
          } while (c2_exitg1 == 0);
        }

        if (c2_d_bool) {
          c2_d_result = true;
        } else {
          c2_d_result = false;
        }

        if (c2_d_result) {
          c2_index = 3.0;
        } else {
          c2_e_bool = false;
          c2_i12 = c2_x->size[0] * c2_x->size[1];
          c2_x->size[0] = 1;
          c2_x->size[1] = c2_errorID_size[1];
          c2_emxEnsureCapacity_char_T(chartInstance, c2_sp, c2_x, c2_i12,
            &c2_kb_emlrtRTEI);
          c2_f_loop_ub = c2_errorID_size[1] - 1;
          for (c2_i13 = 0; c2_i13 <= c2_f_loop_ub; c2_i13++) {
            c2_x->data[c2_i13] = c2_errorID_data[c2_i13];
          }

          c2_e_remainingDimsA = c2_x->size[1];
          if (c2_e_remainingDimsA != 33) {
          } else {
            c2_i_kstr = 1;
            do {
              c2_exitg1 = 0;
              if (c2_i_kstr - 1 < 33) {
                c2_j_kstr = c2_i_kstr - 1;
                if (c2_errorID_data[c2_j_kstr] != c2_b_cv16[c2_j_kstr]) {
                  c2_exitg1 = 1;
                } else {
                  c2_i_kstr++;
                }
              } else {
                c2_e_bool = true;
                c2_exitg1 = 1;
              }
            } while (c2_exitg1 == 0);
          }

          if (c2_e_bool) {
            c2_e_result = true;
          } else {
            c2_e_result = false;
          }

          if (c2_e_result) {
            c2_index = 4.0;
          } else {
            c2_f_bool = false;
            c2_i14 = c2_x->size[0] * c2_x->size[1];
            c2_x->size[0] = 1;
            c2_x->size[1] = c2_errorID_size[1];
            c2_emxEnsureCapacity_char_T(chartInstance, c2_sp, c2_x, c2_i14,
              &c2_kb_emlrtRTEI);
            c2_g_loop_ub = c2_errorID_size[1] - 1;
            for (c2_i15 = 0; c2_i15 <= c2_g_loop_ub; c2_i15++) {
              c2_x->data[c2_i15] = c2_errorID_data[c2_i15];
            }

            c2_f_remainingDimsA = c2_x->size[1];
            if (c2_f_remainingDimsA != 36) {
            } else {
              c2_k_kstr = 1;
              do {
                c2_exitg1 = 0;
                if (c2_k_kstr - 1 < 36) {
                  c2_l_kstr = c2_k_kstr - 1;
                  if (c2_errorID_data[c2_l_kstr] != c2_b_cv17[c2_l_kstr]) {
                    c2_exitg1 = 1;
                  } else {
                    c2_k_kstr++;
                  }
                } else {
                  c2_f_bool = true;
                  c2_exitg1 = 1;
                }
              } while (c2_exitg1 == 0);
            }

            if (c2_f_bool) {
              c2_f_result = true;
            } else {
              c2_f_result = false;
            }

            if (c2_f_result) {
              c2_index = 5.0;
            } else {
              c2_g_bool = false;
              c2_i16 = c2_x->size[0] * c2_x->size[1];
              c2_x->size[0] = 1;
              c2_x->size[1] = c2_errorID_size[1];
              c2_emxEnsureCapacity_char_T(chartInstance, c2_sp, c2_x, c2_i16,
                &c2_kb_emlrtRTEI);
              c2_h_loop_ub = c2_errorID_size[1] - 1;
              for (c2_i17 = 0; c2_i17 <= c2_h_loop_ub; c2_i17++) {
                c2_x->data[c2_i17] = c2_errorID_data[c2_i17];
              }

              c2_g_remainingDimsA = c2_x->size[1];
              if (c2_g_remainingDimsA != 39) {
              } else {
                c2_m_kstr = 1;
                do {
                  c2_exitg1 = 0;
                  if (c2_m_kstr - 1 < 39) {
                    c2_n_kstr = c2_m_kstr - 1;
                    if (c2_errorID_data[c2_n_kstr] != c2_cv18[c2_n_kstr]) {
                      c2_exitg1 = 1;
                    } else {
                      c2_m_kstr++;
                    }
                  } else {
                    c2_g_bool = true;
                    c2_exitg1 = 1;
                  }
                } while (c2_exitg1 == 0);
              }

              if (c2_g_bool) {
                c2_g_result = true;
              } else {
                c2_g_result = false;
              }

              if (c2_g_result) {
                c2_index = 6.0;
              } else {
                c2_h_bool = false;
                c2_i18 = c2_x->size[0] * c2_x->size[1];
                c2_x->size[0] = 1;
                c2_x->size[1] = c2_errorID_size[1];
                c2_emxEnsureCapacity_char_T(chartInstance, c2_sp, c2_x, c2_i18,
                  &c2_kb_emlrtRTEI);
                c2_i_loop_ub = c2_errorID_size[1] - 1;
                for (c2_i19 = 0; c2_i19 <= c2_i_loop_ub; c2_i19++) {
                  c2_x->data[c2_i19] = c2_errorID_data[c2_i19];
                }

                c2_h_remainingDimsA = c2_x->size[1];
                if (c2_h_remainingDimsA != 35) {
                } else {
                  c2_o_kstr = 1;
                  do {
                    c2_exitg1 = 0;
                    if (c2_o_kstr - 1 < 35) {
                      c2_p_kstr = c2_o_kstr - 1;
                      if (c2_errorID_data[c2_p_kstr] != c2_cv19[c2_p_kstr]) {
                        c2_exitg1 = 1;
                      } else {
                        c2_o_kstr++;
                      }
                    } else {
                      c2_h_bool = true;
                      c2_exitg1 = 1;
                    }
                  } while (c2_exitg1 == 0);
                }

                if (c2_h_bool) {
                  c2_h_result = true;
                } else {
                  c2_h_result = false;
                }

                if (c2_h_result) {
                  c2_index = 7.0;
                } else {
                  c2_i_bool = false;
                  c2_i20 = c2_x->size[0] * c2_x->size[1];
                  c2_x->size[0] = 1;
                  c2_x->size[1] = c2_errorID_size[1];
                  c2_emxEnsureCapacity_char_T(chartInstance, c2_sp, c2_x, c2_i20,
                    &c2_kb_emlrtRTEI);
                  c2_j_loop_ub = c2_errorID_size[1] - 1;
                  for (c2_i21 = 0; c2_i21 <= c2_j_loop_ub; c2_i21++) {
                    c2_x->data[c2_i21] = c2_errorID_data[c2_i21];
                  }

                  c2_i_remainingDimsA = c2_x->size[1];
                  if (c2_i_remainingDimsA != 47) {
                  } else {
                    c2_q_kstr = 1;
                    do {
                      c2_exitg1 = 0;
                      if (c2_q_kstr - 1 < 47) {
                        c2_r_kstr = c2_q_kstr - 1;
                        if (c2_errorID_data[c2_r_kstr] != c2_cv20[c2_r_kstr]) {
                          c2_exitg1 = 1;
                        } else {
                          c2_q_kstr++;
                        }
                      } else {
                        c2_i_bool = true;
                        c2_exitg1 = 1;
                      }
                    } while (c2_exitg1 == 0);
                  }

                  if (c2_i_bool) {
                    c2_i_result = true;
                  } else {
                    c2_i_result = false;
                  }

                  if (c2_i_result) {
                    c2_index = 8.0;
                  } else {
                    c2_j_bool = false;
                    c2_i22 = c2_x->size[0] * c2_x->size[1];
                    c2_x->size[0] = 1;
                    c2_x->size[1] = c2_errorID_size[1];
                    c2_emxEnsureCapacity_char_T(chartInstance, c2_sp, c2_x,
                      c2_i22, &c2_kb_emlrtRTEI);
                    c2_k_loop_ub = c2_errorID_size[1] - 1;
                    for (c2_i23 = 0; c2_i23 <= c2_k_loop_ub; c2_i23++) {
                      c2_x->data[c2_i23] = c2_errorID_data[c2_i23];
                    }

                    c2_j_remainingDimsA = c2_x->size[1];
                    if (c2_j_remainingDimsA != 49) {
                    } else {
                      c2_s_kstr = 1;
                      do {
                        c2_exitg1 = 0;
                        if (c2_s_kstr - 1 < 49) {
                          c2_t_kstr = c2_s_kstr - 1;
                          if (c2_errorID_data[c2_t_kstr] != c2_cv21[c2_t_kstr])
                          {
                            c2_exitg1 = 1;
                          } else {
                            c2_s_kstr++;
                          }
                        } else {
                          c2_j_bool = true;
                          c2_exitg1 = 1;
                        }
                      } while (c2_exitg1 == 0);
                    }

                    if (c2_j_bool) {
                      c2_j_result = true;
                    } else {
                      c2_j_result = false;
                    }

                    if (c2_j_result) {
                      c2_index = 9.0;
                    } else {
                      c2_st.site = &c2_pl_emlrtRSI;
                      if (c2_strcmp(chartInstance, &c2_st, c2_errorID_data,
                                    c2_errorID_size)) {
                        c2_k_result = true;
                      } else {
                        c2_k_result = false;
                      }

                      if (c2_k_result) {
                        c2_index = 10.0;
                      } else {
                        c2_st.site = &c2_pl_emlrtRSI;
                        if (c2_b_strcmp(chartInstance, &c2_st, c2_errorID_data,
                                        c2_errorID_size)) {
                          c2_l_result = true;
                        } else {
                          c2_l_result = false;
                        }

                        if (c2_l_result) {
                          c2_index = 11.0;
                        } else {
                          c2_st.site = &c2_pl_emlrtRSI;
                          if (c2_c_strcmp(chartInstance, &c2_st, c2_errorID_data,
                                          c2_errorID_size)) {
                            c2_m_result = true;
                          } else {
                            c2_m_result = false;
                          }

                          if (c2_m_result) {
                            c2_index = 12.0;
                          } else {
                            c2_st.site = &c2_pl_emlrtRSI;
                            if (c2_d_strcmp(chartInstance, &c2_st,
                                            c2_errorID_data, c2_errorID_size)) {
                              c2_n_result = true;
                            } else {
                              c2_n_result = false;
                            }

                            if (c2_n_result) {
                              c2_index = 13.0;
                            } else {
                              c2_index = -1.0;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }

  c2_emxFree_char_T(chartInstance, &c2_x);
  switch ((int32_T)c2_index) {
   case 0:
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2, 1, 32),
                  false);
    c2_q_y = NULL;
    sf_mex_assign(&c2_q_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2, 1, 32),
                  false);
    sf_mex_call(c2_sp, &c2_t_emlrtMCI, "error", 0U, 2U, 14, c2_b_y, 14,
                sf_mex_call(c2_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c2_sp, NULL, "message", 1U, 1U, 14, c2_q_y)));
    break;

   case 1:
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_b_cv2, 10, 0U, 1U, 0U, 2, 1, 33),
                  false);
    c2_r_y = NULL;
    sf_mex_assign(&c2_r_y, sf_mex_create("y", c2_b_cv2, 10, 0U, 1U, 0U, 2, 1, 33),
                  false);
    sf_mex_call(c2_sp, &c2_s_emlrtMCI, "error", 0U, 2U, 14, c2_c_y, 14,
                sf_mex_call(c2_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c2_sp, NULL, "message", 1U, 1U, 14, c2_r_y)));
    break;

   case 2:
    c2_d_y = NULL;
    sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_b_cv3, 10, 0U, 1U, 0U, 2, 1, 34),
                  false);
    c2_s_y = NULL;
    sf_mex_assign(&c2_s_y, sf_mex_create("y", c2_b_cv3, 10, 0U, 1U, 0U, 2, 1, 34),
                  false);
    sf_mex_call(c2_sp, &c2_r_emlrtMCI, "error", 0U, 2U, 14, c2_d_y, 14,
                sf_mex_call(c2_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c2_sp, NULL, "message", 1U, 1U, 14, c2_s_y)));
    break;

   case 3:
    c2_e_y = NULL;
    sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_b_cv4, 10, 0U, 1U, 0U, 2, 1, 37),
                  false);
    c2_t_y = NULL;
    sf_mex_assign(&c2_t_y, sf_mex_create("y", c2_b_cv4, 10, 0U, 1U, 0U, 2, 1, 37),
                  false);
    sf_mex_call(c2_sp, &c2_q_emlrtMCI, "error", 0U, 2U, 14, c2_e_y, 14,
                sf_mex_call(c2_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c2_sp, NULL, "message", 1U, 1U, 14, c2_t_y)));
    break;

   case 4:
    c2_f_y = NULL;
    sf_mex_assign(&c2_f_y, sf_mex_create("y", c2_b_cv5, 10, 0U, 1U, 0U, 2, 1, 33),
                  false);
    c2_u_y = NULL;
    sf_mex_assign(&c2_u_y, sf_mex_create("y", c2_b_cv5, 10, 0U, 1U, 0U, 2, 1, 33),
                  false);
    sf_mex_call(c2_sp, &c2_p_emlrtMCI, "error", 0U, 2U, 14, c2_f_y, 14,
                sf_mex_call(c2_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c2_sp, NULL, "message", 1U, 1U, 14, c2_u_y)));
    break;

   case 5:
    c2_g_y = NULL;
    sf_mex_assign(&c2_g_y, sf_mex_create("y", c2_b_cv6, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    c2_v_y = NULL;
    sf_mex_assign(&c2_v_y, sf_mex_create("y", c2_b_cv6, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    sf_mex_call(c2_sp, &c2_o_emlrtMCI, "error", 0U, 2U, 14, c2_g_y, 14,
                sf_mex_call(c2_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c2_sp, NULL, "message", 1U, 1U, 14, c2_v_y)));
    break;

   case 6:
    c2_h_y = NULL;
    sf_mex_assign(&c2_h_y, sf_mex_create("y", c2_b_cv7, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c2_w_y = NULL;
    sf_mex_assign(&c2_w_y, sf_mex_create("y", c2_b_cv7, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    sf_mex_call(c2_sp, &c2_n_emlrtMCI, "error", 0U, 2U, 14, c2_h_y, 14,
                sf_mex_call(c2_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c2_sp, NULL, "message", 1U, 1U, 14, c2_w_y)));
    break;

   case 7:
    c2_i_y = NULL;
    sf_mex_assign(&c2_i_y, sf_mex_create("y", c2_b_cv8, 10, 0U, 1U, 0U, 2, 1, 35),
                  false);
    c2_x_y = NULL;
    sf_mex_assign(&c2_x_y, sf_mex_create("y", c2_b_cv8, 10, 0U, 1U, 0U, 2, 1, 35),
                  false);
    sf_mex_call(c2_sp, &c2_m_emlrtMCI, "error", 0U, 2U, 14, c2_i_y, 14,
                sf_mex_call(c2_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c2_sp, NULL, "message", 1U, 1U, 14, c2_x_y)));
    break;

   case 8:
    c2_j_y = NULL;
    sf_mex_assign(&c2_j_y, sf_mex_create("y", c2_b_cv9, 10, 0U, 1U, 0U, 2, 1, 47),
                  false);
    c2_y_y = NULL;
    sf_mex_assign(&c2_y_y, sf_mex_create("y", c2_b_cv9, 10, 0U, 1U, 0U, 2, 1, 47),
                  false);
    sf_mex_call(c2_sp, &c2_l_emlrtMCI, "error", 0U, 2U, 14, c2_j_y, 14,
                sf_mex_call(c2_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c2_sp, NULL, "message", 1U, 1U, 14, c2_y_y)));
    break;

   case 9:
    c2_k_y = NULL;
    sf_mex_assign(&c2_k_y, sf_mex_create("y", c2_b_cv10, 10, 0U, 1U, 0U, 2, 1,
      49), false);
    c2_ab_y = NULL;
    sf_mex_assign(&c2_ab_y, sf_mex_create("y", c2_b_cv10, 10, 0U, 1U, 0U, 2, 1,
      49), false);
    sf_mex_call(c2_sp, &c2_k_emlrtMCI, "error", 0U, 2U, 14, c2_k_y, 14,
                sf_mex_call(c2_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c2_sp, NULL, "message", 1U, 1U, 14, c2_ab_y)));
    break;

   case 10:
    c2_l_y = NULL;
    sf_mex_assign(&c2_l_y, sf_mex_create("y", c2_cv6, 10, 0U, 1U, 0U, 2, 1, 44),
                  false);
    c2_bb_y = NULL;
    sf_mex_assign(&c2_bb_y, sf_mex_create("y", c2_cv6, 10, 0U, 1U, 0U, 2, 1, 44),
                  false);
    sf_mex_call(c2_sp, &c2_j_emlrtMCI, "error", 0U, 2U, 14, c2_l_y, 14,
                sf_mex_call(c2_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c2_sp, NULL, "message", 1U, 1U, 14, c2_bb_y)));
    break;

   case 11:
    c2_m_y = NULL;
    sf_mex_assign(&c2_m_y, sf_mex_create("y", c2_cv5, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c2_cb_y = NULL;
    sf_mex_assign(&c2_cb_y, sf_mex_create("y", c2_cv5, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    sf_mex_call(c2_sp, &c2_i_emlrtMCI, "error", 0U, 2U, 14, c2_m_y, 14,
                sf_mex_call(c2_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c2_sp, NULL, "message", 1U, 1U, 14, c2_cb_y)));
    break;

   case 12:
    c2_n_y = NULL;
    sf_mex_assign(&c2_n_y, sf_mex_create("y", c2_cv4, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c2_db_y = NULL;
    sf_mex_assign(&c2_db_y, sf_mex_create("y", c2_cv4, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    sf_mex_call(c2_sp, &c2_h_emlrtMCI, "error", 0U, 2U, 14, c2_n_y, 14,
                sf_mex_call(c2_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c2_sp, NULL, "message", 1U, 1U, 14, c2_db_y)));
    break;

   case 13:
    c2_o_y = NULL;
    sf_mex_assign(&c2_o_y, sf_mex_create("y", c2_cv3, 10, 0U, 1U, 0U, 2, 1, 35),
                  false);
    c2_eb_y = NULL;
    sf_mex_assign(&c2_eb_y, sf_mex_create("y", c2_cv3, 10, 0U, 1U, 0U, 2, 1, 35),
                  false);
    c2_fb_y = NULL;
    sf_mex_assign(&c2_fb_y, sf_mex_create("y", c2_errorText, 10, 0U, 1U, 0U, 2,
      1, 1024), false);
    sf_mex_call(c2_sp, &c2_g_emlrtMCI, "error", 0U, 2U, 14, c2_o_y, 14,
                sf_mex_call(c2_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c2_sp, NULL, "message", 1U, 2U, 14, c2_eb_y, 14, c2_fb_y)));
    break;

   default:
    c2_y = NULL;
    sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv3, 10, 0U, 1U, 0U, 2, 1, 35),
                  false);
    c2_p_y = NULL;
    sf_mex_assign(&c2_p_y, sf_mex_create("y", c2_cv3, 10, 0U, 1U, 0U, 2, 1, 35),
                  false);
    c2_u_size[1] = c2_errorID_size[1] + 1038;
    for (c2_i4 = 0; c2_i4 < 7; c2_i4++) {
      c2_u_data[c2_i4] = c2_b_cv11[c2_i4];
    }

    c2_c_loop_ub = c2_errorID_size[1] - 1;
    for (c2_i5 = 0; c2_i5 <= c2_c_loop_ub; c2_i5++) {
      c2_u_data[c2_i5 + 7] = c2_errorID_data[c2_i5];
    }

    for (c2_i6 = 0; c2_i6 < 7; c2_i6++) {
      c2_u_data[(c2_i6 + c2_errorID_size[1]) + 7] = c2_b_cv13[c2_i6];
    }

    for (c2_i8 = 0; c2_i8 < 1024; c2_i8++) {
      c2_u_data[(c2_i8 + c2_errorID_size[1]) + 14] = c2_errorText[c2_i8];
    }

    c2_gb_y = NULL;
    sf_mex_assign(&c2_gb_y, sf_mex_create("y", &c2_u_data, 10, 0U, 1U, 0U, 2, 1,
      c2_u_size[1]), false);
    sf_mex_call(c2_sp, &c2_u_emlrtMCI, "error", 0U, 2U, 14, c2_y, 14,
                sf_mex_call(c2_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c2_sp, NULL, "message", 1U, 2U, 14, c2_p_y, 14, c2_gb_y)));
    break;
  }
}

static void c2_API_trimString(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, char_T c2_in[1024], char_T c2_out_data[], int32_T
  c2_out_size[2])
{
  real_T c2_b_k;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_k;
  int32_T c2_len;
  int32_T c2_loop_ub;
  boolean_T c2_b;
  boolean_T c2_exitg1;
  (void)chartInstance;
  c2_len = 0;
  c2_k = 0;
  c2_exitg1 = false;
  while ((!c2_exitg1) && (c2_k < 1024)) {
    c2_b_k = (real_T)c2_k + 1.0;
    if (c2_in[(int32_T)c2_b_k - 1] == '\x00') {
      c2_exitg1 = true;
    } else {
      c2_len++;
      c2_k++;
    }
  }

  c2_b = (c2_len < 1);
  if (c2_b) {
    c2_i = -1;
  } else {
    if ((c2_len < 1) || (c2_len > 1024)) {
      emlrtDynamicBoundsCheckR2012b(c2_len, 1, 1024, &c2_j_emlrtBCI,
        (emlrtConstCTX)c2_sp);
    }

    c2_i = c2_len - 1;
  }

  c2_out_size[0] = 1;
  c2_out_size[1] = c2_i + 1;
  c2_loop_ub = c2_i;
  for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
    c2_out_data[c2_i1] = c2_in[c2_i1];
  }
}

static boolean_T c2_strcmp(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, char_T c2_a_data[], int32_T c2_a_size[2])
{
  c2_emxArray_char_T *c2_x;
  int32_T c2_b_kstr;
  int32_T c2_exitg1;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_kstr;
  int32_T c2_loop_ub;
  int32_T c2_remainingDimsA;
  boolean_T c2_bool;
  c2_bool = false;
  c2_emxInit_char_T(chartInstance, c2_sp, &c2_x, 2, &c2_kb_emlrtRTEI);
  c2_i = c2_x->size[0] * c2_x->size[1];
  c2_x->size[0] = 1;
  c2_x->size[1] = c2_a_size[1];
  c2_emxEnsureCapacity_char_T(chartInstance, c2_sp, c2_x, c2_i, &c2_kb_emlrtRTEI);
  c2_loop_ub = c2_a_size[1] - 1;
  for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
    c2_x->data[c2_i1] = c2_a_data[c2_i1];
  }

  c2_remainingDimsA = c2_x->size[1];
  c2_emxFree_char_T(chartInstance, &c2_x);
  if (c2_remainingDimsA != 44) {
  } else {
    c2_kstr = 1;
    do {
      c2_exitg1 = 0;
      if (c2_kstr - 1 < 44) {
        c2_b_kstr = c2_kstr - 1;
        if (c2_a_data[c2_b_kstr] != c2_cv6[c2_b_kstr]) {
          c2_exitg1 = 1;
        } else {
          c2_kstr++;
        }
      } else {
        c2_bool = true;
        c2_exitg1 = 1;
      }
    } while (c2_exitg1 == 0);
  }

  return c2_bool;
}

static boolean_T c2_b_strcmp(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, char_T c2_a_data[], int32_T c2_a_size[2])
{
  c2_emxArray_char_T *c2_x;
  int32_T c2_b_kstr;
  int32_T c2_exitg1;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_kstr;
  int32_T c2_loop_ub;
  int32_T c2_remainingDimsA;
  boolean_T c2_bool;
  c2_bool = false;
  c2_emxInit_char_T(chartInstance, c2_sp, &c2_x, 2, &c2_kb_emlrtRTEI);
  c2_i = c2_x->size[0] * c2_x->size[1];
  c2_x->size[0] = 1;
  c2_x->size[1] = c2_a_size[1];
  c2_emxEnsureCapacity_char_T(chartInstance, c2_sp, c2_x, c2_i, &c2_kb_emlrtRTEI);
  c2_loop_ub = c2_a_size[1] - 1;
  for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
    c2_x->data[c2_i1] = c2_a_data[c2_i1];
  }

  c2_remainingDimsA = c2_x->size[1];
  c2_emxFree_char_T(chartInstance, &c2_x);
  if (c2_remainingDimsA != 46) {
  } else {
    c2_kstr = 1;
    do {
      c2_exitg1 = 0;
      if (c2_kstr - 1 < 46) {
        c2_b_kstr = c2_kstr - 1;
        if (c2_a_data[c2_b_kstr] != c2_cv5[c2_b_kstr]) {
          c2_exitg1 = 1;
        } else {
          c2_kstr++;
        }
      } else {
        c2_bool = true;
        c2_exitg1 = 1;
      }
    } while (c2_exitg1 == 0);
  }

  return c2_bool;
}

static boolean_T c2_c_strcmp(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, char_T c2_a_data[], int32_T c2_a_size[2])
{
  c2_emxArray_char_T *c2_x;
  int32_T c2_b_kstr;
  int32_T c2_exitg1;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_kstr;
  int32_T c2_loop_ub;
  int32_T c2_remainingDimsA;
  boolean_T c2_bool;
  c2_bool = false;
  c2_emxInit_char_T(chartInstance, c2_sp, &c2_x, 2, &c2_kb_emlrtRTEI);
  c2_i = c2_x->size[0] * c2_x->size[1];
  c2_x->size[0] = 1;
  c2_x->size[1] = c2_a_size[1];
  c2_emxEnsureCapacity_char_T(chartInstance, c2_sp, c2_x, c2_i, &c2_kb_emlrtRTEI);
  c2_loop_ub = c2_a_size[1] - 1;
  for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
    c2_x->data[c2_i1] = c2_a_data[c2_i1];
  }

  c2_remainingDimsA = c2_x->size[1];
  c2_emxFree_char_T(chartInstance, &c2_x);
  if (c2_remainingDimsA != 39) {
  } else {
    c2_kstr = 1;
    do {
      c2_exitg1 = 0;
      if (c2_kstr - 1 < 39) {
        c2_b_kstr = c2_kstr - 1;
        if (c2_a_data[c2_b_kstr] != c2_cv4[c2_b_kstr]) {
          c2_exitg1 = 1;
        } else {
          c2_kstr++;
        }
      } else {
        c2_bool = true;
        c2_exitg1 = 1;
      }
    } while (c2_exitg1 == 0);
  }

  return c2_bool;
}

static boolean_T c2_d_strcmp(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, char_T c2_a_data[], int32_T c2_a_size[2])
{
  c2_emxArray_char_T *c2_x;
  int32_T c2_b_kstr;
  int32_T c2_exitg1;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_kstr;
  int32_T c2_loop_ub;
  int32_T c2_remainingDimsA;
  boolean_T c2_bool;
  c2_bool = false;
  c2_emxInit_char_T(chartInstance, c2_sp, &c2_x, 2, &c2_kb_emlrtRTEI);
  c2_i = c2_x->size[0] * c2_x->size[1];
  c2_x->size[0] = 1;
  c2_x->size[1] = c2_a_size[1];
  c2_emxEnsureCapacity_char_T(chartInstance, c2_sp, c2_x, c2_i, &c2_kb_emlrtRTEI);
  c2_loop_ub = c2_a_size[1] - 1;
  for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
    c2_x->data[c2_i1] = c2_a_data[c2_i1];
  }

  c2_remainingDimsA = c2_x->size[1];
  c2_emxFree_char_T(chartInstance, &c2_x);
  if (c2_remainingDimsA != 35) {
  } else {
    c2_kstr = 1;
    do {
      c2_exitg1 = 0;
      if (c2_kstr - 1 < 35) {
        c2_b_kstr = c2_kstr - 1;
        if (c2_a_data[c2_b_kstr] != c2_cv3[c2_b_kstr]) {
          c2_exitg1 = 1;
        } else {
          c2_kstr++;
        }
      } else {
        c2_bool = true;
        c2_exitg1 = 1;
      }
    } while (c2_exitg1 == 0);
  }

  return c2_bool;
}

static void c2_API_channelErrorIfFailed(SFc2_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, CoderChannel c2_chImpl, int32_T c2_success)
{
  emlrtStack c2_b_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_y = NULL;
  int32_T c2_errorID_size[2];
  char_T c2_errorID[1024];
  char_T c2_errorID_data[1024];
  char_T c2_errorText[1024];
  boolean_T c2_hasSyncError;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  if ((real_T)c2_success == 0.0) {
    coderChannelHasSyncError(c2_chImpl, &c2_hasSyncError);
    if (!c2_hasSyncError) {
      coderChannelGetLastError(c2_chImpl, &c2_errorID[0], &c2_errorText[0]);
      c2_st.site = &c2_eb_emlrtRSI;
      c2_API_dispatchInternalError(chartInstance, &c2_st, c2_errorID,
        c2_errorText);
    } else {
      coderChannelGetLastSyncError(c2_chImpl, &c2_errorID[0], &c2_errorText[0]);
      c2_st.site = &c2_fb_emlrtRSI;
      c2_b_st.site = &c2_gb_emlrtRSI;
      c2_API_trimString(chartInstance, &c2_b_st, c2_errorID, c2_errorID_data,
                        c2_errorID_size);
      c2_y = NULL;
      sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv7, 10, 0U, 1U, 0U, 2, 1, 37),
                    false);
      c2_b_y = NULL;
      sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv7, 10, 0U, 1U, 0U, 2, 1, 37),
                    false);
      c2_c_y = NULL;
      sf_mex_assign(&c2_c_y, sf_mex_create("y", &c2_errorID_data, 10, 0U, 1U, 0U,
        2, 1, c2_errorID_size[1]), false);
      c2_d_y = NULL;
      sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_errorText, 10, 0U, 1U, 0U, 2,
        1, 1024), false);
      sf_mex_call(&c2_st, &c2_v_emlrtMCI, "error", 0U, 2U, 14, c2_y, 14,
                  sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (&c2_st, NULL, "message", 1U, 3U, 14, c2_b_y, 14, c2_c_y, 14, c2_d_y)));
    }
  }
}

static c2_matlabshared_asyncio_internal_InputStream *c2_InputStream_InputStream
  (SFc2_wwtp3InstanceStruct *chartInstance, const emlrtStack *c2_sp,
   c2_matlabshared_asyncio_internal_InputStream *c2_obj, CoderChannel
   c2_channelImpl)
{
  CoderChannel c2_b_channelImpl;
  CoderChannel c2_chImpl;
  CoderInputStream c2_streamImpl;
  c2_matlabshared_asyncio_internal_InputStream *c2_b_obj;
  c2_matlabshared_asyncio_internal_InputStream *c2_c_obj;
  c2_matlabshared_asyncio_internal_InputStream *c2_this;
  emlrtStack c2_b_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_y = NULL;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_loop_ub;
  uint8_T c2_coderExampleDataLocal_data[1];
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_b_obj = c2_obj;
  c2_st.site = &c2_hb_emlrtRSI;
  c2_c_obj = c2_b_obj;
  c2_b_channelImpl = c2_channelImpl;
  c2_b_obj = c2_c_obj;
  c2_b_obj->Timeout = 10.0;
  c2_b_st.site = &c2_jb_emlrtRSI;
  c2_this = c2_b_obj;
  c2_b_obj = c2_this;
  c2_b_st.site = &c2_kb_emlrtRSI;
  c2_chImpl = c2_b_channelImpl;
  c2_streamImpl = coderChannelGetInputStream(c2_chImpl);
  if (!(c2_streamImpl != 0)) {
    c2_y = NULL;
    sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv8, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv8, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    sf_mex_call(&c2_b_st, &c2_w_emlrtMCI, "error", 0U, 2U, 14, c2_y, 14,
                sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_b_st, NULL, "message", 1U, 1U, 14, c2_b_y)));
  }

  c2_b_obj->StreamImpl = c2_streamImpl;
  c2_b_obj->ChannelImpl = c2_b_channelImpl;
  c2_coderExampleDataLocal_data[0] = 0U;
  c2_i = c2_b_obj->ExampleData->size[0] * c2_b_obj->ExampleData->size[1];
  c2_b_obj->ExampleData->size[0] = 1;
  c2_b_obj->ExampleData->size[1] = 1;
  c2_st.site = &c2_nl_emlrtRSI;
  c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_st, c2_b_obj->ExampleData,
    c2_i, &c2_ob_emlrtRTEI);
  c2_loop_ub = 0;
  for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
    c2_b_obj->ExampleData->data[c2_i1] = c2_coderExampleDataLocal_data[c2_i1];
  }

  c2_st.site = &c2_ib_emlrtRSI;
  c2_InputStream_clearPartialPacket(chartInstance, &c2_st, c2_b_obj);
  c2_b_obj->matlabCodegenIsDeleted = false;
  return c2_b_obj;
}

static void c2_InputStream_clearPartialPacket(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_matlabshared_asyncio_internal_InputStream *c2_obj)
{
  c2_emxArray_uint8_T *c2_exampleData;
  c2_emxArray_uint8_T *c2_partialPacketInitializer;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_st;
  const mxArray *c2_y = NULL;
  int32_T c2_outsize[2];
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_loop_ub;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_st.site = &c2_lb_emlrtRSI;
  c2_emxInit_uint8_T(chartInstance, &c2_st, &c2_exampleData, 2, &c2_pb_emlrtRTEI);
  c2_i = c2_exampleData->size[0] * c2_exampleData->size[1];
  c2_exampleData->size[0] = c2_obj->ExampleData->size[0];
  c2_exampleData->size[1] = c2_obj->ExampleData->size[1];
  c2_b_st.site = &c2_lb_emlrtRSI;
  c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_b_st, c2_exampleData, c2_i,
    &c2_pb_emlrtRTEI);
  c2_loop_ub = c2_obj->ExampleData->size[0] * c2_obj->ExampleData->size[1] - 1;
  for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
    c2_exampleData->data[c2_i1] = c2_obj->ExampleData->data[c2_i1];
  }

  c2_b_st.site = &c2_mb_emlrtRSI;
  c2_c_st.site = &c2_nb_emlrtRSI;
  c2_outsize[0] = c2_exampleData->size[0];
  if (!((real_T)c2_outsize[0] == (real_T)c2_exampleData->size[0])) {
    c2_y = NULL;
    sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv9, 10, 0U, 1U, 0U, 2, 1, 15),
                  false);
    sf_mex_call(&c2_c_st, &c2_x_emlrtMCI, "error", 0U, 1U, 14, c2_y);
  }

  c2_emxFree_uint8_T(chartInstance, &c2_exampleData);
  c2_emxInit_uint8_T(chartInstance, &c2_c_st, &c2_partialPacketInitializer, 2,
                     &c2_qb_emlrtRTEI);
  c2_partialPacketInitializer->size[0] = c2_outsize[0];
  c2_partialPacketInitializer->size[1] = 0;
  c2_obj->PartialPacket->size[0] = c2_partialPacketInitializer->size[0];
  c2_obj->PartialPacket->size[1] = 0;
  c2_emxFree_uint8_T(chartInstance, &c2_partialPacketInitializer);
  c2_obj->PartialPacketStart = 0.0;
  c2_obj->PartialPacketCount = 0.0;
}

static c2_matlabshared_asyncio_internal_OutputStream
  *c2_OutputStream_OutputStream(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_matlabshared_asyncio_internal_OutputStream *c2_obj,
  CoderChannel c2_channelImpl)
{
  CoderChannel c2_b_channelImpl;
  CoderChannel c2_chImpl;
  CoderOutputStream c2_streamImpl;
  c2_matlabshared_asyncio_internal_OutputStream *c2_b_obj;
  c2_matlabshared_asyncio_internal_OutputStream *c2_c_obj;
  c2_matlabshared_asyncio_internal_OutputStream *c2_this;
  emlrtStack c2_b_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_y = NULL;
  (void)chartInstance;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_b_obj = c2_obj;
  c2_st.site = &c2_ob_emlrtRSI;
  c2_c_obj = c2_b_obj;
  c2_b_channelImpl = c2_channelImpl;
  c2_b_obj = c2_c_obj;
  c2_b_obj->Timeout = 10.0;
  c2_b_st.site = &c2_jb_emlrtRSI;
  c2_this = c2_b_obj;
  c2_b_obj = c2_this;
  c2_b_st.site = &c2_pb_emlrtRSI;
  c2_chImpl = c2_b_channelImpl;
  c2_streamImpl = coderChannelGetOutputStream(c2_chImpl);
  if (!(c2_streamImpl != 0)) {
    c2_y = NULL;
    sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv8, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv8, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    sf_mex_call(&c2_b_st, &c2_y_emlrtMCI, "error", 0U, 2U, 14, c2_y, 14,
                sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_b_st, NULL, "message", 1U, 1U, 14, c2_b_y)));
  }

  c2_b_obj->StreamImpl = c2_streamImpl;
  c2_b_obj->ChannelImpl = c2_b_channelImpl;
  c2_b_obj->matlabCodegenIsDeleted = false;
  return c2_b_obj;
}

static void c2_TCPClient_connect(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_matlabshared_network_internal_TCPClient *c2_obj)
{
  static char_T c2_b_cv[39] = { 'n', 'e', 't', 'w', 'o', 'r', 'k', ':', 't', 'c',
    'p', 'c', 'l', 'i', 'e', 'n', 't', ':', 'a', 'l', 'r', 'e', 'a', 'd', 'y',
    'C', 'o', 'n', 'n', 'e', 'c', 't', 'e', 'd', 'E', 'r', 'r', 'o', 'r' };

  CoderChannel c2_b_chImpl;
  CoderChannel c2_c_chImpl;
  CoderChannel c2_chImpl;
  CoderChannel c2_d_chImpl;
  CoderChannel c2_e_chImpl;
  c2_cell_17 c2_args;
  c2_emxArray_char_T *c2_e_value;
  c2_matlabshared_asyncio_internal_Channel *c2_b_obj;
  c2_matlabshared_asyncio_internal_Channel *c2_g_obj;
  c2_matlabshared_asyncio_internal_Channel *c2_h_obj;
  c2_matlabshared_asyncio_internal_Channel *c2_i_obj;
  c2_matlabshared_asyncio_internal_Channel *c2_j_obj;
  c2_matlabshared_network_internal_TCPClient *c2_c_obj;
  c2_matlabshared_network_internal_TCPClient *c2_d_obj;
  c2_matlabshared_network_internal_TCPClient *c2_e_obj;
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_f_obj;
  c2_s_IiVysWyVj7T2O9POL8hpXH c2_options;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  emlrtStack c2_f_st;
  emlrtStack c2_g_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_y = NULL;
  real_T c2_dv[2];
  real_T c2_dv1[2];
  real_T c2_f_value[2];
  real_T c2_d;
  int32_T c2_b_loop_ub;
  int32_T c2_b_success;
  int32_T c2_c_loop_ub;
  int32_T c2_c_success;
  int32_T c2_d_loop_ub;
  int32_T c2_d_success;
  int32_T c2_e_loop_ub;
  int32_T c2_e_success;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i2;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_i24;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_loop_ub;
  int32_T c2_success;
  uint32_T c2_b_u;
  char_T c2_d_value[11];
  boolean_T c2_bv[2];
  boolean_T c2_bv1[2];
  boolean_T c2_g_value[2];
  boolean_T c2_b;
  boolean_T c2_b_exampleValue;
  boolean_T c2_b_result;
  boolean_T c2_b_value;
  boolean_T c2_c_value;
  boolean_T c2_exampleValue;
  boolean_T c2_out;
  boolean_T c2_result;
  boolean_T c2_value;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_f_st.prev = &c2_e_st;
  c2_f_st.tls = c2_e_st.tls;
  c2_g_st.prev = &c2_f_st;
  c2_g_st.tls = c2_f_st.tls;
  c2_st.site = &c2_n_emlrtRSI;
  c2_b_obj = c2_obj->AsyncIOChannel;
  c2_b_st.site = &c2_fc_emlrtRSI;
  c2_chImpl = c2_b_obj->ChannelImpl;
  c2_success = coderChannelIsOpen(c2_chImpl, &c2_result);
  c2_c_st.site = &c2_gc_emlrtRSI;
  c2_API_channelErrorIfFailed(chartInstance, &c2_c_st, c2_chImpl, c2_success);
  if (c2_result) {
    c2_y = NULL;
    sf_mex_assign(&c2_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    sf_mex_call(c2_sp, &c2_e_emlrtMCI, "error", 0U, 2U, 14, c2_y, 14,
                sf_mex_call(c2_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c2_sp, NULL, "message", 1U, 1U, 14, c2_b_y)));
  }

  c2_st.site = &c2_n_emlrtRSI;
  c2_c_obj = c2_obj;
  c2_emxInitStruct_s_IiVysWyVj7T2O9P(chartInstance, &c2_st, &c2_options,
    &c2_u_emlrtRTEI);
  for (c2_i = 0; c2_i < 11; c2_i++) {
    c2_options.HostName[c2_i] = c2_c_obj->RemoteHost[c2_i];
  }

  c2_b_st.site = &c2_n_emlrtRSI;
  c2_d = muDoubleScalarRound(c2_c_obj->RemotePort);
  if (c2_d < 4.294967296E+9) {
    if (c2_d >= 0.0) {
      c2_b_u = (uint32_T)c2_d;
    } else {
      c2_b_u = 0U;
    }
  } else if (c2_d >= 4.294967296E+9) {
    c2_b_u = MAX_uint32_T;
  } else {
    c2_b_u = 0U;
  }

  c2_sprintf(chartInstance, &c2_b_st, c2_b_u, c2_options.ServiceName);
  c2_options.ConnectTimeout = c2_c_obj->ConnectTimeout;
  c2_options.IsWriteOnly = c2_c_obj->IsWriteOnly;
  c2_options.IsSharingPort = c2_c_obj->IsSharingPort;
  c2_b_st.site = &c2_n_emlrtRSI;
  c2_d_obj = c2_c_obj;
  c2_c_st.site = &c2_n_emlrtRSI;
  c2_e_obj = c2_d_obj;
  c2_d_st.site = &c2_n_emlrtRSI;
  c2_f_obj = c2_e_obj->TransportChannel;
  c2_e_st.site = &c2_qb_emlrtRSI;
  c2_g_obj = c2_f_obj->AsyncIOChannel;
  c2_f_st.site = &c2_fc_emlrtRSI;
  c2_b_chImpl = c2_g_obj->ChannelImpl;
  c2_b_success = coderChannelIsOpen(c2_b_chImpl, &c2_out);
  c2_g_st.site = &c2_gc_emlrtRSI;
  c2_API_channelErrorIfFailed(chartInstance, &c2_g_st, c2_b_chImpl, c2_b_success);
  if (c2_out) {
    c2_value = true;
  } else {
    c2_value = false;
  }

  c2_b_value = c2_value;
  if (!c2_b_value) {
    c2_c_value = c2_d_obj->TransferDelay;
  } else {
    c2_c_st.site = &c2_n_emlrtRSI;
    c2_h_obj = c2_d_obj->AsyncIOChannel;
    c2_exampleValue = c2_h_obj->CustomProps.TransferDelay;
    c2_d_st.site = &c2_lc_emlrtRSI;
    c2_c_chImpl = c2_h_obj->ChannelImpl;
    c2_b_exampleValue = c2_exampleValue;
    c2_c_value = c2_b_exampleValue;
    c2_c_success = coderChannelGetPropertyValue(c2_c_chImpl, "TransferDelay",
      "logical", 1, &c2_c_value);
    c2_e_st.site = &c2_mc_emlrtRSI;
    c2_API_channelErrorIfFailed(chartInstance, &c2_e_st, c2_c_chImpl,
      c2_c_success);
  }

  c2_options.TransferDelay = c2_c_value;
  c2_b_st.site = &c2_n_emlrtRSI;
  c2_i_obj = c2_c_obj->AsyncIOChannel;
  c2_c_st.site = &c2_dc_emlrtRSI;
  c2_j_obj = c2_i_obj;
  c2_d_st.site = &c2_fc_emlrtRSI;
  c2_d_chImpl = c2_j_obj->ChannelImpl;
  c2_d_success = coderChannelIsOpen(c2_d_chImpl, &c2_b_result);
  c2_e_st.site = &c2_gc_emlrtRSI;
  c2_API_channelErrorIfFailed(chartInstance, &c2_e_st, c2_d_chImpl, c2_d_success);
  if (!c2_b_result) {
    c2_c_st.site = &c2_ec_emlrtRSI;
    c2_e_chImpl = c2_i_obj->ChannelImpl;
    c2_emxInitStruct_cell_17(chartInstance, &c2_c_st, &c2_args, &c2_u_emlrtRTEI);
    c2_args.f1 = "HostName";
    c2_args.f2 = "char";
    for (c2_i1 = 0; c2_i1 < 11; c2_i1++) {
      c2_d_value[c2_i1] = c2_options.HostName[c2_i1];
    }

    for (c2_i2 = 0; c2_i2 < 11; c2_i2++) {
      c2_args.f4[c2_i2] = c2_d_value[c2_i2];
    }

    c2_args.f5 = "ServiceName";
    c2_args.f6 = "char";
    c2_args.f7 = c2_options.ServiceName->size[1];
    c2_b = (c2_options.ServiceName->size[1] == 1);
    c2_emxInit_char_T(chartInstance, &c2_c_st, &c2_e_value, 2, &c2_db_emlrtRTEI);
    if (c2_b) {
      c2_i4 = c2_e_value->size[0] * c2_e_value->size[1];
      c2_e_value->size[0] = 1;
      c2_e_value->size[1] = c2_options.ServiceName->size[1] +
        c2_options.ServiceName->size[1];
      c2_emxEnsureCapacity_char_T(chartInstance, &c2_c_st, c2_e_value, c2_i4,
        &c2_db_emlrtRTEI);
      c2_b_loop_ub = c2_options.ServiceName->size[1] - 1;
      for (c2_i6 = 0; c2_i6 <= c2_b_loop_ub; c2_i6++) {
        c2_e_value->data[c2_i6] = c2_options.ServiceName->data[c2_i6];
      }

      c2_c_loop_ub = c2_options.ServiceName->size[1] - 1;
      for (c2_i8 = 0; c2_i8 <= c2_c_loop_ub; c2_i8++) {
        c2_e_value->data[c2_i8 + c2_options.ServiceName->size[1]] =
          c2_options.ServiceName->data[c2_i8];
      }
    } else {
      c2_i3 = c2_e_value->size[0] * c2_e_value->size[1];
      c2_e_value->size[0] = 1;
      c2_e_value->size[1] = c2_options.ServiceName->size[1];
      c2_emxEnsureCapacity_char_T(chartInstance, &c2_c_st, c2_e_value, c2_i3,
        &c2_f_emlrtRTEI);
      c2_loop_ub = c2_options.ServiceName->size[1] - 1;
      for (c2_i5 = 0; c2_i5 <= c2_loop_ub; c2_i5++) {
        c2_e_value->data[c2_i5] = c2_options.ServiceName->data[c2_i5];
      }
    }

    c2_i7 = c2_args.f8->size[0] * c2_args.f8->size[1];
    c2_args.f8->size[0] = 1;
    c2_args.f8->size[1] = c2_e_value->size[1];
    c2_emxEnsureCapacity_char_T(chartInstance, &c2_c_st, c2_args.f8, c2_i7,
      &c2_rb_emlrtRTEI);
    c2_d_loop_ub = c2_e_value->size[1] - 1;
    for (c2_i9 = 0; c2_i9 <= c2_d_loop_ub; c2_i9++) {
      c2_args.f8->data[c2_i9] = c2_e_value->data[c2_i9];
    }

    c2_args.f9 = "ReceiveSize";
    c2_args.f10 = "double";
    for (c2_i10 = 0; c2_i10 < 2; c2_i10++) {
      c2_args.f12[c2_i10] = 65536.0;
    }

    c2_args.f13 = "SendSize";
    c2_args.f14 = "double";
    for (c2_i11 = 0; c2_i11 < 2; c2_i11++) {
      c2_args.f16[c2_i11] = 65536.0;
    }

    c2_args.f17 = "ConnectTimeout";
    c2_args.f18 = "double";
    c2_f_value[0] = c2_options.ConnectTimeout;
    c2_f_value[1] = c2_options.ConnectTimeout;
    for (c2_i12 = 0; c2_i12 < 2; c2_i12++) {
      c2_args.f20[c2_i12] = c2_f_value[c2_i12];
    }

    c2_args.f21 = "IsWriteOnly";
    c2_args.f22 = "logical";
    c2_g_value[0] = c2_options.IsWriteOnly;
    c2_g_value[1] = c2_options.IsWriteOnly;
    for (c2_i13 = 0; c2_i13 < 2; c2_i13++) {
      c2_args.f24[c2_i13] = c2_g_value[c2_i13];
    }

    c2_args.f25 = "IsSharingPort";
    c2_args.f26 = "logical";
    c2_g_value[0] = c2_options.IsSharingPort;
    c2_g_value[1] = c2_options.IsSharingPort;
    for (c2_i14 = 0; c2_i14 < 2; c2_i14++) {
      c2_args.f28[c2_i14] = c2_g_value[c2_i14];
    }

    c2_args.f29 = "TransferDelay";
    c2_args.f30 = "logical";
    c2_g_value[0] = c2_options.TransferDelay;
    c2_g_value[1] = c2_options.TransferDelay;
    for (c2_i15 = 0; c2_i15 < 2; c2_i15++) {
      c2_args.f32[c2_i15] = c2_g_value[c2_i15];
    }

    for (c2_i16 = 0; c2_i16 < 11; c2_i16++) {
      c2_d_value[c2_i16] = c2_args.f4[c2_i16];
    }

    c2_i17 = c2_e_value->size[0] * c2_e_value->size[1];
    c2_e_value->size[0] = 1;
    c2_e_value->size[1] = c2_args.f8->size[1];
    c2_emxEnsureCapacity_char_T(chartInstance, &c2_c_st, c2_e_value, c2_i17,
      &c2_sb_emlrtRTEI);
    c2_e_loop_ub = c2_args.f8->size[1] - 1;
    for (c2_i18 = 0; c2_i18 <= c2_e_loop_ub; c2_i18++) {
      c2_e_value->data[c2_i18] = c2_args.f8->data[c2_i18];
    }

    for (c2_i19 = 0; c2_i19 < 2; c2_i19++) {
      c2_f_value[c2_i19] = c2_args.f12[c2_i19];
    }

    for (c2_i20 = 0; c2_i20 < 2; c2_i20++) {
      c2_dv[c2_i20] = c2_args.f16[c2_i20];
    }

    for (c2_i21 = 0; c2_i21 < 2; c2_i21++) {
      c2_dv1[c2_i21] = c2_args.f20[c2_i21];
    }

    for (c2_i22 = 0; c2_i22 < 2; c2_i22++) {
      c2_g_value[c2_i22] = c2_args.f24[c2_i22];
    }

    for (c2_i23 = 0; c2_i23 < 2; c2_i23++) {
      c2_bv[c2_i23] = c2_args.f28[c2_i23];
    }

    for (c2_i24 = 0; c2_i24 < 2; c2_i24++) {
      c2_bv1[c2_i24] = c2_args.f32[c2_i24];
    }

    c2_e_success = coderChannelOpen(c2_e_chImpl, 8, c2_args.f1, c2_args.f2, 11,
      &c2_d_value[0], c2_args.f5, c2_args.f6, c2_args.f7, &c2_e_value->data[0],
      c2_args.f9, c2_args.f10, 1, &c2_f_value[0], c2_args.f13, c2_args.f14, 1,
      &c2_dv[0], c2_args.f17, c2_args.f18, 1, &c2_dv1[0], c2_args.f21,
      c2_args.f22, 1, &c2_g_value[0], c2_args.f25, c2_args.f26, 1, &c2_bv[0],
      c2_args.f29, c2_args.f30, 1, &c2_bv1[0]);
    c2_emxFree_char_T(chartInstance, &c2_e_value);
    c2_emxFreeStruct_cell_17(chartInstance, &c2_args);
    c2_d_st.site = &c2_hc_emlrtRSI;
    c2_API_channelErrorIfFailed(chartInstance, &c2_d_st, c2_e_chImpl,
      c2_e_success);
  }

  c2_emxFreeStruct_s_IiVysWyVj7T2O9P(chartInstance, &c2_options);
}

static boolean_T c2_e_strcmp(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_char_T *c2_b_a, char_T c2_b[13])
{
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_g_y = NULL;
  const mxArray *c2_i_y = NULL;
  const mxArray *c2_j_y = NULL;
  const mxArray *c2_k_y = NULL;
  const mxArray *c2_m_y = NULL;
  const mxArray *c2_n_y = NULL;
  const mxArray *c2_y = NULL;
  int32_T c2_b_kstr;
  int32_T c2_exitg1;
  int32_T c2_kstr;
  int32_T c2_remainingDimsA;
  char_T c2_b_s;
  char_T c2_b_x;
  char_T c2_c_s;
  char_T c2_c_x;
  char_T c2_d_s;
  char_T c2_d_x;
  char_T c2_e_s;
  char_T c2_f_s;
  char_T c2_g_s;
  char_T c2_h_s;
  char_T c2_h_y;
  char_T c2_l_y;
  char_T c2_s;
  char_T c2_x;
  int8_T c2_b_u;
  int8_T c2_c_u;
  int8_T c2_d_u;
  int8_T c2_e_u;
  boolean_T c2_b1;
  boolean_T c2_b2;
  boolean_T c2_b3;
  boolean_T c2_b_b;
  boolean_T c2_b_p;
  boolean_T c2_bool;
  boolean_T c2_c_p;
  boolean_T c2_d_p;
  boolean_T c2_p;
  (void)chartInstance;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_st.site = &c2_qd_emlrtRSI;
  c2_b_st.site = &c2_rd_emlrtRSI;
  c2_bool = false;
  c2_remainingDimsA = c2_b_a->size[1];
  if (c2_remainingDimsA != 13) {
  } else {
    c2_kstr = 1;
    do {
      c2_exitg1 = 0;
      if (c2_kstr - 1 < 13) {
        c2_b_kstr = c2_kstr - 1;
        c2_c_st.site = &c2_sd_emlrtRSI;
        c2_s = c2_b_a->data[c2_b_kstr];
        c2_b_s = c2_s;
        c2_b_b = ((real_T)(uint8_T)c2_b_s <= 127.0);
        c2_p = c2_b_b;
        if (!c2_p) {
          c2_y = NULL;
          sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c2_b_y = NULL;
          sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
            1, 31), false);
          c2_b_u = MAX_int8_T;
          c2_c_y = NULL;
          sf_mex_assign(&c2_c_y, sf_mex_create("y", &c2_b_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c2_c_st, &c2_eb_emlrtMCI, "error", 0U, 2U, 14, c2_y, 14,
                      sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c2_c_st, NULL, "message", 1U, 2U, 14, c2_b_y, 14,
                        c2_c_y)));
        }

        c2_c_st.site = &c2_td_emlrtRSI;
        c2_c_s = c2_b[c2_b_kstr];
        c2_d_s = c2_c_s;
        c2_b1 = ((real_T)(uint8_T)c2_d_s <= 127.0);
        c2_b_p = c2_b1;
        if (!c2_b_p) {
          c2_d_y = NULL;
          sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
            1, 31), false);
          c2_e_y = NULL;
          sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
            1, 31), false);
          c2_c_u = MAX_int8_T;
          c2_f_y = NULL;
          sf_mex_assign(&c2_f_y, sf_mex_create("y", &c2_c_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c2_c_st, &c2_eb_emlrtMCI, "error", 0U, 2U, 14, c2_d_y, 14,
                      sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c2_c_st, NULL, "message", 1U, 2U, 14, c2_e_y, 14,
                        c2_f_y)));
        }

        c2_c_st.site = &c2_ud_emlrtRSI;
        c2_x = c2_b_a->data[c2_b_kstr];
        c2_d_st.site = &c2_vd_emlrtRSI;
        c2_b_x = c2_x;
        c2_e_st.site = &c2_wd_emlrtRSI;
        c2_e_s = c2_b_x;
        c2_f_s = c2_e_s;
        c2_b2 = ((real_T)(uint8_T)c2_f_s <= 127.0);
        c2_c_p = c2_b2;
        if (!c2_c_p) {
          c2_g_y = NULL;
          sf_mex_assign(&c2_g_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
            1, 31), false);
          c2_i_y = NULL;
          sf_mex_assign(&c2_i_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
            1, 31), false);
          c2_d_u = MAX_int8_T;
          c2_j_y = NULL;
          sf_mex_assign(&c2_j_y, sf_mex_create("y", &c2_d_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c2_e_st, &c2_eb_emlrtMCI, "error", 0U, 2U, 14, c2_g_y, 14,
                      sf_mex_call(&c2_e_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c2_e_st, NULL, "message", 1U, 2U, 14, c2_i_y, 14,
                        c2_j_y)));
        }

        c2_h_y = c2_cv10[(uint8_T)c2_b_x & 127];
        c2_c_st.site = &c2_ud_emlrtRSI;
        c2_c_x = c2_b[c2_b_kstr];
        c2_d_st.site = &c2_vd_emlrtRSI;
        c2_d_x = c2_c_x;
        c2_e_st.site = &c2_wd_emlrtRSI;
        c2_g_s = c2_d_x;
        c2_h_s = c2_g_s;
        c2_b3 = ((real_T)(uint8_T)c2_h_s <= 127.0);
        c2_d_p = c2_b3;
        if (!c2_d_p) {
          c2_k_y = NULL;
          sf_mex_assign(&c2_k_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
            1, 31), false);
          c2_m_y = NULL;
          sf_mex_assign(&c2_m_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
            1, 31), false);
          c2_e_u = MAX_int8_T;
          c2_n_y = NULL;
          sf_mex_assign(&c2_n_y, sf_mex_create("y", &c2_e_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c2_e_st, &c2_eb_emlrtMCI, "error", 0U, 2U, 14, c2_k_y, 14,
                      sf_mex_call(&c2_e_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c2_e_st, NULL, "message", 1U, 2U, 14, c2_m_y, 14,
                        c2_n_y)));
        }

        c2_l_y = c2_cv10[(uint8_T)c2_d_x & 127];
        if (c2_h_y != c2_l_y) {
          c2_exitg1 = 1;
        } else {
          c2_kstr++;
        }
      } else {
        c2_bool = true;
        c2_exitg1 = 1;
      }
    } while (c2_exitg1 == 0);
  }

  return c2_bool;
}

static void c2_DataConverter_word2bytes(SFc2_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_icomm_interface_coder_modbus_DataConverter *c2_obj,
  uint16_T c2_wordval, uint8_T c2_bytes[2])
{
  c2_emxArray_char_T *c2_out;
  c2_icomm_interface_coder_modbus_DataConverter *c2_b_obj;
  c2_icomm_interface_coder_modbus_DataConverter *c2_c_obj;
  emlrtStack c2_b_st;
  emlrtStack c2_st;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_loop_ub;
  uint16_T c2_b_x;
  uint16_T c2_convertedWordVal;
  uint16_T c2_x;
  char_T c2_d_obj[13];
  uint8_T c2_y[2];
  uint8_T c2_xtmp;
  boolean_T c2_b_out;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_convertedWordVal = c2_wordval;
  c2_st.site = &c2_md_emlrtRSI;
  c2_b_obj = c2_obj;
  c2_emxInit_char_T(chartInstance, &c2_st, &c2_out, 2, &c2_o_emlrtRTEI);
  c2_b_st.site = &c2_pd_emlrtRSI;
  c2_c_obj = c2_b_obj;
  c2_i = c2_out->size[0] * c2_out->size[1];
  c2_out->size[0] = 1;
  c2_out->size[1] = c2_c_obj->ByteOrder->size[1];
  c2_emxEnsureCapacity_char_T(chartInstance, &c2_b_st, c2_out, c2_i,
    &c2_b_emlrtRTEI);
  c2_loop_ub = c2_c_obj->ByteOrder->size[1] - 1;
  for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
    c2_out->data[c2_i1] = c2_c_obj->ByteOrder->data[c2_i1];
  }

  c2_b_st.site = &c2_pd_emlrtRSI;
  for (c2_i2 = 0; c2_i2 < 13; c2_i2++) {
    c2_d_obj[c2_i2] = c2_b_obj->MachineByteOrder[c2_i2];
  }

  c2_b_out = !c2_e_strcmp(chartInstance, &c2_b_st, c2_out, c2_d_obj);
  c2_emxFree_char_T(chartInstance, &c2_out);
  if (c2_b_out) {
    c2_st.site = &c2_nd_emlrtRSI;
    c2_x = c2_convertedWordVal;
    memcpy((void *)&c2_y[0], (void *)&c2_x, (size_t)2 * sizeof(uint8_T));
    c2_xtmp = c2_y[0];
    c2_y[0] = c2_y[1];
    c2_y[1] = c2_xtmp;
    memcpy((void *)&c2_convertedWordVal, (void *)&c2_y[0], (size_t)1 * sizeof
           (uint16_T));
  }

  c2_st.site = &c2_od_emlrtRSI;
  c2_b_x = c2_convertedWordVal;
  memcpy((void *)&c2_bytes[0], (void *)&c2_b_x, (size_t)2 * sizeof(uint8_T));
}

static void c2_TCPClient_validateConnected(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_matlabshared_network_internal_TCPClient *c2_obj)
{
  static char_T c2_b_cv[45] = { 't', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't', 'l',
    'i', 'b', ':', 't', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't', ':', 'i', 'n',
    'v', 'a', 'l', 'i', 'd', 'C', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n',
    'S', 't', 'a', 't', 'e' };

  static char_T c2_b_cv1[13] = { 'r', 'e', 'm', 'o', 't', 'e', ' ', 's', 'e',
    'r', 'v', 'e', 'r' };

  CoderChannel c2_chImpl;
  c2_matlabshared_asyncio_internal_Channel *c2_d_obj;
  c2_matlabshared_network_internal_TCPClient *c2_b_obj;
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_c_obj;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_y = NULL;
  int32_T c2_success;
  boolean_T c2_b_value;
  boolean_T c2_out;
  boolean_T c2_value;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_st.site = &c2_n_emlrtRSI;
  c2_b_obj = c2_obj;
  c2_b_st.site = &c2_n_emlrtRSI;
  c2_c_obj = c2_b_obj->TransportChannel;
  c2_c_st.site = &c2_qb_emlrtRSI;
  c2_d_obj = c2_c_obj->AsyncIOChannel;
  c2_d_st.site = &c2_fc_emlrtRSI;
  c2_chImpl = c2_d_obj->ChannelImpl;
  c2_success = coderChannelIsOpen(c2_chImpl, &c2_out);
  c2_e_st.site = &c2_gc_emlrtRSI;
  c2_API_channelErrorIfFailed(chartInstance, &c2_e_st, c2_chImpl, c2_success);
  if (c2_out) {
    c2_value = true;
  } else {
    c2_value = false;
  }

  c2_b_value = c2_value;
  if (!c2_b_value) {
    c2_y = NULL;
    sf_mex_assign(&c2_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 45),
                  false);
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 45),
                  false);
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2, 1, 13),
                  false);
    sf_mex_call(c2_sp, &c2_e_emlrtMCI, "error", 0U, 2U, 14, c2_y, 14,
                sf_mex_call(c2_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c2_sp, NULL, "message", 1U, 2U, 14, c2_b_y, 14, c2_c_y)));
  }
}

static void c2_b_API_channelErrorIfFailed(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp, CoderChannel c2_chImpl)
{
  emlrtStack c2_b_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_y = NULL;
  int32_T c2_errorID_size[2];
  char_T c2_errorID[1024];
  char_T c2_errorID_data[1024];
  char_T c2_errorText[1024];
  boolean_T c2_hasSyncError;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  coderChannelHasSyncError(c2_chImpl, &c2_hasSyncError);
  if (!c2_hasSyncError) {
    coderChannelGetLastError(c2_chImpl, &c2_errorID[0], &c2_errorText[0]);
    c2_st.site = &c2_eb_emlrtRSI;
    c2_API_dispatchInternalError(chartInstance, &c2_st, c2_errorID, c2_errorText);
  } else {
    coderChannelGetLastSyncError(c2_chImpl, &c2_errorID[0], &c2_errorText[0]);
    c2_st.site = &c2_fb_emlrtRSI;
    c2_b_st.site = &c2_gb_emlrtRSI;
    c2_API_trimString(chartInstance, &c2_b_st, c2_errorID, c2_errorID_data,
                      c2_errorID_size);
    c2_y = NULL;
    sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv7, 10, 0U, 1U, 0U, 2, 1, 37),
                  false);
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv7, 10, 0U, 1U, 0U, 2, 1, 37),
                  false);
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", &c2_errorID_data, 10, 0U, 1U, 0U,
      2, 1, c2_errorID_size[1]), false);
    c2_d_y = NULL;
    sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_errorText, 10, 0U, 1U, 0U, 2, 1,
      1024), false);
    sf_mex_call(&c2_st, &c2_v_emlrtMCI, "error", 0U, 2U, 14, c2_y, 14,
                sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_st, NULL, "message", 1U, 3U, 14, c2_b_y, 14, c2_c_y, 14, c2_d_y)));
  }
}

static void c2_Stream_wait(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_matlabshared_asyncio_internal_OutputStream *c2_obj,
  char_T c2_status_data[], int32_T c2_status_size[2])
{
  static char_T c2_b_cv1[7] = { 't', 'i', 'm', 'e', 'o', 'u', 't' };

  static char_T c2_b_cv2[5] = { 'p', 'a', 'u', 's', 'e' };

  static char_T c2_b_cv3[5] = { 'p', 'a', 'u', 's', 'e' };

  static char_T c2_b_cv[4] = { 'd', 'o', 'n', 'e' };

  CoderChannel c2_b_chImpl;
  CoderChannel c2_c_chImpl;
  CoderChannel c2_chImpl;
  CoderChannel c2_d_chImpl;
  CoderOutputStream c2_b_streamImpl;
  CoderOutputStream c2_c_streamImpl;
  CoderOutputStream c2_d_streamImpl;
  CoderOutputStream c2_e_streamImpl;
  CoderOutputStream c2_f_streamImpl;
  CoderOutputStream c2_g_streamImpl;
  CoderOutputStream c2_h_streamImpl;
  CoderOutputStream c2_streamImpl;
  c2_matlabshared_asyncio_internal_OutputStream *c2_b_obj;
  c2_matlabshared_asyncio_internal_OutputStream *c2_c_obj;
  c2_matlabshared_asyncio_internal_OutputStream *c2_d_obj;
  c2_matlabshared_asyncio_internal_OutputStream *c2_e_obj;
  c2_matlabshared_asyncio_internal_OutputStream *c2_f_obj;
  c2_matlabshared_asyncio_internal_OutputStream *c2_g_obj;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  emlrtStack c2_st;
  emlrtTimespec c2_startTic;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_y = NULL;
  real_T c2_b_count;
  real_T c2_b_varargin_1;
  real_T c2_count;
  real_T c2_et;
  real_T c2_timeoutInSeconds;
  real_T c2_varargin_1;
  int32_T c2_b_success;
  int32_T c2_c_success;
  int32_T c2_d_success;
  int32_T c2_e_success;
  int32_T c2_f_success;
  int32_T c2_g_success;
  int32_T c2_h_success;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_success;
  boolean_T c2_b_done;
  boolean_T c2_b_result;
  boolean_T c2_completed;
  boolean_T c2_done;
  boolean_T c2_result;
  boolean_T c2_timeout;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_timeoutInSeconds = c2_obj->Timeout;
  c2_status_size[0] = 1;
  c2_status_size[1] = 0;
  c2_timeout = false;
  c2_done = false;
  c2_st.site = &c2_pe_emlrtRSI;
  c2_b_obj = c2_obj;
  c2_b_st.site = &c2_ie_emlrtRSI;
  c2_c_obj = c2_b_obj;
  c2_c_st.site = &c2_me_emlrtRSI;
  c2_streamImpl = c2_c_obj->StreamImpl;
  c2_success = coderStreamGetSpaceAvailable(c2_streamImpl, &c2_count);
  c2_d_st.site = &c2_ne_emlrtRSI;
  c2_b_streamImpl = c2_streamImpl;
  c2_b_success = c2_success;
  if ((real_T)c2_b_success == 0.0) {
    c2_chImpl = coderStreamGetChannel(c2_b_streamImpl);
    c2_e_st.site = &c2_oe_emlrtRSI;
    c2_b_API_channelErrorIfFailed(chartInstance, &c2_e_st, c2_chImpl);
  }

  c2_completed = (c2_count > 0.0);
  c2_st.site = &c2_qe_emlrtRSI;
  c2_startTic = c2_tic(chartInstance, &c2_st);
  while ((!c2_completed) && (!c2_done) && (!c2_timeout)) {
    c2_st.site = &c2_re_emlrtRSI;
    c2_et = c2_toc(chartInstance, &c2_st, c2_startTic);
    if (c2_et < 1.0) {
      c2_st.site = &c2_se_emlrtRSI;
      c2_b_st.site = &c2_df_emlrtRSI;
      c2_b_varargin_1 = 0.0;
      c2_b_y = NULL;
      sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_cv3, 10, 0U, 1U, 0U, 2, 1,
        5), false);
      c2_d_y = NULL;
      sf_mex_assign(&c2_d_y, sf_mex_create("y", &c2_b_varargin_1, 0, 0U, 0U, 0U,
        0), false);
      c2_c_st.site = &c2_ef_emlrtRSI;
      c2_b_feval(chartInstance, &c2_c_st, c2_b_y, c2_d_y);
    } else {
      c2_st.site = &c2_te_emlrtRSI;
      c2_b_st.site = &c2_df_emlrtRSI;
      c2_varargin_1 = 0.005;
      c2_y = NULL;
      sf_mex_assign(&c2_y, sf_mex_create("y", c2_b_cv2, 10, 0U, 1U, 0U, 2, 1, 5),
                    false);
      c2_c_y = NULL;
      sf_mex_assign(&c2_c_y, sf_mex_create("y", &c2_varargin_1, 0, 0U, 0U, 0U, 0),
                    false);
      c2_c_st.site = &c2_ef_emlrtRSI;
      c2_b_feval(chartInstance, &c2_c_st, c2_y, c2_c_y);
    }

    c2_st.site = &c2_ue_emlrtRSI;
    c2_et = c2_toc(chartInstance, &c2_st, c2_startTic);
    c2_timeout = (c2_et > c2_timeoutInSeconds);
    c2_st.site = &c2_ve_emlrtRSI;
    c2_d_obj = c2_obj;
    c2_b_st.site = &c2_ff_emlrtRSI;
    c2_c_streamImpl = c2_d_obj->StreamImpl;
    c2_c_success = coderStreamIsDeviceDone(c2_c_streamImpl, &c2_result);
    c2_c_st.site = &c2_gf_emlrtRSI;
    c2_d_streamImpl = c2_c_streamImpl;
    c2_d_success = c2_c_success;
    if ((real_T)c2_d_success == 0.0) {
      c2_b_chImpl = coderStreamGetChannel(c2_d_streamImpl);
      c2_d_st.site = &c2_oe_emlrtRSI;
      c2_b_API_channelErrorIfFailed(chartInstance, &c2_d_st, c2_b_chImpl);
    }

    if (c2_result) {
      c2_b_done = true;
    } else {
      c2_st.site = &c2_ve_emlrtRSI;
      c2_e_obj = c2_obj;
      c2_b_st.site = &c2_hf_emlrtRSI;
      c2_e_streamImpl = c2_e_obj->StreamImpl;
      c2_e_success = coderStreamIsOpen(c2_e_streamImpl, &c2_b_result);
      c2_c_st.site = &c2_if_emlrtRSI;
      c2_f_streamImpl = c2_e_streamImpl;
      c2_f_success = c2_e_success;
      if ((real_T)c2_f_success == 0.0) {
        c2_c_chImpl = coderStreamGetChannel(c2_f_streamImpl);
        c2_d_st.site = &c2_oe_emlrtRSI;
        c2_b_API_channelErrorIfFailed(chartInstance, &c2_d_st, c2_c_chImpl);
      }

      if (!c2_b_result) {
        c2_b_done = true;
      } else {
        c2_b_done = false;
      }
    }

    c2_done = c2_b_done;
    c2_st.site = &c2_we_emlrtRSI;
    c2_f_obj = c2_obj;
    c2_b_st.site = &c2_ie_emlrtRSI;
    c2_g_obj = c2_f_obj;
    c2_c_st.site = &c2_me_emlrtRSI;
    c2_g_streamImpl = c2_g_obj->StreamImpl;
    c2_g_success = coderStreamGetSpaceAvailable(c2_g_streamImpl, &c2_b_count);
    c2_d_st.site = &c2_ne_emlrtRSI;
    c2_h_streamImpl = c2_g_streamImpl;
    c2_h_success = c2_g_success;
    if ((real_T)c2_h_success == 0.0) {
      c2_d_chImpl = coderStreamGetChannel(c2_h_streamImpl);
      c2_e_st.site = &c2_oe_emlrtRSI;
      c2_b_API_channelErrorIfFailed(chartInstance, &c2_e_st, c2_d_chImpl);
    }

    c2_completed = (c2_b_count > 0.0);
  }

  if (c2_completed) {
    c2_status_size[0] = 1;
    c2_status_size[1] = 9;
    for (c2_i = 0; c2_i < 9; c2_i++) {
      c2_status_data[c2_i] = c2_cv12[c2_i];
    }
  } else if (c2_done) {
    c2_status_size[0] = 1;
    c2_status_size[1] = 4;
    for (c2_i1 = 0; c2_i1 < 4; c2_i1++) {
      c2_status_data[c2_i1] = c2_b_cv[c2_i1];
    }
  } else if (c2_timeout) {
    c2_status_size[0] = 1;
    c2_status_size[1] = 7;
    for (c2_i2 = 0; c2_i2 < 7; c2_i2++) {
      c2_status_data[c2_i2] = c2_b_cv1[c2_i2];
    }
  }
}

static emlrtTimespec c2_tic(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp)
{
  emlrtStack c2_st;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_xe_emlrtRSI;
  return c2_getTime(chartInstance, &c2_st);
}

static emlrtTimespec c2_getTime(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp)
{
  static char_T c2_b_cv[33] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'C', 'o', 'd', 'e', 'r', 'T', 'i', 'm', 'e', 'C', 'a',
    'l', 'l', 'F', 'a', 'i', 'l', 'e', 'd' };

  static char_T c2_b_cv1[26] = { 'e', 'm', 'l', 'r', 't', 'C', 'l', 'o', 'c',
    'k', 'G', 'e', 't', 't', 'i', 'm', 'e', 'M', 'o', 'n', 'o', 't', 'o', 'n',
    'i', 'c' };

  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_st;
  emlrtTimespec c2_t;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_y = NULL;
  int32_T c2_b_status;
  int32_T c2_status;
  (void)chartInstance;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_st.site = &c2_ye_emlrtRSI;
  c2_b_st.site = &c2_af_emlrtRSI;
  c2_status = emlrtClockGettimeMonotonic(&c2_t);
  c2_c_st.site = &c2_bf_emlrtRSI;
  c2_b_status = c2_status;
  if (c2_b_status != 0) {
    c2_y = NULL;
    sf_mex_assign(&c2_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 33),
                  false);
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 33),
                  false);
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2, 1, 26),
                  false);
    c2_d_y = NULL;
    sf_mex_assign(&c2_d_y, sf_mex_create("y", &c2_b_status, 6, 0U, 0U, 0U, 0),
                  false);
    sf_mex_call(&c2_c_st, &c2_gb_emlrtMCI, "error", 0U, 2U, 14, c2_y, 14,
                sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_c_st, NULL, "message", 1U, 3U, 14, c2_b_y, 14, c2_c_y, 14, c2_d_y)));
  }

  return c2_t;
}

static real_T c2_toc(SFc2_wwtp3InstanceStruct *chartInstance, const emlrtStack
                     *c2_sp, emlrtTimespec c2_tstart)
{
  emlrtStack c2_st;
  emlrtTimespec c2_tnow;
  real_T c2_tdiff;
  real_T c2_tdiff_nsec;
  real_T c2_tdiff_sec;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_cf_emlrtRSI;
  c2_tnow = c2_getTime(chartInstance, &c2_st);
  c2_tdiff_sec = c2_tnow.tv_sec - c2_tstart.tv_sec;
  c2_tdiff_nsec = c2_tnow.tv_nsec - c2_tstart.tv_nsec;
  c2_tdiff = c2_tdiff_sec + c2_tdiff_nsec / 1.0E+9;
  return c2_tdiff;
}

static boolean_T c2_f_strcmp(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, char_T c2_a_data[], int32_T c2_a_size[2])
{
  c2_emxArray_char_T *c2_x;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_g_y = NULL;
  const mxArray *c2_i_y = NULL;
  const mxArray *c2_j_y = NULL;
  const mxArray *c2_k_y = NULL;
  const mxArray *c2_m_y = NULL;
  const mxArray *c2_n_y = NULL;
  const mxArray *c2_y = NULL;
  int32_T c2_b_kstr;
  int32_T c2_exitg1;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_kstr;
  int32_T c2_loop_ub;
  int32_T c2_remainingDimsA;
  char_T c2_b_s;
  char_T c2_b_x;
  char_T c2_c_s;
  char_T c2_c_x;
  char_T c2_d_s;
  char_T c2_d_x;
  char_T c2_e_s;
  char_T c2_e_x;
  char_T c2_f_s;
  char_T c2_g_s;
  char_T c2_h_s;
  char_T c2_h_y;
  char_T c2_l_y;
  char_T c2_s;
  int8_T c2_b_u;
  int8_T c2_c_u;
  int8_T c2_d_u;
  int8_T c2_e_u;
  boolean_T c2_b;
  boolean_T c2_b1;
  boolean_T c2_b2;
  boolean_T c2_b3;
  boolean_T c2_b_p;
  boolean_T c2_bool;
  boolean_T c2_c_p;
  boolean_T c2_d_p;
  boolean_T c2_p;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_st.site = &c2_qd_emlrtRSI;
  c2_b_st.site = &c2_rd_emlrtRSI;
  c2_bool = false;
  c2_emxInit_char_T(chartInstance, &c2_b_st, &c2_x, 2, &c2_kb_emlrtRTEI);
  c2_i = c2_x->size[0] * c2_x->size[1];
  c2_x->size[0] = 1;
  c2_x->size[1] = c2_a_size[1];
  c2_emxEnsureCapacity_char_T(chartInstance, &c2_b_st, c2_x, c2_i,
    &c2_kb_emlrtRTEI);
  c2_loop_ub = c2_a_size[1] - 1;
  for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
    c2_x->data[c2_i1] = c2_a_data[c2_i1];
  }

  c2_remainingDimsA = c2_x->size[1];
  c2_emxFree_char_T(chartInstance, &c2_x);
  if (c2_remainingDimsA != 9) {
  } else {
    c2_kstr = 1;
    do {
      c2_exitg1 = 0;
      if (c2_kstr - 1 < 9) {
        c2_b_kstr = c2_kstr - 1;
        c2_c_st.site = &c2_sd_emlrtRSI;
        c2_s = c2_a_data[c2_b_kstr];
        c2_b_s = c2_s;
        c2_b = ((real_T)(uint8_T)c2_b_s <= 127.0);
        c2_p = c2_b;
        if (!c2_p) {
          c2_y = NULL;
          sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c2_b_y = NULL;
          sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
            1, 31), false);
          c2_b_u = MAX_int8_T;
          c2_c_y = NULL;
          sf_mex_assign(&c2_c_y, sf_mex_create("y", &c2_b_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c2_c_st, &c2_eb_emlrtMCI, "error", 0U, 2U, 14, c2_y, 14,
                      sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c2_c_st, NULL, "message", 1U, 2U, 14, c2_b_y, 14,
                        c2_c_y)));
        }

        c2_c_st.site = &c2_td_emlrtRSI;
        c2_c_s = c2_cv12[c2_b_kstr];
        c2_d_s = c2_c_s;
        c2_b1 = ((real_T)(uint8_T)c2_d_s <= 127.0);
        c2_b_p = c2_b1;
        if (!c2_b_p) {
          c2_d_y = NULL;
          sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
            1, 31), false);
          c2_e_y = NULL;
          sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
            1, 31), false);
          c2_c_u = MAX_int8_T;
          c2_f_y = NULL;
          sf_mex_assign(&c2_f_y, sf_mex_create("y", &c2_c_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c2_c_st, &c2_eb_emlrtMCI, "error", 0U, 2U, 14, c2_d_y, 14,
                      sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c2_c_st, NULL, "message", 1U, 2U, 14, c2_e_y, 14,
                        c2_f_y)));
        }

        c2_c_st.site = &c2_ud_emlrtRSI;
        c2_b_x = c2_a_data[c2_b_kstr];
        c2_d_st.site = &c2_vd_emlrtRSI;
        c2_c_x = c2_b_x;
        c2_e_st.site = &c2_wd_emlrtRSI;
        c2_e_s = c2_c_x;
        c2_f_s = c2_e_s;
        c2_b2 = ((real_T)(uint8_T)c2_f_s <= 127.0);
        c2_c_p = c2_b2;
        if (!c2_c_p) {
          c2_g_y = NULL;
          sf_mex_assign(&c2_g_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
            1, 31), false);
          c2_i_y = NULL;
          sf_mex_assign(&c2_i_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
            1, 31), false);
          c2_d_u = MAX_int8_T;
          c2_j_y = NULL;
          sf_mex_assign(&c2_j_y, sf_mex_create("y", &c2_d_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c2_e_st, &c2_eb_emlrtMCI, "error", 0U, 2U, 14, c2_g_y, 14,
                      sf_mex_call(&c2_e_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c2_e_st, NULL, "message", 1U, 2U, 14, c2_i_y, 14,
                        c2_j_y)));
        }

        c2_h_y = c2_cv10[(uint8_T)c2_c_x & 127];
        c2_c_st.site = &c2_ud_emlrtRSI;
        c2_d_x = c2_cv12[c2_b_kstr];
        c2_d_st.site = &c2_vd_emlrtRSI;
        c2_e_x = c2_d_x;
        c2_e_st.site = &c2_wd_emlrtRSI;
        c2_g_s = c2_e_x;
        c2_h_s = c2_g_s;
        c2_b3 = ((real_T)(uint8_T)c2_h_s <= 127.0);
        c2_d_p = c2_b3;
        if (!c2_d_p) {
          c2_k_y = NULL;
          sf_mex_assign(&c2_k_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
            1, 31), false);
          c2_m_y = NULL;
          sf_mex_assign(&c2_m_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
            1, 31), false);
          c2_e_u = MAX_int8_T;
          c2_n_y = NULL;
          sf_mex_assign(&c2_n_y, sf_mex_create("y", &c2_e_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c2_e_st, &c2_eb_emlrtMCI, "error", 0U, 2U, 14, c2_k_y, 14,
                      sf_mex_call(&c2_e_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c2_e_st, NULL, "message", 1U, 2U, 14, c2_m_y, 14,
                        c2_n_y)));
        }

        c2_l_y = c2_cv10[(uint8_T)c2_e_x & 127];
        if (c2_h_y != c2_l_y) {
          c2_exitg1 = 1;
        } else {
          c2_kstr++;
        }
      } else {
        c2_bool = true;
        c2_exitg1 = 1;
      }
    } while (c2_exitg1 == 0);
  }

  return c2_bool;
}

static boolean_T c2_g_strcmp(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, char_T c2_a_data[], int32_T c2_a_size[2])
{
  static char_T c2_b_cv[4] = { 'd', 'o', 'n', 'e' };

  c2_emxArray_char_T *c2_x;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_g_y = NULL;
  const mxArray *c2_i_y = NULL;
  const mxArray *c2_j_y = NULL;
  const mxArray *c2_k_y = NULL;
  const mxArray *c2_m_y = NULL;
  const mxArray *c2_n_y = NULL;
  const mxArray *c2_y = NULL;
  int32_T c2_b_kstr;
  int32_T c2_exitg1;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_kstr;
  int32_T c2_loop_ub;
  int32_T c2_remainingDimsA;
  char_T c2_b_s;
  char_T c2_b_x;
  char_T c2_c_s;
  char_T c2_c_x;
  char_T c2_d_s;
  char_T c2_d_x;
  char_T c2_e_s;
  char_T c2_e_x;
  char_T c2_f_s;
  char_T c2_g_s;
  char_T c2_h_s;
  char_T c2_h_y;
  char_T c2_l_y;
  char_T c2_s;
  int8_T c2_b_u;
  int8_T c2_c_u;
  int8_T c2_d_u;
  int8_T c2_e_u;
  boolean_T c2_b;
  boolean_T c2_b1;
  boolean_T c2_b2;
  boolean_T c2_b3;
  boolean_T c2_b_p;
  boolean_T c2_bool;
  boolean_T c2_c_p;
  boolean_T c2_d_p;
  boolean_T c2_p;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_st.site = &c2_qd_emlrtRSI;
  c2_b_st.site = &c2_rd_emlrtRSI;
  c2_bool = false;
  c2_emxInit_char_T(chartInstance, &c2_b_st, &c2_x, 2, &c2_kb_emlrtRTEI);
  c2_i = c2_x->size[0] * c2_x->size[1];
  c2_x->size[0] = 1;
  c2_x->size[1] = c2_a_size[1];
  c2_emxEnsureCapacity_char_T(chartInstance, &c2_b_st, c2_x, c2_i,
    &c2_kb_emlrtRTEI);
  c2_loop_ub = c2_a_size[1] - 1;
  for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
    c2_x->data[c2_i1] = c2_a_data[c2_i1];
  }

  c2_remainingDimsA = c2_x->size[1];
  c2_emxFree_char_T(chartInstance, &c2_x);
  if (c2_remainingDimsA != 4) {
  } else {
    c2_kstr = 1;
    do {
      c2_exitg1 = 0;
      if (c2_kstr - 1 < 4) {
        c2_b_kstr = c2_kstr - 1;
        c2_c_st.site = &c2_sd_emlrtRSI;
        c2_s = c2_a_data[c2_b_kstr];
        c2_b_s = c2_s;
        c2_b = ((real_T)(uint8_T)c2_b_s <= 127.0);
        c2_p = c2_b;
        if (!c2_p) {
          c2_y = NULL;
          sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c2_b_y = NULL;
          sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
            1, 31), false);
          c2_b_u = MAX_int8_T;
          c2_c_y = NULL;
          sf_mex_assign(&c2_c_y, sf_mex_create("y", &c2_b_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c2_c_st, &c2_eb_emlrtMCI, "error", 0U, 2U, 14, c2_y, 14,
                      sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c2_c_st, NULL, "message", 1U, 2U, 14, c2_b_y, 14,
                        c2_c_y)));
        }

        c2_c_st.site = &c2_td_emlrtRSI;
        c2_c_s = c2_b_cv[c2_b_kstr];
        c2_d_s = c2_c_s;
        c2_b1 = ((real_T)(uint8_T)c2_d_s <= 127.0);
        c2_b_p = c2_b1;
        if (!c2_b_p) {
          c2_d_y = NULL;
          sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
            1, 31), false);
          c2_e_y = NULL;
          sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
            1, 31), false);
          c2_c_u = MAX_int8_T;
          c2_f_y = NULL;
          sf_mex_assign(&c2_f_y, sf_mex_create("y", &c2_c_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c2_c_st, &c2_eb_emlrtMCI, "error", 0U, 2U, 14, c2_d_y, 14,
                      sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c2_c_st, NULL, "message", 1U, 2U, 14, c2_e_y, 14,
                        c2_f_y)));
        }

        c2_c_st.site = &c2_ud_emlrtRSI;
        c2_b_x = c2_a_data[c2_b_kstr];
        c2_d_st.site = &c2_vd_emlrtRSI;
        c2_c_x = c2_b_x;
        c2_e_st.site = &c2_wd_emlrtRSI;
        c2_e_s = c2_c_x;
        c2_f_s = c2_e_s;
        c2_b2 = ((real_T)(uint8_T)c2_f_s <= 127.0);
        c2_c_p = c2_b2;
        if (!c2_c_p) {
          c2_g_y = NULL;
          sf_mex_assign(&c2_g_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
            1, 31), false);
          c2_i_y = NULL;
          sf_mex_assign(&c2_i_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
            1, 31), false);
          c2_d_u = MAX_int8_T;
          c2_j_y = NULL;
          sf_mex_assign(&c2_j_y, sf_mex_create("y", &c2_d_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c2_e_st, &c2_eb_emlrtMCI, "error", 0U, 2U, 14, c2_g_y, 14,
                      sf_mex_call(&c2_e_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c2_e_st, NULL, "message", 1U, 2U, 14, c2_i_y, 14,
                        c2_j_y)));
        }

        c2_h_y = c2_cv10[(uint8_T)c2_c_x & 127];
        c2_c_st.site = &c2_ud_emlrtRSI;
        c2_d_x = c2_b_cv[c2_b_kstr];
        c2_d_st.site = &c2_vd_emlrtRSI;
        c2_e_x = c2_d_x;
        c2_e_st.site = &c2_wd_emlrtRSI;
        c2_g_s = c2_e_x;
        c2_h_s = c2_g_s;
        c2_b3 = ((real_T)(uint8_T)c2_h_s <= 127.0);
        c2_d_p = c2_b3;
        if (!c2_d_p) {
          c2_k_y = NULL;
          sf_mex_assign(&c2_k_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
            1, 31), false);
          c2_m_y = NULL;
          sf_mex_assign(&c2_m_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
            1, 31), false);
          c2_e_u = MAX_int8_T;
          c2_n_y = NULL;
          sf_mex_assign(&c2_n_y, sf_mex_create("y", &c2_e_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c2_e_st, &c2_eb_emlrtMCI, "error", 0U, 2U, 14, c2_k_y, 14,
                      sf_mex_call(&c2_e_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c2_e_st, NULL, "message", 1U, 2U, 14, c2_m_y, 14,
                        c2_n_y)));
        }

        c2_l_y = c2_cv10[(uint8_T)c2_e_x & 127];
        if (c2_h_y != c2_l_y) {
          c2_exitg1 = 1;
        } else {
          c2_kstr++;
        }
      } else {
        c2_bool = true;
        c2_exitg1 = 1;
      }
    } while (c2_exitg1 == 0);
  }

  return c2_bool;
}

static void c2_OutputStream_drain(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_matlabshared_asyncio_internal_OutputStream *c2_obj)
{
  static char_T c2_b_cv3[35] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'O',
    'u', 't', 'p', 'u', 't', 'S', 't', 'r', 'e', 'a', 'm', ':', 't', 'i', 'm',
    'e', 'o', 'u', 't', 'I', 'n', 'D', 'r', 'a', 'i', 'n' };

  static char_T c2_b[7] = { 't', 'i', 'm', 'e', 'o', 'u', 't' };

  static char_T c2_b_cv4[7] = { 't', 'i', 'm', 'e', 'o', 'u', 't' };

  static char_T c2_b_cv1[5] = { 'p', 'a', 'u', 's', 'e' };

  static char_T c2_b_cv2[5] = { 'p', 'a', 'u', 's', 'e' };

  static char_T c2_b_cv[4] = { 'd', 'o', 'n', 'e' };

  CoderChannel c2_b_chImpl;
  CoderChannel c2_c_chImpl;
  CoderChannel c2_chImpl;
  CoderChannel c2_d_chImpl;
  CoderChannel c2_e_chImpl;
  CoderOutputStream c2_b_streamImpl;
  CoderOutputStream c2_c_streamImpl;
  CoderOutputStream c2_d_streamImpl;
  CoderOutputStream c2_e_streamImpl;
  CoderOutputStream c2_f_streamImpl;
  CoderOutputStream c2_g_streamImpl;
  CoderOutputStream c2_h_streamImpl;
  CoderOutputStream c2_i_streamImpl;
  CoderOutputStream c2_j_streamImpl;
  CoderOutputStream c2_streamImpl;
  c2_emxArray_char_T *c2_x;
  c2_matlabshared_asyncio_internal_OutputStream *c2_b_obj;
  c2_matlabshared_asyncio_internal_OutputStream *c2_c_obj;
  c2_matlabshared_asyncio_internal_OutputStream *c2_d_obj;
  c2_matlabshared_asyncio_internal_OutputStream *c2_e_obj;
  c2_matlabshared_asyncio_internal_OutputStream *c2_f_obj;
  c2_matlabshared_asyncio_internal_OutputStream *c2_g_obj;
  c2_matlabshared_asyncio_internal_OutputStream *c2_h_obj;
  c2_matlabshared_asyncio_internal_OutputStream *c2_i_obj;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  emlrtStack c2_f_st;
  emlrtStack c2_st;
  emlrtTimespec c2_startTic;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_g_y = NULL;
  const mxArray *c2_h_y = NULL;
  const mxArray *c2_i_y = NULL;
  const mxArray *c2_j_y = NULL;
  const mxArray *c2_k_y = NULL;
  const mxArray *c2_l_y = NULL;
  const mxArray *c2_m_y = NULL;
  const mxArray *c2_o_y = NULL;
  const mxArray *c2_p_y = NULL;
  const mxArray *c2_q_y = NULL;
  const mxArray *c2_s_y = NULL;
  const mxArray *c2_t_y = NULL;
  const mxArray *c2_y = NULL;
  real_T c2_b_count;
  real_T c2_b_varargin_1;
  real_T c2_count;
  real_T c2_et;
  real_T c2_timeoutInSeconds;
  real_T c2_varargin_1;
  int32_T c2_status_size[2];
  int32_T c2_b_kstr;
  int32_T c2_b_success;
  int32_T c2_c_success;
  int32_T c2_d_success;
  int32_T c2_e_success;
  int32_T c2_exitg1;
  int32_T c2_f_success;
  int32_T c2_g_success;
  int32_T c2_h_success;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i_success;
  int32_T c2_j_success;
  int32_T c2_kstr;
  int32_T c2_loop_ub;
  int32_T c2_remainingDimsA;
  int32_T c2_success;
  char_T c2_status_data[9];
  char_T c2_b_s;
  char_T c2_b_x;
  char_T c2_c_s;
  char_T c2_c_x;
  char_T c2_d_s;
  char_T c2_d_x;
  char_T c2_e_s;
  char_T c2_e_x;
  char_T c2_f_s;
  char_T c2_g_s;
  char_T c2_h_s;
  char_T c2_n_y;
  char_T c2_r_y;
  char_T c2_s;
  int8_T c2_b_u;
  int8_T c2_c_u;
  int8_T c2_d_u;
  int8_T c2_e_u;
  boolean_T c2_b1;
  boolean_T c2_b2;
  boolean_T c2_b3;
  boolean_T c2_b_b;
  boolean_T c2_b_done;
  boolean_T c2_b_p;
  boolean_T c2_b_result;
  boolean_T c2_bool;
  boolean_T c2_c_p;
  boolean_T c2_completed;
  boolean_T c2_d_p;
  boolean_T c2_done;
  boolean_T c2_p;
  boolean_T c2_result;
  boolean_T c2_timeout;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_f_st.prev = &c2_e_st;
  c2_f_st.tls = c2_e_st.tls;
  c2_st.site = &c2_nf_emlrtRSI;
  c2_b_obj = c2_obj;
  c2_timeoutInSeconds = c2_b_obj->Timeout;
  c2_status_size[0] = 1;
  c2_status_size[1] = 0;
  c2_timeout = false;
  c2_done = false;
  c2_b_st.site = &c2_pe_emlrtRSI;
  c2_c_obj = c2_b_obj;
  c2_c_st.site = &c2_nf_emlrtRSI;
  c2_d_obj = c2_c_obj;
  c2_d_st.site = &c2_rf_emlrtRSI;
  c2_streamImpl = c2_d_obj->StreamImpl;
  c2_success = coderStreamGetDataAvailable(c2_streamImpl, &c2_count);
  c2_e_st.site = &c2_sf_emlrtRSI;
  c2_b_streamImpl = c2_streamImpl;
  c2_b_success = c2_success;
  if ((real_T)c2_b_success == 0.0) {
    c2_chImpl = coderStreamGetChannel(c2_b_streamImpl);
    c2_f_st.site = &c2_oe_emlrtRSI;
    c2_b_API_channelErrorIfFailed(chartInstance, &c2_f_st, c2_chImpl);
  }

  c2_completed = (c2_count == 0.0);
  c2_b_st.site = &c2_qe_emlrtRSI;
  c2_startTic = c2_tic(chartInstance, &c2_b_st);
  while ((!c2_completed) && (!c2_done) && (!c2_timeout)) {
    c2_b_st.site = &c2_re_emlrtRSI;
    c2_et = c2_toc(chartInstance, &c2_b_st, c2_startTic);
    if (c2_et < 1.0) {
      c2_b_st.site = &c2_se_emlrtRSI;
      c2_c_st.site = &c2_df_emlrtRSI;
      c2_b_varargin_1 = 0.0;
      c2_b_y = NULL;
      sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_cv2, 10, 0U, 1U, 0U, 2, 1,
        5), false);
      c2_d_y = NULL;
      sf_mex_assign(&c2_d_y, sf_mex_create("y", &c2_b_varargin_1, 0, 0U, 0U, 0U,
        0), false);
      c2_d_st.site = &c2_ef_emlrtRSI;
      c2_b_feval(chartInstance, &c2_d_st, c2_b_y, c2_d_y);
    } else {
      c2_b_st.site = &c2_te_emlrtRSI;
      c2_c_st.site = &c2_df_emlrtRSI;
      c2_varargin_1 = 0.005;
      c2_y = NULL;
      sf_mex_assign(&c2_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2, 1, 5),
                    false);
      c2_c_y = NULL;
      sf_mex_assign(&c2_c_y, sf_mex_create("y", &c2_varargin_1, 0, 0U, 0U, 0U, 0),
                    false);
      c2_d_st.site = &c2_ef_emlrtRSI;
      c2_b_feval(chartInstance, &c2_d_st, c2_y, c2_c_y);
    }

    c2_b_st.site = &c2_ue_emlrtRSI;
    c2_et = c2_toc(chartInstance, &c2_b_st, c2_startTic);
    c2_timeout = (c2_et > c2_timeoutInSeconds);
    c2_b_st.site = &c2_ve_emlrtRSI;
    c2_e_obj = c2_b_obj;
    c2_c_st.site = &c2_ff_emlrtRSI;
    c2_c_streamImpl = c2_e_obj->StreamImpl;
    c2_c_success = coderStreamIsDeviceDone(c2_c_streamImpl, &c2_result);
    c2_d_st.site = &c2_gf_emlrtRSI;
    c2_d_streamImpl = c2_c_streamImpl;
    c2_d_success = c2_c_success;
    if ((real_T)c2_d_success == 0.0) {
      c2_b_chImpl = coderStreamGetChannel(c2_d_streamImpl);
      c2_e_st.site = &c2_oe_emlrtRSI;
      c2_b_API_channelErrorIfFailed(chartInstance, &c2_e_st, c2_b_chImpl);
    }

    if (c2_result) {
      c2_b_done = true;
    } else {
      c2_b_st.site = &c2_ve_emlrtRSI;
      c2_g_obj = c2_b_obj;
      c2_c_st.site = &c2_hf_emlrtRSI;
      c2_f_streamImpl = c2_g_obj->StreamImpl;
      c2_f_success = coderStreamIsOpen(c2_f_streamImpl, &c2_b_result);
      c2_d_st.site = &c2_if_emlrtRSI;
      c2_h_streamImpl = c2_f_streamImpl;
      c2_h_success = c2_f_success;
      if ((real_T)c2_h_success == 0.0) {
        c2_d_chImpl = coderStreamGetChannel(c2_h_streamImpl);
        c2_e_st.site = &c2_oe_emlrtRSI;
        c2_b_API_channelErrorIfFailed(chartInstance, &c2_e_st, c2_d_chImpl);
      }

      if (!c2_b_result) {
        c2_b_done = true;
      } else {
        c2_b_done = false;
      }
    }

    c2_done = c2_b_done;
    c2_b_st.site = &c2_we_emlrtRSI;
    c2_h_obj = c2_b_obj;
    c2_c_st.site = &c2_nf_emlrtRSI;
    c2_i_obj = c2_h_obj;
    c2_d_st.site = &c2_rf_emlrtRSI;
    c2_i_streamImpl = c2_i_obj->StreamImpl;
    c2_i_success = coderStreamGetDataAvailable(c2_i_streamImpl, &c2_b_count);
    c2_e_st.site = &c2_sf_emlrtRSI;
    c2_j_streamImpl = c2_i_streamImpl;
    c2_j_success = c2_i_success;
    if ((real_T)c2_j_success == 0.0) {
      c2_e_chImpl = coderStreamGetChannel(c2_j_streamImpl);
      c2_f_st.site = &c2_oe_emlrtRSI;
      c2_b_API_channelErrorIfFailed(chartInstance, &c2_f_st, c2_e_chImpl);
    }

    c2_completed = (c2_b_count == 0.0);
  }

  if (c2_completed) {
    c2_status_size[0] = 1;
    c2_status_size[1] = 9;
    for (c2_i = 0; c2_i < 9; c2_i++) {
      c2_status_data[c2_i] = c2_cv12[c2_i];
    }
  } else if (c2_done) {
    c2_status_size[0] = 1;
    c2_status_size[1] = 4;
    for (c2_i1 = 0; c2_i1 < 4; c2_i1++) {
      c2_status_data[c2_i1] = c2_b_cv[c2_i1];
    }
  } else if (c2_timeout) {
    c2_status_size[0] = 1;
    c2_status_size[1] = 7;
    for (c2_i2 = 0; c2_i2 < 7; c2_i2++) {
      c2_status_data[c2_i2] = c2_b[c2_i2];
    }
  }

  c2_st.site = &c2_of_emlrtRSI;
  if (!c2_h_strcmp(chartInstance, &c2_st, c2_status_data, c2_status_size)) {
    c2_st.site = &c2_pf_emlrtRSI;
    c2_b_st.site = &c2_qd_emlrtRSI;
    c2_c_st.site = &c2_rd_emlrtRSI;
    c2_bool = false;
    c2_emxInit_char_T(chartInstance, &c2_c_st, &c2_x, 2, &c2_kb_emlrtRTEI);
    c2_i3 = c2_x->size[0] * c2_x->size[1];
    c2_x->size[0] = 1;
    c2_x->size[1] = c2_status_size[1];
    c2_emxEnsureCapacity_char_T(chartInstance, &c2_c_st, c2_x, c2_i3,
      &c2_kb_emlrtRTEI);
    c2_loop_ub = c2_status_size[1] - 1;
    for (c2_i4 = 0; c2_i4 <= c2_loop_ub; c2_i4++) {
      c2_x->data[c2_i4] = c2_status_data[c2_i4];
    }

    c2_remainingDimsA = c2_x->size[1];
    c2_emxFree_char_T(chartInstance, &c2_x);
    if (c2_remainingDimsA != 7) {
    } else {
      c2_kstr = 1;
      do {
        c2_exitg1 = 0;
        if (c2_kstr - 1 < 7) {
          c2_b_kstr = c2_kstr - 1;
          c2_d_st.site = &c2_sd_emlrtRSI;
          c2_s = c2_status_data[c2_b_kstr];
          c2_b_s = c2_s;
          c2_b_b = ((real_T)(uint8_T)c2_b_s <= 127.0);
          c2_p = c2_b_b;
          if (!c2_p) {
            c2_g_y = NULL;
            sf_mex_assign(&c2_g_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
              1, 31), false);
            c2_h_y = NULL;
            sf_mex_assign(&c2_h_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
              1, 31), false);
            c2_b_u = MAX_int8_T;
            c2_i_y = NULL;
            sf_mex_assign(&c2_i_y, sf_mex_create("y", &c2_b_u, 2, 0U, 0U, 0U, 0),
                          false);
            sf_mex_call(&c2_d_st, &c2_eb_emlrtMCI, "error", 0U, 2U, 14, c2_g_y,
                        14, sf_mex_call(&c2_d_st, NULL, "getString", 1U, 1U, 14,
              sf_mex_call(&c2_d_st, NULL, "message", 1U, 2U, 14, c2_h_y, 14,
                          c2_i_y)));
          }

          c2_d_st.site = &c2_td_emlrtRSI;
          c2_c_s = c2_b_cv4[c2_b_kstr];
          c2_d_s = c2_c_s;
          c2_b1 = ((real_T)(uint8_T)c2_d_s <= 127.0);
          c2_b_p = c2_b1;
          if (!c2_b_p) {
            c2_j_y = NULL;
            sf_mex_assign(&c2_j_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
              1, 31), false);
            c2_k_y = NULL;
            sf_mex_assign(&c2_k_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
              1, 31), false);
            c2_c_u = MAX_int8_T;
            c2_l_y = NULL;
            sf_mex_assign(&c2_l_y, sf_mex_create("y", &c2_c_u, 2, 0U, 0U, 0U, 0),
                          false);
            sf_mex_call(&c2_d_st, &c2_eb_emlrtMCI, "error", 0U, 2U, 14, c2_j_y,
                        14, sf_mex_call(&c2_d_st, NULL, "getString", 1U, 1U, 14,
              sf_mex_call(&c2_d_st, NULL, "message", 1U, 2U, 14, c2_k_y, 14,
                          c2_l_y)));
          }

          c2_d_st.site = &c2_ud_emlrtRSI;
          c2_b_x = c2_status_data[c2_b_kstr];
          c2_e_st.site = &c2_vd_emlrtRSI;
          c2_c_x = c2_b_x;
          c2_f_st.site = &c2_wd_emlrtRSI;
          c2_e_s = c2_c_x;
          c2_f_s = c2_e_s;
          c2_b2 = ((real_T)(uint8_T)c2_f_s <= 127.0);
          c2_c_p = c2_b2;
          if (!c2_c_p) {
            c2_m_y = NULL;
            sf_mex_assign(&c2_m_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
              1, 31), false);
            c2_o_y = NULL;
            sf_mex_assign(&c2_o_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
              1, 31), false);
            c2_d_u = MAX_int8_T;
            c2_p_y = NULL;
            sf_mex_assign(&c2_p_y, sf_mex_create("y", &c2_d_u, 2, 0U, 0U, 0U, 0),
                          false);
            sf_mex_call(&c2_f_st, &c2_eb_emlrtMCI, "error", 0U, 2U, 14, c2_m_y,
                        14, sf_mex_call(&c2_f_st, NULL, "getString", 1U, 1U, 14,
              sf_mex_call(&c2_f_st, NULL, "message", 1U, 2U, 14, c2_o_y, 14,
                          c2_p_y)));
          }

          c2_n_y = c2_cv10[(uint8_T)c2_c_x & 127];
          c2_d_st.site = &c2_ud_emlrtRSI;
          c2_d_x = c2_b_cv4[c2_b_kstr];
          c2_e_st.site = &c2_vd_emlrtRSI;
          c2_e_x = c2_d_x;
          c2_f_st.site = &c2_wd_emlrtRSI;
          c2_g_s = c2_e_x;
          c2_h_s = c2_g_s;
          c2_b3 = ((real_T)(uint8_T)c2_h_s <= 127.0);
          c2_d_p = c2_b3;
          if (!c2_d_p) {
            c2_q_y = NULL;
            sf_mex_assign(&c2_q_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
              1, 31), false);
            c2_s_y = NULL;
            sf_mex_assign(&c2_s_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
              1, 31), false);
            c2_e_u = MAX_int8_T;
            c2_t_y = NULL;
            sf_mex_assign(&c2_t_y, sf_mex_create("y", &c2_e_u, 2, 0U, 0U, 0U, 0),
                          false);
            sf_mex_call(&c2_f_st, &c2_eb_emlrtMCI, "error", 0U, 2U, 14, c2_q_y,
                        14, sf_mex_call(&c2_f_st, NULL, "getString", 1U, 1U, 14,
              sf_mex_call(&c2_f_st, NULL, "message", 1U, 2U, 14, c2_s_y, 14,
                          c2_t_y)));
          }

          c2_r_y = c2_cv10[(uint8_T)c2_e_x & 127];
          if (c2_n_y != c2_r_y) {
            c2_exitg1 = 1;
          } else {
            c2_kstr++;
          }
        } else {
          c2_bool = true;
          c2_exitg1 = 1;
        }
      } while (c2_exitg1 == 0);
    }

    if (c2_bool) {
      c2_e_y = NULL;
      sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_b_cv3, 10, 0U, 1U, 0U, 2, 1,
        35), false);
      c2_f_y = NULL;
      sf_mex_assign(&c2_f_y, sf_mex_create("y", c2_b_cv3, 10, 0U, 1U, 0U, 2, 1,
        35), false);
      sf_mex_call(c2_sp, &c2_hb_emlrtMCI, "error", 0U, 2U, 14, c2_e_y, 14,
                  sf_mex_call(c2_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (c2_sp, NULL, "message", 1U, 1U, 14, c2_f_y)));
    }

    c2_st.site = &c2_qf_emlrtRSI;
    c2_f_obj = c2_obj;
    c2_b_st.site = &c2_tf_emlrtRSI;
    c2_e_streamImpl = c2_f_obj->StreamImpl;
    c2_e_success = coderStreamFlush(c2_e_streamImpl);
    c2_c_st.site = &c2_uf_emlrtRSI;
    c2_g_streamImpl = c2_e_streamImpl;
    c2_g_success = c2_e_success;
    if ((real_T)c2_g_success == 0.0) {
      c2_c_chImpl = coderStreamGetChannel(c2_g_streamImpl);
      c2_d_st.site = &c2_oe_emlrtRSI;
      c2_b_API_channelErrorIfFailed(chartInstance, &c2_d_st, c2_c_chImpl);
    }
  }
}

static boolean_T c2_h_strcmp(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, char_T c2_a_data[], int32_T c2_a_size[2])
{
  static char_T c2_b_cv[7] = { 'i', 'n', 'v', 'a', 'l', 'i', 'd' };

  c2_emxArray_char_T *c2_x;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_g_y = NULL;
  const mxArray *c2_i_y = NULL;
  const mxArray *c2_j_y = NULL;
  const mxArray *c2_k_y = NULL;
  const mxArray *c2_m_y = NULL;
  const mxArray *c2_n_y = NULL;
  const mxArray *c2_y = NULL;
  int32_T c2_b_kstr;
  int32_T c2_exitg1;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_kstr;
  int32_T c2_loop_ub;
  int32_T c2_remainingDimsA;
  char_T c2_b_s;
  char_T c2_b_x;
  char_T c2_c_s;
  char_T c2_c_x;
  char_T c2_d_s;
  char_T c2_d_x;
  char_T c2_e_s;
  char_T c2_e_x;
  char_T c2_f_s;
  char_T c2_g_s;
  char_T c2_h_s;
  char_T c2_h_y;
  char_T c2_l_y;
  char_T c2_s;
  int8_T c2_b_u;
  int8_T c2_c_u;
  int8_T c2_d_u;
  int8_T c2_e_u;
  boolean_T c2_b;
  boolean_T c2_b1;
  boolean_T c2_b2;
  boolean_T c2_b3;
  boolean_T c2_b_p;
  boolean_T c2_bool;
  boolean_T c2_c_p;
  boolean_T c2_d_p;
  boolean_T c2_p;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_st.site = &c2_qd_emlrtRSI;
  c2_b_st.site = &c2_rd_emlrtRSI;
  c2_bool = false;
  c2_emxInit_char_T(chartInstance, &c2_b_st, &c2_x, 2, &c2_kb_emlrtRTEI);
  c2_i = c2_x->size[0] * c2_x->size[1];
  c2_x->size[0] = 1;
  c2_x->size[1] = c2_a_size[1];
  c2_emxEnsureCapacity_char_T(chartInstance, &c2_b_st, c2_x, c2_i,
    &c2_kb_emlrtRTEI);
  c2_loop_ub = c2_a_size[1] - 1;
  for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
    c2_x->data[c2_i1] = c2_a_data[c2_i1];
  }

  c2_remainingDimsA = c2_x->size[1];
  c2_emxFree_char_T(chartInstance, &c2_x);
  if (c2_remainingDimsA != 7) {
  } else {
    c2_kstr = 1;
    do {
      c2_exitg1 = 0;
      if (c2_kstr - 1 < 7) {
        c2_b_kstr = c2_kstr - 1;
        c2_c_st.site = &c2_sd_emlrtRSI;
        c2_s = c2_a_data[c2_b_kstr];
        c2_b_s = c2_s;
        c2_b = ((real_T)(uint8_T)c2_b_s <= 127.0);
        c2_p = c2_b;
        if (!c2_p) {
          c2_y = NULL;
          sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c2_b_y = NULL;
          sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
            1, 31), false);
          c2_b_u = MAX_int8_T;
          c2_c_y = NULL;
          sf_mex_assign(&c2_c_y, sf_mex_create("y", &c2_b_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c2_c_st, &c2_eb_emlrtMCI, "error", 0U, 2U, 14, c2_y, 14,
                      sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c2_c_st, NULL, "message", 1U, 2U, 14, c2_b_y, 14,
                        c2_c_y)));
        }

        c2_c_st.site = &c2_td_emlrtRSI;
        c2_c_s = c2_b_cv[c2_b_kstr];
        c2_d_s = c2_c_s;
        c2_b1 = ((real_T)(uint8_T)c2_d_s <= 127.0);
        c2_b_p = c2_b1;
        if (!c2_b_p) {
          c2_d_y = NULL;
          sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
            1, 31), false);
          c2_e_y = NULL;
          sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
            1, 31), false);
          c2_c_u = MAX_int8_T;
          c2_f_y = NULL;
          sf_mex_assign(&c2_f_y, sf_mex_create("y", &c2_c_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c2_c_st, &c2_eb_emlrtMCI, "error", 0U, 2U, 14, c2_d_y, 14,
                      sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c2_c_st, NULL, "message", 1U, 2U, 14, c2_e_y, 14,
                        c2_f_y)));
        }

        c2_c_st.site = &c2_ud_emlrtRSI;
        c2_b_x = c2_a_data[c2_b_kstr];
        c2_d_st.site = &c2_vd_emlrtRSI;
        c2_c_x = c2_b_x;
        c2_e_st.site = &c2_wd_emlrtRSI;
        c2_e_s = c2_c_x;
        c2_f_s = c2_e_s;
        c2_b2 = ((real_T)(uint8_T)c2_f_s <= 127.0);
        c2_c_p = c2_b2;
        if (!c2_c_p) {
          c2_g_y = NULL;
          sf_mex_assign(&c2_g_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
            1, 31), false);
          c2_i_y = NULL;
          sf_mex_assign(&c2_i_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
            1, 31), false);
          c2_d_u = MAX_int8_T;
          c2_j_y = NULL;
          sf_mex_assign(&c2_j_y, sf_mex_create("y", &c2_d_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c2_e_st, &c2_eb_emlrtMCI, "error", 0U, 2U, 14, c2_g_y, 14,
                      sf_mex_call(&c2_e_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c2_e_st, NULL, "message", 1U, 2U, 14, c2_i_y, 14,
                        c2_j_y)));
        }

        c2_h_y = c2_cv10[(uint8_T)c2_c_x & 127];
        c2_c_st.site = &c2_ud_emlrtRSI;
        c2_d_x = c2_b_cv[c2_b_kstr];
        c2_d_st.site = &c2_vd_emlrtRSI;
        c2_e_x = c2_d_x;
        c2_e_st.site = &c2_wd_emlrtRSI;
        c2_g_s = c2_e_x;
        c2_h_s = c2_g_s;
        c2_b3 = ((real_T)(uint8_T)c2_h_s <= 127.0);
        c2_d_p = c2_b3;
        if (!c2_d_p) {
          c2_k_y = NULL;
          sf_mex_assign(&c2_k_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
            1, 31), false);
          c2_m_y = NULL;
          sf_mex_assign(&c2_m_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
            1, 31), false);
          c2_e_u = MAX_int8_T;
          c2_n_y = NULL;
          sf_mex_assign(&c2_n_y, sf_mex_create("y", &c2_e_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c2_e_st, &c2_eb_emlrtMCI, "error", 0U, 2U, 14, c2_k_y, 14,
                      sf_mex_call(&c2_e_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c2_e_st, NULL, "message", 1U, 2U, 14, c2_m_y, 14,
                        c2_n_y)));
        }

        c2_l_y = c2_cv10[(uint8_T)c2_e_x & 127];
        if (c2_h_y != c2_l_y) {
          c2_exitg1 = 1;
        } else {
          c2_kstr++;
        }
      } else {
        c2_bool = true;
        c2_exitg1 = 1;
      }
    } while (c2_exitg1 == 0);
  }

  return c2_bool;
}

static void c2_Modbus_getReadResponse(SFc2_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_icomm_interface_modbus_tcpip_Modbus *c2_obj,
  uint8_T c2_reqPacketID, real_T c2_data_data[], int32_T c2_data_size[2],
  boolean_T *c2_retry)
{
  static char_T c2_b_cv15[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'A', 's',
    'y', 'n', 'c', 'I', 'O', 'T', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't', 'C',
    'h', 'a', 'n', 'n', 'e', 'l', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'F', 'i', 'n', 'i', 't', 'e' };

  static char_T c2_b_cv[40] = { 't', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't', 'l',
    'i', 'b', ':', 't', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't', ':', 'i', 'n',
    'c', 'o', 'r', 'r', 'e', 'c', 't', 'D', 'a', 't', 'a', 'T', 'y', 'p', 'e' };

  static char_T c2_b_cv1[40] = { 'T', 'i', 'm', 'e', 'o', 'u', 't', ' ', 'o',
    'c', 'c', 'u', 'r', 'r', 'e', 'd', ' ', 'w', 'a', 'i', 't', 'i', 'n', 'g',
    ' ', 'f', 'o', 'r', ' ', 'a', ' ', 'r', 'e', 's', 'p', 'o', 'n', 's', 'e',
    '.' };

  static char_T c2_b_cv17[40] = { 't', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't',
    'l', 'i', 'b', ':', 't', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't', ':', 'i',
    'n', 'c', 'o', 'r', 'r', 'e', 'c', 't', 'D', 'a', 't', 'a', 'T', 'y', 'p',
    'e' };

  static char_T c2_b_cv10[38] = { 'm', 'o', 'd', 'b', 'u', 's', ':', 'm', 'o',
    'd', 'b', 'u', 's', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'W', 'r', 'i',
    't', 'e', 'A', 'd', 'd', 'r', 'e', 's', 's', 'R', 'a', 'n', 'g', 'e' };

  static char_T c2_b_cv11[37] = { 'm', 'o', 'd', 'b', 'u', 's', ':', 'm', 'o',
    'd', 'b', 'u', 's', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'R', 'e', 'a',
    'd', 'A', 'd', 'd', 'r', 'e', 's', 's', 'R', 'a', 'n', 'g', 'e' };

  static char_T c2_b_cv14[34] = { 'm', 'o', 'd', 'b', 'u', 's', ':', 'm', 'o',
    'd', 'b', 'u', 's', ':', 'f', 'u', 'n', 'c', 't', 'i', 'o', 'n', 'N', 'o',
    't', 'S', 'u', 'p', 'p', 'o', 'r', 't', 'e', 'd' };

  static char_T c2_b_cv7[32] = { 'm', 'o', 'd', 'b', 'u', 's', ':', 'm', 'o',
    'd', 'b', 'u', 's', ':', 'u', 'n', 'k', 'n', 'o', 'w', 'n', 'S', 'e', 'r',
    'v', 'e', 'r', 'E', 'r', 'r', 'o', 'r' };

  static char_T c2_b_cv12[31] = { 'm', 'o', 'd', 'b', 'u', 's', ':', 'm', 'o',
    'd', 'b', 'u', 's', ':', 's', 'e', 'r', 'v', 'e', 'r', 'W', 'r', 'i', 't',
    'e', 'F', 'a', 'i', 'l', 'e', 'd' };

  static char_T c2_b_cv13[30] = { 'm', 'o', 'd', 'b', 'u', 's', ':', 'm', 'o',
    'd', 'b', 'u', 's', ':', 's', 'e', 'r', 'v', 'e', 'r', 'R', 'e', 'a', 'd',
    'F', 'a', 'i', 'l', 'e', 'd' };

  static char_T c2_b_cv8[30] = { 'm', 'o', 'd', 'b', 'u', 's', ':', 'm', 'o',
    'd', 'b', 'u', 's', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'D', 'a', 't',
    'a', 'V', 'a', 'l', 'u', 'e' };

  static char_T c2_b_cv9[30] = { 'm', 'o', 'd', 'b', 'u', 's', ':', 'm', 'o',
    'd', 'b', 'u', 's', ':', 's', 'e', 'r', 'v', 'e', 'r', 'D', 'e', 'v', 'i',
    'c', 'e', 'B', 'u', 's', 'y' };

  static char_T c2_b_cv6[29] = { 'm', 'o', 'd', 'b', 'u', 's', ':', 'm', 'o',
    'd', 'b', 'u', 's', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'R', 'e', 's',
    'p', 'o', 'n', 's', 'e' };

  static char_T c2_b_cv2[27] = { 'm', 'o', 'd', 'b', 'u', 's', ':', 'm', 'o',
    'd', 'b', 'u', 's', ':', 'c', 'o', 'm', 'm', 'R', 'e', 'a', 'd', 'E', 'r',
    'r', 'o', 'r' };

  static char_T c2_b_cv3[24] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'b', 'i',
    't', 'g', 'e', 't', ':', 'o', 'u', 't', 'O', 'f', 'R', 'a', 'n', 'g', 'e' };

  static char_T c2_b_cv16[21] = { 'i', 'n', 'p', 'u', 't', ' ', 'n', 'u', 'm',
    'b', 'e', 'r', ' ', '2', ',', ' ', 's', 'i', 'z', 'e', ',' };

  static char_T c2_b_cv4[5] = { 'u', 'i', 'n', 't', '8' };

  static char_T c2_b_cv5[5] = { 'p', 'a', 'u', 's', 'e' };

  static char_T c2_cv18[5] = { 'u', 'i', 'n', 't', '8' };

  CoderChannel c2_b_chImpl;
  CoderChannel c2_chImpl;
  c2_emxArray_char_T *c2_out;
  c2_emxArray_uint8_T *c2_dataRaw;
  c2_emxArray_uint8_T *c2_rawData;
  c2_emxArray_uint8_T *c2_tempDataArray;
  c2_emxArray_uint8_T *c2_x;
  c2_icomm_interface_modbus_tcpip_Modbus *c2_b_obj;
  c2_icomm_interface_modbus_tcpip_Modbus *c2_c_obj;
  c2_icomm_interface_modbus_tcpip_Modbus *c2_d_obj;
  c2_icomm_interface_modbus_tcpip_Modbus *c2_f_obj;
  c2_icomm_interface_modbus_tcpip_Modbus *c2_g_obj;
  c2_icomm_interface_modbus_tcpip_Modbus *c2_o_obj;
  c2_icomm_interface_modbus_tcpip_Modbus *c2_r_obj;
  c2_matlabshared_asyncio_internal_Channel *c2_l_obj;
  c2_matlabshared_asyncio_internal_Channel *c2_m_obj;
  c2_matlabshared_network_internal_TCPClient *c2_g_varargin_1;
  c2_matlabshared_network_internal_TCPClient *c2_i_obj;
  c2_matlabshared_network_internal_TCPClient *c2_k_obj;
  c2_matlabshared_network_internal_TCPClient *c2_varargin_1;
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co
    *c2_c_varargin_1;
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_e_obj;
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_h_obj;
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co
    *c2_h_varargin_1;
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_j_obj;
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_n_obj;
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_p_obj;
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_s_obj;
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_t_obj;
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_u_obj;
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_v_obj;
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_w_obj;
  c2_rtString_11 c2_r;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  emlrtStack c2_f_st;
  emlrtStack c2_g_st;
  emlrtStack c2_h_st;
  emlrtStack c2_st;
  emlrtTimespec c2_startTic;
  const mxArray *c2_propValues[1];
  const mxArray *c2_ab_y = NULL;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_bb_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_cb_y = NULL;
  const mxArray *c2_db_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_eb_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_fb_y = NULL;
  const mxArray *c2_g_y = NULL;
  const mxArray *c2_gb_y = NULL;
  const mxArray *c2_h_y = NULL;
  const mxArray *c2_hb_y = NULL;
  const mxArray *c2_i_y = NULL;
  const mxArray *c2_ib_y = NULL;
  const mxArray *c2_j_y = NULL;
  const mxArray *c2_jb_y = NULL;
  const mxArray *c2_k_y = NULL;
  const mxArray *c2_kb_y = NULL;
  const mxArray *c2_l_y = NULL;
  const mxArray *c2_lb_y = NULL;
  const mxArray *c2_m_y = NULL;
  const mxArray *c2_mb_y = NULL;
  const mxArray *c2_n_y = NULL;
  const mxArray *c2_nb_y = NULL;
  const mxArray *c2_o_y = NULL;
  const mxArray *c2_ob_y = NULL;
  const mxArray *c2_p_y = NULL;
  const mxArray *c2_pb_y = NULL;
  const mxArray *c2_q_y = NULL;
  const mxArray *c2_qb_y = NULL;
  const mxArray *c2_r_y = NULL;
  const mxArray *c2_s_y = NULL;
  const mxArray *c2_t_y = NULL;
  const mxArray *c2_u_y = NULL;
  const mxArray *c2_v_y = NULL;
  const mxArray *c2_w_y = NULL;
  const mxArray *c2_x_y = NULL;
  const mxArray *c2_y = NULL;
  const mxArray *c2_y_y = NULL;
  real_T c2_b_data_data[255];
  real_T c2_headerData[9];
  real_T c2_b_a;
  real_T c2_b_errCode;
  real_T c2_b_fcnCode;
  real_T c2_b_out;
  real_T c2_b_varargin_1;
  real_T c2_b_varargin_2;
  real_T c2_b_x1;
  real_T c2_b_x2;
  real_T c2_byteCount;
  real_T c2_bytesNeeded;
  real_T c2_c_a;
  real_T c2_c_varargin_2;
  real_T c2_c_x;
  real_T c2_d;
  real_T c2_d1;
  real_T c2_d_a;
  real_T c2_d_varargin_1;
  real_T c2_d_varargin_2;
  real_T c2_d_x;
  real_T c2_e_a;
  real_T c2_e_varargin_1;
  real_T c2_e_x;
  real_T c2_errCode;
  real_T c2_f_a;
  real_T c2_f_varargin_1;
  real_T c2_fcnCode;
  real_T c2_g_a;
  real_T c2_h_a;
  real_T c2_numBytes;
  real_T c2_numBytesToRead;
  real_T c2_size;
  real_T c2_varargin_2;
  real_T c2_x1;
  real_T c2_x2;
  uint64_T c2_a1;
  uint64_T c2_b_a1;
  int32_T c2_b_data_size[2];
  int32_T c2_iv[2];
  int32_T c2_b_dataRaw;
  int32_T c2_b_loop_ub;
  int32_T c2_b_nx;
  int32_T c2_b_success;
  int32_T c2_c_loop_ub;
  int32_T c2_d_loop_ub;
  int32_T c2_e_loop_ub;
  int32_T c2_exitg1;
  int32_T c2_f_loop_ub;
  int32_T c2_g_loop_ub;
  int32_T c2_h_loop_ub;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i2;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_i24;
  int32_T c2_i25;
  int32_T c2_i26;
  int32_T c2_i27;
  int32_T c2_i28;
  int32_T c2_i29;
  int32_T c2_i3;
  int32_T c2_i30;
  int32_T c2_i31;
  int32_T c2_i32;
  int32_T c2_i33;
  int32_T c2_i34;
  int32_T c2_i35;
  int32_T c2_i36;
  int32_T c2_i37;
  int32_T c2_i38;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_i_loop_ub;
  int32_T c2_j_loop_ub;
  int32_T c2_k_loop_ub;
  int32_T c2_l_loop_ub;
  int32_T c2_loop_ub;
  int32_T c2_nx;
  int32_T c2_success;
  uint16_T c2_b_u;
  uint16_T c2_d_y;
  const char_T *c2_propClasses[1] = { "coder.internal.string" };

  const char_T *c2_propNames[1] = { "Value" };

  char_T c2_c_u[40];
  char_T c2_q_obj[13];
  char_T c2_x_obj[13];
  uint8_T c2_b_x[2];
  uint8_T c2_requestID;
  uint8_T c2_transactionID;
  uint8_T c2_u1;
  boolean_T c2_b;
  boolean_T c2_b1;
  boolean_T c2_b2;
  boolean_T c2_b3;
  boolean_T c2_b4;
  boolean_T c2_b5;
  boolean_T c2_b6;
  boolean_T c2_b_b;
  boolean_T c2_b_p;
  boolean_T c2_c_b;
  boolean_T c2_c_p;
  boolean_T c2_d_b;
  boolean_T c2_d_p;
  boolean_T c2_guard1;
  boolean_T c2_p;
  boolean_T c2_result;
  boolean_T c2_timedOut;
  boolean_T c2_valid;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_f_st.prev = &c2_e_st;
  c2_f_st.tls = c2_e_st.tls;
  c2_g_st.prev = &c2_f_st;
  c2_g_st.tls = c2_f_st.tls;
  c2_h_st.prev = &c2_g_st;
  c2_h_st.tls = c2_g_st.tls;
  *c2_retry = false;
  c2_data_size[0] = 0;
  c2_data_size[1] = 0;
  c2_st.site = &c2_vf_emlrtRSI;
  c2_b_obj = c2_obj;
  c2_timedOut = false;
  c2_b_st.site = &c2_hg_emlrtRSI;
  c2_startTic = c2_tic(chartInstance, &c2_b_st);
  do {
    c2_exitg1 = 0;
    c2_b_st.site = &c2_ig_emlrtRSI;
    if (c2_TCPClient_get_NumBytesAvailable(chartInstance, &c2_b_st,
         c2_b_obj->TcpIpObj) < 9.0) {
      c2_b_st.site = &c2_jg_emlrtRSI;
      if (c2_toc(chartInstance, &c2_b_st, c2_startTic) >
          c2_b_obj->TransactionTimeout) {
        c2_timedOut = true;
        c2_exitg1 = 1;
      }
    } else {
      c2_exitg1 = 1;
    }
  } while (c2_exitg1 == 0);

  c2_emxInit_uint8_T(chartInstance, c2_sp, &c2_dataRaw, 2, &c2_xb_emlrtRTEI);
  c2_emxInit_uint8_T(chartInstance, c2_sp, &c2_rawData, 2, &c2_d_emlrtRTEI);
  c2_emxInit_char_T(chartInstance, c2_sp, &c2_out, 2, &c2_d_emlrtRTEI);
  c2_emxInit_uint8_T(chartInstance, c2_sp, &c2_tempDataArray, 2, &c2_d_emlrtRTEI);
  c2_emxInit_uint8_T(chartInstance, c2_sp, &c2_x, 2, &c2_d_emlrtRTEI);
  c2_guard1 = false;
  if (!c2_timedOut) {
    c2_st.site = &c2_wf_emlrtRSI;
    c2_c_obj = c2_obj;
    c2_b_st.site = &c2_mg_emlrtRSI;
    c2_varargin_1 = c2_c_obj->TcpIpObj;
    c2_c_st.site = &c2_n_emlrtRSI;
    c2_TCPClient_validateConnected(chartInstance, &c2_c_st, c2_varargin_1);
    c2_c_st.site = &c2_n_emlrtRSI;
    c2_c_varargin_1 = c2_varargin_1->TransportChannel;
    c2_d_st.site = &c2_qb_emlrtRSI;
    c2_AsyncIOTransportChannel_get_StructData(chartInstance, &c2_d_st,
      c2_c_varargin_1);
    c2_d_st.site = &c2_qb_emlrtRSI;
    c2_AsyncIOTransportChannel_readRaw(chartInstance, &c2_d_st, c2_c_varargin_1,
      9.0, c2_rawData);
    c2_b = (c2_rawData->size[0] == 0);
    c2_b1 = (c2_rawData->size[1] == 0);
    if (c2_b || c2_b1) {
      c2_dataRaw->size[0] = 0;
      c2_dataRaw->size[1] = 0;
    } else {
      c2_d_st.site = &c2_qb_emlrtRSI;
      c2_e_obj = c2_c_varargin_1;
      c2_i = c2_out->size[0] * c2_out->size[1];
      c2_out->size[0] = 1;
      c2_out->size[1] = c2_e_obj->NativeDataType->size[1];
      c2_emxEnsureCapacity_char_T(chartInstance, &c2_d_st, c2_out, c2_i,
        &c2_d_emlrtRTEI);
      c2_loop_ub = c2_e_obj->NativeDataType->size[1] - 1;
      for (c2_i2 = 0; c2_i2 <= c2_loop_ub; c2_i2++) {
        c2_out->data[c2_i2] = c2_e_obj->NativeDataType->data[c2_i2];
      }

      c2_d_st.site = &c2_qb_emlrtRSI;
      if (!c2_i_strcmp(chartInstance, &c2_d_st, c2_out)) {
        c2_y = NULL;
        sf_mex_assign(&c2_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1,
          40), false);
        c2_c_y = NULL;
        sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1,
          40), false);
        c2_d_st.site = &c2_qb_emlrtRSI;
        c2_j_obj = c2_c_varargin_1;
        c2_i8 = c2_out->size[0] * c2_out->size[1];
        c2_out->size[0] = 1;
        c2_out->size[1] = c2_j_obj->NativeDataType->size[1];
        c2_emxEnsureCapacity_char_T(chartInstance, &c2_d_st, c2_out, c2_i8,
          &c2_d_emlrtRTEI);
        c2_b_loop_ub = c2_j_obj->NativeDataType->size[1] - 1;
        for (c2_i11 = 0; c2_i11 <= c2_b_loop_ub; c2_i11++) {
          c2_out->data[c2_i11] = c2_j_obj->NativeDataType->data[c2_i11];
        }

        c2_h_y = NULL;
        sf_mex_assign(&c2_h_y, sf_mex_create("y", c2_out->data, 10, 0U, 1U, 0U,
          2, 1, c2_out->size[1]), false);
        c2_j_y = NULL;
        sf_mex_assign(&c2_j_y, sf_mex_create("y", c2_b_cv4, 10, 0U, 1U, 0U, 2, 1,
          5), false);
        sf_mex_call(&c2_c_st, &c2_fb_emlrtMCI, "error", 0U, 2U, 14, c2_y, 14,
                    sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c2_c_st, NULL, "message", 1U, 3U, 14, c2_c_y, 14, c2_h_y,
                      14, c2_j_y)));
      }

      c2_d_st.site = &c2_qb_emlrtRSI;
      c2_h_obj = c2_c_varargin_1;
      c2_i6 = c2_rawData->size[0];
      c2_i7 = 1;
      if ((c2_i7 < 1) || (c2_i7 > c2_i6)) {
        emlrtDynamicBoundsCheckR2012b(c2_i7, 1, c2_i6, &c2_m_emlrtBCI, &c2_d_st);
      }

      c2_e_st.site = &c2_qb_emlrtRSI;
      c2_i10 = c2_x->size[0] * c2_x->size[1];
      c2_x->size[0] = 1;
      c2_x->size[1] = c2_rawData->size[1];
      c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_e_st, c2_x, c2_i10,
        &c2_d_emlrtRTEI);
      c2_c_loop_ub = c2_rawData->size[1] - 1;
      for (c2_i12 = 0; c2_i12 <= c2_c_loop_ub; c2_i12++) {
        c2_x->data[c2_i12] = c2_rawData->data[c2_rawData->size[0] * c2_i12];
      }

      c2_nx = c2_x->size[1];
      c2_i13 = c2_tempDataArray->size[0] * c2_tempDataArray->size[1];
      c2_tempDataArray->size[0] = 1;
      c2_tempDataArray->size[1] = c2_nx;
      c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_e_st, c2_tempDataArray,
        c2_i13, &c2_e_emlrtRTEI);
      memcpy((void *)&c2_tempDataArray->data[0], (void *)&c2_x->data[0], (size_t)
             c2_nx * sizeof(uint8_T));
      c2_e_st.site = &c2_qb_emlrtRSI;
      c2_n_obj = c2_h_obj;
      c2_i14 = c2_out->size[0] * c2_out->size[1];
      c2_out->size[0] = 1;
      c2_out->size[1] = c2_n_obj->ByteOrder->size[1];
      c2_emxEnsureCapacity_char_T(chartInstance, &c2_e_st, c2_out, c2_i14,
        &c2_d_emlrtRTEI);
      c2_d_loop_ub = c2_n_obj->ByteOrder->size[1] - 1;
      for (c2_i15 = 0; c2_i15 <= c2_d_loop_ub; c2_i15++) {
        c2_out->data[c2_i15] = c2_n_obj->ByteOrder->data[c2_i15];
      }

      c2_e_st.site = &c2_qb_emlrtRSI;
      c2_p_obj = c2_h_obj;
      c2_f_st.site = &c2_rb_emlrtRSI;
      for (c2_i16 = 0; c2_i16 < 13; c2_i16++) {
        c2_q_obj[c2_i16] = c2_p_obj->MachineByteOrder[c2_i16];
      }

      c2_e_strcmp(chartInstance, &c2_f_st, c2_out, c2_q_obj);
      c2_i17 = c2_dataRaw->size[0] * c2_dataRaw->size[1];
      c2_dataRaw->size[0] = 1;
      c2_dataRaw->size[1] = c2_tempDataArray->size[1];
      c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_c_st, c2_dataRaw, c2_i17,
        &c2_xb_emlrtRTEI);
      c2_e_loop_ub = c2_tempDataArray->size[1] - 1;
      for (c2_i18 = 0; c2_i18 <= c2_e_loop_ub; c2_i18++) {
        c2_dataRaw->data[c2_i18] = c2_tempDataArray->data[c2_i18];
      }
    }

    c2_b_st.site = &c2_ng_emlrtRSI;
    c2_b_indexShapeCheck(chartInstance, &c2_b_st, c2_dataRaw->size);
    c2_b_dataRaw = c2_dataRaw->size[0] * c2_dataRaw->size[1];
    for (c2_i1 = 0; c2_i1 < 9; c2_i1++) {
      c2_i3 = c2_i1 + 1;
      if ((c2_i3 < 1) || (c2_i3 > c2_b_dataRaw)) {
        emlrtDynamicBoundsCheckR2012b(c2_i3, 1, c2_b_dataRaw, &c2_l_emlrtBCI,
          &c2_st);
      }

      c2_headerData[c2_i1] = (real_T)c2_dataRaw->data[c2_i3 - 1];
    }

    c2_st.site = &c2_xf_emlrtRSI;
    c2_requestID = c2_reqPacketID;
    c2_b_st.site = &c2_qi_emlrtRSI;
    for (c2_i5 = 0; c2_i5 < 2; c2_i5++) {
      c2_d = muDoubleScalarRound(c2_headerData[1 - c2_i5]);
      if (c2_d < 256.0) {
        if (c2_d >= 0.0) {
          c2_u1 = (uint8_T)c2_d;
        } else {
          c2_u1 = 0U;
        }
      } else if (c2_d >= 256.0) {
        c2_u1 = MAX_uint8_T;
      } else {
        c2_u1 = 0U;
      }

      c2_b_x[c2_i5] = c2_u1;
    }

    memcpy((void *)&c2_d_y, (void *)&c2_b_x[0], (size_t)1 * sizeof(uint16_T));
    c2_b_u = c2_d_y;
    if (c2_b_u > 255) {
      c2_b_u = 255U;
    }

    c2_transactionID = (uint8_T)c2_b_u;
    c2_valid = (c2_transactionID == c2_requestID);
    if (!c2_valid) {
      *c2_retry = true;
    } else {
      c2_fcnCode = c2_headerData[7];
      c2_st.site = &c2_yf_emlrtRSI;
      c2_b_a = c2_fcnCode;
      c2_b_st.site = &c2_ri_emlrtRSI;
      if (!c2_all_in_integer_range(chartInstance, c2_b_a)) {
        c2_i_y = NULL;
        sf_mex_assign(&c2_i_y, sf_mex_create("y", c2_b_cv3, 10, 0U, 1U, 0U, 2, 1,
          24), false);
        c2_k_y = NULL;
        sf_mex_assign(&c2_k_y, sf_mex_create("y", c2_b_cv3, 10, 0U, 1U, 0U, 2, 1,
          24), false);
        sf_mex_call(&c2_st, &c2_wb_emlrtMCI, "error", 0U, 2U, 14, c2_i_y, 14,
                    sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c2_st, NULL, "message", 1U, 1U, 14, c2_k_y)));
      }

      c2_c_a = c2_b_a;
      c2_a1 = (uint64_T)c2_c_a;
      c2_d1 = (real_T)((c2_a1 & 128ULL) != 0ULL);
      if (c2_d1 != 0.0) {
        c2_errCode = c2_headerData[8];
        c2_st.site = &c2_ag_emlrtRSI;
        c2_Modbus_flushIO(chartInstance, &c2_st, c2_obj);
        c2_st.site = &c2_bg_emlrtRSI;
        c2_b_errCode = c2_errCode;
        c2_b_fcnCode = c2_fcnCode;
        switch ((int32_T)c2_b_errCode) {
         case 1:
          c2_b_st.site = &c2_lj_emlrtRSI;
          c2_f_varargin_1 = c2_b_fcnCode;
          c2_c_st.site = &c2_oj_emlrtRSI;
          c2_d_a = c2_f_varargin_1;
          c2_d_st.site = &c2_pj_emlrtRSI;
          if (!c2_all_in_integer_range(chartInstance, c2_d_a)) {
            c2_fb_y = NULL;
            sf_mex_assign(&c2_fb_y, sf_mex_create("y", c2_cv13, 10, 0U, 1U, 0U,
              2, 1, 29), false);
            c2_gb_y = NULL;
            sf_mex_assign(&c2_gb_y, sf_mex_create("y", c2_cv13, 10, 0U, 1U, 0U,
              2, 1, 29), false);
            sf_mex_call(&c2_c_st, &c2_hc_emlrtMCI, "error", 0U, 2U, 14, c2_fb_y,
                        14, sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14,
              sf_mex_call(&c2_c_st, NULL, "message", 1U, 1U, 14, c2_gb_y)));
          }

          c2_e_a = c2_d_a;
          c2_b_a1 = (uint64_T)c2_e_a;
          c2_b_fcnCode = (real_T)(c2_b_a1 & 127ULL);
          c2_hb_y = NULL;
          sf_mex_assign(&c2_hb_y, sf_mex_create("y", c2_b_cv14, 10, 0U, 1U, 0U,
            2, 1, 34), false);
          c2_ib_y = NULL;
          sf_mex_assign(&c2_ib_y, sf_mex_create("y", c2_b_cv14, 10, 0U, 1U, 0U,
            2, 1, 34), false);
          c2_jb_y = NULL;
          sf_mex_assign(&c2_jb_y, sf_mex_create("y", &c2_b_fcnCode, 0, 0U, 0U,
            0U, 0), false);
          sf_mex_call(&c2_st, &c2_fc_emlrtMCI, "error", 0U, 2U, 14, c2_hb_y, 14,
                      sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c2_st, NULL, "message", 1U, 2U, 14, c2_ib_y, 14,
                        c2_jb_y)));
          break;

         case 2:
          c2_b_st.site = &c2_mj_emlrtRSI;
          if (c2_Modbus_isReadFunction(chartInstance, &c2_b_st, c2_b_fcnCode)) {
            c2_u_y = NULL;
            sf_mex_assign(&c2_u_y, sf_mex_create("y", c2_b_cv11, 10, 0U, 1U, 0U,
              2, 1, 37), false);
            c2_cb_y = NULL;
            sf_mex_assign(&c2_cb_y, sf_mex_create("y", c2_b_cv11, 10, 0U, 1U, 0U,
              2, 1, 37), false);
            sf_mex_call(&c2_st, &c2_dc_emlrtMCI, "error", 0U, 2U, 14, c2_u_y, 14,
                        sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14,
              sf_mex_call(&c2_st, NULL, "message", 1U, 1U, 14, c2_cb_y)));
          } else {
            c2_t_y = NULL;
            sf_mex_assign(&c2_t_y, sf_mex_create("y", c2_b_cv10, 10, 0U, 1U, 0U,
              2, 1, 38), false);
            c2_bb_y = NULL;
            sf_mex_assign(&c2_bb_y, sf_mex_create("y", c2_b_cv10, 10, 0U, 1U, 0U,
              2, 1, 38), false);
            sf_mex_call(&c2_st, &c2_ec_emlrtMCI, "error", 0U, 2U, 14, c2_t_y, 14,
                        sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14,
              sf_mex_call(&c2_st, NULL, "message", 1U, 1U, 14, c2_bb_y)));
          }
          break;

         case 3:
          c2_q_y = NULL;
          sf_mex_assign(&c2_q_y, sf_mex_create("y", c2_b_cv8, 10, 0U, 1U, 0U, 2,
            1, 30), false);
          c2_v_y = NULL;
          sf_mex_assign(&c2_v_y, sf_mex_create("y", c2_b_cv8, 10, 0U, 1U, 0U, 2,
            1, 30), false);
          sf_mex_call(&c2_st, &c2_cc_emlrtMCI, "error", 0U, 2U, 14, c2_q_y, 14,
                      sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c2_st, NULL, "message", 1U, 1U, 14, c2_v_y)));
          break;

         case 4:
          c2_b_st.site = &c2_nj_emlrtRSI;
          if (c2_Modbus_isReadFunction(chartInstance, &c2_b_st, c2_b_fcnCode)) {
            c2_x_y = NULL;
            sf_mex_assign(&c2_x_y, sf_mex_create("y", c2_b_cv13, 10, 0U, 1U, 0U,
              2, 1, 30), false);
            c2_eb_y = NULL;
            sf_mex_assign(&c2_eb_y, sf_mex_create("y", c2_b_cv13, 10, 0U, 1U, 0U,
              2, 1, 30), false);
            sf_mex_call(&c2_st, &c2_ac_emlrtMCI, "error", 0U, 2U, 14, c2_x_y, 14,
                        sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14,
              sf_mex_call(&c2_st, NULL, "message", 1U, 1U, 14, c2_eb_y)));
          } else {
            c2_w_y = NULL;
            sf_mex_assign(&c2_w_y, sf_mex_create("y", c2_b_cv12, 10, 0U, 1U, 0U,
              2, 1, 31), false);
            c2_db_y = NULL;
            sf_mex_assign(&c2_db_y, sf_mex_create("y", c2_b_cv12, 10, 0U, 1U, 0U,
              2, 1, 31), false);
            sf_mex_call(&c2_st, &c2_bc_emlrtMCI, "error", 0U, 2U, 14, c2_w_y, 14,
                        sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14,
              sf_mex_call(&c2_st, NULL, "message", 1U, 1U, 14, c2_db_y)));
          }
          break;

         case 6:
          c2_r_y = NULL;
          sf_mex_assign(&c2_r_y, sf_mex_create("y", c2_b_cv9, 10, 0U, 1U, 0U, 2,
            1, 30), false);
          c2_y_y = NULL;
          sf_mex_assign(&c2_y_y, sf_mex_create("y", c2_b_cv9, 10, 0U, 1U, 0U, 2,
            1, 30), false);
          sf_mex_call(&c2_st, &c2_yb_emlrtMCI, "error", 0U, 2U, 14, c2_r_y, 14,
                      sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c2_st, NULL, "message", 1U, 1U, 14, c2_y_y)));
          break;

         default:
          c2_p_y = NULL;
          sf_mex_assign(&c2_p_y, sf_mex_create("y", c2_b_cv7, 10, 0U, 1U, 0U, 2,
            1, 32), false);
          c2_s_y = NULL;
          sf_mex_assign(&c2_s_y, sf_mex_create("y", c2_b_cv7, 10, 0U, 1U, 0U, 2,
            1, 32), false);
          c2_ab_y = NULL;
          sf_mex_assign(&c2_ab_y, sf_mex_create("y", &c2_b_fcnCode, 0, 0U, 0U,
            0U, 0), false);
          sf_mex_call(&c2_st, &c2_gc_emlrtMCI, "error", 0U, 2U, 14, c2_p_y, 14,
                      sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c2_st, NULL, "message", 1U, 2U, 14, c2_s_y, 14, c2_ab_y)));
          break;
        }
      } else {
        c2_byteCount = c2_headerData[8];
        if (c2_byteCount <= 0.0) {
          c2_m_y = NULL;
          sf_mex_assign(&c2_m_y, sf_mex_create("y", c2_b_cv6, 10, 0U, 1U, 0U, 2,
            1, 29), false);
          c2_o_y = NULL;
          sf_mex_assign(&c2_o_y, sf_mex_create("y", c2_b_cv6, 10, 0U, 1U, 0U, 2,
            1, 29), false);
          sf_mex_call(c2_sp, &c2_ib_emlrtMCI, "error", 0U, 2U, 14, c2_m_y, 14,
                      sf_mex_call(c2_sp, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(c2_sp, NULL, "message", 1U, 1U, 14, c2_o_y)));
        }

        c2_st.site = &c2_cg_emlrtRSI;
        c2_o_obj = c2_obj;
        c2_bytesNeeded = c2_byteCount;
        c2_timedOut = false;
        c2_b_st.site = &c2_hg_emlrtRSI;
        c2_startTic = c2_tic(chartInstance, &c2_b_st);
        do {
          c2_exitg1 = 0;
          c2_b_st.site = &c2_ig_emlrtRSI;
          if (c2_TCPClient_get_NumBytesAvailable(chartInstance, &c2_b_st,
               c2_o_obj->TcpIpObj) < c2_bytesNeeded) {
            c2_b_st.site = &c2_jg_emlrtRSI;
            if (c2_toc(chartInstance, &c2_b_st, c2_startTic) >
                c2_o_obj->TransactionTimeout) {
              c2_timedOut = true;
              c2_exitg1 = 1;
            }
          } else {
            c2_exitg1 = 1;
          }
        } while (c2_exitg1 == 0);

        if (!c2_timedOut) {
          c2_st.site = &c2_dg_emlrtRSI;
          c2_r_obj = c2_obj;
          c2_numBytes = c2_byteCount;
          c2_b_st.site = &c2_mg_emlrtRSI;
          c2_g_varargin_1 = c2_r_obj->TcpIpObj;
          c2_c_varargin_2 = c2_numBytes;
          c2_c_st.site = &c2_n_emlrtRSI;
          c2_TCPClient_validateConnected(chartInstance, &c2_c_st,
            c2_g_varargin_1);
          c2_c_st.site = &c2_n_emlrtRSI;
          c2_h_varargin_1 = c2_g_varargin_1->TransportChannel;
          c2_d_varargin_2 = c2_c_varargin_2;
          c2_d_st.site = &c2_qb_emlrtRSI;
          c2_f_a = c2_d_varargin_2;
          c2_e_st.site = &c2_o_emlrtRSI;
          c2_g_a = c2_f_a;
          c2_h_a = c2_g_a;
          c2_d_p = true;
          c2_c_x = c2_h_a;
          c2_d_x = c2_c_x;
          c2_b_b = muDoubleScalarIsInf(c2_d_x);
          c2_b2 = !c2_b_b;
          c2_e_x = c2_c_x;
          c2_c_b = muDoubleScalarIsNaN(c2_e_x);
          c2_b3 = !c2_c_b;
          c2_d_b = (c2_b2 && c2_b3);
          if (!c2_d_b) {
            c2_d_p = false;
          }

          if (c2_d_p) {
            c2_b4 = true;
          } else {
            c2_b4 = false;
          }

          if (!c2_b4) {
            c2_kb_y = NULL;
            sf_mex_assign(&c2_kb_y, sf_mex_create("y", c2_b_cv15, 10, 0U, 1U, 0U,
              2, 1, 45), false);
            c2_lb_y = NULL;
            sf_mex_assign(&c2_lb_y, sf_mex_create("y", c2_cv2, 10, 0U, 1U, 0U, 2,
              1, 46), false);
            c2_mb_y = NULL;
            sf_mex_assign(&c2_mb_y, sf_mex_create("y", c2_b_cv16, 10, 0U, 1U, 0U,
              2, 1, 21), false);
            sf_mex_call(&c2_e_st, &c2_d_emlrtMCI, "error", 0U, 2U, 14, c2_kb_y,
                        14, sf_mex_call(&c2_e_st, NULL, "getString", 1U, 1U, 14,
              sf_mex_call(&c2_e_st, NULL, "message", 1U, 2U, 14, c2_lb_y, 14,
                          c2_mb_y)));
          }

          c2_d_st.site = &c2_qb_emlrtRSI;
          if (!c2_AsyncIOTransportChannel_get_StructData(chartInstance, &c2_d_st,
               c2_h_varargin_1)) {
            c2_size = c2_d_varargin_2;
            c2_numBytesToRead = c2_size;
          } else {
            c2_numBytesToRead = c2_d_varargin_2;
          }

          c2_d_st.site = &c2_qb_emlrtRSI;
          c2_AsyncIOTransportChannel_readRaw(chartInstance, &c2_d_st,
            c2_h_varargin_1, c2_numBytesToRead, c2_rawData);
          c2_b5 = (c2_rawData->size[0] == 0);
          c2_b6 = (c2_rawData->size[1] == 0);
          if (c2_b5 || c2_b6) {
            c2_dataRaw->size[0] = 0;
            c2_dataRaw->size[1] = 0;
          } else {
            c2_d_st.site = &c2_qb_emlrtRSI;
            c2_s_obj = c2_h_varargin_1;
            c2_i19 = c2_out->size[0] * c2_out->size[1];
            c2_out->size[0] = 1;
            c2_out->size[1] = c2_s_obj->NativeDataType->size[1];
            c2_emxEnsureCapacity_char_T(chartInstance, &c2_d_st, c2_out, c2_i19,
              &c2_d_emlrtRTEI);
            c2_f_loop_ub = c2_s_obj->NativeDataType->size[1] - 1;
            for (c2_i22 = 0; c2_i22 <= c2_f_loop_ub; c2_i22++) {
              c2_out->data[c2_i22] = c2_s_obj->NativeDataType->data[c2_i22];
            }

            c2_d_st.site = &c2_qb_emlrtRSI;
            if (!c2_i_strcmp(chartInstance, &c2_d_st, c2_out)) {
              c2_nb_y = NULL;
              sf_mex_assign(&c2_nb_y, sf_mex_create("y", c2_b_cv17, 10, 0U, 1U,
                0U, 2, 1, 40), false);
              c2_ob_y = NULL;
              sf_mex_assign(&c2_ob_y, sf_mex_create("y", c2_b_cv17, 10, 0U, 1U,
                0U, 2, 1, 40), false);
              c2_d_st.site = &c2_qb_emlrtRSI;
              c2_u_obj = c2_h_varargin_1;
              c2_i27 = c2_out->size[0] * c2_out->size[1];
              c2_out->size[0] = 1;
              c2_out->size[1] = c2_u_obj->NativeDataType->size[1];
              c2_emxEnsureCapacity_char_T(chartInstance, &c2_d_st, c2_out,
                c2_i27, &c2_d_emlrtRTEI);
              c2_h_loop_ub = c2_u_obj->NativeDataType->size[1] - 1;
              for (c2_i30 = 0; c2_i30 <= c2_h_loop_ub; c2_i30++) {
                c2_out->data[c2_i30] = c2_u_obj->NativeDataType->data[c2_i30];
              }

              c2_pb_y = NULL;
              sf_mex_assign(&c2_pb_y, sf_mex_create("y", c2_out->data, 10, 0U,
                1U, 0U, 2, 1, c2_out->size[1]), false);
              c2_qb_y = NULL;
              sf_mex_assign(&c2_qb_y, sf_mex_create("y", c2_cv18, 10, 0U, 1U, 0U,
                2, 1, 5), false);
              sf_mex_call(&c2_c_st, &c2_fb_emlrtMCI, "error", 0U, 2U, 14,
                          c2_nb_y, 14, sf_mex_call(&c2_c_st, NULL, "getString",
                1U, 1U, 14, sf_mex_call(&c2_c_st, NULL, "message", 1U, 3U, 14,
                c2_ob_y, 14, c2_pb_y, 14, c2_qb_y)));
            }

            c2_d_st.site = &c2_qb_emlrtRSI;
            c2_t_obj = c2_h_varargin_1;
            c2_i25 = c2_rawData->size[0];
            c2_i26 = 1;
            if ((c2_i26 < 1) || (c2_i26 > c2_i25)) {
              emlrtDynamicBoundsCheckR2012b(c2_i26, 1, c2_i25, &c2_m_emlrtBCI,
                &c2_d_st);
            }

            c2_e_st.site = &c2_qb_emlrtRSI;
            c2_i29 = c2_x->size[0] * c2_x->size[1];
            c2_x->size[0] = 1;
            c2_x->size[1] = c2_rawData->size[1];
            c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_e_st, c2_x, c2_i29,
              &c2_d_emlrtRTEI);
            c2_j_loop_ub = c2_rawData->size[1] - 1;
            for (c2_i32 = 0; c2_i32 <= c2_j_loop_ub; c2_i32++) {
              c2_x->data[c2_i32] = c2_rawData->data[c2_rawData->size[0] * c2_i32];
            }

            c2_b_nx = c2_x->size[1];
            c2_i33 = c2_tempDataArray->size[0] * c2_tempDataArray->size[1];
            c2_tempDataArray->size[0] = 1;
            c2_tempDataArray->size[1] = c2_b_nx;
            c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_e_st,
              c2_tempDataArray, c2_i33, &c2_e_emlrtRTEI);
            memcpy((void *)&c2_tempDataArray->data[0], (void *)&c2_x->data[0],
                   (size_t)c2_b_nx * sizeof(uint8_T));
            c2_e_st.site = &c2_qb_emlrtRSI;
            c2_v_obj = c2_t_obj;
            c2_i34 = c2_out->size[0] * c2_out->size[1];
            c2_out->size[0] = 1;
            c2_out->size[1] = c2_v_obj->ByteOrder->size[1];
            c2_emxEnsureCapacity_char_T(chartInstance, &c2_e_st, c2_out, c2_i34,
              &c2_d_emlrtRTEI);
            c2_k_loop_ub = c2_v_obj->ByteOrder->size[1] - 1;
            for (c2_i35 = 0; c2_i35 <= c2_k_loop_ub; c2_i35++) {
              c2_out->data[c2_i35] = c2_v_obj->ByteOrder->data[c2_i35];
            }

            c2_e_st.site = &c2_qb_emlrtRSI;
            c2_w_obj = c2_t_obj;
            c2_f_st.site = &c2_rb_emlrtRSI;
            for (c2_i36 = 0; c2_i36 < 13; c2_i36++) {
              c2_x_obj[c2_i36] = c2_w_obj->MachineByteOrder[c2_i36];
            }

            c2_e_strcmp(chartInstance, &c2_f_st, c2_out, c2_x_obj);
            c2_i37 = c2_dataRaw->size[0] * c2_dataRaw->size[1];
            c2_dataRaw->size[0] = 1;
            c2_dataRaw->size[1] = c2_tempDataArray->size[1];
            c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_c_st, c2_dataRaw,
              c2_i37, &c2_xb_emlrtRTEI);
            c2_l_loop_ub = c2_tempDataArray->size[1] - 1;
            for (c2_i38 = 0; c2_i38 <= c2_l_loop_ub; c2_i38++) {
              c2_dataRaw->data[c2_i38] = c2_tempDataArray->data[c2_i38];
            }
          }

          c2_i20 = c2_dataRaw->size[0] * c2_dataRaw->size[1];
          c2_i21 = 1;
          if ((c2_i21 < 1) || (c2_i21 > c2_i20)) {
            emlrtDynamicBoundsCheckR2012b(c2_i21, 1, c2_i20, &c2_l_emlrtBCI,
              &c2_st);
          }

          c2_i23 = (int32_T)c2_numBytes;
          if ((c2_i23 < 1) || (c2_i23 > c2_i20)) {
            emlrtDynamicBoundsCheckR2012b(c2_i23, 1, c2_i20, &c2_k_emlrtBCI,
              &c2_st);
          }

          c2_i24 = c2_i23;
          c2_iv[0] = 1;
          c2_iv[1] = c2_i24;
          c2_b_st.site = &c2_ng_emlrtRSI;
          c2_indexShapeCheck(chartInstance, &c2_b_st, c2_dataRaw->size, c2_iv);
          c2_b_data_size[1] = c2_i24;
          c2_g_loop_ub = c2_i24 - 1;
          for (c2_i28 = 0; c2_i28 <= c2_g_loop_ub; c2_i28++) {
            c2_b_data_data[c2_i28] = (real_T)c2_dataRaw->data[c2_i28];
          }

          c2_data_size[0] = 1;
          c2_data_size[1] = c2_b_data_size[1];
          c2_i_loop_ub = c2_b_data_size[1] - 1;
          for (c2_i31 = 0; c2_i31 <= c2_i_loop_ub; c2_i31++) {
            c2_data_data[c2_i31] = c2_b_data_data[c2_i31];
          }
        }
      }

      c2_guard1 = true;
    }
  } else {
    c2_guard1 = true;
  }

  if (c2_guard1) {
    if (c2_timedOut) {
      c2_st.site = &c2_eg_emlrtRSI;
      c2_d_obj = c2_obj;
      c2_b_out = c2_d_obj->NumRetries;
      c2_b_varargin_1 = c2_obj->RetryCount;
      c2_varargin_2 = c2_b_out;
      c2_d_varargin_1 = c2_b_varargin_1;
      c2_b_varargin_2 = c2_varargin_2;
      c2_p = false;
      c2_x1 = c2_d_varargin_1;
      c2_x2 = c2_b_varargin_2;
      c2_b_p = true;
      c2_b_x1 = c2_x1;
      c2_b_x2 = c2_x2;
      c2_c_p = (c2_b_x1 == c2_b_x2);
      if (!c2_c_p) {
        c2_b_p = false;
      }

      if (c2_b_p) {
        c2_p = true;
      }

      if (c2_p) {
        c2_st.site = &c2_fg_emlrtRSI;
        c2_Modbus_flushIO(chartInstance, &c2_st, c2_obj);
        c2_obj->RetryCount = 0.0;
        for (c2_i4 = 0; c2_i4 < 40; c2_i4++) {
          c2_r.Value[c2_i4] = c2_b_cv1[c2_i4];
        }

        c2_b_y = NULL;
        sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_cv2, 10, 0U, 1U, 0U, 2, 1,
          27), false);
        c2_e_y = NULL;
        sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_b_cv2, 10, 0U, 1U, 0U, 2, 1,
          27), false);
        c2_f_y = NULL;
        sf_mex_assign(&c2_f_y, sf_mex_create_class_instance(
          "coder.internal.string"), false);
        for (c2_i9 = 0; c2_i9 < 40; c2_i9++) {
          c2_c_u[c2_i9] = c2_r.Value[c2_i9];
        }

        c2_g_y = NULL;
        sf_mex_assign(&c2_g_y, sf_mex_create("y", c2_c_u, 10, 0U, 1U, 0U, 2, 1,
          40), false);
        c2_propValues[0] = c2_g_y;
        sf_mex_set_all_properties(&c2_f_y, 0, 1, c2_propNames, c2_propClasses,
          c2_propValues);
        sf_mex_assign(&c2_f_y, sf_mex_convert_to_redirect_source(c2_f_y, 0,
          "coder.internal.string"), false);
        sf_mex_call(c2_sp, &c2_jb_emlrtMCI, "error", 0U, 2U, 14, c2_b_y, 14,
                    sf_mex_call(c2_sp, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(c2_sp, NULL, "message", 1U, 2U, 14, c2_e_y, 14, c2_f_y)));
      } else {
        c2_st.site = &c2_gg_emlrtRSI;
        c2_f_obj = c2_obj;
        c2_b_st.site = &c2_rj_emlrtRSI;
        c2_Modbus_flushIO(chartInstance, &c2_b_st, c2_f_obj);
        c2_b_st.site = &c2_sj_emlrtRSI;
        c2_g_obj = c2_f_obj;
        c2_c_st.site = &c2_tj_emlrtRSI;
        c2_i_obj = c2_g_obj->TcpIpObj;
        c2_d_st.site = &c2_n_emlrtRSI;
        c2_k_obj = c2_i_obj;
        c2_e_st.site = &c2_n_emlrtRSI;
        c2_l_obj = c2_k_obj->AsyncIOChannel;
        c2_f_st.site = &c2_wj_emlrtRSI;
        c2_m_obj = c2_l_obj;
        c2_g_st.site = &c2_fc_emlrtRSI;
        c2_chImpl = c2_m_obj->ChannelImpl;
        c2_success = coderChannelIsOpen(c2_chImpl, &c2_result);
        c2_h_st.site = &c2_gc_emlrtRSI;
        c2_API_channelErrorIfFailed(chartInstance, &c2_h_st, c2_chImpl,
          c2_success);
        if (c2_result) {
          c2_f_st.site = &c2_xj_emlrtRSI;
          c2_b_chImpl = c2_l_obj->ChannelImpl;
          c2_b_success = coderChannelClose(c2_b_chImpl);
          c2_g_st.site = &c2_yj_emlrtRSI;
          c2_API_channelErrorIfFailed(chartInstance, &c2_g_st, c2_b_chImpl,
            c2_b_success);
        }

        c2_c_st.site = &c2_uj_emlrtRSI;
        c2_e_varargin_1 = 0.002;
        c2_l_y = NULL;
        sf_mex_assign(&c2_l_y, sf_mex_create("y", c2_b_cv5, 10, 0U, 1U, 0U, 2, 1,
          5), false);
        c2_n_y = NULL;
        sf_mex_assign(&c2_n_y, sf_mex_create("y", &c2_e_varargin_1, 0, 0U, 0U,
          0U, 0), false);
        c2_d_st.site = &c2_ef_emlrtRSI;
        c2_b_feval(chartInstance, &c2_d_st, c2_l_y, c2_n_y);
        c2_c_st.site = &c2_vj_emlrtRSI;
        c2_TCPClient_connect(chartInstance, &c2_c_st, c2_g_obj->TcpIpObj);
        c2_f_obj->RetryCount++;
        *c2_retry = true;
      }
    } else {
      c2_obj->RetryCount = 0.0;
    }
  }

  c2_emxFree_uint8_T(chartInstance, &c2_x);
  c2_emxFree_uint8_T(chartInstance, &c2_tempDataArray);
  c2_emxFree_char_T(chartInstance, &c2_out);
  c2_emxFree_uint8_T(chartInstance, &c2_rawData);
  c2_emxFree_uint8_T(chartInstance, &c2_dataRaw);
}

static real_T c2_TCPClient_get_NumBytesAvailable(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_matlabshared_network_internal_TCPClient *c2_obj)
{
  CoderChannel c2_chImpl;
  CoderInputStream c2_b_streamImpl;
  CoderInputStream c2_streamImpl;
  c2_matlabshared_asyncio_internal_InputStream *c2_c_obj;
  c2_matlabshared_asyncio_internal_InputStream *c2_d_obj;
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_b_obj;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  emlrtStack c2_f_st;
  emlrtStack c2_st;
  real_T c2_b_count;
  real_T c2_count;
  real_T c2_value;
  int32_T c2_b_success;
  int32_T c2_success;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_n_emlrtRSI;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_f_st.prev = &c2_e_st;
  c2_f_st.tls = c2_e_st.tls;
  c2_TCPClient_validateConnected(chartInstance, &c2_st, c2_obj);
  c2_st.site = &c2_n_emlrtRSI;
  c2_b_obj = c2_obj->TransportChannel;
  c2_b_st.site = &c2_qb_emlrtRSI;
  c2_value = c2_BufferChannel_get_NumElementsAvailable(chartInstance, &c2_b_st,
    &c2_b_obj->UnreadDataBuffer);
  c2_b_st.site = &c2_qb_emlrtRSI;
  c2_c_obj = &c2_b_obj->AsyncIOChannel->InputStream;
  c2_c_st.site = &c2_lg_emlrtRSI;
  c2_d_obj = c2_c_obj;
  c2_d_st.site = &c2_rf_emlrtRSI;
  c2_streamImpl = c2_d_obj->StreamImpl;
  c2_success = coderStreamGetDataAvailable(c2_streamImpl, &c2_count);
  c2_e_st.site = &c2_sf_emlrtRSI;
  c2_b_streamImpl = c2_streamImpl;
  c2_b_success = c2_success;
  if ((real_T)c2_b_success == 0.0) {
    c2_chImpl = coderStreamGetChannel(c2_b_streamImpl);
    c2_f_st.site = &c2_oe_emlrtRSI;
    c2_b_API_channelErrorIfFailed(chartInstance, &c2_f_st, c2_chImpl);
  }

  c2_b_count = c2_c_obj->PartialPacketCount + c2_count;
  c2_value += c2_b_count;
  return c2_value;
}

static real_T c2_BufferChannel_get_NumElementsAvailable(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_matlabshared_asyncio_buffer_internal_BufferChannel *c2_obj)
{
  CoderChannel c2_chImpl;
  CoderInputStream c2_b_streamImpl;
  CoderInputStream c2_streamImpl;
  c2_matlabshared_asyncio_internal_InputStream *c2_b_obj;
  c2_matlabshared_asyncio_internal_InputStream *c2_c_obj;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  emlrtStack c2_st;
  real_T c2_b_count;
  real_T c2_c_count;
  real_T c2_count;
  int32_T c2_b_success;
  int32_T c2_success;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_kg_emlrtRSI;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_b_obj = &c2_obj->InputStream;
  c2_b_st.site = &c2_lg_emlrtRSI;
  c2_c_obj = c2_b_obj;
  c2_c_st.site = &c2_rf_emlrtRSI;
  c2_streamImpl = c2_c_obj->StreamImpl;
  c2_success = coderStreamGetDataAvailable(c2_streamImpl, &c2_b_count);
  c2_d_st.site = &c2_sf_emlrtRSI;
  c2_b_streamImpl = c2_streamImpl;
  c2_b_success = c2_success;
  if ((real_T)c2_b_success == 0.0) {
    c2_chImpl = coderStreamGetChannel(c2_b_streamImpl);
    c2_e_st.site = &c2_oe_emlrtRSI;
    c2_b_API_channelErrorIfFailed(chartInstance, &c2_e_st, c2_chImpl);
  }

  c2_c_count = c2_b_obj->PartialPacketCount + c2_b_count;
  c2_count = c2_c_count + c2_obj->PartialPacketCount;
  c2_count /= c2_obj->BytesPerElement;
  return c2_count;
}

static boolean_T c2_AsyncIOTransportChannel_get_StructData
  (SFc2_wwtp3InstanceStruct *chartInstance, const emlrtStack *c2_sp,
   c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_obj)
{
  static char_T c2_b_cv[6] = { 's', 't', 'r', 'u', 'c', 't' };

  c2_emxArray_char_T *c2_b_out;
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_b_obj;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  emlrtStack c2_f_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_g_y = NULL;
  const mxArray *c2_i_y = NULL;
  const mxArray *c2_j_y = NULL;
  const mxArray *c2_k_y = NULL;
  const mxArray *c2_m_y = NULL;
  const mxArray *c2_n_y = NULL;
  const mxArray *c2_y = NULL;
  int32_T c2_b_kstr;
  int32_T c2_exitg1;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_kstr;
  int32_T c2_loop_ub;
  int32_T c2_remainingDimsA;
  char_T c2_b_s;
  char_T c2_b_x;
  char_T c2_c_s;
  char_T c2_c_x;
  char_T c2_d_s;
  char_T c2_d_x;
  char_T c2_e_s;
  char_T c2_f_s;
  char_T c2_g_s;
  char_T c2_h_s;
  char_T c2_h_y;
  char_T c2_l_y;
  char_T c2_s;
  char_T c2_x;
  int8_T c2_b_u;
  int8_T c2_c_u;
  int8_T c2_d_u;
  int8_T c2_e_u;
  boolean_T c2_b;
  boolean_T c2_b1;
  boolean_T c2_b2;
  boolean_T c2_b3;
  boolean_T c2_b4;
  boolean_T c2_b_p;
  boolean_T c2_bool;
  boolean_T c2_c_out;
  boolean_T c2_c_p;
  boolean_T c2_d_p;
  boolean_T c2_p;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_f_st.prev = &c2_e_st;
  c2_f_st.tls = c2_e_st.tls;
  c2_emxInit_char_T(chartInstance, c2_sp, &c2_b_out, 2, &c2_d_emlrtRTEI);
  c2_st.site = &c2_qb_emlrtRSI;
  c2_b_obj = c2_obj;
  c2_i = c2_b_out->size[0] * c2_b_out->size[1];
  c2_b_out->size[0] = 1;
  c2_b_out->size[1] = c2_b_obj->NativeDataType->size[1];
  c2_emxEnsureCapacity_char_T(chartInstance, &c2_st, c2_b_out, c2_i,
    &c2_d_emlrtRTEI);
  c2_loop_ub = c2_b_obj->NativeDataType->size[1] - 1;
  for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
    c2_b_out->data[c2_i1] = c2_b_obj->NativeDataType->data[c2_i1];
  }

  c2_st.site = &c2_qb_emlrtRSI;
  c2_b_st.site = &c2_qd_emlrtRSI;
  c2_c_st.site = &c2_rd_emlrtRSI;
  c2_bool = false;
  c2_remainingDimsA = c2_b_out->size[1];
  if (c2_remainingDimsA != 6) {
  } else {
    c2_kstr = 1;
    do {
      c2_exitg1 = 0;
      if (c2_kstr - 1 < 6) {
        c2_b_kstr = c2_kstr - 1;
        c2_d_st.site = &c2_sd_emlrtRSI;
        c2_s = c2_b_out->data[c2_b_kstr];
        c2_b_s = c2_s;
        c2_b1 = ((real_T)(uint8_T)c2_b_s <= 127.0);
        c2_p = c2_b1;
        if (!c2_p) {
          c2_y = NULL;
          sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c2_b_y = NULL;
          sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
            1, 31), false);
          c2_b_u = MAX_int8_T;
          c2_c_y = NULL;
          sf_mex_assign(&c2_c_y, sf_mex_create("y", &c2_b_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c2_d_st, &c2_eb_emlrtMCI, "error", 0U, 2U, 14, c2_y, 14,
                      sf_mex_call(&c2_d_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c2_d_st, NULL, "message", 1U, 2U, 14, c2_b_y, 14,
                        c2_c_y)));
        }

        c2_d_st.site = &c2_td_emlrtRSI;
        c2_c_s = c2_b_cv[c2_b_kstr];
        c2_d_s = c2_c_s;
        c2_b2 = ((real_T)(uint8_T)c2_d_s <= 127.0);
        c2_b_p = c2_b2;
        if (!c2_b_p) {
          c2_d_y = NULL;
          sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
            1, 31), false);
          c2_e_y = NULL;
          sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
            1, 31), false);
          c2_c_u = MAX_int8_T;
          c2_f_y = NULL;
          sf_mex_assign(&c2_f_y, sf_mex_create("y", &c2_c_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c2_d_st, &c2_eb_emlrtMCI, "error", 0U, 2U, 14, c2_d_y, 14,
                      sf_mex_call(&c2_d_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c2_d_st, NULL, "message", 1U, 2U, 14, c2_e_y, 14,
                        c2_f_y)));
        }

        c2_d_st.site = &c2_ud_emlrtRSI;
        c2_x = c2_b_out->data[c2_b_kstr];
        c2_e_st.site = &c2_vd_emlrtRSI;
        c2_b_x = c2_x;
        c2_f_st.site = &c2_wd_emlrtRSI;
        c2_e_s = c2_b_x;
        c2_f_s = c2_e_s;
        c2_b3 = ((real_T)(uint8_T)c2_f_s <= 127.0);
        c2_c_p = c2_b3;
        if (!c2_c_p) {
          c2_g_y = NULL;
          sf_mex_assign(&c2_g_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
            1, 31), false);
          c2_i_y = NULL;
          sf_mex_assign(&c2_i_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
            1, 31), false);
          c2_d_u = MAX_int8_T;
          c2_j_y = NULL;
          sf_mex_assign(&c2_j_y, sf_mex_create("y", &c2_d_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c2_f_st, &c2_eb_emlrtMCI, "error", 0U, 2U, 14, c2_g_y, 14,
                      sf_mex_call(&c2_f_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c2_f_st, NULL, "message", 1U, 2U, 14, c2_i_y, 14,
                        c2_j_y)));
        }

        c2_h_y = c2_cv10[(uint8_T)c2_b_x & 127];
        c2_d_st.site = &c2_ud_emlrtRSI;
        c2_c_x = c2_b_cv[c2_b_kstr];
        c2_e_st.site = &c2_vd_emlrtRSI;
        c2_d_x = c2_c_x;
        c2_f_st.site = &c2_wd_emlrtRSI;
        c2_g_s = c2_d_x;
        c2_h_s = c2_g_s;
        c2_b4 = ((real_T)(uint8_T)c2_h_s <= 127.0);
        c2_d_p = c2_b4;
        if (!c2_d_p) {
          c2_k_y = NULL;
          sf_mex_assign(&c2_k_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
            1, 31), false);
          c2_m_y = NULL;
          sf_mex_assign(&c2_m_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
            1, 31), false);
          c2_e_u = MAX_int8_T;
          c2_n_y = NULL;
          sf_mex_assign(&c2_n_y, sf_mex_create("y", &c2_e_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c2_f_st, &c2_eb_emlrtMCI, "error", 0U, 2U, 14, c2_k_y, 14,
                      sf_mex_call(&c2_f_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c2_f_st, NULL, "message", 1U, 2U, 14, c2_m_y, 14,
                        c2_n_y)));
        }

        c2_l_y = c2_cv10[(uint8_T)c2_d_x & 127];
        if (c2_h_y != c2_l_y) {
          c2_exitg1 = 1;
        } else {
          c2_kstr++;
        }
      } else {
        c2_bool = true;
        c2_exitg1 = 1;
      }
    } while (c2_exitg1 == 0);
  }

  c2_emxFree_char_T(chartInstance, &c2_b_out);
  if (c2_bool) {
    c2_b = (c2_obj->DataFieldName->size[1] == 0);
    if (!c2_b) {
      c2_c_out = true;
    } else {
      c2_c_out = false;
    }
  } else {
    c2_c_out = false;
  }

  return c2_c_out;
}

static void c2_AsyncIOTransportChannel_readRaw(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_obj,
  real_T c2_numBytes, c2_emxArray_uint8_T *c2_data)
{
  static char_T c2_b_cv2[39] = { 't', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't',
    'l', 'i', 'b', ':', 't', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't', ':', 't',
    'r', 'a', 'n', 's', 'p', 'o', 'r', 't', 'I', 'n', 'v', 'a', 'l', 'i', 'd' };

  static char_T c2_b_cv[30] = { 't', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't', 'l',
    'i', 'b', ':', 't', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't', ':', 't', 'i',
    'm', 'e', 'o', 'u', 't' };

  static char_T c2_b_cv1[5] = { 'p', 'a', 'u', 's', 'e' };

  CoderChannel c2_b_chImpl;
  CoderChannel c2_c_chImpl;
  CoderChannel c2_chImpl;
  CoderChannel c2_d_chImpl;
  CoderInputStream c2_b_streamImpl;
  CoderInputStream c2_c_streamImpl;
  CoderInputStream c2_d_streamImpl;
  CoderInputStream c2_e_streamImpl;
  CoderInputStream c2_f_streamImpl;
  CoderInputStream c2_g_streamImpl;
  CoderInputStream c2_h_streamImpl;
  CoderInputStream c2_streamImpl;
  c2_emxArray_uint8_T *c2_rawData;
  c2_matlabshared_asyncio_internal_InputStream *c2_d_obj;
  c2_matlabshared_asyncio_internal_InputStream *c2_e_obj;
  c2_matlabshared_asyncio_internal_InputStream *c2_f_obj;
  c2_matlabshared_asyncio_internal_InputStream *c2_g_obj;
  c2_matlabshared_asyncio_internal_InputStream *c2_h_obj;
  c2_matlabshared_asyncio_internal_InputStream *c2_i_obj;
  c2_matlabshared_asyncio_internal_InputStream *c2_j_obj;
  c2_matlabshared_asyncio_internal_InputStream *c2_l_obj;
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_b_obj;
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_c_obj;
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_k_obj;
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_m_obj;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  emlrtStack c2_st;
  emlrtTimespec c2_startTic;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_j_y = NULL;
  const mxArray *c2_k_y = NULL;
  const mxArray *c2_y = NULL;
  real_T c2_a__1;
  real_T c2_a__2;
  real_T c2_b;
  real_T c2_b_a;
  real_T c2_b_count;
  real_T c2_b_value;
  real_T c2_b_varargin_1;
  real_T c2_b_x;
  real_T c2_c_count;
  real_T c2_c_value;
  real_T c2_c_x;
  real_T c2_count;
  real_T c2_d_count;
  real_T c2_d_x;
  real_T c2_e_count;
  real_T c2_e_x;
  real_T c2_f_count;
  real_T c2_g_count;
  real_T c2_g_y;
  real_T c2_h_count;
  real_T c2_h_y;
  real_T c2_i_y;
  real_T c2_l_y;
  real_T c2_m_y;
  real_T c2_minval;
  real_T c2_numBytesToRead;
  real_T c2_value;
  real_T c2_varargin_1;
  real_T c2_varargin_2;
  real_T c2_x;
  int32_T c2_status_size[2];
  int32_T c2_b_success;
  int32_T c2_c_success;
  int32_T c2_d_success;
  int32_T c2_e_success;
  int32_T c2_exitg1;
  int32_T c2_f_success;
  int32_T c2_g_success;
  int32_T c2_h_success;
  int32_T c2_success;
  char_T c2_status_data[9];
  boolean_T c2_hasEnoughData;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_data->size[0] = 0;
  c2_data->size[1] = 0;
  c2_st.site = &c2_qb_emlrtRSI;
  c2_b_obj = c2_obj;
  c2_b_st.site = &c2_qb_emlrtRSI;
  c2_value = c2_BufferChannel_get_NumElementsAvailable(chartInstance, &c2_b_st,
    &c2_b_obj->UnreadDataBuffer);
  if (c2_value >= c2_numBytes) {
    c2_st.site = &c2_qb_emlrtRSI;
    c2_AsyncIOTransportChannel_getUnreadData(chartInstance, &c2_st, c2_obj,
      c2_numBytes, c2_data);
  } else {
    c2_st.site = &c2_qb_emlrtRSI;
    c2_c_obj = c2_obj;
    c2_b_st.site = &c2_qb_emlrtRSI;
    c2_b_value = c2_BufferChannel_get_NumElementsAvailable(chartInstance,
      &c2_b_st, &c2_c_obj->UnreadDataBuffer);
    c2_numBytesToRead = c2_numBytes - c2_b_value;
    c2_hasEnoughData = false;
    c2_st.site = &c2_qb_emlrtRSI;
    c2_startTic = c2_tic(chartInstance, &c2_st);
    do {
      c2_exitg1 = 0;
      c2_st.site = &c2_qb_emlrtRSI;
      if (c2_toc(chartInstance, &c2_st, c2_startTic) < c2_obj->
          AsyncIOChannel->InputStream.Timeout) {
        c2_st.site = &c2_qb_emlrtRSI;
        c2_d_obj = &c2_obj->AsyncIOChannel->InputStream;
        c2_b_st.site = &c2_lg_emlrtRSI;
        c2_e_obj = c2_d_obj;
        c2_c_st.site = &c2_rf_emlrtRSI;
        c2_streamImpl = c2_e_obj->StreamImpl;
        c2_success = coderStreamGetDataAvailable(c2_streamImpl, &c2_count);
        c2_d_st.site = &c2_sf_emlrtRSI;
        c2_b_streamImpl = c2_streamImpl;
        c2_b_success = c2_success;
        if ((real_T)c2_b_success == 0.0) {
          c2_chImpl = coderStreamGetChannel(c2_b_streamImpl);
          c2_e_st.site = &c2_oe_emlrtRSI;
          c2_b_API_channelErrorIfFailed(chartInstance, &c2_e_st, c2_chImpl);
        }

        c2_d_count = c2_d_obj->PartialPacketCount + c2_count;
        if (c2_d_count >= c2_numBytesToRead) {
          c2_hasEnoughData = true;
          c2_exitg1 = 1;
        } else {
          c2_st.site = &c2_qb_emlrtRSI;
          c2_varargin_1 = 0.01;
          c2_c_y = NULL;
          sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2,
            1, 5), false);
          c2_d_y = NULL;
          sf_mex_assign(&c2_d_y, sf_mex_create("y", &c2_varargin_1, 0, 0U, 0U,
            0U, 0), false);
          c2_b_st.site = &c2_ef_emlrtRSI;
          c2_b_feval(chartInstance, &c2_b_st, c2_c_y, c2_d_y);
        }
      } else {
        c2_exitg1 = 1;
      }
    } while (c2_exitg1 == 0);

    c2_emxInit_uint8_T(chartInstance, c2_sp, &c2_rawData, 2, &c2_d_emlrtRTEI);
    if (c2_hasEnoughData) {
      c2_st.site = &c2_qb_emlrtRSI;
      c2_f_obj = &c2_obj->AsyncIOChannel->InputStream;
      c2_b_st.site = &c2_lg_emlrtRSI;
      c2_h_obj = c2_f_obj;
      c2_c_st.site = &c2_rf_emlrtRSI;
      c2_c_streamImpl = c2_h_obj->StreamImpl;
      c2_c_success = coderStreamGetDataAvailable(c2_c_streamImpl, &c2_b_count);
      c2_d_st.site = &c2_sf_emlrtRSI;
      c2_e_streamImpl = c2_c_streamImpl;
      c2_e_success = c2_c_success;
      if ((real_T)c2_e_success == 0.0) {
        c2_b_chImpl = coderStreamGetChannel(c2_e_streamImpl);
        c2_e_st.site = &c2_oe_emlrtRSI;
        c2_b_API_channelErrorIfFailed(chartInstance, &c2_e_st, c2_b_chImpl);
      }

      c2_e_count = c2_f_obj->PartialPacketCount + c2_b_count;
      c2_st.site = &c2_qb_emlrtRSI;
      c2_b_InputStream_read(chartInstance, &c2_st, &c2_obj->
                            AsyncIOChannel->InputStream, c2_e_count, c2_rawData,
                            &c2_a__1, c2_status_data, c2_status_size);
      c2_st.site = &c2_qb_emlrtRSI;
      if (c2_h_strcmp(chartInstance, &c2_st, c2_status_data, c2_status_size)) {
        c2_e_y = NULL;
        sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_b_cv2, 10, 0U, 1U, 0U, 2, 1,
          39), false);
        c2_f_y = NULL;
        sf_mex_assign(&c2_f_y, sf_mex_create("y", c2_b_cv2, 10, 0U, 1U, 0U, 2, 1,
          39), false);
        sf_mex_call(c2_sp, &c2_fb_emlrtMCI, "error", 0U, 2U, 14, c2_e_y, 14,
                    sf_mex_call(c2_sp, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(c2_sp, NULL, "message", 1U, 1U, 14, c2_f_y)));
      }

      c2_st.site = &c2_qb_emlrtRSI;
      c2_BufferChannel_write(chartInstance, &c2_st, &c2_obj->UnreadDataBuffer,
        c2_rawData);
      c2_st.site = &c2_qb_emlrtRSI;
      c2_AsyncIOTransportChannel_getUnreadData(chartInstance, &c2_st, c2_obj,
        c2_numBytes, c2_data);
    } else if (c2_obj->AllowPartialReads) {
      c2_st.site = &c2_qb_emlrtRSI;
      c2_g_obj = &c2_obj->AsyncIOChannel->InputStream;
      c2_b_st.site = &c2_lg_emlrtRSI;
      c2_i_obj = c2_g_obj;
      c2_c_st.site = &c2_rf_emlrtRSI;
      c2_d_streamImpl = c2_i_obj->StreamImpl;
      c2_d_success = coderStreamGetDataAvailable(c2_d_streamImpl, &c2_c_count);
      c2_d_st.site = &c2_sf_emlrtRSI;
      c2_f_streamImpl = c2_d_streamImpl;
      c2_f_success = c2_d_success;
      if ((real_T)c2_f_success == 0.0) {
        c2_c_chImpl = coderStreamGetChannel(c2_f_streamImpl);
        c2_e_st.site = &c2_oe_emlrtRSI;
        c2_b_API_channelErrorIfFailed(chartInstance, &c2_e_st, c2_c_chImpl);
      }

      c2_f_count = c2_g_obj->PartialPacketCount + c2_c_count;
      if (c2_f_count > 0.0) {
        c2_st.site = &c2_qb_emlrtRSI;
        c2_j_obj = &c2_obj->AsyncIOChannel->InputStream;
        c2_b_st.site = &c2_lg_emlrtRSI;
        c2_l_obj = c2_j_obj;
        c2_c_st.site = &c2_rf_emlrtRSI;
        c2_g_streamImpl = c2_l_obj->StreamImpl;
        c2_g_success = coderStreamGetDataAvailable(c2_g_streamImpl, &c2_g_count);
        c2_d_st.site = &c2_sf_emlrtRSI;
        c2_h_streamImpl = c2_g_streamImpl;
        c2_h_success = c2_g_success;
        if ((real_T)c2_h_success == 0.0) {
          c2_d_chImpl = coderStreamGetChannel(c2_h_streamImpl);
          c2_e_st.site = &c2_oe_emlrtRSI;
          c2_b_API_channelErrorIfFailed(chartInstance, &c2_e_st, c2_d_chImpl);
        }

        c2_h_count = c2_j_obj->PartialPacketCount + c2_g_count;
        c2_st.site = &c2_qb_emlrtRSI;
        c2_b_InputStream_read(chartInstance, &c2_st, &c2_obj->
                              AsyncIOChannel->InputStream, c2_h_count,
                              c2_rawData, &c2_a__2, c2_status_data,
                              c2_status_size);
        c2_st.site = &c2_qb_emlrtRSI;
        if (c2_h_strcmp(chartInstance, &c2_st, c2_status_data, c2_status_size))
        {
          c2_j_y = NULL;
          sf_mex_assign(&c2_j_y, sf_mex_create("y", c2_b_cv2, 10, 0U, 1U, 0U, 2,
            1, 39), false);
          c2_k_y = NULL;
          sf_mex_assign(&c2_k_y, sf_mex_create("y", c2_b_cv2, 10, 0U, 1U, 0U, 2,
            1, 39), false);
          sf_mex_call(c2_sp, &c2_fb_emlrtMCI, "error", 0U, 2U, 14, c2_j_y, 14,
                      sf_mex_call(c2_sp, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(c2_sp, NULL, "message", 1U, 1U, 14, c2_k_y)));
        }

        c2_st.site = &c2_qb_emlrtRSI;
        c2_BufferChannel_write(chartInstance, &c2_st, &c2_obj->UnreadDataBuffer,
          c2_rawData);
      }

      c2_st.site = &c2_qb_emlrtRSI;
      c2_k_obj = c2_obj;
      c2_b_st.site = &c2_qb_emlrtRSI;
      c2_c_value = c2_BufferChannel_get_NumElementsAvailable(chartInstance,
        &c2_b_st, &c2_k_obj->UnreadDataBuffer);
      if (c2_c_value > 0.0) {
        c2_b_varargin_1 = c2_numBytes;
        c2_st.site = &c2_qb_emlrtRSI;
        c2_m_obj = c2_obj;
        c2_b_st.site = &c2_qb_emlrtRSI;
        c2_varargin_2 = c2_BufferChannel_get_NumElementsAvailable(chartInstance,
          &c2_b_st, &c2_m_obj->UnreadDataBuffer);
        c2_x = c2_b_varargin_1;
        c2_g_y = c2_varargin_2;
        c2_b_x = c2_x;
        c2_h_y = c2_g_y;
        c2_c_x = c2_b_x;
        c2_i_y = c2_h_y;
        c2_b_a = c2_c_x;
        c2_b = c2_i_y;
        c2_d_x = c2_b_a;
        c2_l_y = c2_b;
        c2_e_x = c2_d_x;
        c2_m_y = c2_l_y;
        c2_minval = muDoubleScalarMin(c2_e_x, c2_m_y);
        c2_st.site = &c2_qb_emlrtRSI;
        c2_AsyncIOTransportChannel_getUnreadData(chartInstance, &c2_st, c2_obj,
          c2_minval, c2_data);
      }
    } else {
      c2_y = NULL;
      sf_mex_assign(&c2_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                    false);
      c2_b_y = NULL;
      sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1,
        30), false);
      sf_mex_call(c2_sp, &c2_fb_emlrtMCI, "error", 0U, 2U, 14, c2_y, 14,
                  sf_mex_call(c2_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (c2_sp, NULL, "message", 1U, 1U, 14, c2_b_y)));
    }

    c2_emxFree_uint8_T(chartInstance, &c2_rawData);
  }
}

static void c2_AsyncIOTransportChannel_getUnreadData(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_obj,
  real_T c2_numToRead, c2_emxArray_uint8_T *c2_data)
{
  c2_matlabshared_asyncio_buffer_internal_BufferChannel *c2_c_obj;
  c2_matlabshared_asyncio_buffer_internal_BufferChannel *c2_f_obj;
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_b_obj;
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_d_obj;
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_e_obj;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_st;
  real_T c2_b;
  real_T c2_b_a;
  real_T c2_b_count;
  real_T c2_b_value;
  real_T c2_b_x;
  real_T c2_b_y;
  real_T c2_c_x;
  real_T c2_c_y;
  real_T c2_count;
  real_T c2_d_x;
  real_T c2_d_y;
  real_T c2_e_x;
  real_T c2_e_y;
  real_T c2_value;
  real_T c2_varargin_1;
  real_T c2_varargin_2;
  real_T c2_x;
  real_T c2_y;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_qb_emlrtRSI;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_b_obj = c2_obj;
  c2_b_st.site = &c2_qb_emlrtRSI;
  c2_value = c2_BufferChannel_get_NumElementsAvailable(chartInstance, &c2_b_st,
    &c2_b_obj->UnreadDataBuffer);
  if (c2_numToRead > c2_value) {
    c2_st.site = &c2_qb_emlrtRSI;
    c2_d_obj = c2_obj;
    c2_b_st.site = &c2_qb_emlrtRSI;
    c2_e_obj = c2_d_obj;
    c2_c_st.site = &c2_qb_emlrtRSI;
    c2_b_value = c2_BufferChannel_get_NumElementsAvailable(chartInstance,
      &c2_c_st, &c2_e_obj->UnreadDataBuffer);
    if (c2_b_value != 0.0) {
      c2_b_st.site = &c2_qb_emlrtRSI;
      c2_f_obj = &c2_d_obj->UnreadDataBuffer;
      c2_c_st.site = &c2_og_emlrtRSI;
      c2_b_count = c2_BufferChannel_get_NumElementsAvailable(chartInstance,
        &c2_c_st, c2_f_obj);
      if (c2_b_count == 0.0) {
        c2_data->size[0] = 0;
        c2_data->size[1] = 0;
      } else {
        c2_c_st.site = &c2_pg_emlrtRSI;
        c2_BufferChannel_readRaw(chartInstance, &c2_c_st, c2_f_obj, c2_b_count *
          c2_f_obj->BytesPerElement, c2_data);
      }
    } else {
      c2_data->size[0] = 0;
      c2_data->size[1] = 0;
    }
  } else {
    c2_st.site = &c2_qb_emlrtRSI;
    c2_c_obj = &c2_obj->UnreadDataBuffer;
    c2_count = c2_numToRead;
    c2_varargin_1 = c2_count;
    c2_b_st.site = &c2_mi_emlrtRSI;
    c2_varargin_2 = c2_BufferChannel_get_NumElementsAvailable(chartInstance,
      &c2_b_st, c2_c_obj);
    c2_x = c2_varargin_1;
    c2_y = c2_varargin_2;
    c2_b_x = c2_x;
    c2_b_y = c2_y;
    c2_c_x = c2_b_x;
    c2_c_y = c2_b_y;
    c2_b_a = c2_c_x;
    c2_b = c2_c_y;
    c2_d_x = c2_b_a;
    c2_d_y = c2_b;
    c2_e_x = c2_d_x;
    c2_e_y = c2_d_y;
    c2_count = muDoubleScalarMin(c2_e_x, c2_e_y);
    if (c2_count == 0.0) {
      c2_data->size[0] = 0;
      c2_data->size[1] = 0;
    } else {
      c2_b_st.site = &c2_pg_emlrtRSI;
      c2_BufferChannel_readRaw(chartInstance, &c2_b_st, c2_c_obj, c2_count *
        c2_c_obj->BytesPerElement, c2_data);
    }
  }
}

static void c2_BufferChannel_readRaw(SFc2_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_matlabshared_asyncio_buffer_internal_BufferChannel
  *c2_obj, real_T c2_numBytesToRead, c2_emxArray_uint8_T *c2_data)
{
  static char_T c2_b_cv[57] = { 't', 'e', 's', 't', 'm', 'e', 'a', 's', 'l', 'i',
    'b', ':', 'A', 's', 'y', 'n', 'c', 'i', 'o', 'B', 'u', 'f', 'f', 'e', 'r',
    ':', 'C', 'a', 'n', 'n', 'o', 't', 'R', 'e', 'a', 'd', 'M', 'o', 'r', 'e',
    'D', 'a', 't', 'a', 'T', 'h', 'a', 'n', 'A', 'v', 'a', 'i', 'l', 'a', 'b',
    'l', 'e' };

  static char_T c2_b_cv1[39] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'c', 'a',
    't', 'e', 'n', 'a', 't', 'e', ':', 'm', 'a', 't', 'r', 'i', 'x', 'D', 'i',
    'm', 'e', 'n', 's', 'i', 'o', 'n', 'M', 'i', 's', 'm', 'a', 't', 'c', 'h' };

  static char_T c2_b_cv2[39] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'c', 'a',
    't', 'e', 'n', 'a', 't', 'e', ':', 'm', 'a', 't', 'r', 'i', 'x', 'D', 'i',
    'm', 'e', 'n', 's', 'i', 'o', 'n', 'M', 'i', 's', 'm', 'a', 't', 'c', 'h' };

  CoderChannel c2_b_chImpl;
  CoderChannel c2_chImpl;
  CoderInputStream c2_b_streamImpl;
  CoderInputStream c2_c_streamImpl;
  CoderInputStream c2_d_streamImpl;
  CoderInputStream c2_streamImpl;
  c2_cell_wrap_37 c2_reshapes[2];
  c2_emxArray_uint8_T *c2_rawData;
  c2_emxArray_uint8_T *c2_varargin_2;
  c2_matlabshared_asyncio_buffer_internal_BufferChannel *c2_b_obj;
  c2_matlabshared_asyncio_buffer_internal_BufferChannel *c2_c_obj;
  c2_matlabshared_asyncio_buffer_internal_BufferChannel *c2_e_obj;
  c2_matlabshared_asyncio_buffer_internal_BufferChannel *c2_i_obj;
  c2_matlabshared_asyncio_buffer_internal_BufferChannel *c2_j_obj;
  c2_matlabshared_asyncio_buffer_internal_BufferChannel *c2_k_obj;
  c2_matlabshared_asyncio_buffer_internal_BufferChannel *c2_l_obj;
  c2_matlabshared_asyncio_buffer_internal_BufferChannel *c2_m_obj;
  c2_matlabshared_asyncio_internal_InputStream *c2_d_obj;
  c2_matlabshared_asyncio_internal_InputStream *c2_f_obj;
  c2_matlabshared_asyncio_internal_InputStream *c2_g_obj;
  c2_matlabshared_asyncio_internal_InputStream *c2_h_obj;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_g_y = NULL;
  const mxArray *c2_h_y = NULL;
  const mxArray *c2_i_y = NULL;
  const mxArray *c2_j_y = NULL;
  const mxArray *c2_y = NULL;
  real_T c2_b_count;
  real_T c2_b_countRequested;
  real_T c2_b_ppc;
  real_T c2_b_pps;
  real_T c2_c_count;
  real_T c2_count;
  real_T c2_countRead;
  real_T c2_countRequested;
  real_T c2_d_count;
  real_T c2_ppc;
  real_T c2_pps;
  real_T c2_remainingCount;
  int32_T c2_input_sizes[2];
  int32_T c2_sizes[2];
  int32_T c2_arg;
  int32_T c2_b_arg;
  int32_T c2_b_expected;
  int32_T c2_b_loop_ub;
  int32_T c2_b_result;
  int32_T c2_b_success;
  int32_T c2_b_varargin_1;
  int32_T c2_c_loop_ub;
  int32_T c2_c_success;
  int32_T c2_d_loop_ub;
  int32_T c2_d_success;
  int32_T c2_e_loop_ub;
  int32_T c2_expected;
  int32_T c2_f_loop_ub;
  int32_T c2_g_loop_ub;
  int32_T c2_h_loop_ub;
  int32_T c2_h_result;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i2;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_i24;
  int32_T c2_i25;
  int32_T c2_i26;
  int32_T c2_i27;
  int32_T c2_i28;
  int32_T c2_i29;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_i_loop_ub;
  int32_T c2_j_loop_ub;
  int32_T c2_j_result;
  int32_T c2_k_loop_ub;
  int32_T c2_l_loop_ub;
  int32_T c2_loop_ub;
  int32_T c2_m_loop_ub;
  int32_T c2_n_loop_ub;
  int32_T c2_n_result;
  int32_T c2_o_loop_ub;
  int32_T c2_p_loop_ub;
  int32_T c2_q_loop_ub;
  int32_T c2_q_result;
  int32_T c2_s_result;
  int32_T c2_success;
  int32_T c2_varargin_1;
  boolean_T c2_b;
  boolean_T c2_b1;
  boolean_T c2_b10;
  boolean_T c2_b11;
  boolean_T c2_b12;
  boolean_T c2_b13;
  boolean_T c2_b14;
  boolean_T c2_b15;
  boolean_T c2_b16;
  boolean_T c2_b17;
  boolean_T c2_b18;
  boolean_T c2_b19;
  boolean_T c2_b2;
  boolean_T c2_b20;
  boolean_T c2_b21;
  boolean_T c2_b22;
  boolean_T c2_b23;
  boolean_T c2_b24;
  boolean_T c2_b25;
  boolean_T c2_b3;
  boolean_T c2_b4;
  boolean_T c2_b5;
  boolean_T c2_b6;
  boolean_T c2_b7;
  boolean_T c2_b8;
  boolean_T c2_b9;
  boolean_T c2_b_empty_non_axis_sizes;
  boolean_T c2_c_empty_non_axis_sizes;
  boolean_T c2_c_result;
  boolean_T c2_d_empty_non_axis_sizes;
  boolean_T c2_d_result;
  boolean_T c2_e_empty_non_axis_sizes;
  boolean_T c2_e_result;
  boolean_T c2_empty_non_axis_sizes;
  boolean_T c2_f_empty_non_axis_sizes;
  boolean_T c2_f_result;
  boolean_T c2_g_result;
  boolean_T c2_i_result;
  boolean_T c2_k_result;
  boolean_T c2_l_result;
  boolean_T c2_m_result;
  boolean_T c2_o_result;
  boolean_T c2_p_result;
  boolean_T c2_r_result;
  boolean_T c2_result;
  boolean_T c2_t_result;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  if (c2_numBytesToRead == 0.0) {
    c2_data->size[0] = 0;
    c2_data->size[1] = 0;
  } else {
    c2_st.site = &c2_qg_emlrtRSI;
    c2_b_obj = c2_obj;
    c2_countRequested = c2_numBytesToRead;
    c2_ppc = c2_b_obj->PartialPacketCount;
    if (c2_ppc > 0.0) {
      c2_pps = c2_b_obj->PartialPacketStart;
      if (c2_countRequested < c2_ppc) {
        c2_b_st.site = &c2_xg_emlrtRSI;
        c2_BufferChannel_extractFromPacket(chartInstance, &c2_b_st, c2_b_obj,
          c2_pps, (c2_pps + c2_countRequested) - 1.0, c2_data);
        c2_countRead = c2_countRequested;
        c2_b_obj->PartialPacketStart = c2_pps + c2_countRequested;
        c2_b_obj->PartialPacketCount = c2_ppc - c2_countRequested;
      } else {
        c2_b_st.site = &c2_yg_emlrtRSI;
        c2_BufferChannel_extractFromPacket(chartInstance, &c2_b_st, c2_b_obj,
          c2_pps, (c2_pps + c2_ppc) - 1.0, c2_data);
        c2_countRead = c2_ppc;
        c2_b_st.site = &c2_ah_emlrtRSI;
        c2_c_obj = c2_b_obj;
        c2_c_st.site = &c2_cc_emlrtRSI;
        c2_e_obj = c2_c_obj;
        c2_e_obj->PartialPacket->size[0] = 1;
        c2_e_obj->PartialPacket->size[1] = 0;
        c2_e_obj->PartialPacket->size[0] = 0;
        c2_e_obj->PartialPacket->size[1] = 0;
        c2_c_obj->PartialPacketStart = 0.0;
        c2_c_obj->PartialPacketCount = 0.0;
      }
    } else {
      c2_data->size[0] = 0;
      c2_data->size[1] = 0;
      c2_countRead = 0.0;
    }

    c2_remainingCount = c2_numBytesToRead - c2_countRead;
    if (c2_remainingCount > 0.0) {
      c2_st.site = &c2_rg_emlrtRSI;
      c2_d_obj = &c2_obj->InputStream;
      c2_b_st.site = &c2_lg_emlrtRSI;
      c2_f_obj = c2_d_obj;
      c2_c_st.site = &c2_rf_emlrtRSI;
      c2_streamImpl = c2_f_obj->StreamImpl;
      c2_success = coderStreamGetDataAvailable(c2_streamImpl, &c2_count);
      c2_d_st.site = &c2_sf_emlrtRSI;
      c2_b_streamImpl = c2_streamImpl;
      c2_b_success = c2_success;
      if ((real_T)c2_b_success == 0.0) {
        c2_chImpl = coderStreamGetChannel(c2_b_streamImpl);
        c2_e_st.site = &c2_oe_emlrtRSI;
        c2_b_API_channelErrorIfFailed(chartInstance, &c2_e_st, c2_chImpl);
      }

      c2_b_count = c2_d_obj->PartialPacketCount + c2_count;
      if (c2_remainingCount > c2_b_count) {
        c2_y = NULL;
        sf_mex_assign(&c2_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1,
          57), false);
        c2_b_y = NULL;
        sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1,
          57), false);
        sf_mex_call(c2_sp, &c2_kb_emlrtMCI, "error", 0U, 2U, 14, c2_y, 14,
                    sf_mex_call(c2_sp, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(c2_sp, NULL, "message", 1U, 1U, 14, c2_b_y)));
      }

      c2_st.site = &c2_sg_emlrtRSI;
      c2_g_obj = &c2_obj->InputStream;
      c2_b_st.site = &c2_lg_emlrtRSI;
      c2_h_obj = c2_g_obj;
      c2_c_st.site = &c2_rf_emlrtRSI;
      c2_c_streamImpl = c2_h_obj->StreamImpl;
      c2_c_success = coderStreamGetDataAvailable(c2_c_streamImpl, &c2_c_count);
      c2_d_st.site = &c2_sf_emlrtRSI;
      c2_d_streamImpl = c2_c_streamImpl;
      c2_d_success = c2_c_success;
      if ((real_T)c2_d_success == 0.0) {
        c2_b_chImpl = coderStreamGetChannel(c2_d_streamImpl);
        c2_e_st.site = &c2_oe_emlrtRSI;
        c2_b_API_channelErrorIfFailed(chartInstance, &c2_e_st, c2_b_chImpl);
      }

      c2_d_count = c2_g_obj->PartialPacketCount + c2_c_count;
      c2_emxInit_uint8_T(chartInstance, c2_sp, &c2_rawData, 2, &c2_gc_emlrtRTEI);
      c2_st.site = &c2_sg_emlrtRSI;
      c2_InputStream_read(chartInstance, &c2_st, &c2_obj->InputStream,
                          c2_d_count, c2_rawData);
      c2_emxInitMatrix_cell_wrap_37(chartInstance, c2_sp, c2_reshapes,
        &c2_hc_emlrtRTEI);
      c2_emxInit_uint8_T(chartInstance, c2_sp, &c2_varargin_2, 2,
                         &c2_dc_emlrtRTEI);
      if (c2_remainingCount < (real_T)c2_rawData->size[1]) {
        c2_st.site = &c2_tg_emlrtRSI;
        c2_i_obj = c2_obj;
        c2_b_st.site = &c2_ji_emlrtRSI;
        c2_j_obj = c2_i_obj;
        c2_j_obj->PartialPacket->size[0] = 1;
        c2_j_obj->PartialPacket->size[1] = 0;
        c2_i = c2_j_obj->PartialPacket->size[0] * c2_j_obj->PartialPacket->size
          [1];
        c2_j_obj->PartialPacket->size[0] = c2_rawData->size[0];
        c2_j_obj->PartialPacket->size[1] = c2_rawData->size[1];
        c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_b_st,
          c2_j_obj->PartialPacket, c2_i, &c2_bc_emlrtRTEI);
        c2_loop_ub = c2_rawData->size[0] * c2_rawData->size[1] - 1;
        for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
          c2_j_obj->PartialPacket->data[c2_i1] = c2_rawData->data[c2_i1];
        }

        c2_i_obj->PartialPacketStart = 1.0;
        c2_i_obj->PartialPacketCount = (real_T)c2_rawData->size[1];
        c2_st.site = &c2_ug_emlrtRSI;
        c2_k_obj = c2_obj;
        c2_b_countRequested = c2_remainingCount;
        c2_b_ppc = c2_k_obj->PartialPacketCount;
        if (c2_b_ppc > 0.0) {
          c2_b_pps = c2_k_obj->PartialPacketStart;
          if (c2_b_countRequested < c2_b_ppc) {
            c2_b_st.site = &c2_xg_emlrtRSI;
            c2_BufferChannel_extractFromPacket(chartInstance, &c2_b_st, c2_k_obj,
              c2_b_pps, (c2_b_pps + c2_b_countRequested) - 1.0, c2_rawData);
            c2_k_obj->PartialPacketStart = c2_b_pps + c2_b_countRequested;
            c2_k_obj->PartialPacketCount = c2_b_ppc - c2_b_countRequested;
          } else {
            c2_b_st.site = &c2_yg_emlrtRSI;
            c2_BufferChannel_extractFromPacket(chartInstance, &c2_b_st, c2_k_obj,
              c2_b_pps, (c2_b_pps + c2_b_ppc) - 1.0, c2_rawData);
            c2_b_st.site = &c2_ah_emlrtRSI;
            c2_l_obj = c2_k_obj;
            c2_c_st.site = &c2_cc_emlrtRSI;
            c2_m_obj = c2_l_obj;
            c2_m_obj->PartialPacket->size[0] = 1;
            c2_m_obj->PartialPacket->size[1] = 0;
            c2_m_obj->PartialPacket->size[0] = 0;
            c2_m_obj->PartialPacket->size[1] = 0;
            c2_l_obj->PartialPacketStart = 0.0;
            c2_l_obj->PartialPacketCount = 0.0;
          }
        } else {
          c2_rawData->size[0] = 0;
          c2_rawData->size[1] = 0;
        }

        c2_st.site = &c2_vg_emlrtRSI;
        c2_b_st.site = &c2_ki_emlrtRSI;
        c2_b9 = (c2_data->size[0] == 0);
        c2_b10 = (c2_data->size[1] == 0);
        c2_g_result = (c2_b9 || c2_b10);
        if (!c2_g_result) {
          c2_h_result = c2_data->size[0];
        } else {
          c2_b11 = (c2_rawData->size[0] == 0);
          c2_b12 = (c2_rawData->size[1] == 0);
          c2_i_result = (c2_b11 || c2_b12);
          if (!c2_i_result) {
            c2_h_result = c2_rawData->size[0];
          } else {
            if (c2_data->size[0] > 0) {
              c2_h_result = c2_data->size[0];
            } else {
              c2_h_result = 0;
            }

            if (c2_rawData->size[0] > c2_h_result) {
              c2_h_result = c2_rawData->size[0];
            }
          }
        }

        c2_sizes[0] = c2_h_result;
        c2_sizes[1] = 0;
        c2_c_st.site = &c2_li_emlrtRSI;
        c2_b_expected = c2_sizes[0];
        if (c2_data->size[0] == c2_b_expected) {
          c2_b16 = true;
        } else {
          c2_b15 = (c2_data->size[0] == 0);
          c2_b17 = (c2_data->size[1] == 0);
          c2_l_result = (c2_b15 || c2_b17);
          if (c2_l_result) {
            c2_b16 = true;
          } else {
            c2_b16 = false;
          }
        }

        if (!c2_b16) {
          c2_g_y = NULL;
          sf_mex_assign(&c2_g_y, sf_mex_create("y", c2_b_cv2, 10, 0U, 1U, 0U, 2,
            1, 39), false);
          c2_h_y = NULL;
          sf_mex_assign(&c2_h_y, sf_mex_create("y", c2_b_cv2, 10, 0U, 1U, 0U, 2,
            1, 39), false);
          sf_mex_call(&c2_c_st, &c2_sb_emlrtMCI, "error", 0U, 2U, 14, c2_g_y, 14,
                      sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c2_c_st, NULL, "message", 1U, 1U, 14, c2_h_y)));
        }

        if (c2_rawData->size[0] == c2_b_expected) {
          c2_b16 = true;
        } else {
          c2_b18 = (c2_rawData->size[0] == 0);
          c2_b19 = (c2_rawData->size[1] == 0);
          c2_m_result = (c2_b18 || c2_b19);
          if (c2_m_result) {
            c2_b16 = true;
          } else {
            c2_b16 = false;
          }
        }

        if (!c2_b16) {
          c2_i_y = NULL;
          sf_mex_assign(&c2_i_y, sf_mex_create("y", c2_b_cv2, 10, 0U, 1U, 0U, 2,
            1, 39), false);
          c2_j_y = NULL;
          sf_mex_assign(&c2_j_y, sf_mex_create("y", c2_b_cv2, 10, 0U, 1U, 0U, 2,
            1, 39), false);
          sf_mex_call(&c2_c_st, &c2_sb_emlrtMCI, "error", 0U, 2U, 14, c2_i_y, 14,
                      sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c2_c_st, NULL, "message", 1U, 1U, 14, c2_j_y)));
        }

        c2_b_varargin_1 = c2_sizes[0];
        c2_b_arg = c2_b_varargin_1;
        c2_p_result = (c2_b_arg == 0);
        if (c2_p_result) {
          c2_d_empty_non_axis_sizes = true;
        } else {
          c2_d_empty_non_axis_sizes = false;
        }

        for (c2_i6 = 0; c2_i6 < 2; c2_i6++) {
          c2_input_sizes[c2_i6] = c2_sizes[c2_i6];
        }

        c2_e_empty_non_axis_sizes = c2_d_empty_non_axis_sizes;
        if (c2_e_empty_non_axis_sizes) {
          c2_q_result = c2_data->size[1];
        } else {
          c2_b22 = (c2_data->size[0] == 0);
          c2_b23 = (c2_data->size[1] == 0);
          c2_r_result = (c2_b22 || c2_b23);
          if (!c2_r_result) {
            c2_q_result = c2_data->size[1];
          } else {
            c2_q_result = 0;
          }
        }

        c2_input_sizes[1] = c2_q_result;
        c2_i9 = c2_reshapes[0].f1->size[0] * c2_reshapes[0].f1->size[1];
        c2_reshapes[0].f1->size[0] = c2_input_sizes[0];
        c2_reshapes[0].f1->size[1] = c2_input_sizes[1];
        c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_b_st, c2_reshapes[0].f1,
          c2_i9, &c2_cc_emlrtRTEI);
        c2_e_loop_ub = c2_input_sizes[0] * c2_input_sizes[1] - 1;
        for (c2_i12 = 0; c2_i12 <= c2_e_loop_ub; c2_i12++) {
          c2_reshapes[0].f1->data[c2_i12] = c2_data->data[c2_i12];
        }

        c2_f_empty_non_axis_sizes = c2_d_empty_non_axis_sizes;
        if (c2_f_empty_non_axis_sizes) {
          c2_s_result = c2_rawData->size[1];
        } else {
          c2_b24 = (c2_rawData->size[0] == 0);
          c2_b25 = (c2_rawData->size[1] == 0);
          c2_t_result = (c2_b24 || c2_b25);
          if (!c2_t_result) {
            c2_s_result = c2_rawData->size[1];
          } else {
            c2_s_result = 0;
          }
        }

        c2_sizes[1] = c2_s_result;
        c2_i15 = c2_reshapes[1].f1->size[0] * c2_reshapes[1].f1->size[1];
        c2_reshapes[1].f1->size[0] = c2_sizes[0];
        c2_reshapes[1].f1->size[1] = c2_sizes[1];
        c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_b_st, c2_reshapes[1].f1,
          c2_i15, &c2_cc_emlrtRTEI);
        c2_h_loop_ub = c2_sizes[0] * c2_sizes[1] - 1;
        for (c2_i17 = 0; c2_i17 <= c2_h_loop_ub; c2_i17++) {
          c2_reshapes[1].f1->data[c2_i17] = c2_rawData->data[c2_i17];
        }

        c2_i20 = c2_rawData->size[0] * c2_rawData->size[1];
        c2_rawData->size[0] = c2_reshapes[0].f1->size[0];
        c2_rawData->size[1] = c2_reshapes[0].f1->size[1];
        c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_b_st, c2_rawData, c2_i20,
          &c2_dc_emlrtRTEI);
        c2_l_loop_ub = c2_reshapes[0].f1->size[0] * c2_reshapes[0].f1->size[1] -
          1;
        for (c2_i22 = 0; c2_i22 <= c2_l_loop_ub; c2_i22++) {
          c2_rawData->data[c2_i22] = c2_reshapes[0].f1->data[c2_i22];
        }

        c2_i23 = c2_varargin_2->size[0] * c2_varargin_2->size[1];
        c2_varargin_2->size[0] = c2_reshapes[1].f1->size[0];
        c2_varargin_2->size[1] = c2_reshapes[1].f1->size[1];
        c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_b_st, c2_varargin_2,
          c2_i23, &c2_dc_emlrtRTEI);
        c2_m_loop_ub = c2_reshapes[1].f1->size[0] * c2_reshapes[1].f1->size[1] -
          1;
        for (c2_i24 = 0; c2_i24 <= c2_m_loop_ub; c2_i24++) {
          c2_varargin_2->data[c2_i24] = c2_reshapes[1].f1->data[c2_i24];
        }

        c2_i25 = c2_data->size[0] * c2_data->size[1];
        c2_data->size[0] = c2_rawData->size[0];
        c2_data->size[1] = c2_rawData->size[1] + c2_varargin_2->size[1];
        c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_b_st, c2_data, c2_i25,
          &c2_fc_emlrtRTEI);
        c2_n_loop_ub = c2_rawData->size[1] - 1;
        for (c2_i26 = 0; c2_i26 <= c2_n_loop_ub; c2_i26++) {
          c2_p_loop_ub = c2_rawData->size[0] - 1;
          for (c2_i28 = 0; c2_i28 <= c2_p_loop_ub; c2_i28++) {
            c2_data->data[c2_i28 + c2_data->size[0] * c2_i26] = c2_rawData->
              data[c2_i28 + c2_rawData->size[0] * c2_i26];
          }
        }

        c2_o_loop_ub = c2_varargin_2->size[1] - 1;
        for (c2_i27 = 0; c2_i27 <= c2_o_loop_ub; c2_i27++) {
          c2_q_loop_ub = c2_varargin_2->size[0] - 1;
          for (c2_i29 = 0; c2_i29 <= c2_q_loop_ub; c2_i29++) {
            c2_data->data[c2_i29 + c2_data->size[0] * (c2_i27 + c2_rawData->
              size[1])] = c2_varargin_2->data[c2_i29 + c2_varargin_2->size[0] *
              c2_i27];
          }
        }
      } else {
        c2_st.site = &c2_wg_emlrtRSI;
        c2_b_st.site = &c2_ki_emlrtRSI;
        c2_b = (c2_data->size[0] == 0);
        c2_b1 = (c2_data->size[1] == 0);
        c2_result = (c2_b || c2_b1);
        if (!c2_result) {
          c2_b_result = c2_data->size[0];
        } else {
          c2_b2 = (c2_rawData->size[0] == 0);
          c2_b3 = (c2_rawData->size[1] == 0);
          c2_c_result = (c2_b2 || c2_b3);
          if (!c2_c_result) {
            c2_b_result = c2_rawData->size[0];
          } else {
            if (c2_data->size[0] > 0) {
              c2_b_result = c2_data->size[0];
            } else {
              c2_b_result = 0;
            }

            if (c2_rawData->size[0] > c2_b_result) {
              c2_b_result = c2_rawData->size[0];
            }
          }
        }

        c2_sizes[0] = c2_b_result;
        c2_sizes[1] = 0;
        c2_c_st.site = &c2_li_emlrtRSI;
        c2_expected = c2_sizes[0];
        if (c2_data->size[0] == c2_expected) {
          c2_b5 = true;
        } else {
          c2_b4 = (c2_data->size[0] == 0);
          c2_b6 = (c2_data->size[1] == 0);
          c2_d_result = (c2_b4 || c2_b6);
          if (c2_d_result) {
            c2_b5 = true;
          } else {
            c2_b5 = false;
          }
        }

        if (!c2_b5) {
          c2_c_y = NULL;
          sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2,
            1, 39), false);
          c2_d_y = NULL;
          sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2,
            1, 39), false);
          sf_mex_call(&c2_c_st, &c2_sb_emlrtMCI, "error", 0U, 2U, 14, c2_c_y, 14,
                      sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c2_c_st, NULL, "message", 1U, 1U, 14, c2_d_y)));
        }

        if (c2_rawData->size[0] == c2_expected) {
          c2_b5 = true;
        } else {
          c2_b7 = (c2_rawData->size[0] == 0);
          c2_b8 = (c2_rawData->size[1] == 0);
          c2_e_result = (c2_b7 || c2_b8);
          if (c2_e_result) {
            c2_b5 = true;
          } else {
            c2_b5 = false;
          }
        }

        if (!c2_b5) {
          c2_e_y = NULL;
          sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2,
            1, 39), false);
          c2_f_y = NULL;
          sf_mex_assign(&c2_f_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2,
            1, 39), false);
          sf_mex_call(&c2_c_st, &c2_sb_emlrtMCI, "error", 0U, 2U, 14, c2_e_y, 14,
                      sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c2_c_st, NULL, "message", 1U, 1U, 14, c2_f_y)));
        }

        c2_varargin_1 = c2_sizes[0];
        c2_arg = c2_varargin_1;
        c2_f_result = (c2_arg == 0);
        if (c2_f_result) {
          c2_empty_non_axis_sizes = true;
        } else {
          c2_empty_non_axis_sizes = false;
        }

        for (c2_i2 = 0; c2_i2 < 2; c2_i2++) {
          c2_input_sizes[c2_i2] = c2_sizes[c2_i2];
        }

        c2_b_empty_non_axis_sizes = c2_empty_non_axis_sizes;
        if (c2_b_empty_non_axis_sizes) {
          c2_j_result = c2_data->size[1];
        } else {
          c2_b13 = (c2_data->size[0] == 0);
          c2_b14 = (c2_data->size[1] == 0);
          c2_k_result = (c2_b13 || c2_b14);
          if (!c2_k_result) {
            c2_j_result = c2_data->size[1];
          } else {
            c2_j_result = 0;
          }
        }

        c2_input_sizes[1] = c2_j_result;
        c2_i3 = c2_reshapes[0].f1->size[0] * c2_reshapes[0].f1->size[1];
        c2_reshapes[0].f1->size[0] = c2_input_sizes[0];
        c2_reshapes[0].f1->size[1] = c2_input_sizes[1];
        c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_b_st, c2_reshapes[0].f1,
          c2_i3, &c2_cc_emlrtRTEI);
        c2_b_loop_ub = c2_input_sizes[0] * c2_input_sizes[1] - 1;
        for (c2_i4 = 0; c2_i4 <= c2_b_loop_ub; c2_i4++) {
          c2_reshapes[0].f1->data[c2_i4] = c2_data->data[c2_i4];
        }

        c2_c_empty_non_axis_sizes = c2_empty_non_axis_sizes;
        if (c2_c_empty_non_axis_sizes) {
          c2_n_result = c2_rawData->size[1];
        } else {
          c2_b20 = (c2_rawData->size[0] == 0);
          c2_b21 = (c2_rawData->size[1] == 0);
          c2_o_result = (c2_b20 || c2_b21);
          if (!c2_o_result) {
            c2_n_result = c2_rawData->size[1];
          } else {
            c2_n_result = 0;
          }
        }

        c2_sizes[1] = c2_n_result;
        c2_i5 = c2_reshapes[1].f1->size[0] * c2_reshapes[1].f1->size[1];
        c2_reshapes[1].f1->size[0] = c2_sizes[0];
        c2_reshapes[1].f1->size[1] = c2_sizes[1];
        c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_b_st, c2_reshapes[1].f1,
          c2_i5, &c2_cc_emlrtRTEI);
        c2_c_loop_ub = c2_sizes[0] * c2_sizes[1] - 1;
        for (c2_i7 = 0; c2_i7 <= c2_c_loop_ub; c2_i7++) {
          c2_reshapes[1].f1->data[c2_i7] = c2_rawData->data[c2_i7];
        }

        c2_i8 = c2_rawData->size[0] * c2_rawData->size[1];
        c2_rawData->size[0] = c2_reshapes[0].f1->size[0];
        c2_rawData->size[1] = c2_reshapes[0].f1->size[1];
        c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_b_st, c2_rawData, c2_i8,
          &c2_dc_emlrtRTEI);
        c2_d_loop_ub = c2_reshapes[0].f1->size[0] * c2_reshapes[0].f1->size[1] -
          1;
        for (c2_i10 = 0; c2_i10 <= c2_d_loop_ub; c2_i10++) {
          c2_rawData->data[c2_i10] = c2_reshapes[0].f1->data[c2_i10];
        }

        c2_i11 = c2_varargin_2->size[0] * c2_varargin_2->size[1];
        c2_varargin_2->size[0] = c2_reshapes[1].f1->size[0];
        c2_varargin_2->size[1] = c2_reshapes[1].f1->size[1];
        c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_b_st, c2_varargin_2,
          c2_i11, &c2_dc_emlrtRTEI);
        c2_f_loop_ub = c2_reshapes[1].f1->size[0] * c2_reshapes[1].f1->size[1] -
          1;
        for (c2_i13 = 0; c2_i13 <= c2_f_loop_ub; c2_i13++) {
          c2_varargin_2->data[c2_i13] = c2_reshapes[1].f1->data[c2_i13];
        }

        c2_i14 = c2_data->size[0] * c2_data->size[1];
        c2_data->size[0] = c2_rawData->size[0];
        c2_data->size[1] = c2_rawData->size[1] + c2_varargin_2->size[1];
        c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_b_st, c2_data, c2_i14,
          &c2_ec_emlrtRTEI);
        c2_g_loop_ub = c2_rawData->size[1] - 1;
        for (c2_i16 = 0; c2_i16 <= c2_g_loop_ub; c2_i16++) {
          c2_j_loop_ub = c2_rawData->size[0] - 1;
          for (c2_i19 = 0; c2_i19 <= c2_j_loop_ub; c2_i19++) {
            c2_data->data[c2_i19 + c2_data->size[0] * c2_i16] = c2_rawData->
              data[c2_i19 + c2_rawData->size[0] * c2_i16];
          }
        }

        c2_i_loop_ub = c2_varargin_2->size[1] - 1;
        for (c2_i18 = 0; c2_i18 <= c2_i_loop_ub; c2_i18++) {
          c2_k_loop_ub = c2_varargin_2->size[0] - 1;
          for (c2_i21 = 0; c2_i21 <= c2_k_loop_ub; c2_i21++) {
            c2_data->data[c2_i21 + c2_data->size[0] * (c2_i18 + c2_rawData->
              size[1])] = c2_varargin_2->data[c2_i21 + c2_varargin_2->size[0] *
              c2_i18];
          }
        }
      }

      c2_emxFree_uint8_T(chartInstance, &c2_varargin_2);
      c2_emxFreeMatrix_cell_wrap_37(chartInstance, c2_reshapes);
      c2_emxFree_uint8_T(chartInstance, &c2_rawData);
    }
  }
}

static void c2_BufferChannel_extractFromPacket(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_matlabshared_asyncio_buffer_internal_BufferChannel *c2_obj, real_T
  c2_startIndex, real_T c2_endIndex, c2_emxArray_uint8_T *c2_result)
{
  emlrtStack c2_st;
  int32_T c2_b_obj[2];
  int32_T c2_iv[2];
  int32_T c2_b_loop_ub;
  int32_T c2_c_loop_ub;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_loop_ub;
  boolean_T c2_b;
  boolean_T c2_b1;
  boolean_T c2_b2;
  boolean_T c2_b3;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b = (c2_obj->PartialPacket->size[0] == 1);
  c2_b1 = (c2_obj->PartialPacket->size[1] == 1);
  if (c2_b || c2_b1) {
    c2_b3 = (c2_startIndex > c2_endIndex);
    if (c2_b3) {
      c2_i2 = 0;
      c2_i4 = 0;
    } else {
      c2_i1 = c2_obj->PartialPacket->size[0] * c2_obj->PartialPacket->size[1];
      if (c2_startIndex != (real_T)(int32_T)muDoubleScalarFloor(c2_startIndex))
      {
        emlrtIntegerCheckR2012b(c2_startIndex, &c2_g_emlrtDCI, (emlrtConstCTX)
          c2_sp);
      }

      c2_i8 = (int32_T)c2_startIndex;
      if ((c2_i8 < 1) || (c2_i8 > c2_i1)) {
        emlrtDynamicBoundsCheckR2012b(c2_i8, 1, c2_i1, &c2_n_emlrtBCI,
          (emlrtConstCTX)c2_sp);
      }

      c2_i2 = c2_i8 - 1;
      if (c2_endIndex != (real_T)(int32_T)muDoubleScalarFloor(c2_endIndex)) {
        emlrtIntegerCheckR2012b(c2_endIndex, &c2_h_emlrtDCI, (emlrtConstCTX)
          c2_sp);
      }

      c2_i12 = (int32_T)c2_endIndex;
      if ((c2_i12 < 1) || (c2_i12 > c2_i1)) {
        emlrtDynamicBoundsCheckR2012b(c2_i12, 1, c2_i1, &c2_o_emlrtBCI,
          (emlrtConstCTX)c2_sp);
      }

      c2_i4 = c2_i12;
    }

    c2_iv[0] = 1;
    c2_iv[1] = c2_i4 - c2_i2;
    c2_st.site = &c2_bh_emlrtRSI;
    for (c2_i9 = 0; c2_i9 < 2; c2_i9++) {
      c2_b_obj[c2_i9] = (*(int32_T (*)[2])c2_obj->PartialPacket->size)[c2_i9];
    }

    c2_indexShapeCheck(chartInstance, &c2_st, c2_b_obj, c2_iv);
    c2_i13 = c2_result->size[0] * c2_result->size[1];
    c2_result->size[0] = 1;
    c2_result->size[1] = c2_i4 - c2_i2;
    c2_st.site = &c2_bh_emlrtRSI;
    c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_st, c2_result, c2_i13,
      &c2_jc_emlrtRTEI);
    c2_c_loop_ub = (c2_i4 - c2_i2) - 1;
    for (c2_i16 = 0; c2_i16 <= c2_c_loop_ub; c2_i16++) {
      c2_result->data[c2_result->size[0] * c2_i16] = c2_obj->PartialPacket->
        data[c2_i2 + c2_i16];
    }
  } else {
    c2_b2 = (c2_startIndex > c2_endIndex);
    if (c2_b2) {
      c2_i = 0;
      c2_i3 = -1;
    } else {
      if (c2_startIndex != (real_T)(int32_T)muDoubleScalarFloor(c2_startIndex))
      {
        emlrtIntegerCheckR2012b(c2_startIndex, &c2_i_emlrtDCI, (emlrtConstCTX)
          c2_sp);
      }

      c2_i5 = c2_obj->PartialPacket->size[1];
      c2_i6 = (int32_T)c2_startIndex;
      if ((c2_i6 < 1) || (c2_i6 > c2_i5)) {
        emlrtDynamicBoundsCheckR2012b(c2_i6, 1, c2_i5, &c2_p_emlrtBCI,
          (emlrtConstCTX)c2_sp);
      }

      c2_i = c2_i6 - 1;
      if (c2_endIndex != (real_T)(int32_T)muDoubleScalarFloor(c2_endIndex)) {
        emlrtIntegerCheckR2012b(c2_endIndex, &c2_j_emlrtDCI, (emlrtConstCTX)
          c2_sp);
      }

      c2_i10 = c2_obj->PartialPacket->size[1];
      c2_i14 = (int32_T)c2_endIndex;
      if ((c2_i14 < 1) || (c2_i14 > c2_i10)) {
        emlrtDynamicBoundsCheckR2012b(c2_i14, 1, c2_i10, &c2_q_emlrtBCI,
          (emlrtConstCTX)c2_sp);
      }

      c2_i3 = c2_i14 - 1;
    }

    c2_i7 = c2_result->size[0] * c2_result->size[1];
    c2_result->size[0] = c2_obj->PartialPacket->size[0];
    c2_result->size[1] = (c2_i3 - c2_i) + 1;
    c2_st.site = &c2_ml_emlrtRSI;
    c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_st, c2_result, c2_i7,
      &c2_ic_emlrtRTEI);
    c2_loop_ub = c2_i3 - c2_i;
    for (c2_i11 = 0; c2_i11 <= c2_loop_ub; c2_i11++) {
      c2_b_loop_ub = c2_obj->PartialPacket->size[0] - 1;
      for (c2_i15 = 0; c2_i15 <= c2_b_loop_ub; c2_i15++) {
        c2_result->data[c2_i15 + c2_result->size[0] * c2_i11] =
          c2_obj->PartialPacket->data[c2_i15 + c2_obj->PartialPacket->size[0] *
          (c2_i + c2_i11)];
      }
    }
  }
}

static void c2_indexShapeCheck(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, int32_T c2_matrixSize[2], int32_T c2_indexSize[2])
{
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_y = NULL;
  boolean_T c2_b;
  boolean_T c2_b_b;
  boolean_T c2_b_c;
  boolean_T c2_b_nonSingletonDimFound;
  boolean_T c2_c;
  boolean_T c2_c_c;
  boolean_T c2_d_c;
  boolean_T c2_nonSingletonDimFound;
  (void)chartInstance;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_nonSingletonDimFound = false;
  if (c2_matrixSize[0] != 1) {
    c2_nonSingletonDimFound = true;
  }

  if (c2_matrixSize[1] != 1) {
    if (c2_nonSingletonDimFound) {
      c2_b = false;
    } else {
      c2_nonSingletonDimFound = true;
      c2_b = c2_nonSingletonDimFound;
    }
  } else {
    c2_b = c2_nonSingletonDimFound;
  }

  if (c2_b) {
    c2_b_nonSingletonDimFound = false;
    if (c2_indexSize[0] != 1) {
      c2_b_nonSingletonDimFound = true;
    }

    if (c2_indexSize[1] != 1) {
      if (c2_b_nonSingletonDimFound) {
        c2_b_b = false;
      } else {
        c2_b_nonSingletonDimFound = true;
        c2_b_b = c2_b_nonSingletonDimFound;
      }
    } else {
      c2_b_b = c2_b_nonSingletonDimFound;
    }

    if (c2_b_b) {
      if (c2_matrixSize[0] != 1) {
        c2_c_c = true;
      } else {
        c2_c_c = false;
      }

      if (c2_c_c || ((c2_matrixSize[1] == 1) != (c2_indexSize[1] == 1))) {
        c2_c_c = true;
      } else {
        c2_c_c = false;
      }

      c2_d_c = c2_c_c;
      if (c2_d_c) {
        c2_c = true;
      } else {
        c2_c = false;
      }
    } else {
      c2_c = false;
    }
  } else {
    c2_c = false;
  }

  c2_st.site = &c2_ch_emlrtRSI;
  c2_b_c = c2_c;
  if (c2_b_c) {
    c2_y = NULL;
    sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv14, 10, 0U, 1U, 0U, 2, 1, 33),
                  false);
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv14, 10, 0U, 1U, 0U, 2, 1, 33),
                  false);
    sf_mex_call(&c2_st, &c2_lb_emlrtMCI, "error", 0U, 2U, 14, c2_y, 14,
                sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_st, NULL, "message", 1U, 1U, 14, c2_b_y)));
  }
}

static void c2_InputStream_read(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_matlabshared_asyncio_internal_InputStream *c2_obj,
  real_T c2_countRequested, c2_emxArray_uint8_T *c2_data)
{
  static int32_T c2_iv[2] = { 1, 2 };

  CoderChannel c2_chImpl;
  CoderInputStream c2_b_streamImpl;
  CoderInputStream c2_streamImpl;
  c2_emxArray_cell_wrap_31 *c2_packets;
  c2_emxArray_uint8_T *c2_b_data;
  c2_emxArray_uint8_T *c2_c_data;
  c2_emxArray_uint8_T *c2_excessData;
  c2_matlabshared_asyncio_internal_InputStream *c2_b_obj;
  c2_matlabshared_asyncio_internal_InputStream *c2_c_obj;
  c2_matlabshared_asyncio_internal_InputStream *c2_d_obj;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_y = NULL;
  real_T c2_b_count;
  real_T c2_b_countRead;
  real_T c2_b_ii;
  real_T c2_count;
  real_T c2_countRead;
  real_T c2_countToRead;
  real_T c2_d;
  int32_T c2_err_size[2];
  int32_T c2_status_size[2];
  int32_T c2_b_loop_ub;
  int32_T c2_b_success;
  int32_T c2_c_loop_ub;
  int32_T c2_d_loop_ub;
  int32_T c2_e_loop_ub;
  int32_T c2_exitg1;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_ii;
  int32_T c2_loop_ub;
  int32_T c2_success;
  char_T c2_status_data[9];
  boolean_T c2_x[2];
  boolean_T c2_b;
  boolean_T c2_b1;
  boolean_T c2_b2;
  boolean_T c2_b3;
  boolean_T c2_b_guard1;
  boolean_T c2_c_y;
  boolean_T c2_guard1;
  boolean_T c2_invalidCountRequested;
  boolean_T c2_sizeChangeWhenPartialBufferNonEmpty;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  if (c2_countRequested >= 0.0) {
    c2_b = true;
  } else {
    c2_b = false;
  }

  c2_invalidCountRequested = !c2_b;
  if (c2_invalidCountRequested) {
    c2_y = NULL;
    sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv16, 10, 0U, 1U, 0U, 2, 1, 41),
                  false);
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv16, 10, 0U, 1U, 0U, 2, 1, 41),
                  false);
    sf_mex_call(c2_sp, &c2_mb_emlrtMCI, "error", 0U, 2U, 14, c2_y, 14,
                sf_mex_call(c2_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c2_sp, NULL, "message", 1U, 1U, 14, c2_b_y)));
  }

  for (c2_i = 0; c2_i < 2; c2_i++) {
    c2_x[c2_i] = ((real_T)c2_obj->ExampleData->size[c2_i] != 1.0);
  }

  c2_c_y = c2_vectorAny(chartInstance, c2_x, c2_iv);
  if (c2_c_y) {
    c2_b1 = (c2_obj->PartialPacket->size[0] == 0);
    c2_b2 = (c2_obj->PartialPacket->size[1] == 0);
    if ((!c2_b1) && (!c2_b2)) {
      c2_sizeChangeWhenPartialBufferNonEmpty = true;
    } else {
      c2_sizeChangeWhenPartialBufferNonEmpty = false;
    }
  } else {
    c2_sizeChangeWhenPartialBufferNonEmpty = false;
  }

  if (c2_sizeChangeWhenPartialBufferNonEmpty) {
    c2_d_y = NULL;
    sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_cv15, 10, 0U, 1U, 0U, 2, 1, 47),
                  false);
    c2_e_y = NULL;
    sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_cv15, 10, 0U, 1U, 0U, 2, 1, 47),
                  false);
    sf_mex_call(c2_sp, &c2_nb_emlrtMCI, "error", 0U, 2U, 14, c2_d_y, 14,
                sf_mex_call(c2_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c2_sp, NULL, "message", 1U, 1U, 14, c2_e_y)));
  }

  c2_i1 = c2_obj->ExampleData->size[0] * c2_obj->ExampleData->size[1];
  c2_obj->ExampleData->size[0] = 1;
  c2_obj->ExampleData->size[1] = 1;
  c2_st.site = &c2_gl_emlrtRSI;
  c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_st, c2_obj->ExampleData, c2_i1,
    &c2_kc_emlrtRTEI);
  c2_obj->ExampleData->data[0] = 0U;
  c2_err_size[1] = 0;
  c2_st.site = &c2_dh_emlrtRSI;
  c2_InputStream_readPartialPacket(chartInstance, &c2_st, c2_obj,
    c2_countRequested, c2_data, &c2_countRead);
  c2_b_countRead = c2_countRead;
  c2_emxInit_uint8_T(chartInstance, c2_sp, &c2_excessData, 2, &c2_qc_emlrtRTEI);
  c2_emxInit_cell_wrap_31(chartInstance, c2_sp, &c2_packets, 2, &c2_rc_emlrtRTEI);
  c2_emxInit_uint8_T(chartInstance, c2_sp, &c2_b_data, 2, &c2_nc_emlrtRTEI);
  c2_emxInit_uint8_T(chartInstance, c2_sp, &c2_c_data, 2, &c2_pc_emlrtRTEI);
  if (c2_countRead == c2_countRequested) {
    c2_st.site = &c2_eh_emlrtRSI;
    c2_i2 = c2_excessData->size[0] * c2_excessData->size[1];
    c2_excessData->size[0] = c2_data->size[0];
    c2_excessData->size[1] = c2_data->size[1];
    c2_b_st.site = &c2_dh_emlrtRSI;
    c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_b_st, c2_excessData, c2_i2,
      &c2_lc_emlrtRTEI);
    c2_loop_ub = c2_data->size[0] * c2_data->size[1] - 1;
    for (c2_i3 = 0; c2_i3 <= c2_loop_ub; c2_i3++) {
      c2_excessData->data[c2_i3] = c2_data->data[c2_i3];
    }

    c2_b_st.site = &c2_vh_emlrtRSI;
    c2_b_Stream_extractFromPacket(chartInstance, &c2_b_st, c2_excessData,
      (real_T)c2_excessData->size[1], c2_data);
  } else {
    c2_guard1 = false;
    do {
      c2_exitg1 = 0;
      if (c2_b_countRead < c2_countRequested) {
        c2_st.site = &c2_fh_emlrtRSI;
        c2_b_obj = c2_obj;
        c2_b_st.site = &c2_rf_emlrtRSI;
        c2_streamImpl = c2_b_obj->StreamImpl;
        c2_success = coderStreamGetDataAvailable(c2_streamImpl, &c2_count);
        c2_c_st.site = &c2_sf_emlrtRSI;
        c2_b_streamImpl = c2_streamImpl;
        c2_b_success = c2_success;
        if ((real_T)c2_b_success == 0.0) {
          c2_chImpl = coderStreamGetChannel(c2_b_streamImpl);
          c2_d_st.site = &c2_oe_emlrtRSI;
          c2_b_API_channelErrorIfFailed(chartInstance, &c2_d_st, c2_chImpl);
        }

        c2_b_guard1 = false;
        if (c2_count == 0.0) {
          c2_st.site = &c2_gh_emlrtRSI;
          c2_b_Stream_wait(chartInstance, &c2_st, c2_obj, c2_status_data,
                           c2_status_size);
          c2_st.site = &c2_hh_emlrtRSI;
          if (!c2_f_strcmp(chartInstance, &c2_st, c2_status_data, c2_status_size))
          {
            c2_err_size[1] = c2_status_size[1];
            c2_st.site = &c2_ih_emlrtRSI;
            if (c2_h_strcmp(chartInstance, &c2_st, c2_status_data,
                            c2_status_size)) {
              c2_data->size[0] = 1;
              c2_data->size[1] = 0;
            } else {
              c2_st.site = &c2_jh_emlrtRSI;
              if (c2_g_strcmp(chartInstance, &c2_st, c2_status_data,
                              c2_status_size)) {
                c2_err_size[1] = 0;
              }

              c2_guard1 = true;
            }

            c2_exitg1 = 1;
          } else {
            c2_b_guard1 = true;
          }
        } else {
          c2_b_guard1 = true;
        }

        if (c2_b_guard1) {
          c2_countToRead = c2_countRequested - c2_b_countRead;
          c2_st.site = &c2_kh_emlrtRSI;
          c2_InputStream_readPackets(chartInstance, &c2_st, c2_obj,
            c2_countToRead, c2_packets, &c2_b_count);
          c2_d = (real_T)c2_packets->size[1];
          c2_i9 = (int32_T)c2_d - 1;
          for (c2_ii = 0; c2_ii <= c2_i9; c2_ii++) {
            c2_b_ii = (real_T)c2_ii + 1.0;
            c2_i10 = c2_c_data->size[0] * c2_c_data->size[1];
            c2_c_data->size[0] = c2_data->size[0];
            c2_c_data->size[1] = c2_data->size[1];
            c2_st.site = &c2_lh_emlrtRSI;
            c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_st, c2_c_data,
              c2_i10, &c2_pc_emlrtRTEI);
            c2_e_loop_ub = c2_data->size[0] * c2_data->size[1] - 1;
            for (c2_i12 = 0; c2_i12 <= c2_e_loop_ub; c2_i12++) {
              c2_c_data->data[c2_i12] = c2_data->data[c2_i12];
            }

            c2_i13 = c2_packets->size[1] - 1;
            c2_i14 = (int32_T)c2_b_ii - 1;
            if ((c2_i14 < 0) || (c2_i14 > c2_i13)) {
              emlrtDynamicBoundsCheckR2012b(c2_i14, 0, c2_i13, &c2_r_emlrtBCI,
                (emlrtConstCTX)c2_sp);
            }

            c2_st.site = &c2_lh_emlrtRSI;
            c2_cat(chartInstance, &c2_st, c2_c_data, c2_packets->data[c2_i14].f1,
                   c2_data);
          }

          c2_b_countRead += c2_b_count;
          c2_guard1 = false;
        }
      } else {
        c2_guard1 = true;
        c2_exitg1 = 1;
      }
    } while (c2_exitg1 == 0);

    if (c2_guard1) {
      if (c2_b_countRead > c2_countRequested) {
        c2_st.site = &c2_mh_emlrtRSI;
        c2_Stream_extractFromPacket(chartInstance, &c2_st, c2_data,
          c2_countRequested + 1.0, c2_b_countRead, c2_excessData);
        c2_st.site = &c2_nh_emlrtRSI;
        c2_c_obj = c2_obj;
        c2_i4 = c2_c_obj->PartialPacket->size[0] * c2_c_obj->PartialPacket->
          size[1];
        c2_c_obj->PartialPacket->size[0] = c2_excessData->size[0];
        c2_c_obj->PartialPacket->size[1] = c2_excessData->size[1];
        c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_st,
          c2_c_obj->PartialPacket, c2_i4, &c2_mc_emlrtRTEI);
        c2_b_loop_ub = c2_excessData->size[0] * c2_excessData->size[1] - 1;
        for (c2_i6 = 0; c2_i6 <= c2_b_loop_ub; c2_i6++) {
          c2_c_obj->PartialPacket->data[c2_i6] = c2_excessData->data[c2_i6];
        }

        c2_c_obj->PartialPacketStart = 1.0;
        c2_c_obj->PartialPacketCount = (real_T)c2_excessData->size[1];
        c2_i8 = c2_b_data->size[0] * c2_b_data->size[1];
        c2_b_data->size[0] = c2_data->size[0];
        c2_b_data->size[1] = c2_data->size[1];
        c2_st.site = &c2_oh_emlrtRSI;
        c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_st, c2_b_data, c2_i8,
          &c2_nc_emlrtRTEI);
        c2_d_loop_ub = c2_data->size[0] * c2_data->size[1] - 1;
        for (c2_i11 = 0; c2_i11 <= c2_d_loop_ub; c2_i11++) {
          c2_b_data->data[c2_i11] = c2_data->data[c2_i11];
        }

        c2_st.site = &c2_oh_emlrtRSI;
        c2_b_Stream_extractFromPacket(chartInstance, &c2_st, c2_b_data,
          c2_countRequested, c2_data);
      }

      c2_b3 = (c2_err_size[1] == 0);
      if (!c2_b3) {
        c2_st.site = &c2_ph_emlrtRSI;
        c2_d_obj = c2_obj;
        c2_i5 = c2_d_obj->PartialPacket->size[0] * c2_d_obj->PartialPacket->
          size[1];
        c2_d_obj->PartialPacket->size[0] = c2_data->size[0];
        c2_d_obj->PartialPacket->size[1] = c2_data->size[1];
        c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_st,
          c2_d_obj->PartialPacket, c2_i5, &c2_mc_emlrtRTEI);
        c2_c_loop_ub = c2_data->size[0] * c2_data->size[1] - 1;
        for (c2_i7 = 0; c2_i7 <= c2_c_loop_ub; c2_i7++) {
          c2_d_obj->PartialPacket->data[c2_i7] = c2_data->data[c2_i7];
        }

        c2_d_obj->PartialPacketStart = 1.0;
        c2_d_obj->PartialPacketCount = (real_T)c2_data->size[1];
        c2_data->size[0] = 1;
        c2_data->size[1] = 0;
      }
    }
  }

  c2_emxFree_uint8_T(chartInstance, &c2_c_data);
  c2_emxFree_uint8_T(chartInstance, &c2_b_data);
  c2_emxFree_cell_wrap_31(chartInstance, &c2_packets);
  c2_emxFree_uint8_T(chartInstance, &c2_excessData);
}

static void c2_InputStream_readPartialPacket(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_matlabshared_asyncio_internal_InputStream *c2_obj, real_T c2_countRequested,
  c2_emxArray_uint8_T *c2_dataRead, real_T *c2_countRead)
{
  c2_emxArray_uint8_T *c2_b_obj;
  c2_emxArray_uint8_T *c2_c_obj;
  c2_emxArray_uint8_T *c2_tempDataRead;
  emlrtStack c2_b_st;
  emlrtStack c2_st;
  real_T c2_b_countRead;
  real_T c2_ppc;
  real_T c2_pps;
  int32_T c2_b_loop_ub;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_loop_ub;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_ppc = c2_obj->PartialPacketCount;
  if (c2_ppc > 0.0) {
    c2_pps = c2_obj->PartialPacketStart;
    c2_emxInit_uint8_T(chartInstance, c2_sp, &c2_tempDataRead, 2,
                       &c2_uc_emlrtRTEI);
    if (c2_countRequested < c2_ppc) {
      c2_emxInit_uint8_T(chartInstance, c2_sp, &c2_c_obj, 2, &c2_tc_emlrtRTEI);
      c2_i1 = c2_c_obj->size[0] * c2_c_obj->size[1];
      c2_c_obj->size[0] = c2_obj->PartialPacket->size[0];
      c2_c_obj->size[1] = c2_obj->PartialPacket->size[1];
      c2_st.site = &c2_qh_emlrtRSI;
      c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_st, c2_c_obj, c2_i1,
        &c2_tc_emlrtRTEI);
      c2_b_loop_ub = c2_obj->PartialPacket->size[0] * c2_obj->
        PartialPacket->size[1] - 1;
      for (c2_i3 = 0; c2_i3 <= c2_b_loop_ub; c2_i3++) {
        c2_c_obj->data[c2_i3] = c2_obj->PartialPacket->data[c2_i3];
      }

      c2_st.site = &c2_qh_emlrtRSI;
      c2_Stream_extractFromPacket(chartInstance, &c2_st, c2_c_obj, c2_pps,
        (c2_pps + c2_countRequested) - 1.0, c2_tempDataRead);
      c2_emxFree_uint8_T(chartInstance, &c2_c_obj);
      c2_b_countRead = c2_countRequested;
      c2_obj->PartialPacketStart = c2_pps + c2_countRequested;
      c2_obj->PartialPacketCount = c2_ppc - c2_countRequested;
    } else {
      c2_emxInit_uint8_T(chartInstance, c2_sp, &c2_b_obj, 2, &c2_sc_emlrtRTEI);
      c2_i = c2_b_obj->size[0] * c2_b_obj->size[1];
      c2_b_obj->size[0] = c2_obj->PartialPacket->size[0];
      c2_b_obj->size[1] = c2_obj->PartialPacket->size[1];
      c2_st.site = &c2_rh_emlrtRSI;
      c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_st, c2_b_obj, c2_i,
        &c2_sc_emlrtRTEI);
      c2_loop_ub = c2_obj->PartialPacket->size[0] * c2_obj->PartialPacket->size
        [1] - 1;
      for (c2_i2 = 0; c2_i2 <= c2_loop_ub; c2_i2++) {
        c2_b_obj->data[c2_i2] = c2_obj->PartialPacket->data[c2_i2];
      }

      c2_st.site = &c2_rh_emlrtRSI;
      c2_Stream_extractFromPacket(chartInstance, &c2_st, c2_b_obj, c2_pps,
        (c2_pps + c2_ppc) - 1.0, c2_tempDataRead);
      c2_emxFree_uint8_T(chartInstance, &c2_b_obj);
      c2_b_countRead = c2_ppc;
      c2_st.site = &c2_sh_emlrtRSI;
      c2_InputStream_clearPartialPacket(chartInstance, &c2_st, c2_obj);
    }

    c2_st.site = &c2_th_emlrtRSI;
    c2_b_st.site = &c2_vh_emlrtRSI;
    c2_b_Stream_extractFromPacket(chartInstance, &c2_b_st, c2_tempDataRead,
      (real_T)c2_tempDataRead->size[1], c2_dataRead);
    c2_emxFree_uint8_T(chartInstance, &c2_tempDataRead);
  } else {
    c2_dataRead->size[0] = 1;
    c2_dataRead->size[1] = 0;
    c2_b_countRead = 0.0;
  }

  *c2_countRead = c2_b_countRead;
}

static void c2_Stream_extractFromPacket(SFc2_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_emxArray_uint8_T *c2_packet, real_T c2_startIndex,
  real_T c2_endIndex, c2_emxArray_uint8_T *c2_result)
{
  emlrtStack c2_st;
  int32_T c2_iv[2];
  int32_T c2_b_loop_ub;
  int32_T c2_c_loop_ub;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_loop_ub;
  boolean_T c2_b;
  boolean_T c2_b1;
  boolean_T c2_b2;
  boolean_T c2_b3;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b = (c2_packet->size[0] == 1);
  c2_b1 = (c2_packet->size[1] == 1);
  if (c2_b || c2_b1) {
    c2_b3 = (c2_startIndex > c2_endIndex);
    if (c2_b3) {
      c2_i2 = 0;
      c2_i4 = 0;
    } else {
      c2_i1 = c2_packet->size[0] * c2_packet->size[1];
      if (c2_startIndex != (real_T)(int32_T)muDoubleScalarFloor(c2_startIndex))
      {
        emlrtIntegerCheckR2012b(c2_startIndex, &c2_k_emlrtDCI, (emlrtConstCTX)
          c2_sp);
      }

      c2_i8 = (int32_T)c2_startIndex;
      if ((c2_i8 < 1) || (c2_i8 > c2_i1)) {
        emlrtDynamicBoundsCheckR2012b(c2_i8, 1, c2_i1, &c2_s_emlrtBCI,
          (emlrtConstCTX)c2_sp);
      }

      c2_i2 = c2_i8 - 1;
      if (c2_endIndex != (real_T)(int32_T)muDoubleScalarFloor(c2_endIndex)) {
        emlrtIntegerCheckR2012b(c2_endIndex, &c2_l_emlrtDCI, (emlrtConstCTX)
          c2_sp);
      }

      c2_i12 = (int32_T)c2_endIndex;
      if ((c2_i12 < 1) || (c2_i12 > c2_i1)) {
        emlrtDynamicBoundsCheckR2012b(c2_i12, 1, c2_i1, &c2_t_emlrtBCI,
          (emlrtConstCTX)c2_sp);
      }

      c2_i4 = c2_i12;
    }

    c2_iv[0] = 1;
    c2_iv[1] = c2_i4 - c2_i2;
    c2_st.site = &c2_uh_emlrtRSI;
    c2_indexShapeCheck(chartInstance, &c2_st, c2_packet->size, c2_iv);
    c2_i9 = c2_result->size[0] * c2_result->size[1];
    c2_result->size[0] = 1;
    c2_result->size[1] = c2_i4 - c2_i2;
    c2_st.site = &c2_uh_emlrtRSI;
    c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_st, c2_result, c2_i9,
      &c2_wc_emlrtRTEI);
    c2_c_loop_ub = (c2_i4 - c2_i2) - 1;
    for (c2_i15 = 0; c2_i15 <= c2_c_loop_ub; c2_i15++) {
      c2_result->data[c2_result->size[0] * c2_i15] = c2_packet->data[c2_i2 +
        c2_i15];
    }
  } else {
    c2_b2 = (c2_startIndex > c2_endIndex);
    if (c2_b2) {
      c2_i = 0;
      c2_i3 = -1;
    } else {
      if (c2_startIndex != (real_T)(int32_T)muDoubleScalarFloor(c2_startIndex))
      {
        emlrtIntegerCheckR2012b(c2_startIndex, &c2_m_emlrtDCI, (emlrtConstCTX)
          c2_sp);
      }

      c2_i5 = c2_packet->size[1];
      c2_i6 = (int32_T)c2_startIndex;
      if ((c2_i6 < 1) || (c2_i6 > c2_i5)) {
        emlrtDynamicBoundsCheckR2012b(c2_i6, 1, c2_i5, &c2_u_emlrtBCI,
          (emlrtConstCTX)c2_sp);
      }

      c2_i = c2_i6 - 1;
      if (c2_endIndex != (real_T)(int32_T)muDoubleScalarFloor(c2_endIndex)) {
        emlrtIntegerCheckR2012b(c2_endIndex, &c2_n_emlrtDCI, (emlrtConstCTX)
          c2_sp);
      }

      c2_i10 = c2_packet->size[1];
      c2_i13 = (int32_T)c2_endIndex;
      if ((c2_i13 < 1) || (c2_i13 > c2_i10)) {
        emlrtDynamicBoundsCheckR2012b(c2_i13, 1, c2_i10, &c2_v_emlrtBCI,
          (emlrtConstCTX)c2_sp);
      }

      c2_i3 = c2_i13 - 1;
    }

    c2_i7 = c2_result->size[0] * c2_result->size[1];
    c2_result->size[0] = c2_packet->size[0];
    c2_result->size[1] = (c2_i3 - c2_i) + 1;
    c2_st.site = &c2_ll_emlrtRSI;
    c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_st, c2_result, c2_i7,
      &c2_vc_emlrtRTEI);
    c2_loop_ub = c2_i3 - c2_i;
    for (c2_i11 = 0; c2_i11 <= c2_loop_ub; c2_i11++) {
      c2_b_loop_ub = c2_packet->size[0] - 1;
      for (c2_i14 = 0; c2_i14 <= c2_b_loop_ub; c2_i14++) {
        c2_result->data[c2_i14 + c2_result->size[0] * c2_i11] = c2_packet->
          data[c2_i14 + c2_packet->size[0] * (c2_i + c2_i11)];
      }
    }
  }
}

static void c2_b_Stream_extractFromPacket(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_uint8_T *c2_packet,
  real_T c2_endIndex, c2_emxArray_uint8_T *c2_result)
{
  emlrtStack c2_st;
  int32_T c2_iv[2];
  int32_T c2_b_loop_ub;
  int32_T c2_c_loop_ub;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_loop_ub;
  boolean_T c2_b;
  boolean_T c2_b1;
  boolean_T c2_b2;
  boolean_T c2_b3;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b = (c2_packet->size[0] == 1);
  c2_b1 = (c2_packet->size[1] == 1);
  if (c2_b || c2_b1) {
    c2_b3 = (c2_endIndex < 1.0);
    if (c2_b3) {
      c2_i3 = 0;
    } else {
      c2_i2 = c2_packet->size[0] * c2_packet->size[1];
      c2_i5 = 1;
      if ((c2_i5 < 1) || (c2_i5 > c2_i2)) {
        emlrtDynamicBoundsCheckR2012b(c2_i5, 1, c2_i2, &c2_s_emlrtBCI,
          (emlrtConstCTX)c2_sp);
      }

      if (c2_endIndex != (real_T)(int32_T)muDoubleScalarFloor(c2_endIndex)) {
        emlrtIntegerCheckR2012b(c2_endIndex, &c2_l_emlrtDCI, (emlrtConstCTX)
          c2_sp);
      }

      c2_i8 = (int32_T)c2_endIndex;
      if ((c2_i8 < 1) || (c2_i8 > c2_i2)) {
        emlrtDynamicBoundsCheckR2012b(c2_i8, 1, c2_i2, &c2_t_emlrtBCI,
          (emlrtConstCTX)c2_sp);
      }

      c2_i3 = c2_i8;
    }

    c2_iv[0] = 1;
    c2_iv[1] = c2_i3;
    c2_st.site = &c2_uh_emlrtRSI;
    c2_indexShapeCheck(chartInstance, &c2_st, c2_packet->size, c2_iv);
    c2_i9 = c2_result->size[0] * c2_result->size[1];
    c2_result->size[0] = 1;
    c2_result->size[1] = c2_i3;
    c2_st.site = &c2_uh_emlrtRSI;
    c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_st, c2_result, c2_i9,
      &c2_wc_emlrtRTEI);
    c2_c_loop_ub = c2_i3 - 1;
    for (c2_i13 = 0; c2_i13 <= c2_c_loop_ub; c2_i13++) {
      c2_result->data[c2_result->size[0] * c2_i13] = c2_packet->data[c2_i13];
    }
  } else {
    c2_b2 = (c2_endIndex < 1.0);
    if (c2_b2) {
      c2_i1 = -1;
    } else {
      c2_i = c2_packet->size[1];
      c2_i4 = 1;
      if ((c2_i4 < 1) || (c2_i4 > c2_i)) {
        emlrtDynamicBoundsCheckR2012b(c2_i4, 1, c2_i, &c2_u_emlrtBCI,
          (emlrtConstCTX)c2_sp);
      }

      if (c2_endIndex != (real_T)(int32_T)muDoubleScalarFloor(c2_endIndex)) {
        emlrtIntegerCheckR2012b(c2_endIndex, &c2_n_emlrtDCI, (emlrtConstCTX)
          c2_sp);
      }

      c2_i7 = c2_packet->size[1];
      c2_i10 = (int32_T)c2_endIndex;
      if ((c2_i10 < 1) || (c2_i10 > c2_i7)) {
        emlrtDynamicBoundsCheckR2012b(c2_i10, 1, c2_i7, &c2_v_emlrtBCI,
          (emlrtConstCTX)c2_sp);
      }

      c2_i1 = c2_i10 - 1;
    }

    c2_i6 = c2_result->size[0] * c2_result->size[1];
    c2_result->size[0] = c2_packet->size[0];
    c2_result->size[1] = c2_i1 + 1;
    c2_st.site = &c2_ll_emlrtRSI;
    c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_st, c2_result, c2_i6,
      &c2_vc_emlrtRTEI);
    c2_loop_ub = c2_i1;
    for (c2_i11 = 0; c2_i11 <= c2_loop_ub; c2_i11++) {
      c2_b_loop_ub = c2_packet->size[0] - 1;
      for (c2_i12 = 0; c2_i12 <= c2_b_loop_ub; c2_i12++) {
        c2_result->data[c2_i12 + c2_result->size[0] * c2_i11] = c2_packet->
          data[c2_i12 + c2_packet->size[0] * c2_i11];
      }
    }
  }
}

static void c2_b_Stream_wait(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_matlabshared_asyncio_internal_InputStream *c2_obj,
  char_T c2_status_data[], int32_T c2_status_size[2])
{
  static char_T c2_b_cv1[7] = { 't', 'i', 'm', 'e', 'o', 'u', 't' };

  static char_T c2_b_cv2[5] = { 'p', 'a', 'u', 's', 'e' };

  static char_T c2_b_cv3[5] = { 'p', 'a', 'u', 's', 'e' };

  static char_T c2_b_cv[4] = { 'd', 'o', 'n', 'e' };

  CoderChannel c2_b_chImpl;
  CoderChannel c2_c_chImpl;
  CoderChannel c2_chImpl;
  CoderChannel c2_d_chImpl;
  CoderInputStream c2_b_streamImpl;
  CoderInputStream c2_c_streamImpl;
  CoderInputStream c2_d_streamImpl;
  CoderInputStream c2_e_streamImpl;
  CoderInputStream c2_f_streamImpl;
  CoderInputStream c2_g_streamImpl;
  CoderInputStream c2_h_streamImpl;
  CoderInputStream c2_streamImpl;
  c2_matlabshared_asyncio_internal_InputStream *c2_b_obj;
  c2_matlabshared_asyncio_internal_InputStream *c2_c_obj;
  c2_matlabshared_asyncio_internal_InputStream *c2_d_obj;
  c2_matlabshared_asyncio_internal_InputStream *c2_e_obj;
  c2_matlabshared_asyncio_internal_InputStream *c2_f_obj;
  c2_matlabshared_asyncio_internal_InputStream *c2_g_obj;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  emlrtStack c2_st;
  emlrtTimespec c2_startTic;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_y = NULL;
  real_T c2_b_count;
  real_T c2_b_varargin_1;
  real_T c2_count;
  real_T c2_et;
  real_T c2_timeoutInSeconds;
  real_T c2_varargin_1;
  int32_T c2_b_success;
  int32_T c2_c_success;
  int32_T c2_d_success;
  int32_T c2_e_success;
  int32_T c2_f_success;
  int32_T c2_g_success;
  int32_T c2_h_success;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_success;
  boolean_T c2_b_done;
  boolean_T c2_b_result;
  boolean_T c2_completed;
  boolean_T c2_done;
  boolean_T c2_result;
  boolean_T c2_timeout;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_timeoutInSeconds = c2_obj->Timeout;
  c2_status_size[0] = 1;
  c2_status_size[1] = 0;
  c2_timeout = false;
  c2_done = false;
  c2_st.site = &c2_pe_emlrtRSI;
  c2_b_obj = c2_obj;
  c2_b_st.site = &c2_gh_emlrtRSI;
  c2_c_obj = c2_b_obj;
  c2_c_st.site = &c2_rf_emlrtRSI;
  c2_streamImpl = c2_c_obj->StreamImpl;
  c2_success = coderStreamGetDataAvailable(c2_streamImpl, &c2_count);
  c2_d_st.site = &c2_sf_emlrtRSI;
  c2_b_streamImpl = c2_streamImpl;
  c2_b_success = c2_success;
  if ((real_T)c2_b_success == 0.0) {
    c2_chImpl = coderStreamGetChannel(c2_b_streamImpl);
    c2_e_st.site = &c2_oe_emlrtRSI;
    c2_b_API_channelErrorIfFailed(chartInstance, &c2_e_st, c2_chImpl);
  }

  c2_completed = (c2_count > 0.0);
  c2_st.site = &c2_qe_emlrtRSI;
  c2_startTic = c2_tic(chartInstance, &c2_st);
  while ((!c2_completed) && (!c2_done) && (!c2_timeout)) {
    c2_st.site = &c2_re_emlrtRSI;
    c2_et = c2_toc(chartInstance, &c2_st, c2_startTic);
    if (c2_et < 1.0) {
      c2_st.site = &c2_se_emlrtRSI;
      c2_b_st.site = &c2_df_emlrtRSI;
      c2_b_varargin_1 = 0.0;
      c2_b_y = NULL;
      sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_cv3, 10, 0U, 1U, 0U, 2, 1,
        5), false);
      c2_d_y = NULL;
      sf_mex_assign(&c2_d_y, sf_mex_create("y", &c2_b_varargin_1, 0, 0U, 0U, 0U,
        0), false);
      c2_c_st.site = &c2_ef_emlrtRSI;
      c2_b_feval(chartInstance, &c2_c_st, c2_b_y, c2_d_y);
    } else {
      c2_st.site = &c2_te_emlrtRSI;
      c2_b_st.site = &c2_df_emlrtRSI;
      c2_varargin_1 = 0.005;
      c2_y = NULL;
      sf_mex_assign(&c2_y, sf_mex_create("y", c2_b_cv2, 10, 0U, 1U, 0U, 2, 1, 5),
                    false);
      c2_c_y = NULL;
      sf_mex_assign(&c2_c_y, sf_mex_create("y", &c2_varargin_1, 0, 0U, 0U, 0U, 0),
                    false);
      c2_c_st.site = &c2_ef_emlrtRSI;
      c2_b_feval(chartInstance, &c2_c_st, c2_y, c2_c_y);
    }

    c2_st.site = &c2_ue_emlrtRSI;
    c2_et = c2_toc(chartInstance, &c2_st, c2_startTic);
    c2_timeout = (c2_et > c2_timeoutInSeconds);
    c2_st.site = &c2_ve_emlrtRSI;
    c2_d_obj = c2_obj;
    c2_b_st.site = &c2_ff_emlrtRSI;
    c2_c_streamImpl = c2_d_obj->StreamImpl;
    c2_c_success = coderStreamIsDeviceDone(c2_c_streamImpl, &c2_result);
    c2_c_st.site = &c2_gf_emlrtRSI;
    c2_d_streamImpl = c2_c_streamImpl;
    c2_d_success = c2_c_success;
    if ((real_T)c2_d_success == 0.0) {
      c2_b_chImpl = coderStreamGetChannel(c2_d_streamImpl);
      c2_d_st.site = &c2_oe_emlrtRSI;
      c2_b_API_channelErrorIfFailed(chartInstance, &c2_d_st, c2_b_chImpl);
    }

    if (c2_result) {
      c2_b_done = true;
    } else {
      c2_st.site = &c2_ve_emlrtRSI;
      c2_e_obj = c2_obj;
      c2_b_st.site = &c2_hf_emlrtRSI;
      c2_e_streamImpl = c2_e_obj->StreamImpl;
      c2_e_success = coderStreamIsOpen(c2_e_streamImpl, &c2_b_result);
      c2_c_st.site = &c2_if_emlrtRSI;
      c2_f_streamImpl = c2_e_streamImpl;
      c2_f_success = c2_e_success;
      if ((real_T)c2_f_success == 0.0) {
        c2_c_chImpl = coderStreamGetChannel(c2_f_streamImpl);
        c2_d_st.site = &c2_oe_emlrtRSI;
        c2_b_API_channelErrorIfFailed(chartInstance, &c2_d_st, c2_c_chImpl);
      }

      if (!c2_b_result) {
        c2_b_done = true;
      } else {
        c2_b_done = false;
      }
    }

    c2_done = c2_b_done;
    c2_st.site = &c2_we_emlrtRSI;
    c2_f_obj = c2_obj;
    c2_b_st.site = &c2_gh_emlrtRSI;
    c2_g_obj = c2_f_obj;
    c2_c_st.site = &c2_rf_emlrtRSI;
    c2_g_streamImpl = c2_g_obj->StreamImpl;
    c2_g_success = coderStreamGetDataAvailable(c2_g_streamImpl, &c2_b_count);
    c2_d_st.site = &c2_sf_emlrtRSI;
    c2_h_streamImpl = c2_g_streamImpl;
    c2_h_success = c2_g_success;
    if ((real_T)c2_h_success == 0.0) {
      c2_d_chImpl = coderStreamGetChannel(c2_h_streamImpl);
      c2_e_st.site = &c2_oe_emlrtRSI;
      c2_b_API_channelErrorIfFailed(chartInstance, &c2_e_st, c2_d_chImpl);
    }

    c2_completed = (c2_b_count > 0.0);
  }

  if (c2_completed) {
    c2_status_size[0] = 1;
    c2_status_size[1] = 9;
    for (c2_i = 0; c2_i < 9; c2_i++) {
      c2_status_data[c2_i] = c2_cv12[c2_i];
    }
  } else if (c2_done) {
    c2_status_size[0] = 1;
    c2_status_size[1] = 4;
    for (c2_i1 = 0; c2_i1 < 4; c2_i1++) {
      c2_status_data[c2_i1] = c2_b_cv[c2_i1];
    }
  } else if (c2_timeout) {
    c2_status_size[0] = 1;
    c2_status_size[1] = 7;
    for (c2_i2 = 0; c2_i2 < 7; c2_i2++) {
      c2_status_data[c2_i2] = c2_b_cv1[c2_i2];
    }
  }
}

static void c2_InputStream_readPackets(SFc2_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_matlabshared_asyncio_internal_InputStream *c2_obj,
  real_T c2_countRequested, c2_emxArray_cell_wrap_31 *c2_packets, real_T
  *c2_countRead)
{
  static char_T c2_b_cv[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  CoderChannel c2_b_chImpl;
  CoderChannel c2_c_chImpl;
  CoderChannel c2_chImpl;
  CoderInputStream c2_b_streamImpl;
  CoderInputStream c2_c_streamImpl;
  CoderInputStream c2_d_streamImpl;
  CoderInputStream c2_e_streamImpl;
  CoderInputStream c2_f_streamImpl;
  CoderInputStream c2_g_streamImpl;
  CoderInputStream c2_streamImpl;
  c2_emxArray_boolean_T *c2_tile;
  c2_emxArray_uint8_T *c2_packet;
  c2_matlabshared_asyncio_internal_InputStream *c2_b_obj;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_g_y = NULL;
  const mxArray *c2_y = NULL;
  real_T c2_bufferCounts[80];
  real_T c2_repmatTiling[2];
  real_T c2_arg;
  real_T c2_b_arg;
  real_T c2_b_bufferIndex;
  real_T c2_b_countRead;
  real_T c2_b_countRequested;
  real_T c2_b_countToRead;
  real_T c2_b_numBuffers;
  real_T c2_b_varargin_2;
  real_T c2_c_varargin_2;
  real_T c2_countToRead;
  real_T c2_d;
  real_T c2_d_bufferIndex;
  real_T c2_e_bufferIndex;
  real_T c2_f_bufferIndex;
  real_T c2_n;
  real_T c2_numBuffers;
  real_T c2_varargin_2;
  real_T c2_x;
  int32_T c2_iv[2];
  int32_T c2_outsize[2];
  int32_T c2_b_loop_ub;
  int32_T c2_b_success;
  int32_T c2_b_u;
  int32_T c2_bufferIndex;
  int32_T c2_c_bufferIndex;
  int32_T c2_c_loop_ub;
  int32_T c2_c_success;
  int32_T c2_c_u;
  int32_T c2_d_loop_ub;
  int32_T c2_d_success;
  int32_T c2_e_success;
  int32_T c2_f_success;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i2;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_i24;
  int32_T c2_i25;
  int32_T c2_i26;
  int32_T c2_i27;
  int32_T c2_i28;
  int32_T c2_i29;
  int32_T c2_i3;
  int32_T c2_i30;
  int32_T c2_i31;
  int32_T c2_i32;
  int32_T c2_i33;
  int32_T c2_i34;
  int32_T c2_i35;
  int32_T c2_i36;
  int32_T c2_i37;
  int32_T c2_i38;
  int32_T c2_i39;
  int32_T c2_i4;
  int32_T c2_i40;
  int32_T c2_i41;
  int32_T c2_i42;
  int32_T c2_i43;
  int32_T c2_i44;
  int32_T c2_i45;
  int32_T c2_i46;
  int32_T c2_i47;
  int32_T c2_i48;
  int32_T c2_i49;
  int32_T c2_i5;
  int32_T c2_i50;
  int32_T c2_i51;
  int32_T c2_i52;
  int32_T c2_i53;
  int32_T c2_i54;
  int32_T c2_i55;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_loop_ub;
  int32_T c2_success;
  boolean_T c2_b;
  boolean_T c2_b_b;
  boolean_T c2_b_p;
  boolean_T c2_p;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_st.site = &c2_wh_emlrtRSI;
  c2_streamImpl = c2_obj->StreamImpl;
  c2_b_countRequested = c2_countRequested;
  c2_countToRead = 0.0;
  for (c2_i = 0; c2_i < 80; c2_i++) {
    c2_bufferCounts[c2_i] = 0.0;
  }

  c2_numBuffers = 80.0;
  c2_success = coderInputStreamPeek(c2_streamImpl, c2_b_countRequested,
    &c2_countToRead, &c2_bufferCounts[0], &c2_numBuffers);
  c2_b_st.site = &c2_ci_emlrtRSI;
  c2_b_streamImpl = c2_streamImpl;
  c2_b_success = c2_success;
  if ((real_T)c2_b_success == 0.0) {
    c2_chImpl = coderStreamGetChannel(c2_b_streamImpl);
    c2_c_st.site = &c2_oe_emlrtRSI;
    c2_b_API_channelErrorIfFailed(chartInstance, &c2_c_st, c2_chImpl);
  }

  c2_iv[0] = 1;
  if (!(c2_numBuffers >= 0.0)) {
    emlrtNonNegativeCheckR2012b(c2_numBuffers, &c2_q_emlrtDCI, (emlrtConstCTX)
      c2_sp);
  }

  c2_d = c2_numBuffers;
  if (c2_d != (real_T)(int32_T)muDoubleScalarFloor(c2_d)) {
    emlrtIntegerCheckR2012b(c2_d, &c2_p_emlrtDCI, (emlrtConstCTX)c2_sp);
  }

  c2_iv[1] = (int32_T)c2_d;
  c2_i1 = c2_packets->size[0] * c2_packets->size[1];
  c2_packets->size[0] = c2_iv[0];
  c2_packets->size[1] = c2_iv[1];
  c2_emxEnsureCapacity_cell_wrap_312(chartInstance, c2_sp, c2_packets, c2_i1,
    &c2_xc_emlrtRTEI);
  for (c2_i2 = 0; c2_i2 < c2_iv[1]; c2_i2++) {
    c2_i4 = c2_packets->size[1] - 1;
    if ((c2_i2 < 0) || (c2_i2 > c2_i4)) {
      emlrtDynamicBoundsCheckR2012b(c2_i2, 0, c2_i4, &c2_ab_emlrtBCI,
        (emlrtConstCTX)c2_sp);
    }

    c2_i6 = c2_i2;
    c2_packets->data[c2_i6].f1->size[0] = 1;
    c2_i7 = c2_packets->size[1] - 1;
    if ((c2_i2 < 0) || (c2_i2 > c2_i7)) {
      emlrtDynamicBoundsCheckR2012b(c2_i2, 0, c2_i7, &c2_ab_emlrtBCI,
        (emlrtConstCTX)c2_sp);
    }

    c2_i8 = c2_i2;
    c2_packets->data[c2_i8].f1->size[1] = 0;
  }

  c2_i3 = (int32_T)c2_numBuffers;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, c2_numBuffers, mxDOUBLE_CLASS, c2_i3,
    &c2_nd_emlrtRTEI, (emlrtConstCTX)c2_sp);
  c2_i5 = c2_packets->size[0] * c2_packets->size[1];
  c2_packets->size[0] = c2_iv[0];
  c2_packets->size[1] = c2_iv[1];
  c2_st.site = &c2_ol_emlrtRSI;
  c2_emxEnsureCapacity_cell_wrap_312(chartInstance, &c2_st, c2_packets, c2_i5,
    &c2_yc_emlrtRTEI);
  c2_emxInit_boolean_T(chartInstance, c2_sp, &c2_tile, 2, &c2_bd_emlrtRTEI);
  for (c2_bufferIndex = 0; c2_bufferIndex < c2_i3; c2_bufferIndex++) {
    c2_b_bufferIndex = (real_T)c2_bufferIndex + 1.0;
    c2_i9 = (int32_T)c2_b_bufferIndex;
    if ((c2_i9 < 1) || (c2_i9 > 80)) {
      emlrtDynamicBoundsCheckR2012b(c2_i9, 1, 80, &c2_bb_emlrtBCI,
        (emlrtConstCTX)c2_sp);
    }

    c2_repmatTiling[1] = c2_bufferCounts[c2_i9 - 1];
    c2_st.site = &c2_xh_emlrtRSI;
    c2_varargin_2 = c2_repmatTiling[1];
    c2_b_st.site = &c2_di_emlrtRSI;
    c2_b_varargin_2 = c2_varargin_2;
    c2_arg = c2_b_varargin_2;
    if (c2_arg != muDoubleScalarFloor(c2_arg)) {
      c2_p = false;
    } else {
      c2_x = c2_arg;
      c2_b = muDoubleScalarIsInf(c2_x);
      if (c2_b) {
        c2_p = false;
      } else {
        c2_p = true;
      }
    }

    if (c2_p) {
      c2_b_arg = c2_b_varargin_2;
      if ((c2_b_arg < -2.147483648E+9) || (c2_b_arg > 2.147483647E+9)) {
        c2_b_p = false;
      } else {
        c2_b_p = true;
      }

      if (c2_b_p) {
        c2_b_b = true;
      } else {
        c2_b_b = false;
      }
    } else {
      c2_b_b = false;
    }

    if (!c2_b_b) {
      c2_y = NULL;
      sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv17, 10, 0U, 1U, 0U, 2, 1, 28),
                    false);
      c2_b_y = NULL;
      sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv17, 10, 0U, 1U, 0U, 2, 1,
        28), false);
      c2_b_u = MIN_int32_T;
      c2_c_y = NULL;
      sf_mex_assign(&c2_c_y, sf_mex_create("y", &c2_b_u, 6, 0U, 0U, 0U, 0),
                    false);
      c2_c_u = MAX_int32_T;
      c2_f_y = NULL;
      sf_mex_assign(&c2_f_y, sf_mex_create("y", &c2_c_u, 6, 0U, 0U, 0U, 0),
                    false);
      sf_mex_call(&c2_b_st, &c2_ob_emlrtMCI, "error", 0U, 2U, 14, c2_y, 14,
                  sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c2_b_st, NULL, "message", 1U, 3U, 14, c2_b_y, 14, c2_c_y,
                    14, c2_f_y)));
    }

    c2_c_varargin_2 = c2_b_varargin_2;
    if (c2_c_varargin_2 <= 0.0) {
      c2_n = 0.0;
    } else {
      c2_n = c2_c_varargin_2;
    }

    if (!(c2_n <= 2.147483647E+9)) {
      c2_d_y = NULL;
      sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1,
        21), false);
      c2_e_y = NULL;
      sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1,
        21), false);
      sf_mex_call(&c2_b_st, &c2_pb_emlrtMCI, "error", 0U, 2U, 14, c2_d_y, 14,
                  sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c2_b_st, NULL, "message", 1U, 1U, 14, c2_e_y)));
    }

    c2_i15 = c2_tile->size[0] * c2_tile->size[1];
    c2_tile->size[0] = 1;
    if (!(c2_varargin_2 >= 0.0)) {
      emlrtNonNegativeCheckR2012b(c2_varargin_2, &c2_o_emlrtDCI, &c2_st);
    }

    c2_tile->size[1] = (int32_T)c2_varargin_2;
    c2_emxEnsureCapacity_boolean_T(chartInstance, &c2_st, c2_tile, c2_i15,
      &c2_bd_emlrtRTEI);
    if (!(c2_varargin_2 >= 0.0)) {
      emlrtNonNegativeCheckR2012b(c2_varargin_2, &c2_r_emlrtDCI, &c2_st);
    }

    c2_loop_ub = (int32_T)c2_varargin_2 - 1;
    for (c2_i20 = 0; c2_i20 <= c2_loop_ub; c2_i20++) {
      c2_tile->data[c2_i20] = false;
    }

    c2_outsize[1] = c2_tile->size[1];
    if (!((real_T)c2_outsize[1] == (real_T)c2_tile->size[1])) {
      c2_g_y = NULL;
      sf_mex_assign(&c2_g_y, sf_mex_create("y", c2_cv9, 10, 0U, 1U, 0U, 2, 1, 15),
                    false);
      sf_mex_call(&c2_st, &c2_x_emlrtMCI, "error", 0U, 1U, 14, c2_g_y);
    }

    c2_i23 = c2_packets->size[1] - 1;
    c2_i24 = (int32_T)c2_b_bufferIndex - 1;
    if ((c2_i24 < 0) || (c2_i24 > c2_i23)) {
      emlrtDynamicBoundsCheckR2012b(c2_i24, 0, c2_i23, &c2_x_emlrtBCI, &c2_st);
    }

    c2_i27 = c2_i24;
    c2_i28 = c2_packets->data[c2_i27].f1->size[0] * c2_packets->data[c2_i27].
      f1->size[1];
    c2_packets->data[c2_i27].f1->size[0] = 1;
    c2_b_st.site = &c2_xh_emlrtRSI;
    c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_b_st, c2_packets->
      data[c2_i27].f1, c2_i28, &c2_cd_emlrtRTEI);
    c2_i29 = c2_packets->size[1] - 1;
    c2_i30 = (int32_T)c2_b_bufferIndex - 1;
    if ((c2_i30 < 0) || (c2_i30 > c2_i29)) {
      emlrtDynamicBoundsCheckR2012b(c2_i30, 0, c2_i29, &c2_x_emlrtBCI, &c2_st);
    }

    c2_i31 = c2_i30;
    c2_i32 = c2_packets->data[c2_i31].f1->size[0] * c2_packets->data[c2_i31].
      f1->size[1];
    c2_packets->data[c2_i31].f1->size[1] = c2_outsize[1];
    c2_b_st.site = &c2_xh_emlrtRSI;
    c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_b_st, c2_packets->
      data[c2_i31].f1, c2_i32, &c2_cd_emlrtRTEI);
    c2_i34 = c2_packets->size[1] - 1;
    c2_i36 = (int32_T)c2_b_bufferIndex - 1;
    if ((c2_i36 < 0) || (c2_i36 > c2_i34)) {
      emlrtDynamicBoundsCheckR2012b(c2_i36, 0, c2_i34, &c2_x_emlrtBCI, &c2_st);
    }

    c2_i38 = c2_packets->size[1] - 1;
    c2_i40 = (int32_T)c2_b_bufferIndex - 1;
    if ((c2_i40 < 0) || (c2_i40 > c2_i38)) {
      emlrtDynamicBoundsCheckR2012b(c2_i40, 0, c2_i38, &c2_x_emlrtBCI, &c2_st);
    }

    c2_c_loop_ub = c2_outsize[1] - 1;
    for (c2_i42 = 0; c2_i42 <= c2_c_loop_ub; c2_i42++) {
      c2_i44 = c2_packets->size[1] - 1;
      c2_i45 = (int32_T)c2_b_bufferIndex - 1;
      if ((c2_i45 < 0) || (c2_i45 > c2_i44)) {
        emlrtDynamicBoundsCheckR2012b(c2_i45, 0, c2_i44, &c2_eb_emlrtBCI, &c2_st);
      }

      c2_packets->data[c2_i45].f1->data[c2_i42] = 0U;
    }
  }

  c2_emxFree_boolean_T(chartInstance, &c2_tile);
  c2_st.site = &c2_yh_emlrtRSI;
  c2_c_streamImpl = c2_obj->StreamImpl;
  c2_b_countToRead = c2_countToRead;
  c2_b_numBuffers = c2_numBuffers;
  c2_c_success = coderInputStreamReadBuffers(c2_c_streamImpl, c2_b_countToRead,
    c2_b_numBuffers);
  c2_b_st.site = &c2_ei_emlrtRSI;
  c2_d_streamImpl = c2_c_streamImpl;
  c2_d_success = c2_c_success;
  if ((real_T)c2_d_success == 0.0) {
    c2_b_chImpl = coderStreamGetChannel(c2_d_streamImpl);
    c2_c_st.site = &c2_oe_emlrtRSI;
    c2_b_API_channelErrorIfFailed(chartInstance, &c2_c_st, c2_b_chImpl);
  }

  c2_b_countRead = 0.0;
  c2_i10 = (int32_T)c2_numBuffers;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, c2_numBuffers, mxDOUBLE_CLASS, c2_i10,
    &c2_od_emlrtRTEI, (emlrtConstCTX)c2_sp);
  c2_emxInit_uint8_T(chartInstance, c2_sp, &c2_packet, 2, &c2_ad_emlrtRTEI);
  for (c2_c_bufferIndex = 0; c2_c_bufferIndex < c2_i10; c2_c_bufferIndex++) {
    c2_b_bufferIndex = (real_T)c2_c_bufferIndex + 1.0;
    c2_i11 = c2_packet->size[0] * c2_packet->size[1];
    c2_packet->size[0] = 1;
    c2_i12 = c2_packets->size[1] - 1;
    c2_i13 = (int32_T)c2_b_bufferIndex - 1;
    if ((c2_i13 < 0) || (c2_i13 > c2_i12)) {
      emlrtDynamicBoundsCheckR2012b(c2_i13, 0, c2_i12, &c2_w_emlrtBCI,
        (emlrtConstCTX)c2_sp);
    }

    c2_i14 = c2_i13;
    c2_packet->size[1] = c2_packets->data[c2_i14].f1->size[1];
    c2_st.site = &c2_kl_emlrtRSI;
    c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_st, c2_packet, c2_i11,
      &c2_ad_emlrtRTEI);
    c2_i16 = c2_packets->size[1] - 1;
    c2_i17 = (int32_T)c2_b_bufferIndex - 1;
    if ((c2_i17 < 0) || (c2_i17 > c2_i16)) {
      emlrtDynamicBoundsCheckR2012b(c2_i17, 0, c2_i16, &c2_w_emlrtBCI,
        (emlrtConstCTX)c2_sp);
    }

    c2_i18 = c2_packets->size[1] - 1;
    c2_i19 = (int32_T)c2_b_bufferIndex - 1;
    if ((c2_i19 < 0) || (c2_i19 > c2_i18)) {
      emlrtDynamicBoundsCheckR2012b(c2_i19, 0, c2_i18, &c2_w_emlrtBCI,
        (emlrtConstCTX)c2_sp);
    }

    c2_i21 = c2_i19;
    c2_b_loop_ub = c2_packets->data[c2_i21].f1->size[1] - 1;
    for (c2_i22 = 0; c2_i22 <= c2_b_loop_ub; c2_i22++) {
      c2_i25 = c2_packets->size[1] - 1;
      c2_i26 = (int32_T)c2_b_bufferIndex - 1;
      if ((c2_i26 < 0) || (c2_i26 > c2_i25)) {
        emlrtDynamicBoundsCheckR2012b(c2_i26, 0, c2_i25, &c2_db_emlrtBCI,
          (emlrtConstCTX)c2_sp);
      }

      c2_packet->data[c2_i22] = c2_packets->data[c2_i26].f1->data[c2_i22];
    }

    c2_st.site = &c2_ai_emlrtRSI;
    c2_b_obj = c2_obj;
    c2_d_bufferIndex = c2_b_bufferIndex;
    c2_b_st.site = &c2_fi_emlrtRSI;
    c2_e_streamImpl = c2_b_obj->StreamImpl;
    c2_e_bufferIndex = c2_d_bufferIndex;
    c2_e_success = coderInputStreamReadBufferData(c2_e_streamImpl, (int32_T)
      c2_e_bufferIndex, 1, "", "uint8", c2_packet->size[1], &c2_packet->data[0]);
    c2_c_st.site = &c2_gi_emlrtRSI;
    c2_f_streamImpl = c2_e_streamImpl;
    c2_f_success = c2_e_success;
    if ((real_T)c2_f_success == 0.0) {
      c2_c_chImpl = coderStreamGetChannel(c2_f_streamImpl);
      c2_d_st.site = &c2_oe_emlrtRSI;
      c2_b_API_channelErrorIfFailed(chartInstance, &c2_d_st, c2_c_chImpl);
    }

    c2_st.site = &c2_bi_emlrtRSI;
    c2_g_streamImpl = c2_obj->StreamImpl;
    c2_f_bufferIndex = c2_b_bufferIndex;
    coderInputStreamFreeBuffer(c2_g_streamImpl, (int32_T)c2_f_bufferIndex);
    c2_i33 = c2_packets->size[1] - 1;
    c2_i35 = (int32_T)c2_b_bufferIndex - 1;
    if ((c2_i35 < 0) || (c2_i35 > c2_i33)) {
      emlrtDynamicBoundsCheckR2012b(c2_i35, 0, c2_i33, &c2_y_emlrtBCI,
        (emlrtConstCTX)c2_sp);
    }

    c2_i37 = c2_i35;
    c2_i39 = c2_packets->data[c2_i37].f1->size[0] * c2_packets->data[c2_i37].
      f1->size[1];
    c2_packets->data[c2_i37].f1->size[0] = 1;
    c2_st.site = &c2_jl_emlrtRSI;
    c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_st, c2_packets->data[c2_i37]
      .f1, c2_i39, &c2_dd_emlrtRTEI);
    c2_i41 = c2_packets->size[1] - 1;
    c2_i43 = (int32_T)c2_b_bufferIndex - 1;
    if ((c2_i43 < 0) || (c2_i43 > c2_i41)) {
      emlrtDynamicBoundsCheckR2012b(c2_i43, 0, c2_i41, &c2_y_emlrtBCI,
        (emlrtConstCTX)c2_sp);
    }

    c2_i46 = c2_i43;
    c2_i47 = c2_packets->data[c2_i46].f1->size[0] * c2_packets->data[c2_i46].
      f1->size[1];
    c2_packets->data[c2_i46].f1->size[1] = c2_packet->size[1];
    c2_st.site = &c2_jl_emlrtRSI;
    c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_st, c2_packets->data[c2_i46]
      .f1, c2_i47, &c2_dd_emlrtRTEI);
    c2_i48 = c2_packets->size[1] - 1;
    c2_i49 = (int32_T)c2_b_bufferIndex - 1;
    if ((c2_i49 < 0) || (c2_i49 > c2_i48)) {
      emlrtDynamicBoundsCheckR2012b(c2_i49, 0, c2_i48, &c2_y_emlrtBCI,
        (emlrtConstCTX)c2_sp);
    }

    c2_i50 = c2_packets->size[1] - 1;
    c2_i51 = (int32_T)c2_b_bufferIndex - 1;
    if ((c2_i51 < 0) || (c2_i51 > c2_i50)) {
      emlrtDynamicBoundsCheckR2012b(c2_i51, 0, c2_i50, &c2_y_emlrtBCI,
        (emlrtConstCTX)c2_sp);
    }

    c2_d_loop_ub = c2_packet->size[1] - 1;
    for (c2_i52 = 0; c2_i52 <= c2_d_loop_ub; c2_i52++) {
      c2_i54 = c2_packets->size[1] - 1;
      c2_i55 = (int32_T)c2_b_bufferIndex - 1;
      if ((c2_i55 < 0) || (c2_i55 > c2_i54)) {
        emlrtDynamicBoundsCheckR2012b(c2_i55, 0, c2_i54, &c2_fb_emlrtBCI,
          (emlrtConstCTX)c2_sp);
      }

      c2_packets->data[c2_i55].f1->data[c2_i52] = c2_packet->data[c2_i52];
    }

    c2_i53 = (int32_T)c2_b_bufferIndex;
    if ((c2_i53 < 1) || (c2_i53 > 80)) {
      emlrtDynamicBoundsCheckR2012b(c2_i53, 1, 80, &c2_cb_emlrtBCI,
        (emlrtConstCTX)c2_sp);
    }

    c2_b_countRead += c2_bufferCounts[c2_i53 - 1];
  }

  c2_emxFree_uint8_T(chartInstance, &c2_packet);
  *c2_countRead = c2_b_countRead;
}

static void c2_cat(SFc2_wwtp3InstanceStruct *chartInstance, const emlrtStack
                   *c2_sp, c2_emxArray_uint8_T *c2_varargin_1,
                   c2_emxArray_uint8_T *c2_varargin_2, c2_emxArray_uint8_T *c2_y)
{
  static char_T c2_b_cv[39] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'c', 'a', 't', 'e', 'n', 'a', 't', 'e', '_', 'd', 'i', 'm',
    'e', 'n', 's', 'i', 'o', 'n', 'M', 'i', 's', 'm', 'a', 't', 'c', 'h' };

  emlrtStack c2_b_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  real_T c2_b_j;
  real_T c2_d;
  real_T c2_d_j;
  int32_T c2_ysize[2];
  int32_T c2_b;
  int32_T c2_b_b;
  int32_T c2_c_j;
  int32_T c2_e_j;
  int32_T c2_exitg1;
  int32_T c2_f_j;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_iy;
  int32_T c2_j;
  int32_T c2_loop_ub;
  int32_T c2_ysize_dim;
  boolean_T c2_b_p;
  boolean_T c2_overflow;
  boolean_T c2_p;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_ysize_dim = c2_varargin_1->size[1];
  c2_ysize_dim += c2_varargin_2->size[1];
  c2_ysize[0] = c2_varargin_1->size[0];
  c2_ysize[1] = c2_ysize_dim;
  c2_j = 0;
  do {
    c2_exitg1 = 0;
    if (c2_j < 2) {
      c2_b_j = (real_T)c2_j + 1.0;
      if (c2_b_j != 2.0) {
        c2_d = (real_T)c2_varargin_1->size[0];
        if ((real_T)c2_ysize[0] != c2_d) {
          c2_p = false;
          c2_exitg1 = 1;
        } else {
          c2_j++;
        }
      } else {
        c2_j++;
      }
    } else {
      c2_p = true;
      c2_exitg1 = 1;
    }
  } while (c2_exitg1 == 0);

  if (!c2_p) {
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    sf_mex_call(c2_sp, &c2_qb_emlrtMCI, "error", 0U, 2U, 14, c2_b_y, 14,
                sf_mex_call(c2_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c2_sp, NULL, "message", 1U, 1U, 14, c2_c_y)));
  }

  c2_c_j = 0;
  do {
    c2_exitg1 = 0;
    if (c2_c_j < 2) {
      c2_d_j = (real_T)c2_c_j + 1.0;
      if ((c2_d_j != 2.0) && ((real_T)c2_ysize[0] != 1.0)) {
        c2_b_p = false;
        c2_exitg1 = 1;
      } else {
        c2_c_j++;
      }
    } else {
      c2_b_p = true;
      c2_exitg1 = 1;
    }
  } while (c2_exitg1 == 0);

  if (!c2_b_p) {
    c2_d_y = NULL;
    sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c2_e_y = NULL;
    sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    sf_mex_call(c2_sp, &c2_qb_emlrtMCI, "error", 0U, 2U, 14, c2_d_y, 14,
                sf_mex_call(c2_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c2_sp, NULL, "message", 1U, 1U, 14, c2_e_y)));
  }

  c2_i = c2_y->size[0] * c2_y->size[1];
  c2_y->size[0] = c2_varargin_1->size[0];
  c2_y->size[1] = c2_varargin_1->size[1];
  c2_st.site = &c2_il_emlrtRSI;
  c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_st, c2_y, c2_i,
    &c2_ed_emlrtRTEI);
  c2_loop_ub = c2_varargin_1->size[0] * c2_varargin_1->size[1] - 1;
  for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
    c2_y->data[c2_i1] = c2_varargin_1->data[c2_i1];
  }

  c2_i2 = c2_y->size[0] * c2_y->size[1];
  c2_y->size[0] = c2_ysize[0];
  c2_y->size[1] = c2_ysize[1];
  c2_st.site = &c2_hl_emlrtRSI;
  c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_st, c2_y, c2_i2,
    &c2_fd_emlrtRTEI);
  c2_iy = c2_varargin_1->size[0] * c2_varargin_1->size[1] - 1;
  c2_i3 = c2_varargin_2->size[1];
  c2_st.site = &c2_hi_emlrtRSI;
  c2_b = c2_i3;
  c2_b_b = c2_b;
  if (c2_b_b < 1) {
    c2_overflow = false;
  } else {
    c2_overflow = (c2_b_b > 2147483646);
  }

  if (c2_overflow) {
    c2_b_st.site = &c2_ii_emlrtRSI;
    c2_check_forloop_overflow_error(chartInstance, &c2_b_st);
  }

  for (c2_e_j = 0; c2_e_j < c2_i3; c2_e_j++) {
    c2_f_j = c2_e_j;
    c2_iy++;
    c2_y->data[c2_iy] = c2_varargin_2->data[c2_f_j];
  }
}

static void c2_check_forloop_overflow_error(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp)
{
  static char_T c2_b_cv[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o', 'p',
    '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  static char_T c2_b_cv1[5] = { 'i', 'n', 't', '3', '2' };

  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_y = NULL;
  (void)chartInstance;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                false);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                false);
  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2, 1, 5),
                false);
  sf_mex_call(c2_sp, &c2_rb_emlrtMCI, "error", 0U, 2U, 14, c2_y, 14, sf_mex_call
              (c2_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call(c2_sp, NULL,
    "message", 1U, 2U, 14, c2_b_y, 14, c2_c_y)));
}

static void c2_b_InputStream_read(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_matlabshared_asyncio_internal_InputStream *c2_obj,
  real_T c2_countRequested, c2_emxArray_uint8_T *c2_data, real_T *c2_countRead,
  char_T c2_err_data[], int32_T c2_err_size[2])
{
  static int32_T c2_iv[2] = { 1, 2 };

  CoderChannel c2_chImpl;
  CoderInputStream c2_b_streamImpl;
  CoderInputStream c2_streamImpl;
  c2_emxArray_cell_wrap_31 *c2_packets;
  c2_emxArray_uint8_T *c2_b_data;
  c2_emxArray_uint8_T *c2_c_data;
  c2_emxArray_uint8_T *c2_excessData;
  c2_matlabshared_asyncio_internal_InputStream *c2_b_obj;
  c2_matlabshared_asyncio_internal_InputStream *c2_c_obj;
  c2_matlabshared_asyncio_internal_InputStream *c2_d_obj;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_y = NULL;
  real_T c2_b_count;
  real_T c2_b_countRead;
  real_T c2_b_ii;
  real_T c2_c_countRead;
  real_T c2_count;
  real_T c2_countToRead;
  real_T c2_d;
  int32_T c2_status_size[2];
  int32_T c2_b_loop_ub;
  int32_T c2_b_success;
  int32_T c2_c_loop_ub;
  int32_T c2_d_loop_ub;
  int32_T c2_e_loop_ub;
  int32_T c2_exitg1;
  int32_T c2_f_loop_ub;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_ii;
  int32_T c2_loop_ub;
  int32_T c2_success;
  char_T c2_status_data[9];
  boolean_T c2_x[2];
  boolean_T c2_b;
  boolean_T c2_b1;
  boolean_T c2_b2;
  boolean_T c2_b3;
  boolean_T c2_b_guard1;
  boolean_T c2_c_y;
  boolean_T c2_guard1;
  boolean_T c2_invalidCountRequested;
  boolean_T c2_sizeChangeWhenPartialBufferNonEmpty;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  if (c2_countRequested >= 0.0) {
    c2_b = true;
  } else {
    c2_b = false;
  }

  c2_invalidCountRequested = !c2_b;
  if (c2_invalidCountRequested) {
    c2_y = NULL;
    sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv16, 10, 0U, 1U, 0U, 2, 1, 41),
                  false);
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv16, 10, 0U, 1U, 0U, 2, 1, 41),
                  false);
    sf_mex_call(c2_sp, &c2_mb_emlrtMCI, "error", 0U, 2U, 14, c2_y, 14,
                sf_mex_call(c2_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c2_sp, NULL, "message", 1U, 1U, 14, c2_b_y)));
  }

  for (c2_i = 0; c2_i < 2; c2_i++) {
    c2_x[c2_i] = ((real_T)c2_obj->ExampleData->size[c2_i] != 1.0);
  }

  c2_c_y = c2_vectorAny(chartInstance, c2_x, c2_iv);
  if (c2_c_y) {
    c2_b1 = (c2_obj->PartialPacket->size[0] == 0);
    c2_b2 = (c2_obj->PartialPacket->size[1] == 0);
    if ((!c2_b1) && (!c2_b2)) {
      c2_sizeChangeWhenPartialBufferNonEmpty = true;
    } else {
      c2_sizeChangeWhenPartialBufferNonEmpty = false;
    }
  } else {
    c2_sizeChangeWhenPartialBufferNonEmpty = false;
  }

  if (c2_sizeChangeWhenPartialBufferNonEmpty) {
    c2_d_y = NULL;
    sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_cv15, 10, 0U, 1U, 0U, 2, 1, 47),
                  false);
    c2_e_y = NULL;
    sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_cv15, 10, 0U, 1U, 0U, 2, 1, 47),
                  false);
    sf_mex_call(c2_sp, &c2_nb_emlrtMCI, "error", 0U, 2U, 14, c2_d_y, 14,
                sf_mex_call(c2_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c2_sp, NULL, "message", 1U, 1U, 14, c2_e_y)));
  }

  c2_i1 = c2_obj->ExampleData->size[0] * c2_obj->ExampleData->size[1];
  c2_obj->ExampleData->size[0] = 1;
  c2_obj->ExampleData->size[1] = 1;
  c2_st.site = &c2_gl_emlrtRSI;
  c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_st, c2_obj->ExampleData, c2_i1,
    &c2_kc_emlrtRTEI);
  c2_obj->ExampleData->data[0] = 0U;
  c2_err_size[0] = 1;
  c2_err_size[1] = 0;
  c2_st.site = &c2_dh_emlrtRSI;
  c2_InputStream_readPartialPacket(chartInstance, &c2_st, c2_obj,
    c2_countRequested, c2_data, &c2_b_countRead);
  c2_c_countRead = c2_b_countRead;
  c2_emxInit_uint8_T(chartInstance, c2_sp, &c2_excessData, 2, &c2_qc_emlrtRTEI);
  c2_emxInit_cell_wrap_31(chartInstance, c2_sp, &c2_packets, 2, &c2_rc_emlrtRTEI);
  c2_emxInit_uint8_T(chartInstance, c2_sp, &c2_b_data, 2, &c2_nc_emlrtRTEI);
  c2_emxInit_uint8_T(chartInstance, c2_sp, &c2_c_data, 2, &c2_pc_emlrtRTEI);
  if (c2_b_countRead == c2_countRequested) {
    c2_st.site = &c2_eh_emlrtRSI;
    c2_i2 = c2_excessData->size[0] * c2_excessData->size[1];
    c2_excessData->size[0] = c2_data->size[0];
    c2_excessData->size[1] = c2_data->size[1];
    c2_b_st.site = &c2_dh_emlrtRSI;
    c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_b_st, c2_excessData, c2_i2,
      &c2_lc_emlrtRTEI);
    c2_loop_ub = c2_data->size[0] * c2_data->size[1] - 1;
    for (c2_i3 = 0; c2_i3 <= c2_loop_ub; c2_i3++) {
      c2_excessData->data[c2_i3] = c2_data->data[c2_i3];
    }

    c2_b_st.site = &c2_vh_emlrtRSI;
    c2_b_Stream_extractFromPacket(chartInstance, &c2_b_st, c2_excessData,
      (real_T)c2_excessData->size[1], c2_data);
  } else {
    c2_guard1 = false;
    do {
      c2_exitg1 = 0;
      if (c2_c_countRead < c2_countRequested) {
        c2_st.site = &c2_fh_emlrtRSI;
        c2_b_obj = c2_obj;
        c2_b_st.site = &c2_rf_emlrtRSI;
        c2_streamImpl = c2_b_obj->StreamImpl;
        c2_success = coderStreamGetDataAvailable(c2_streamImpl, &c2_count);
        c2_c_st.site = &c2_sf_emlrtRSI;
        c2_b_streamImpl = c2_streamImpl;
        c2_b_success = c2_success;
        if ((real_T)c2_b_success == 0.0) {
          c2_chImpl = coderStreamGetChannel(c2_b_streamImpl);
          c2_d_st.site = &c2_oe_emlrtRSI;
          c2_b_API_channelErrorIfFailed(chartInstance, &c2_d_st, c2_chImpl);
        }

        c2_b_guard1 = false;
        if (c2_count == 0.0) {
          c2_st.site = &c2_gh_emlrtRSI;
          c2_b_Stream_wait(chartInstance, &c2_st, c2_obj, c2_status_data,
                           c2_status_size);
          c2_st.site = &c2_hh_emlrtRSI;
          if (!c2_f_strcmp(chartInstance, &c2_st, c2_status_data, c2_status_size))
          {
            c2_err_size[0] = 1;
            c2_err_size[1] = c2_status_size[1];
            c2_d_loop_ub = c2_status_size[1] - 1;
            for (c2_i10 = 0; c2_i10 <= c2_d_loop_ub; c2_i10++) {
              c2_err_data[c2_i10] = c2_status_data[c2_i10];
            }

            c2_st.site = &c2_ih_emlrtRSI;
            if (c2_h_strcmp(chartInstance, &c2_st, c2_status_data,
                            c2_status_size)) {
              c2_data->size[0] = 1;
              c2_data->size[1] = 0;
            } else {
              c2_st.site = &c2_jh_emlrtRSI;
              if (c2_g_strcmp(chartInstance, &c2_st, c2_status_data,
                              c2_status_size)) {
                c2_err_size[0] = 1;
                c2_err_size[1] = 0;
              }

              c2_guard1 = true;
            }

            c2_exitg1 = 1;
          } else {
            c2_b_guard1 = true;
          }
        } else {
          c2_b_guard1 = true;
        }

        if (c2_b_guard1) {
          c2_countToRead = c2_countRequested - c2_c_countRead;
          c2_st.site = &c2_kh_emlrtRSI;
          c2_InputStream_readPackets(chartInstance, &c2_st, c2_obj,
            c2_countToRead, c2_packets, &c2_b_count);
          c2_d = (real_T)c2_packets->size[1];
          c2_i9 = (int32_T)c2_d - 1;
          for (c2_ii = 0; c2_ii <= c2_i9; c2_ii++) {
            c2_b_ii = (real_T)c2_ii + 1.0;
            c2_i11 = c2_c_data->size[0] * c2_c_data->size[1];
            c2_c_data->size[0] = c2_data->size[0];
            c2_c_data->size[1] = c2_data->size[1];
            c2_st.site = &c2_lh_emlrtRSI;
            c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_st, c2_c_data,
              c2_i11, &c2_pc_emlrtRTEI);
            c2_f_loop_ub = c2_data->size[0] * c2_data->size[1] - 1;
            for (c2_i13 = 0; c2_i13 <= c2_f_loop_ub; c2_i13++) {
              c2_c_data->data[c2_i13] = c2_data->data[c2_i13];
            }

            c2_i14 = c2_packets->size[1] - 1;
            c2_i15 = (int32_T)c2_b_ii - 1;
            if ((c2_i15 < 0) || (c2_i15 > c2_i14)) {
              emlrtDynamicBoundsCheckR2012b(c2_i15, 0, c2_i14, &c2_r_emlrtBCI,
                (emlrtConstCTX)c2_sp);
            }

            c2_st.site = &c2_lh_emlrtRSI;
            c2_cat(chartInstance, &c2_st, c2_c_data, c2_packets->data[c2_i15].f1,
                   c2_data);
          }

          c2_c_countRead += c2_b_count;
          c2_guard1 = false;
        }
      } else {
        c2_guard1 = true;
        c2_exitg1 = 1;
      }
    } while (c2_exitg1 == 0);

    if (c2_guard1) {
      if (c2_c_countRead > c2_countRequested) {
        c2_st.site = &c2_mh_emlrtRSI;
        c2_Stream_extractFromPacket(chartInstance, &c2_st, c2_data,
          c2_countRequested + 1.0, c2_c_countRead, c2_excessData);
        c2_st.site = &c2_nh_emlrtRSI;
        c2_c_obj = c2_obj;
        c2_i4 = c2_c_obj->PartialPacket->size[0] * c2_c_obj->PartialPacket->
          size[1];
        c2_c_obj->PartialPacket->size[0] = c2_excessData->size[0];
        c2_c_obj->PartialPacket->size[1] = c2_excessData->size[1];
        c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_st,
          c2_c_obj->PartialPacket, c2_i4, &c2_mc_emlrtRTEI);
        c2_b_loop_ub = c2_excessData->size[0] * c2_excessData->size[1] - 1;
        for (c2_i6 = 0; c2_i6 <= c2_b_loop_ub; c2_i6++) {
          c2_c_obj->PartialPacket->data[c2_i6] = c2_excessData->data[c2_i6];
        }

        c2_c_obj->PartialPacketStart = 1.0;
        c2_c_obj->PartialPacketCount = (real_T)c2_excessData->size[1];
        c2_i8 = c2_b_data->size[0] * c2_b_data->size[1];
        c2_b_data->size[0] = c2_data->size[0];
        c2_b_data->size[1] = c2_data->size[1];
        c2_st.site = &c2_oh_emlrtRSI;
        c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_st, c2_b_data, c2_i8,
          &c2_nc_emlrtRTEI);
        c2_e_loop_ub = c2_data->size[0] * c2_data->size[1] - 1;
        for (c2_i12 = 0; c2_i12 <= c2_e_loop_ub; c2_i12++) {
          c2_b_data->data[c2_i12] = c2_data->data[c2_i12];
        }

        c2_st.site = &c2_oh_emlrtRSI;
        c2_b_Stream_extractFromPacket(chartInstance, &c2_st, c2_b_data,
          c2_countRequested, c2_data);
        c2_c_countRead = c2_countRequested;
      }

      c2_b3 = (c2_err_size[1] == 0);
      if (!c2_b3) {
        c2_st.site = &c2_ph_emlrtRSI;
        c2_d_obj = c2_obj;
        c2_i5 = c2_d_obj->PartialPacket->size[0] * c2_d_obj->PartialPacket->
          size[1];
        c2_d_obj->PartialPacket->size[0] = c2_data->size[0];
        c2_d_obj->PartialPacket->size[1] = c2_data->size[1];
        c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_st,
          c2_d_obj->PartialPacket, c2_i5, &c2_mc_emlrtRTEI);
        c2_c_loop_ub = c2_data->size[0] * c2_data->size[1] - 1;
        for (c2_i7 = 0; c2_i7 <= c2_c_loop_ub; c2_i7++) {
          c2_d_obj->PartialPacket->data[c2_i7] = c2_data->data[c2_i7];
        }

        c2_d_obj->PartialPacketStart = 1.0;
        c2_d_obj->PartialPacketCount = (real_T)c2_data->size[1];
        c2_data->size[0] = 1;
        c2_data->size[1] = 0;
        c2_c_countRead = 0.0;
      }
    }
  }

  c2_emxFree_uint8_T(chartInstance, &c2_c_data);
  c2_emxFree_uint8_T(chartInstance, &c2_b_data);
  c2_emxFree_cell_wrap_31(chartInstance, &c2_packets);
  c2_emxFree_uint8_T(chartInstance, &c2_excessData);
  *c2_countRead = c2_c_countRead;
}

static void c2_BufferChannel_write(SFc2_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_matlabshared_asyncio_buffer_internal_BufferChannel
  *c2_obj, c2_emxArray_uint8_T *c2_data)
{
  static char_T c2_b_cv1[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't',
    't', 'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T c2_b_cv4[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't',
    't', 'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'V', 'e', 'c', 't', 'o', 'r' };

  static char_T c2_b_cv[37] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'B', 'u', 'f',
    'f', 'e', 'r', 'C', 'h', 'a', 'n', 'n', 'e', 'l', ':', 'e', 'x', 'p', 'e',
    'c', 't', 'e', 'd', 'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T c2_b_cv3[35] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'B', 'u',
    'f', 'f', 'e', 'r', 'C', 'h', 'a', 'n', 'n', 'e', 'l', ':', 'e', 'x', 'p',
    'e', 'c', 't', 'e', 'd', 'V', 'e', 'c', 't', 'o', 'r' };

  static char_T c2_b_cv6[35] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'a',
    'l', 'i', 'd', 'a', 't', 'o', 'r', 's', ':', 'm', 'u', 's', 't', 'B', 'e',
    'N', 'o', 'n', 'n', 'e', 'g', 'a', 't', 'i', 'v', 'e' };

  static char_T c2_b_cv2[4] = { 'd', 'a', 't', 'a' };

  static char_T c2_b_cv5[4] = { 'd', 'a', 't', 'a' };

  CoderChannel c2_b_chImpl;
  CoderChannel c2_chImpl;
  CoderOutputStream c2_b_streamImpl;
  CoderOutputStream c2_c_streamImpl;
  CoderOutputStream c2_d_streamImpl;
  CoderOutputStream c2_streamImpl;
  c2_cell_wrap_37 c2_r;
  c2_emxArray_cell_wrap_37_1 c2_r1;
  c2_emxArray_cell_wrap_37_1x1 c2_packets;
  c2_emxArray_uint8_T *c2_packet;
  c2_matlabshared_asyncio_buffer_internal_BufferChannel *c2_d_obj;
  c2_matlabshared_asyncio_internal_OutputStream *c2_b_obj;
  c2_matlabshared_asyncio_internal_OutputStream *c2_c_obj;
  c2_matlabshared_asyncio_internal_OutputStream *c2_e_obj;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_g_y = NULL;
  const mxArray *c2_h_y = NULL;
  const mxArray *c2_y = NULL;
  real_T c2_A;
  real_T c2__in;
  real_T c2_b__in;
  real_T c2_b_a;
  real_T c2_b_count;
  real_T c2_b_packetStartIndex;
  real_T c2_count;
  real_T c2_countToWrite;
  real_T c2_countWritten;
  real_T c2_countWrittenThisIteration;
  real_T c2_in;
  real_T c2_packetEndIndex;
  real_T c2_packetStartIndex;
  real_T c2_val;
  real_T c2_x;
  int32_T c2_b_packets[2];
  int32_T c2_status_size[2];
  int32_T c2_iv[1];
  int32_T c2_b_loop_ub;
  int32_T c2_b_success;
  int32_T c2_c_success;
  int32_T c2_d_success;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_ii;
  int32_T c2_loop_ub;
  int32_T c2_success;
  char_T c2_status_data[9];
  boolean_T c2_b;
  boolean_T c2_b1;
  boolean_T c2_b2;
  boolean_T c2_b3;
  boolean_T c2_b_p;
  boolean_T c2_exitg1;
  boolean_T c2_exitg2;
  boolean_T c2_guard1;
  boolean_T c2_out;
  boolean_T c2_p;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_st.site = &c2_ni_emlrtRSI;
  c2_b_st.site = &c2_o_emlrtRSI;
  c2_b = (c2_data->size[0] == 0);
  c2_b1 = (c2_data->size[1] == 0);
  if (!((!c2_b) && (!c2_b1))) {
    c2_y = NULL;
    sf_mex_assign(&c2_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 37),
                  false);
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2, 1, 48),
                  false);
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_b_cv2, 10, 0U, 1U, 0U, 2, 1, 4),
                  false);
    sf_mex_call(&c2_b_st, &c2_tb_emlrtMCI, "error", 0U, 2U, 14, c2_y, 14,
                sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_b_st, NULL, "message", 1U, 2U, 14, c2_b_y, 14, c2_c_y)));
  }

  c2_b_st.site = &c2_o_emlrtRSI;
  c2_b2 = (c2_data->size[0] == 1);
  c2_b3 = (c2_data->size[1] == 1);
  if (!(c2_b2 || c2_b3)) {
    c2_d_y = NULL;
    sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_b_cv3, 10, 0U, 1U, 0U, 2, 1, 35),
                  false);
    c2_e_y = NULL;
    sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_b_cv4, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c2_f_y = NULL;
    sf_mex_assign(&c2_f_y, sf_mex_create("y", c2_b_cv5, 10, 0U, 1U, 0U, 2, 1, 4),
                  false);
    sf_mex_call(&c2_b_st, &c2_ub_emlrtMCI, "error", 0U, 2U, 14, c2_d_y, 14,
                sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_b_st, NULL, "message", 1U, 2U, 14, c2_e_y, 14, c2_f_y)));
  }

  c2_obj->BytesPerElement = 1.0;
  c2_st.site = &c2_oi_emlrtRSI;
  c2_b_obj = &c2_obj->OutputStream;
  c2_countWritten = 0.0;
  c2_countToWrite = (real_T)c2_data->size[1];
  c2_emxInitStruct_cell_wrap_37(chartInstance, &c2_st, &c2_r, &c2_hd_emlrtRTEI);
  c2_i = c2_r.f1->size[0] * c2_r.f1->size[1];
  c2_r.f1->size[0] = c2_data->size[0];
  c2_r.f1->size[1] = c2_data->size[1];
  c2_b_st.site = &c2_oi_emlrtRSI;
  c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_b_st, c2_r.f1, c2_i,
    &c2_gd_emlrtRTEI);
  c2_loop_ub = c2_data->size[0] * c2_data->size[1] - 1;
  for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
    c2_r.f1->data[c2_i1] = c2_data->data[c2_i1];
  }

  c2_emxInit_cell_wrap_37_1x1(chartInstance, &c2_packets);
  c2_i2 = c2_packets.size[0] * c2_packets.size[1];
  c2_packets.size[0] = 1;
  c2_packets.size[1] = 1;
  for (c2_i3 = 0; c2_i3 < 2; c2_i3++) {
    c2_b_packets[c2_i3] = c2_packets.size[c2_i3];
  }

  c2_emxEnsureCapacity_cell_wrap_37(chartInstance, &c2_st, c2_packets.data,
    c2_b_packets, c2_i2, &c2_g_emlrtRTEI);
  c2_emxCopyStruct_cell_wrap_37(chartInstance, &c2_st, &c2_packets.data[0],
    &c2_r, &c2_g_emlrtRTEI);
  c2_emxFreeStruct_cell_wrap_37(chartInstance, &c2_r);
  c2_packetStartIndex = 1.0;
  c2_emxInit_uint8_T(chartInstance, &c2_st, &c2_packet, 2, &c2_l_emlrtRTEI);
  c2_emxInit_cell_wrap_37_1(chartInstance, &c2_r1);
  c2_exitg1 = false;
  while ((!c2_exitg1) && (c2_countWritten < c2_countToWrite)) {
    c2_b_st.site = &c2_he_emlrtRSI;
    c2_c_obj = c2_b_obj;
    c2_c_st.site = &c2_me_emlrtRSI;
    c2_streamImpl = c2_c_obj->StreamImpl;
    c2_success = coderStreamGetSpaceAvailable(c2_streamImpl, &c2_count);
    c2_d_st.site = &c2_ne_emlrtRSI;
    c2_b_streamImpl = c2_streamImpl;
    c2_b_success = c2_success;
    if ((real_T)c2_b_success == 0.0) {
      c2_chImpl = coderStreamGetChannel(c2_b_streamImpl);
      c2_e_st.site = &c2_oe_emlrtRSI;
      c2_b_API_channelErrorIfFailed(chartInstance, &c2_e_st, c2_chImpl);
    }

    c2_guard1 = false;
    if (c2_count == 0.0) {
      c2_b_st.site = &c2_ie_emlrtRSI;
      c2_Stream_wait(chartInstance, &c2_b_st, c2_b_obj, c2_status_data,
                     c2_status_size);
      c2_b_st.site = &c2_je_emlrtRSI;
      if (!c2_f_strcmp(chartInstance, &c2_b_st, c2_status_data, c2_status_size))
      {
        c2_b_st.site = &c2_ke_emlrtRSI;
        c2_g_strcmp(chartInstance, &c2_b_st, c2_status_data, c2_status_size);
        c2_exitg1 = true;
      } else {
        c2_guard1 = true;
      }
    } else {
      c2_guard1 = true;
    }

    if (c2_guard1) {
      c2_b_st.site = &c2_le_emlrtRSI;
      c2_e_obj = c2_b_obj;
      c2_b_packetStartIndex = c2_packetStartIndex;
      c2_b_count = 0.0;
      c2_packetEndIndex = c2_b_packetStartIndex;
      c2_i4 = (int32_T)(1.0 + (1.0 - c2_b_packetStartIndex));
      emlrtForLoopVectorCheckR2021a(c2_b_packetStartIndex, 1.0, 1.0,
        mxDOUBLE_CLASS, c2_i4, &c2_md_emlrtRTEI, &c2_b_st);
      c2_ii = 0;
      c2_exitg2 = false;
      while ((!c2_exitg2) && (c2_ii <= c2_i4 - 1)) {
        c2_i5 = c2_r1.size[0];
        c2_r1.size[0] = 1;
        c2_iv[0] = c2_r1.size[0];
        c2_emxEnsureCapacity_cell_wrap_371(chartInstance, &c2_b_st, c2_r1.data,
          c2_iv, c2_i5, &c2_k_emlrtRTEI);
        c2_emxCopyStruct_cell_wrap_37(chartInstance, &c2_b_st, &c2_r1.data[0],
          &c2_packets.data[0], &c2_k_emlrtRTEI);
        if (c2_b_packetStartIndex != (real_T)(int32_T)muDoubleScalarFloor
            (c2_b_packetStartIndex)) {
          emlrtIntegerCheckR2012b(c2_b_packetStartIndex, &c2_emlrtDCI, &c2_b_st);
        }

        c2_i6 = (int32_T)c2_b_packetStartIndex - 1;
        if ((c2_i6 < 0) || (c2_i6 > 0)) {
          emlrtDynamicBoundsCheckR2012b(c2_i6, 0, 0, &c2_e_emlrtBCI, &c2_b_st);
        }

        c2_i7 = c2_packet->size[0] * c2_packet->size[1];
        c2_packet->size[0] = c2_r1.data[0].f1->size[0];
        c2_packet->size[1] = c2_r1.data[0].f1->size[1];
        c2_emxEnsureCapacity_uint8_T(chartInstance, &c2_b_st, c2_packet, c2_i7,
          &c2_l_emlrtRTEI);
        c2_b_loop_ub = c2_r1.data[0].f1->size[0] * c2_r1.data[0].f1->size[1] - 1;
        for (c2_i8 = 0; c2_i8 <= c2_b_loop_ub; c2_i8++) {
          c2_packet->data[c2_i8] = c2_r1.data[0].f1->data[c2_i8];
        }

        c2_c_st.site = &c2_jf_emlrtRSI;
        c2_c_streamImpl = c2_e_obj->StreamImpl;
        c2_c_success = coderOutputStreamWriteTypedDataOld(c2_c_streamImpl,
          &c2_countWrittenThisIteration, 1, "uint8", c2_packet->size[0] *
          c2_packet->size[1], &c2_packet->data[0]);
        c2_d_st.site = &c2_kf_emlrtRSI;
        c2_d_streamImpl = c2_c_streamImpl;
        c2_d_success = c2_c_success;
        if ((real_T)c2_d_success == 0.0) {
          c2_b_chImpl = coderStreamGetChannel(c2_d_streamImpl);
          c2_e_st.site = &c2_oe_emlrtRSI;
          c2_b_API_channelErrorIfFailed(chartInstance, &c2_e_st, c2_b_chImpl);
        }

        if (c2_countWrittenThisIteration == 0.0) {
          c2_exitg2 = true;
        } else {
          c2_b_count += c2_countWrittenThisIteration;
          c2_packetEndIndex++;
          c2_ii++;
        }
      }

      c2_countWritten += c2_b_count;
      c2_packetStartIndex = c2_packetEndIndex;
    }
  }

  c2_emxFree_cell_wrap_37_1(chartInstance, &c2_r1);
  c2_emxFree_uint8_T(chartInstance, &c2_packet);
  c2_emxFree_cell_wrap_37_1x1(chartInstance, &c2_packets);
  c2_d_obj = c2_obj;
  c2_val = c2_obj->TotalElementsWritten + (real_T)c2_data->size[0];
  c2_st.site = NULL;
  c2__in = c2_val;
  c2_in = c2__in;
  c2_b__in = c2_in;
  c2_b_st.site = &c2_pi_emlrtRSI;
  c2_A = c2_b__in;
  c2_x = c2_A;
  c2_b_a = c2_x;
  c2_out = (c2_b_a >= 0.0);
  if (c2_out) {
    c2_p = true;
  } else {
    c2_p = false;
  }

  c2_b_p = c2_p;
  if (!c2_b_p) {
    c2_g_y = NULL;
    sf_mex_assign(&c2_g_y, sf_mex_create("y", c2_b_cv6, 10, 0U, 1U, 0U, 2, 1, 35),
                  false);
    c2_h_y = NULL;
    sf_mex_assign(&c2_h_y, sf_mex_create("y", c2_b_cv6, 10, 0U, 1U, 0U, 2, 1, 35),
                  false);
    sf_mex_call(&c2_b_st, &c2_vb_emlrtMCI, "error", 0U, 2U, 14, c2_g_y, 14,
                sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_b_st, NULL, "message", 1U, 1U, 14, c2_h_y)));
  }

  c2_d_obj->TotalElementsWritten = c2_val;
}

static boolean_T c2_i_strcmp(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_char_T *c2_b)
{
  static char_T c2_b_cv[5] = { 'u', 'i', 'n', 't', '8' };

  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_g_y = NULL;
  const mxArray *c2_i_y = NULL;
  const mxArray *c2_j_y = NULL;
  const mxArray *c2_k_y = NULL;
  const mxArray *c2_m_y = NULL;
  const mxArray *c2_n_y = NULL;
  const mxArray *c2_y = NULL;
  int32_T c2_b_kstr;
  int32_T c2_exitg1;
  int32_T c2_kstr;
  int32_T c2_remainingDimsB;
  char_T c2_b_s;
  char_T c2_b_x;
  char_T c2_c_s;
  char_T c2_c_x;
  char_T c2_d_s;
  char_T c2_d_x;
  char_T c2_e_s;
  char_T c2_f_s;
  char_T c2_g_s;
  char_T c2_h_s;
  char_T c2_h_y;
  char_T c2_l_y;
  char_T c2_s;
  char_T c2_x;
  int8_T c2_b_u;
  int8_T c2_c_u;
  int8_T c2_d_u;
  int8_T c2_e_u;
  boolean_T c2_b1;
  boolean_T c2_b2;
  boolean_T c2_b3;
  boolean_T c2_b_b;
  boolean_T c2_b_p;
  boolean_T c2_bool;
  boolean_T c2_c_p;
  boolean_T c2_d_p;
  boolean_T c2_p;
  (void)chartInstance;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_st.site = &c2_qd_emlrtRSI;
  c2_b_st.site = &c2_rd_emlrtRSI;
  c2_bool = false;
  c2_remainingDimsB = c2_b->size[1];
  if (c2_remainingDimsB != 5) {
  } else {
    c2_kstr = 1;
    do {
      c2_exitg1 = 0;
      if (c2_kstr - 1 < 5) {
        c2_b_kstr = c2_kstr - 1;
        c2_c_st.site = &c2_sd_emlrtRSI;
        c2_s = c2_b_cv[c2_b_kstr];
        c2_b_s = c2_s;
        c2_b_b = ((real_T)(uint8_T)c2_b_s <= 127.0);
        c2_p = c2_b_b;
        if (!c2_p) {
          c2_y = NULL;
          sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c2_b_y = NULL;
          sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
            1, 31), false);
          c2_b_u = MAX_int8_T;
          c2_c_y = NULL;
          sf_mex_assign(&c2_c_y, sf_mex_create("y", &c2_b_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c2_c_st, &c2_eb_emlrtMCI, "error", 0U, 2U, 14, c2_y, 14,
                      sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c2_c_st, NULL, "message", 1U, 2U, 14, c2_b_y, 14,
                        c2_c_y)));
        }

        c2_c_st.site = &c2_td_emlrtRSI;
        c2_c_s = c2_b->data[c2_b_kstr];
        c2_d_s = c2_c_s;
        c2_b1 = ((real_T)(uint8_T)c2_d_s <= 127.0);
        c2_b_p = c2_b1;
        if (!c2_b_p) {
          c2_d_y = NULL;
          sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
            1, 31), false);
          c2_e_y = NULL;
          sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
            1, 31), false);
          c2_c_u = MAX_int8_T;
          c2_f_y = NULL;
          sf_mex_assign(&c2_f_y, sf_mex_create("y", &c2_c_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c2_c_st, &c2_eb_emlrtMCI, "error", 0U, 2U, 14, c2_d_y, 14,
                      sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c2_c_st, NULL, "message", 1U, 2U, 14, c2_e_y, 14,
                        c2_f_y)));
        }

        c2_c_st.site = &c2_ud_emlrtRSI;
        c2_x = c2_b_cv[c2_b_kstr];
        c2_d_st.site = &c2_vd_emlrtRSI;
        c2_b_x = c2_x;
        c2_e_st.site = &c2_wd_emlrtRSI;
        c2_e_s = c2_b_x;
        c2_f_s = c2_e_s;
        c2_b2 = ((real_T)(uint8_T)c2_f_s <= 127.0);
        c2_c_p = c2_b2;
        if (!c2_c_p) {
          c2_g_y = NULL;
          sf_mex_assign(&c2_g_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
            1, 31), false);
          c2_i_y = NULL;
          sf_mex_assign(&c2_i_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
            1, 31), false);
          c2_d_u = MAX_int8_T;
          c2_j_y = NULL;
          sf_mex_assign(&c2_j_y, sf_mex_create("y", &c2_d_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c2_e_st, &c2_eb_emlrtMCI, "error", 0U, 2U, 14, c2_g_y, 14,
                      sf_mex_call(&c2_e_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c2_e_st, NULL, "message", 1U, 2U, 14, c2_i_y, 14,
                        c2_j_y)));
        }

        c2_h_y = c2_cv10[(uint8_T)c2_b_x & 127];
        c2_c_st.site = &c2_ud_emlrtRSI;
        c2_c_x = c2_b->data[c2_b_kstr];
        c2_d_st.site = &c2_vd_emlrtRSI;
        c2_d_x = c2_c_x;
        c2_e_st.site = &c2_wd_emlrtRSI;
        c2_g_s = c2_d_x;
        c2_h_s = c2_g_s;
        c2_b3 = ((real_T)(uint8_T)c2_h_s <= 127.0);
        c2_d_p = c2_b3;
        if (!c2_d_p) {
          c2_k_y = NULL;
          sf_mex_assign(&c2_k_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
            1, 31), false);
          c2_m_y = NULL;
          sf_mex_assign(&c2_m_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
            1, 31), false);
          c2_e_u = MAX_int8_T;
          c2_n_y = NULL;
          sf_mex_assign(&c2_n_y, sf_mex_create("y", &c2_e_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c2_e_st, &c2_eb_emlrtMCI, "error", 0U, 2U, 14, c2_k_y, 14,
                      sf_mex_call(&c2_e_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c2_e_st, NULL, "message", 1U, 2U, 14, c2_m_y, 14,
                        c2_n_y)));
        }

        c2_l_y = c2_cv10[(uint8_T)c2_d_x & 127];
        if (c2_h_y != c2_l_y) {
          c2_exitg1 = 1;
        } else {
          c2_kstr++;
        }
      } else {
        c2_bool = true;
        c2_exitg1 = 1;
      }
    } while (c2_exitg1 == 0);
  }

  return c2_bool;
}

static void c2_b_indexShapeCheck(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, int32_T c2_matrixSize[2])
{
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_y = NULL;
  boolean_T c2_b;
  boolean_T c2_b_c;
  boolean_T c2_c;
  boolean_T c2_c_c;
  boolean_T c2_d_c;
  boolean_T c2_nonSingletonDimFound;
  (void)chartInstance;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_nonSingletonDimFound = false;
  if (c2_matrixSize[0] != 1) {
    c2_nonSingletonDimFound = true;
  }

  if (c2_matrixSize[1] != 1) {
    if (c2_nonSingletonDimFound) {
      c2_b = false;
    } else {
      c2_nonSingletonDimFound = true;
      c2_b = c2_nonSingletonDimFound;
    }
  } else {
    c2_b = c2_nonSingletonDimFound;
  }

  if (c2_b) {
    if (c2_matrixSize[0] != 1) {
      c2_b_c = true;
    } else {
      c2_b_c = false;
    }

    if (c2_b_c || (c2_matrixSize[1] == 1)) {
      c2_b_c = true;
    } else {
      c2_b_c = false;
    }

    c2_d_c = c2_b_c;
    if (c2_d_c) {
      c2_c = true;
    } else {
      c2_c = false;
    }
  } else {
    c2_c = false;
  }

  c2_st.site = &c2_ch_emlrtRSI;
  c2_c_c = c2_c;
  if (c2_c_c) {
    c2_y = NULL;
    sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv14, 10, 0U, 1U, 0U, 2, 1, 33),
                  false);
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv14, 10, 0U, 1U, 0U, 2, 1, 33),
                  false);
    sf_mex_call(&c2_st, &c2_lb_emlrtMCI, "error", 0U, 2U, 14, c2_y, 14,
                sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_st, NULL, "message", 1U, 1U, 14, c2_b_y)));
  }
}

static boolean_T c2_all_in_integer_range(SFc2_wwtp3InstanceStruct *chartInstance,
  real_T c2_x)
{
  real_T c2_b;
  real_T c2_b_a;
  real_T c2_b_x;
  real_T c2_c_a;
  real_T c2_c_x;
  real_T c2_d_x;
  real_T c2_y;
  boolean_T c2_b_b;
  boolean_T c2_b_p;
  boolean_T c2_p;
  (void)chartInstance;
  c2_p = true;
  c2_b_a = c2_x;
  c2_c_a = c2_b_a;
  c2_b_x = c2_c_a;
  c2_b = c2_b_x;
  c2_b_p = (c2_b >= 0.0);
  if (c2_b_p) {
    c2_c_x = c2_x;
    c2_d_x = c2_c_x;
    c2_y = c2_d_x;
    if (c2_x == c2_y) {
      c2_b_b = true;
    } else {
      c2_b_b = false;
    }
  } else {
    c2_b_b = false;
  }

  if (!c2_b_b) {
    c2_p = false;
  }

  return c2_p;
}

static void c2_Modbus_flushIO(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_icomm_interface_modbus_tcpip_Modbus *c2_obj)
{
  CoderChannel c2_b_chImpl;
  CoderChannel c2_chImpl;
  CoderInputStream c2_b_streamImpl;
  CoderInputStream c2_streamImpl;
  CoderOutputStream c2_c_streamImpl;
  CoderOutputStream c2_d_streamImpl;
  c2_matlabshared_asyncio_internal_InputStream *c2_c_obj;
  c2_matlabshared_asyncio_internal_InputStream *c2_d_obj;
  c2_matlabshared_asyncio_internal_OutputStream *c2_g_obj;
  c2_matlabshared_network_internal_TCPClient *c2_b_obj;
  c2_matlabshared_network_internal_TCPClient *c2_f_obj;
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_e_obj;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  emlrtStack c2_f_st;
  emlrtStack c2_st;
  int32_T c2_b_success;
  int32_T c2_c_success;
  int32_T c2_d_success;
  int32_T c2_success;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_ej_emlrtRSI;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_f_st.prev = &c2_e_st;
  c2_f_st.tls = c2_e_st.tls;
  c2_b_obj = c2_obj->TcpIpObj;
  c2_b_st.site = &c2_n_emlrtRSI;
  c2_TCPClient_validateConnected(chartInstance, &c2_b_st, c2_b_obj);
  c2_b_st.site = &c2_n_emlrtRSI;
  c2_c_obj = &c2_b_obj->AsyncIOChannel->InputStream;
  c2_c_st.site = &c2_gj_emlrtRSI;
  c2_InputStream_clearPartialPacket(chartInstance, &c2_c_st, c2_c_obj);
  c2_c_st.site = &c2_hj_emlrtRSI;
  c2_d_obj = c2_c_obj;
  c2_d_st.site = &c2_tf_emlrtRSI;
  c2_streamImpl = c2_d_obj->StreamImpl;
  c2_success = coderStreamFlush(c2_streamImpl);
  c2_e_st.site = &c2_uf_emlrtRSI;
  c2_b_streamImpl = c2_streamImpl;
  c2_b_success = c2_success;
  if ((real_T)c2_b_success == 0.0) {
    c2_chImpl = coderStreamGetChannel(c2_b_streamImpl);
    c2_f_st.site = &c2_oe_emlrtRSI;
    c2_b_API_channelErrorIfFailed(chartInstance, &c2_f_st, c2_chImpl);
  }

  c2_b_st.site = &c2_n_emlrtRSI;
  c2_e_obj = c2_b_obj->TransportChannel;
  c2_c_st.site = &c2_qb_emlrtRSI;
  c2_BufferChannel_flush(chartInstance, &c2_c_st, &c2_e_obj->UnreadDataBuffer);
  c2_st.site = &c2_fj_emlrtRSI;
  c2_f_obj = c2_obj->TcpIpObj;
  c2_b_st.site = &c2_n_emlrtRSI;
  c2_TCPClient_validateConnected(chartInstance, &c2_b_st, c2_f_obj);
  c2_b_st.site = &c2_n_emlrtRSI;
  c2_g_obj = &c2_f_obj->AsyncIOChannel->OutputStream;
  c2_c_st.site = &c2_tf_emlrtRSI;
  c2_c_streamImpl = c2_g_obj->StreamImpl;
  c2_c_success = coderStreamFlush(c2_c_streamImpl);
  c2_d_st.site = &c2_uf_emlrtRSI;
  c2_d_streamImpl = c2_c_streamImpl;
  c2_d_success = c2_c_success;
  if ((real_T)c2_d_success == 0.0) {
    c2_b_chImpl = coderStreamGetChannel(c2_d_streamImpl);
    c2_e_st.site = &c2_oe_emlrtRSI;
    c2_b_API_channelErrorIfFailed(chartInstance, &c2_e_st, c2_b_chImpl);
  }
}

static void c2_BufferChannel_flush(SFc2_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_matlabshared_asyncio_buffer_internal_BufferChannel
  *c2_obj)
{
  CoderChannel c2_b_chImpl;
  CoderChannel c2_chImpl;
  CoderInputStream c2_b_streamImpl;
  CoderInputStream c2_streamImpl;
  CoderOutputStream c2_c_streamImpl;
  CoderOutputStream c2_d_streamImpl;
  c2_matlabshared_asyncio_buffer_internal_BufferChannel *c2_d_obj;
  c2_matlabshared_asyncio_buffer_internal_BufferChannel *c2_e_obj;
  c2_matlabshared_asyncio_internal_InputStream *c2_b_obj;
  c2_matlabshared_asyncio_internal_InputStream *c2_c_obj;
  c2_matlabshared_asyncio_internal_OutputStream *c2_f_obj;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  emlrtStack c2_st;
  int32_T c2_b_success;
  int32_T c2_c_success;
  int32_T c2_d_success;
  int32_T c2_success;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_ij_emlrtRSI;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_b_obj = &c2_obj->InputStream;
  c2_b_st.site = &c2_gj_emlrtRSI;
  c2_InputStream_clearPartialPacket(chartInstance, &c2_b_st, c2_b_obj);
  c2_b_st.site = &c2_hj_emlrtRSI;
  c2_c_obj = c2_b_obj;
  c2_c_st.site = &c2_tf_emlrtRSI;
  c2_streamImpl = c2_c_obj->StreamImpl;
  c2_success = coderStreamFlush(c2_streamImpl);
  c2_d_st.site = &c2_uf_emlrtRSI;
  c2_b_streamImpl = c2_streamImpl;
  c2_b_success = c2_success;
  if ((real_T)c2_b_success == 0.0) {
    c2_chImpl = coderStreamGetChannel(c2_b_streamImpl);
    c2_e_st.site = &c2_oe_emlrtRSI;
    c2_b_API_channelErrorIfFailed(chartInstance, &c2_e_st, c2_chImpl);
  }

  c2_st.site = &c2_jj_emlrtRSI;
  c2_d_obj = c2_obj;
  c2_b_st.site = &c2_cc_emlrtRSI;
  c2_e_obj = c2_d_obj;
  c2_e_obj->PartialPacket->size[0] = 1;
  c2_e_obj->PartialPacket->size[1] = 0;
  c2_e_obj->PartialPacket->size[0] = 0;
  c2_e_obj->PartialPacket->size[1] = 0;
  c2_d_obj->PartialPacketStart = 0.0;
  c2_d_obj->PartialPacketCount = 0.0;
  c2_st.site = &c2_kj_emlrtRSI;
  c2_f_obj = &c2_obj->OutputStream;
  c2_b_st.site = &c2_tf_emlrtRSI;
  c2_c_streamImpl = c2_f_obj->StreamImpl;
  c2_c_success = coderStreamFlush(c2_c_streamImpl);
  c2_c_st.site = &c2_uf_emlrtRSI;
  c2_d_streamImpl = c2_c_streamImpl;
  c2_d_success = c2_c_success;
  if ((real_T)c2_d_success == 0.0) {
    c2_b_chImpl = coderStreamGetChannel(c2_d_streamImpl);
    c2_d_st.site = &c2_oe_emlrtRSI;
    c2_b_API_channelErrorIfFailed(chartInstance, &c2_d_st, c2_b_chImpl);
  }
}

static boolean_T c2_Modbus_isReadFunction(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp, real_T c2_fcnCode)
{
  static int32_T c2_iv[2] = { 1, 4 };

  emlrtStack c2_b_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_y = NULL;
  real_T c2_b_a;
  real_T c2_c_a;
  real_T c2_varargin_1;
  uint64_T c2_a1;
  int32_T c2_i;
  boolean_T c2_x[4];
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_st.site = &c2_qj_emlrtRSI;
  c2_varargin_1 = c2_fcnCode;
  c2_b_st.site = &c2_oj_emlrtRSI;
  c2_b_a = c2_varargin_1;
  if (!c2_all_in_integer_range(chartInstance, c2_b_a)) {
    c2_y = NULL;
    sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv13, 10, 0U, 1U, 0U, 2, 1, 29),
                  false);
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv13, 10, 0U, 1U, 0U, 2, 1, 29),
                  false);
    sf_mex_call(&c2_b_st, &c2_hc_emlrtMCI, "error", 0U, 2U, 14, c2_y, 14,
                sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_b_st, NULL, "message", 1U, 1U, 14, c2_b_y)));
  }

  c2_c_a = c2_b_a;
  c2_a1 = (uint64_T)c2_c_a;
  c2_fcnCode = (real_T)(c2_a1 & 127ULL);
  for (c2_i = 0; c2_i < 4; c2_i++) {
    c2_x[c2_i] = (c2_fcnCode == 1.0 + (real_T)c2_i);
  }

  return c2_vectorAny(chartInstance, c2_x, c2_iv);
}

static void c2_DataConverter_convertReadValues(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_icomm_interface_coder_modbus_DataConverter *c2_obj, real_T c2_bytes_data[],
  int32_T c2_bytes_size[2], real_T c2_out_data[], int32_T c2_out_size[2])
{
  static char_T c2_b_cv1[40] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'g', 'e', 't', 'R', 'e', 's', 'h', 'a', 'p', 'e', 'D',
    'i', 'm', 's', '_', 'n', 'o', 't', 'S', 'a', 'm', 'e', 'N', 'u', 'm', 'e',
    'l' };

  static char_T c2_b_cv[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'r', 'e', 's', 'h', 'a', 'p', 'e', '_', 'e', 'm', 'p',
    't', 'y', 'R', 'e', 's', 'h', 'a', 'p', 'e', 'L', 'i', 'm', 'i', 't' };

  c2_emxArray_char_T *c2_out;
  c2_icomm_interface_coder_modbus_DataConverter *c2_b_obj;
  c2_icomm_interface_coder_modbus_DataConverter *c2_c_obj;
  c2_icomm_interface_coder_modbus_DataConverter *c2_d_obj;
  c2_icomm_interface_coder_modbus_DataConverter *c2_e_obj;
  c2_icomm_interface_coder_modbus_DataConverter *c2_g_obj;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  emlrtStack c2_f_st;
  emlrtStack c2_g_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_g_y = NULL;
  const mxArray *c2_h_y = NULL;
  const mxArray *c2_i_y = NULL;
  const mxArray *c2_j_y = NULL;
  const mxArray *c2_l_y = NULL;
  const mxArray *c2_m_y = NULL;
  const mxArray *c2_n_y = NULL;
  const mxArray *c2_o_y = NULL;
  const mxArray *c2_p_y = NULL;
  const mxArray *c2_q_y = NULL;
  const mxArray *c2_r_y = NULL;
  const mxArray *c2_t_y = NULL;
  const mxArray *c2_u_y = NULL;
  const mxArray *c2_v_y = NULL;
  const mxArray *c2_x_y = NULL;
  const mxArray *c2_y = NULL;
  const mxArray *c2_y_y = NULL;
  real_T c2_reshapedBytes_data[256];
  real_T c2_x_data[255];
  real_T c2_arg;
  real_T c2_b_arg;
  real_T c2_b_varargin_2;
  real_T c2_c_i;
  real_T c2_d;
  real_T c2_numout;
  real_T c2_value;
  real_T c2_varargin_1;
  real_T c2_varargin_2;
  real_T c2_x;
  int32_T c2_iv[2];
  int32_T c2_reshapedBytes_size[2];
  int32_T c2_sz[2];
  int32_T c2_x_size[2];
  int32_T c2_b_i;
  int32_T c2_b_kstr;
  int32_T c2_b_loop_ub;
  int32_T c2_b_u;
  int32_T c2_c_loop_ub;
  int32_T c2_c_u;
  int32_T c2_c_varargin_2;
  int32_T c2_d_i;
  int32_T c2_d_loop_ub;
  int32_T c2_d_varargin_2;
  int32_T c2_e_loop_ub;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_kstr;
  int32_T c2_loop_ub;
  int32_T c2_maxdimlen;
  int32_T c2_n;
  int32_T c2_nx;
  int32_T c2_remainingDimsA;
  int32_T c2_result;
  uint16_T c2_b_x;
  uint16_T c2_c_x;
  uint16_T c2_k_y;
  uint16_T c2_words;
  char_T c2_f_obj[13];
  char_T c2_b_s;
  char_T c2_c_s;
  char_T c2_d_s;
  char_T c2_d_x;
  char_T c2_e_s;
  char_T c2_e_x;
  char_T c2_f_s;
  char_T c2_f_x;
  char_T c2_g_s;
  char_T c2_g_x;
  char_T c2_h_s;
  char_T c2_s;
  char_T c2_s_y;
  char_T c2_w_y;
  int8_T c2_e_u;
  int8_T c2_f_u;
  int8_T c2_g_u;
  int8_T c2_h_u;
  uint8_T c2_bytes[2];
  uint8_T c2_d_u;
  uint8_T c2_xtmp;
  boolean_T c2_b;
  boolean_T c2_b1;
  boolean_T c2_b2;
  boolean_T c2_b3;
  boolean_T c2_b4;
  boolean_T c2_b_b;
  boolean_T c2_b_out;
  boolean_T c2_b_p;
  boolean_T c2_c_p;
  boolean_T c2_d_p;
  boolean_T c2_e_p;
  boolean_T c2_exitg1;
  boolean_T c2_f_p;
  boolean_T c2_p;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_f_st.prev = &c2_e_st;
  c2_f_st.tls = c2_e_st.tls;
  c2_g_st.prev = &c2_f_st;
  c2_g_st.tls = c2_f_st.tls;
  c2_numout = (real_T)(c2_bytes_size[0] * c2_bytes_size[1]) / 2.0;
  c2_x_size[0] = c2_bytes_size[1];
  c2_x_size[1] = c2_bytes_size[0];
  c2_loop_ub = c2_bytes_size[0] - 1;
  for (c2_i = 0; c2_i <= c2_loop_ub; c2_i++) {
    c2_b_loop_ub = c2_bytes_size[1] - 1;
    for (c2_i1 = 0; c2_i1 <= c2_b_loop_ub; c2_i1++) {
      c2_x_data[c2_i1 + c2_x_size[0] * c2_i] = c2_bytes_data[c2_i +
        c2_bytes_size[0] * c2_i1];
    }
  }

  c2_st.site = &c2_ak_emlrtRSI;
  c2_varargin_2 = c2_numout;
  c2_nx = c2_x_size[0] * c2_x_size[1];
  c2_b_st.site = &c2_ck_emlrtRSI;
  c2_b_varargin_2 = c2_varargin_2;
  c2_c_st.site = &c2_dk_emlrtRSI;
  c2_varargin_1 = c2_b_varargin_2;
  c2_arg = c2_varargin_1;
  if (c2_arg != muDoubleScalarFloor(c2_arg)) {
    c2_p = false;
  } else {
    c2_x = c2_arg;
    c2_b = muDoubleScalarIsInf(c2_x);
    if (c2_b) {
      c2_p = false;
    } else {
      c2_p = true;
    }
  }

  if (c2_p) {
    c2_b_arg = c2_varargin_1;
    if ((c2_b_arg < -2.147483648E+9) || (c2_b_arg > 2.147483647E+9)) {
      c2_b_p = false;
    } else {
      c2_b_p = true;
    }

    if (c2_b_p) {
      c2_b_b = true;
    } else {
      c2_b_b = false;
    }
  } else {
    c2_b_b = false;
  }

  if (!c2_b_b) {
    c2_y = NULL;
    sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv17, 10, 0U, 1U, 0U, 2, 1, 28),
                  false);
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv17, 10, 0U, 1U, 0U, 2, 1, 28),
                  false);
    c2_b_u = MIN_int32_T;
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", &c2_b_u, 6, 0U, 0U, 0U, 0), false);
    c2_c_u = MAX_int32_T;
    c2_e_y = NULL;
    sf_mex_assign(&c2_e_y, sf_mex_create("y", &c2_c_u, 6, 0U, 0U, 0U, 0), false);
    sf_mex_call(&c2_c_st, &c2_ob_emlrtMCI, "error", 0U, 2U, 14, c2_y, 14,
                sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_c_st, NULL, "message", 1U, 3U, 14, c2_b_y, 14, c2_c_y, 14, c2_e_y)));
  }

  c2_sz[1] = (int32_T)c2_varargin_2;
  c2_n = c2_x_size[0];
  if (c2_x_size[1] > c2_n) {
    c2_n = 1;
  }

  c2_maxdimlen = muIntScalarMax_sint32(c2_nx, c2_n);
  if (c2_maxdimlen < 2) {
    c2_d_y = NULL;
    sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c2_g_y = NULL;
    sf_mex_assign(&c2_g_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    sf_mex_call(&c2_st, &c2_ic_emlrtMCI, "error", 0U, 2U, 14, c2_d_y, 14,
                sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_st, NULL, "message", 1U, 1U, 14, c2_g_y)));
  }

  if (c2_sz[1] > c2_maxdimlen) {
    c2_f_y = NULL;
    sf_mex_assign(&c2_f_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c2_h_y = NULL;
    sf_mex_assign(&c2_h_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    sf_mex_call(&c2_st, &c2_ic_emlrtMCI, "error", 0U, 2U, 14, c2_f_y, 14,
                sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_st, NULL, "message", 1U, 1U, 14, c2_h_y)));
  }

  c2_c_varargin_2 = c2_sz[1];
  c2_d_varargin_2 = c2_c_varargin_2;
  c2_result = c2_d_varargin_2 << 1;
  if (c2_result != c2_nx) {
    c2_i_y = NULL;
    sf_mex_assign(&c2_i_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2, 1, 40),
                  false);
    c2_j_y = NULL;
    sf_mex_assign(&c2_j_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2, 1, 40),
                  false);
    sf_mex_call(&c2_st, &c2_kc_emlrtMCI, "error", 0U, 2U, 14, c2_i_y, 14,
                sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_st, NULL, "message", 1U, 1U, 14, c2_j_y)));
  }

  c2_iv[1] = (int32_T)c2_numout;
  c2_reshapedBytes_size[0] = c2_iv[1];
  for (c2_i2 = 0; c2_i2 < 2; c2_i2++) {
    c2_c_loop_ub = c2_iv[1] - 1;
    for (c2_i3 = 0; c2_i3 <= c2_c_loop_ub; c2_i3++) {
      c2_reshapedBytes_data[c2_i3 + c2_reshapedBytes_size[0] * c2_i2] =
        c2_x_data[c2_i2 + (c2_i3 << 1)];
    }
  }

  c2_sz[0] = 1;
  if (c2_numout != (real_T)(int32_T)muDoubleScalarFloor(c2_numout)) {
    emlrtIntegerCheckR2012b(c2_numout, &c2_s_emlrtDCI, (emlrtConstCTX)c2_sp);
  }

  c2_sz[1] = (int32_T)c2_numout;
  c2_i4 = (int32_T)c2_numout - 1;
  c2_out_size[0] = c2_sz[0];
  c2_out_size[1] = c2_sz[1];
  c2_emxInit_char_T(chartInstance, c2_sp, &c2_out, 2, &c2_o_emlrtRTEI);
  for (c2_b_i = 0; c2_b_i <= c2_i4; c2_b_i++) {
    c2_c_i = (real_T)c2_b_i + 1.0;
    c2_st.site = &c2_bk_emlrtRSI;
    c2_b_obj = c2_obj;
    c2_i5 = (int32_T)c2_c_i;
    if ((c2_i5 < 1) || (c2_i5 > c2_reshapedBytes_size[0])) {
      emlrtDynamicBoundsCheckR2012b(c2_i5, 1, c2_reshapedBytes_size[0],
        &c2_gb_emlrtBCI, &c2_st);
    }

    c2_d_i = c2_i5 - 1;
    for (c2_i6 = 0; c2_i6 < 2; c2_i6++) {
      c2_d = muDoubleScalarRound(c2_reshapedBytes_data[c2_d_i +
        c2_reshapedBytes_size[0] * c2_i6]);
      if (c2_d < 256.0) {
        if (c2_d >= 0.0) {
          c2_d_u = (uint8_T)c2_d;
        } else {
          c2_d_u = 0U;
        }
      } else if (c2_d >= 256.0) {
        c2_d_u = MAX_uint8_T;
      } else {
        c2_d_u = 0U;
      }

      c2_bytes[c2_i6] = c2_d_u;
    }

    c2_b_st.site = &c2_ek_emlrtRSI;
    c2_c_obj = c2_b_obj;
    c2_c_st.site = &c2_ik_emlrtRSI;
    memcpy((void *)&c2_words, (void *)&c2_bytes[0], (size_t)1 * sizeof(uint16_T));
    c2_c_st.site = &c2_jk_emlrtRSI;
    c2_d_obj = c2_c_obj;
    c2_d_st.site = &c2_pd_emlrtRSI;
    c2_e_obj = c2_d_obj;
    c2_i7 = c2_out->size[0] * c2_out->size[1];
    c2_out->size[0] = 1;
    c2_out->size[1] = c2_e_obj->ByteOrder->size[1];
    c2_emxEnsureCapacity_char_T(chartInstance, &c2_d_st, c2_out, c2_i7,
      &c2_b_emlrtRTEI);
    c2_d_loop_ub = c2_e_obj->ByteOrder->size[1] - 1;
    for (c2_i8 = 0; c2_i8 <= c2_d_loop_ub; c2_i8++) {
      c2_out->data[c2_i8] = c2_e_obj->ByteOrder->data[c2_i8];
    }

    c2_d_st.site = &c2_pd_emlrtRSI;
    for (c2_i9 = 0; c2_i9 < 13; c2_i9++) {
      c2_f_obj[c2_i9] = c2_d_obj->MachineByteOrder[c2_i9];
    }

    c2_b_out = !c2_e_strcmp(chartInstance, &c2_d_st, c2_out, c2_f_obj);
    if (c2_b_out) {
      c2_c_st.site = &c2_kk_emlrtRSI;
      c2_d_st.site = &c2_xd_emlrtRSI;
      c2_b_x = c2_words;
      memcpy((void *)&c2_bytes[0], (void *)&c2_b_x, (size_t)2 * sizeof(uint8_T));
      c2_xtmp = c2_bytes[0];
      c2_bytes[0] = c2_bytes[1];
      c2_bytes[1] = c2_xtmp;
      c2_d_st.site = &c2_xd_emlrtRSI;
      memcpy((void *)&c2_words, (void *)&c2_bytes[0], (size_t)1 * sizeof
             (uint16_T));
    }

    c2_b_st.site = &c2_fk_emlrtRSI;
    c2_g_obj = c2_b_obj;
    c2_i10 = c2_out->size[0] * c2_out->size[1];
    c2_out->size[0] = 1;
    c2_out->size[1] = c2_g_obj->WordOrder->size[1];
    c2_emxEnsureCapacity_char_T(chartInstance, &c2_b_st, c2_out, c2_i10,
      &c2_ld_emlrtRTEI);
    c2_e_loop_ub = c2_g_obj->WordOrder->size[1] - 1;
    for (c2_i11 = 0; c2_i11 <= c2_e_loop_ub; c2_i11++) {
      c2_out->data[c2_i11] = c2_g_obj->WordOrder->data[c2_i11];
    }

    c2_b_st.site = &c2_fk_emlrtRSI;
    c2_c_st.site = &c2_qd_emlrtRSI;
    c2_d_st.site = &c2_rd_emlrtRSI;
    c2_remainingDimsA = c2_out->size[1];
    if (c2_remainingDimsA != 10) {
    } else {
      c2_kstr = 1;
      c2_exitg1 = false;
      while ((!c2_exitg1) && (c2_kstr - 1 < 10)) {
        c2_b_kstr = c2_kstr - 1;
        c2_e_st.site = &c2_sd_emlrtRSI;
        c2_s = c2_out->data[c2_b_kstr];
        c2_b_s = c2_s;
        c2_b1 = ((real_T)(uint8_T)c2_b_s <= 127.0);
        c2_c_p = c2_b1;
        if (!c2_c_p) {
          c2_l_y = NULL;
          sf_mex_assign(&c2_l_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
            1, 31), false);
          c2_m_y = NULL;
          sf_mex_assign(&c2_m_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
            1, 31), false);
          c2_e_u = MAX_int8_T;
          c2_n_y = NULL;
          sf_mex_assign(&c2_n_y, sf_mex_create("y", &c2_e_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c2_e_st, &c2_eb_emlrtMCI, "error", 0U, 2U, 14, c2_l_y, 14,
                      sf_mex_call(&c2_e_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c2_e_st, NULL, "message", 1U, 2U, 14, c2_m_y, 14,
                        c2_n_y)));
        }

        c2_e_st.site = &c2_td_emlrtRSI;
        c2_c_s = c2_cv[c2_b_kstr];
        c2_d_s = c2_c_s;
        c2_b2 = ((real_T)(uint8_T)c2_d_s <= 127.0);
        c2_d_p = c2_b2;
        if (!c2_d_p) {
          c2_o_y = NULL;
          sf_mex_assign(&c2_o_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
            1, 31), false);
          c2_p_y = NULL;
          sf_mex_assign(&c2_p_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
            1, 31), false);
          c2_f_u = MAX_int8_T;
          c2_q_y = NULL;
          sf_mex_assign(&c2_q_y, sf_mex_create("y", &c2_f_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c2_e_st, &c2_eb_emlrtMCI, "error", 0U, 2U, 14, c2_o_y, 14,
                      sf_mex_call(&c2_e_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c2_e_st, NULL, "message", 1U, 2U, 14, c2_p_y, 14,
                        c2_q_y)));
        }

        c2_e_st.site = &c2_ud_emlrtRSI;
        c2_d_x = c2_out->data[c2_b_kstr];
        c2_f_st.site = &c2_vd_emlrtRSI;
        c2_e_x = c2_d_x;
        c2_g_st.site = &c2_wd_emlrtRSI;
        c2_e_s = c2_e_x;
        c2_f_s = c2_e_s;
        c2_b3 = ((real_T)(uint8_T)c2_f_s <= 127.0);
        c2_e_p = c2_b3;
        if (!c2_e_p) {
          c2_r_y = NULL;
          sf_mex_assign(&c2_r_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
            1, 31), false);
          c2_t_y = NULL;
          sf_mex_assign(&c2_t_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
            1, 31), false);
          c2_g_u = MAX_int8_T;
          c2_u_y = NULL;
          sf_mex_assign(&c2_u_y, sf_mex_create("y", &c2_g_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c2_g_st, &c2_eb_emlrtMCI, "error", 0U, 2U, 14, c2_r_y, 14,
                      sf_mex_call(&c2_g_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c2_g_st, NULL, "message", 1U, 2U, 14, c2_t_y, 14,
                        c2_u_y)));
        }

        c2_s_y = c2_cv10[(uint8_T)c2_e_x & 127];
        c2_e_st.site = &c2_ud_emlrtRSI;
        c2_f_x = c2_cv[c2_b_kstr];
        c2_f_st.site = &c2_vd_emlrtRSI;
        c2_g_x = c2_f_x;
        c2_g_st.site = &c2_wd_emlrtRSI;
        c2_g_s = c2_g_x;
        c2_h_s = c2_g_s;
        c2_b4 = ((real_T)(uint8_T)c2_h_s <= 127.0);
        c2_f_p = c2_b4;
        if (!c2_f_p) {
          c2_v_y = NULL;
          sf_mex_assign(&c2_v_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
            1, 31), false);
          c2_x_y = NULL;
          sf_mex_assign(&c2_x_y, sf_mex_create("y", c2_cv11, 10, 0U, 1U, 0U, 2,
            1, 31), false);
          c2_h_u = MAX_int8_T;
          c2_y_y = NULL;
          sf_mex_assign(&c2_y_y, sf_mex_create("y", &c2_h_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c2_g_st, &c2_eb_emlrtMCI, "error", 0U, 2U, 14, c2_v_y, 14,
                      sf_mex_call(&c2_g_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c2_g_st, NULL, "message", 1U, 2U, 14, c2_x_y, 14,
                        c2_y_y)));
        }

        c2_w_y = c2_cv10[(uint8_T)c2_g_x & 127];
        if (c2_s_y != c2_w_y) {
          c2_exitg1 = true;
        } else {
          c2_kstr++;
        }
      }
    }

    c2_b_st.site = &c2_gk_emlrtRSI;
    c2_c_x = c2_words;
    memcpy((void *)&c2_bytes[0], (void *)&c2_c_x, (size_t)2 * sizeof(uint8_T));
    c2_b_st.site = &c2_hk_emlrtRSI;
    memcpy((void *)&c2_k_y, (void *)&c2_bytes[0], (size_t)1 * sizeof(uint16_T));
    c2_value = (real_T)c2_k_y;
    c2_i12 = (int32_T)c2_c_i;
    if ((c2_i12 < 1) || (c2_i12 > c2_out_size[1])) {
      emlrtDynamicBoundsCheckR2012b(c2_i12, 1, c2_out_size[1], &c2_hb_emlrtBCI,
        (emlrtConstCTX)c2_sp);
    }

    c2_out_data[c2_i12 - 1] = c2_value;
  }

  c2_emxFree_char_T(chartInstance, &c2_out);
}

static void c2_handle_matlabCodegenDestructor(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_icomm_interface_modbus_tcpip_Modbus *c2_obj)
{
  CoderChannel c2_b_chImpl;
  CoderChannel c2_c_chImpl;
  CoderChannel c2_chImpl;
  c2_icomm_interface_modbus_tcpip_Modbus *c2_b_obj;
  c2_icomm_interface_modbus_tcpip_Modbus *c2_c_obj;
  c2_matlabshared_asyncio_internal_Channel *c2_f_obj;
  c2_matlabshared_asyncio_internal_Channel *c2_i_obj;
  c2_matlabshared_asyncio_internal_Channel *c2_j_obj;
  c2_matlabshared_network_internal_TCPClient *c2_d_obj;
  c2_matlabshared_network_internal_TCPClient *c2_g_obj;
  c2_matlabshared_network_internal_TCPClient *c2_h_obj;
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_e_obj;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  emlrtStack c2_f_st;
  emlrtStack c2_g_st;
  emlrtStack c2_h_st;
  emlrtStack c2_st;
  int32_T c2_b_success;
  int32_T c2_c_success;
  int32_T c2_success;
  boolean_T c2_b_value;
  boolean_T c2_out;
  boolean_T c2_result;
  boolean_T c2_value;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_f_st.prev = &c2_e_st;
  c2_f_st.tls = c2_e_st.tls;
  c2_g_st.prev = &c2_f_st;
  c2_g_st.tls = c2_f_st.tls;
  c2_h_st.prev = &c2_g_st;
  c2_h_st.tls = c2_g_st.tls;
  if (!c2_obj->matlabCodegenIsDeleted) {
    c2_obj->matlabCodegenIsDeleted = true;
    c2_st.site = &c2_lk_emlrtRSI;
    c2_b_obj = c2_obj;
    c2_b_st.site = &c2_mk_emlrtRSI;
    c2_c_obj = c2_b_obj;
    c2_c_st.site = &c2_nk_emlrtRSI;
    c2_d_obj = c2_c_obj->TcpIpObj;
    c2_d_st.site = &c2_n_emlrtRSI;
    c2_e_obj = c2_d_obj->TransportChannel;
    c2_e_st.site = &c2_qb_emlrtRSI;
    c2_f_obj = c2_e_obj->AsyncIOChannel;
    c2_f_st.site = &c2_fc_emlrtRSI;
    c2_chImpl = c2_f_obj->ChannelImpl;
    c2_success = coderChannelIsOpen(c2_chImpl, &c2_out);
    c2_g_st.site = &c2_gc_emlrtRSI;
    c2_API_channelErrorIfFailed(chartInstance, &c2_g_st, c2_chImpl, c2_success);
    if (c2_out) {
      c2_value = true;
    } else {
      c2_value = false;
    }

    c2_b_value = c2_value;
    if (c2_b_value && (!c2_c_obj->TransportInjected)) {
      c2_c_st.site = &c2_ok_emlrtRSI;
      c2_g_obj = c2_c_obj->TcpIpObj;
      c2_d_st.site = &c2_n_emlrtRSI;
      c2_h_obj = c2_g_obj;
      c2_e_st.site = &c2_n_emlrtRSI;
      c2_i_obj = c2_h_obj->AsyncIOChannel;
      c2_f_st.site = &c2_wj_emlrtRSI;
      c2_j_obj = c2_i_obj;
      c2_g_st.site = &c2_fc_emlrtRSI;
      c2_b_chImpl = c2_j_obj->ChannelImpl;
      c2_b_success = coderChannelIsOpen(c2_b_chImpl, &c2_result);
      c2_h_st.site = &c2_gc_emlrtRSI;
      c2_API_channelErrorIfFailed(chartInstance, &c2_h_st, c2_b_chImpl,
        c2_b_success);
      if (c2_result) {
        c2_f_st.site = &c2_xj_emlrtRSI;
        c2_c_chImpl = c2_i_obj->ChannelImpl;
        c2_c_success = coderChannelClose(c2_c_chImpl);
        c2_g_st.site = &c2_yj_emlrtRSI;
        c2_API_channelErrorIfFailed(chartInstance, &c2_g_st, c2_c_chImpl,
          c2_c_success);
      }
    }
  }
}

static void c2_b_handle_matlabCodegenDestructor(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_matlabshared_network_internal_TCPClient *c2_obj)
{
  CoderChannel c2_b_chImpl;
  CoderChannel c2_chImpl;
  c2_matlabshared_asyncio_internal_Channel *c2_d_obj;
  c2_matlabshared_asyncio_internal_Channel *c2_e_obj;
  c2_matlabshared_network_internal_TCPClient *c2_b_obj;
  c2_matlabshared_network_internal_TCPClient *c2_c_obj;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  emlrtStack c2_f_st;
  emlrtStack c2_st;
  int32_T c2_b_success;
  int32_T c2_success;
  boolean_T c2_result;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_f_st.prev = &c2_e_st;
  c2_f_st.tls = c2_e_st.tls;
  if (!c2_obj->matlabCodegenIsDeleted) {
    c2_obj->matlabCodegenIsDeleted = true;
    c2_st.site = &c2_lk_emlrtRSI;
    c2_b_obj = c2_obj;
    c2_b_st.site = &c2_n_emlrtRSI;
    c2_c_obj = c2_b_obj;
    c2_c_st.site = &c2_n_emlrtRSI;
    c2_d_obj = c2_c_obj->AsyncIOChannel;
    c2_d_st.site = &c2_wj_emlrtRSI;
    c2_e_obj = c2_d_obj;
    c2_e_st.site = &c2_fc_emlrtRSI;
    c2_chImpl = c2_e_obj->ChannelImpl;
    c2_success = coderChannelIsOpen(c2_chImpl, &c2_result);
    c2_f_st.site = &c2_gc_emlrtRSI;
    c2_API_channelErrorIfFailed(chartInstance, &c2_f_st, c2_chImpl, c2_success);
    if (c2_result) {
      c2_d_st.site = &c2_xj_emlrtRSI;
      c2_b_chImpl = c2_d_obj->ChannelImpl;
      c2_b_success = coderChannelClose(c2_b_chImpl);
      c2_e_st.site = &c2_yj_emlrtRSI;
      c2_API_channelErrorIfFailed(chartInstance, &c2_e_st, c2_b_chImpl,
        c2_b_success);
    }
  }
}

static void c2_c_handle_matlabCodegenDestructor(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_matlabshared_asyncio_internal_Channel *c2_obj)
{
  CoderChannel c2_b_chImpl;
  CoderChannel c2_c_chImpl;
  CoderChannel c2_chImpl;
  CoderChannel c2_d_chImpl;
  CoderChannel c2_e_chImpl;
  c2_matlabshared_asyncio_internal_Channel *c2_b_obj;
  c2_matlabshared_asyncio_internal_Channel *c2_c_obj;
  c2_matlabshared_asyncio_internal_Channel *c2_d_obj;
  c2_matlabshared_asyncio_internal_Channel *c2_e_obj;
  c2_matlabshared_asyncio_internal_Channel *c2_f_obj;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  emlrtStack c2_f_st;
  emlrtStack c2_st;
  int32_T c2_b_success;
  int32_T c2_c_success;
  int32_T c2_d_success;
  int32_T c2_success;
  boolean_T c2_b_result;
  boolean_T c2_result;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_f_st.prev = &c2_e_st;
  c2_f_st.tls = c2_e_st.tls;
  if (!c2_obj->matlabCodegenIsDeleted) {
    c2_obj->matlabCodegenIsDeleted = true;
    c2_st.site = &c2_lk_emlrtRSI;
    c2_b_obj = c2_obj;
    c2_b_st.site = &c2_pk_emlrtRSI;
    c2_c_obj = c2_b_obj;
    if (!(c2_c_obj->ChannelImpl == 0)) {
      c2_c_st.site = &c2_qk_emlrtRSI;
      c2_d_obj = c2_c_obj;
      c2_d_st.site = &c2_fc_emlrtRSI;
      c2_chImpl = c2_d_obj->ChannelImpl;
      c2_success = coderChannelIsOpen(c2_chImpl, &c2_result);
      c2_e_st.site = &c2_gc_emlrtRSI;
      c2_API_channelErrorIfFailed(chartInstance, &c2_e_st, c2_chImpl, c2_success);
      if (c2_result) {
        c2_c_st.site = &c2_rk_emlrtRSI;
        c2_warning(chartInstance, &c2_c_st);
        c2_c_st.site = &c2_sk_emlrtRSI;
        c2_e_obj = c2_c_obj;
        c2_d_st.site = &c2_wj_emlrtRSI;
        c2_f_obj = c2_e_obj;
        c2_e_st.site = &c2_fc_emlrtRSI;
        c2_d_chImpl = c2_f_obj->ChannelImpl;
        c2_c_success = coderChannelIsOpen(c2_d_chImpl, &c2_b_result);
        c2_f_st.site = &c2_gc_emlrtRSI;
        c2_API_channelErrorIfFailed(chartInstance, &c2_f_st, c2_d_chImpl,
          c2_c_success);
        if (c2_b_result) {
          c2_d_st.site = &c2_xj_emlrtRSI;
          c2_e_chImpl = c2_e_obj->ChannelImpl;
          c2_d_success = coderChannelClose(c2_e_chImpl);
          c2_e_st.site = &c2_yj_emlrtRSI;
          c2_API_channelErrorIfFailed(chartInstance, &c2_e_st, c2_e_chImpl,
            c2_d_success);
        }
      }

      c2_c_st.site = &c2_tk_emlrtRSI;
      c2_b_chImpl = c2_c_obj->ChannelImpl;
      c2_b_success = coderChannelTerm(c2_b_chImpl);
      c2_d_st.site = &c2_wk_emlrtRSI;
      c2_API_channelErrorIfFailed(chartInstance, &c2_d_st, c2_b_chImpl,
        c2_b_success);
      c2_c_st.site = &c2_uk_emlrtRSI;
      c2_c_chImpl = c2_c_obj->ChannelImpl;
      coderChannelDestroy(c2_c_chImpl);
      c2_c_obj->ChannelImpl = 0;
    }
  }
}

static void c2_warning(SFc2_wwtp3InstanceStruct *chartInstance, const emlrtStack
  *c2_sp)
{
  static char_T c2_msgID[37] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'C',
    'h', 'a', 'n', 'n', 'e', 'l', ':', 's', 't', 'i', 'l', 'l', 'O', 'p', 'e',
    'n', 'D', 'u', 'r', 'i', 'n', 'g', 'D', 'e', 'l', 'e', 't', 'e' };

  static char_T c2_b_cv[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T c2_b_cv1[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_y = NULL;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_msgID, 10, 0U, 1U, 0U, 2, 1, 37),
                false);
  c2_st.site = &c2_vk_emlrtRSI;
  c2_d_feval(chartInstance, &c2_st, c2_y, c2_c_feval(chartInstance, &c2_st,
              c2_b_y, c2_c_y));
}

static void c2_d_handle_matlabCodegenDestructor(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_obj)
{
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_b_obj;
  emlrtStack c2_b_st;
  emlrtStack c2_st;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  if (!c2_obj->matlabCodegenIsDeleted) {
    c2_obj->matlabCodegenIsDeleted = true;
    c2_st.site = &c2_lk_emlrtRSI;
    c2_b_obj = c2_obj;
    c2_b_st.site = &c2_qb_emlrtRSI;
    c2_Channel_close(chartInstance, &c2_b_st, &c2_b_obj->UnreadDataBuffer);
  }
}

static void c2_e_handle_matlabCodegenDestructor(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_matlabshared_asyncio_buffer_internal_BufferChannel *c2_obj)
{
  CoderChannel c2_b_chImpl;
  CoderChannel c2_c_chImpl;
  CoderChannel c2_chImpl;
  CoderChannel c2_d_chImpl;
  c2_matlabshared_asyncio_buffer_internal_BufferChannel *c2_b_obj;
  c2_matlabshared_asyncio_buffer_internal_BufferChannel *c2_c_obj;
  c2_matlabshared_asyncio_buffer_internal_BufferChannel *c2_d_obj;
  c2_matlabshared_asyncio_buffer_internal_BufferChannel *c2_e_obj;
  c2_matlabshared_asyncio_buffer_internal_BufferChannel *c2_f_obj;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  emlrtStack c2_st;
  int32_T c2_b_success;
  int32_T c2_c_success;
  int32_T c2_success;
  boolean_T c2_b_result;
  boolean_T c2_result;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  if (!c2_obj->matlabCodegenIsDeleted) {
    c2_obj->matlabCodegenIsDeleted = true;
    c2_st.site = &c2_lk_emlrtRSI;
    c2_b_obj = c2_obj;
    c2_b_st.site = &c2_bl_emlrtRSI;
    c2_c_obj = c2_b_obj;
    c2_c_st.site = &c2_fc_emlrtRSI;
    c2_chImpl = c2_c_obj->ChannelImpl;
    c2_success = coderChannelIsOpen(c2_chImpl, &c2_result);
    c2_d_st.site = &c2_gc_emlrtRSI;
    c2_API_channelErrorIfFailed(chartInstance, &c2_d_st, c2_chImpl, c2_success);
    if (c2_result) {
      c2_b_st.site = &c2_cl_emlrtRSI;
      c2_Channel_close(chartInstance, &c2_b_st, c2_b_obj);
    }

    c2_st.site = &c2_lk_emlrtRSI;
    c2_d_obj = c2_obj;
    c2_b_st.site = &c2_pk_emlrtRSI;
    c2_e_obj = c2_d_obj;
    if (!(c2_e_obj->ChannelImpl == 0)) {
      c2_c_st.site = &c2_qk_emlrtRSI;
      c2_f_obj = c2_e_obj;
      c2_d_st.site = &c2_fc_emlrtRSI;
      c2_b_chImpl = c2_f_obj->ChannelImpl;
      c2_b_success = coderChannelIsOpen(c2_b_chImpl, &c2_b_result);
      c2_e_st.site = &c2_gc_emlrtRSI;
      c2_API_channelErrorIfFailed(chartInstance, &c2_e_st, c2_b_chImpl,
        c2_b_success);
      if (c2_b_result) {
        c2_c_st.site = &c2_rk_emlrtRSI;
        c2_warning(chartInstance, &c2_c_st);
        c2_c_st.site = &c2_sk_emlrtRSI;
        c2_Channel_close(chartInstance, &c2_c_st, c2_e_obj);
      }

      c2_c_st.site = &c2_tk_emlrtRSI;
      c2_c_chImpl = c2_e_obj->ChannelImpl;
      c2_c_success = coderChannelTerm(c2_c_chImpl);
      c2_d_st.site = &c2_wk_emlrtRSI;
      c2_API_channelErrorIfFailed(chartInstance, &c2_d_st, c2_c_chImpl,
        c2_c_success);
      c2_c_st.site = &c2_uk_emlrtRSI;
      c2_d_chImpl = c2_e_obj->ChannelImpl;
      coderChannelDestroy(c2_d_chImpl);
      c2_e_obj->ChannelImpl = 0;
    }
  }
}

static void c2_Channel_close(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_matlabshared_asyncio_buffer_internal_BufferChannel
  *c2_obj)
{
  CoderChannel c2_b_chImpl;
  CoderChannel c2_chImpl;
  c2_matlabshared_asyncio_buffer_internal_BufferChannel *c2_b_obj;
  c2_matlabshared_asyncio_buffer_internal_BufferChannel *c2_c_obj;
  c2_matlabshared_asyncio_buffer_internal_BufferChannel *c2_d_obj;
  c2_matlabshared_asyncio_buffer_internal_BufferChannel *c2_e_obj;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_st;
  int32_T c2_b_success;
  int32_T c2_success;
  boolean_T c2_result;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_wj_emlrtRSI;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_b_obj = c2_obj;
  c2_b_st.site = &c2_fc_emlrtRSI;
  c2_chImpl = c2_b_obj->ChannelImpl;
  c2_success = coderChannelIsOpen(c2_chImpl, &c2_result);
  c2_c_st.site = &c2_gc_emlrtRSI;
  c2_API_channelErrorIfFailed(chartInstance, &c2_c_st, c2_chImpl, c2_success);
  if (c2_result) {
    c2_st.site = &c2_xj_emlrtRSI;
    c2_b_chImpl = c2_obj->ChannelImpl;
    c2_b_success = coderChannelClose(c2_b_chImpl);
    c2_b_st.site = &c2_yj_emlrtRSI;
    c2_API_channelErrorIfFailed(chartInstance, &c2_b_st, c2_b_chImpl,
      c2_b_success);
    c2_st.site = &c2_xk_emlrtRSI;
    c2_c_obj = c2_obj;
    c2_b_st.site = &c2_yk_emlrtRSI;
    c2_d_obj = c2_c_obj;
    c2_e_obj = c2_d_obj;
    c2_e_obj->TotalElementsWritten = 0.0;
    c2_c_st.site = &c2_al_emlrtRSI;
    c2_BufferChannel_flush(chartInstance, &c2_c_st, c2_d_obj);
  }
}

static void c2_f_handle_matlabCodegenDestructor(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_matlabshared_asyncio_internal_InputStream *c2_obj)
{
  (void)chartInstance;
  if (!c2_obj->matlabCodegenIsDeleted) {
    c2_obj->matlabCodegenIsDeleted = true;
  }
}

static void c2_g_handle_matlabCodegenDestructor(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_matlabshared_asyncio_internal_OutputStream *c2_obj)
{
  (void)chartInstance;
  if (!c2_obj->matlabCodegenIsDeleted) {
    c2_obj->matlabCodegenIsDeleted = true;
  }
}

const mxArray *sf_c2_wwtp3_get_eml_resolved_functions_info(void)
{
  const mxArray *c2_nameCaptureInfo = NULL;
  c2_nameCaptureInfo = NULL;
  sf_mex_assign(&c2_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c2_nameCaptureInfo;
}

static real_T c2_emlrt_marshallIn(SFc2_wwtp3InstanceStruct *chartInstance, const
  mxArray *c2_a__output_of_length_, const char_T *c2_identifier)
{
  emlrtMsgIdentifier c2_thisId;
  real_T c2_y;
  c2_thisId.fIdentifier = (const char_T *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_y = c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_a__output_of_length_),
    &c2_thisId);
  sf_mex_destroy(&c2_a__output_of_length_);
  return c2_y;
}

static real_T c2_b_emlrt_marshallIn(SFc2_wwtp3InstanceStruct *chartInstance,
  const mxArray *c2_b_u, const emlrtMsgIdentifier *c2_parentId)
{
  real_T c2_d;
  real_T c2_y;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_b_u), &c2_d, 1, 0, 0U, 0, 0U, 0);
  c2_y = c2_d;
  sf_mex_destroy(&c2_b_u);
  return c2_y;
}

static void c2_c_emlrt_marshallIn(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, const mxArray *c2_tmpStr, const char_T *c2_identifier,
  c2_emxArray_char_T *c2_y)
{
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = (const char_T *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_d_emlrt_marshallIn(chartInstance, c2_sp, sf_mex_dup(c2_tmpStr), &c2_thisId,
                        c2_y);
  sf_mex_destroy(&c2_tmpStr);
}

static void c2_d_emlrt_marshallIn(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, const mxArray *c2_b_u, const emlrtMsgIdentifier
  *c2_parentId, c2_emxArray_char_T *c2_y)
{
  static boolean_T c2_bv1[2] = { false, true };

  c2_emxArray_char_T *c2_r;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_loop_ub;
  uint32_T c2_uv[2];
  boolean_T c2_bv[2];
  c2_emxInit_char_T(chartInstance, c2_sp, &c2_r, 2, (emlrtRTEInfo *)NULL);
  for (c2_i = 0; c2_i < 2; c2_i++) {
    c2_uv[c2_i] = 1U + 4294967294U * (uint32_T)c2_i;
  }

  c2_i1 = c2_r->size[0] * c2_r->size[1];
  c2_r->size[0] = sf_mex_get_dimension(c2_b_u, 0);
  c2_r->size[1] = sf_mex_get_dimension(c2_b_u, 1);
  c2_emxEnsureCapacity_char_T(chartInstance, c2_sp, c2_r, c2_i1, (emlrtRTEInfo *)
    NULL);
  for (c2_i2 = 0; c2_i2 < 2; c2_i2++) {
    c2_bv[c2_i2] = c2_bv1[c2_i2];
  }

  sf_mex_import_vs(c2_parentId, sf_mex_dup(c2_b_u), c2_r->data, 0, 10, 0U, 1, 0U,
                   2, c2_bv, c2_uv, c2_r->size);
  c2_i3 = c2_y->size[0] * c2_y->size[1];
  c2_y->size[0] = 1;
  c2_y->size[1] = c2_r->size[1];
  c2_emxEnsureCapacity_char_T(chartInstance, c2_sp, c2_y, c2_i3, (emlrtRTEInfo *)
    NULL);
  c2_loop_ub = c2_r->size[1] - 1;
  for (c2_i4 = 0; c2_i4 <= c2_loop_ub; c2_i4++) {
    c2_y->data[c2_i4] = c2_r->data[c2_i4];
  }

  sf_mex_destroy(&c2_b_u);
  c2_emxFree_char_T(chartInstance, &c2_r);
}

static void c2_e_emlrt_marshallIn(SFc2_wwtp3InstanceStruct *chartInstance, const
  mxArray *c2_a__output_of_matlabroot_, const char_T *c2_identifier, char_T
  c2_y_data[], int32_T c2_y_size[2])
{
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = (const char_T *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_a__output_of_matlabroot_),
                        &c2_thisId, c2_y_data, c2_y_size);
  sf_mex_destroy(&c2_a__output_of_matlabroot_);
}

static void c2_f_emlrt_marshallIn(SFc2_wwtp3InstanceStruct *chartInstance, const
  mxArray *c2_b_u, const emlrtMsgIdentifier *c2_parentId, char_T c2_y_data[],
  int32_T c2_y_size[2])
{
  static boolean_T c2_bv1[2] = { false, true };

  int32_T c2_tmp_size[2];
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_loop_ub;
  uint32_T c2_uv[2];
  char_T c2_tmp_data[512];
  boolean_T c2_bv[2];
  (void)chartInstance;
  for (c2_i = 0; c2_i < 2; c2_i++) {
    c2_uv[c2_i] = 1U + 511U * (uint32_T)c2_i;
  }

  c2_tmp_size[0] = sf_mex_get_dimension(c2_b_u, 0);
  c2_tmp_size[1] = sf_mex_get_dimension(c2_b_u, 1);
  for (c2_i1 = 0; c2_i1 < 2; c2_i1++) {
    c2_bv[c2_i1] = c2_bv1[c2_i1];
  }

  sf_mex_import_vs(c2_parentId, sf_mex_dup(c2_b_u), &c2_tmp_data, 0, 10, 0U, 1,
                   0U, 2, c2_bv, c2_uv, c2_tmp_size);
  c2_y_size[0] = 1;
  c2_y_size[1] = c2_tmp_size[1];
  c2_loop_ub = c2_tmp_size[1] - 1;
  for (c2_i2 = 0; c2_i2 <= c2_loop_ub; c2_i2++) {
    c2_y_data[c2_i2] = c2_tmp_data[c2_i2];
  }

  sf_mex_destroy(&c2_b_u);
}

static boolean_T c2_g_emlrt_marshallIn(SFc2_wwtp3InstanceStruct *chartInstance,
  const mxArray *c2_a__output_of_coder_internal_ifWhileCondExtrinsic_, const
  char_T *c2_identifier)
{
  emlrtMsgIdentifier c2_thisId;
  boolean_T c2_y;
  c2_thisId.fIdentifier = (const char_T *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_y = c2_h_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c2_a__output_of_coder_internal_ifWhileCondExtrinsic_), &c2_thisId);
  sf_mex_destroy(&c2_a__output_of_coder_internal_ifWhileCondExtrinsic_);
  return c2_y;
}

static boolean_T c2_h_emlrt_marshallIn(SFc2_wwtp3InstanceStruct *chartInstance,
  const mxArray *c2_b_u, const emlrtMsgIdentifier *c2_parentId)
{
  boolean_T c2_b;
  boolean_T c2_y;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_b_u), &c2_b, 1, 11, 0U, 0, 0U, 0);
  c2_y = c2_b;
  sf_mex_destroy(&c2_b_u);
  return c2_y;
}

static uint8_T c2_i_emlrt_marshallIn(SFc2_wwtp3InstanceStruct *chartInstance,
  const mxArray *c2_b_is_active_c2_wwtp3, const char_T *c2_identifier)
{
  emlrtMsgIdentifier c2_thisId;
  uint8_T c2_y;
  c2_thisId.fIdentifier = (const char_T *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_y = c2_j_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_b_is_active_c2_wwtp3),
    &c2_thisId);
  sf_mex_destroy(&c2_b_is_active_c2_wwtp3);
  return c2_y;
}

static uint8_T c2_j_emlrt_marshallIn(SFc2_wwtp3InstanceStruct *chartInstance,
  const mxArray *c2_b_u, const emlrtMsgIdentifier *c2_parentId)
{
  uint8_T c2_c_u;
  uint8_T c2_y;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_b_u), &c2_c_u, 1, 3, 0U, 0, 0U, 0);
  c2_y = c2_c_u;
  sf_mex_destroy(&c2_b_u);
  return c2_y;
}

static void c2_slStringInitializeDynamicBuffers(SFc2_wwtp3InstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c2_chart_data_browse_helper(SFc2_wwtp3InstanceStruct *chartInstance,
  int32_T c2_ssIdNumber, const mxArray **c2_mxData, uint8_T *c2_isValueTooBig)
{
  real_T c2_d;
  real_T c2_d1;
  real_T c2_d2;
  uint16_T c2_b_u;
  *c2_mxData = NULL;
  *c2_mxData = NULL;
  *c2_isValueTooBig = 0U;
  switch (c2_ssIdNumber) {
   case 4U:
    c2_b_u = *chartInstance->c2_u;
    sf_mex_assign(c2_mxData, sf_mex_create("mxData", &c2_b_u, 5, 0U, 0U, 0U, 0),
                  false);
    break;

   case 5U:
    c2_d = *chartInstance->c2_a;
    sf_mex_assign(c2_mxData, sf_mex_create("mxData", &c2_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 6U:
    c2_d1 = *chartInstance->c2_ir;
    sf_mex_assign(c2_mxData, sf_mex_create("mxData", &c2_d1, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 7U:
    c2_d2 = *chartInstance->c2_ws;
    sf_mex_assign(c2_mxData, sf_mex_create("mxData", &c2_d2, 0, 0U, 0U, 0U, 0),
                  false);
    break;
  }
}

static const mxArray *c2_feval(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, const mxArray *c2_input0, const mxArray *c2_input1, const
  mxArray *c2_input2)
{
  const mxArray *c2_m = NULL;
  (void)chartInstance;
  c2_m = NULL;
  sf_mex_assign(&c2_m, sf_mex_call(c2_sp, NULL, "feval", 1U, 3U, 14, sf_mex_dup
    (c2_input0), 14, sf_mex_dup(c2_input1), 14, sf_mex_dup(c2_input2)), false);
  sf_mex_destroy(&c2_input0);
  sf_mex_destroy(&c2_input1);
  sf_mex_destroy(&c2_input2);
  return c2_m;
}

static const mxArray *c2_length(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, const mxArray *c2_input0)
{
  const mxArray *c2_m = NULL;
  (void)chartInstance;
  c2_m = NULL;
  sf_mex_assign(&c2_m, sf_mex_call(c2_sp, NULL, "length", 1U, 1U, 14, sf_mex_dup
    (c2_input0)), false);
  sf_mex_destroy(&c2_input0);
  return c2_m;
}

static const mxArray *c2_ver(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, const mxArray *c2_input0)
{
  const mxArray *c2_m = NULL;
  (void)chartInstance;
  c2_m = NULL;
  sf_mex_assign(&c2_m, sf_mex_call(c2_sp, NULL, "ver", 1U, 1U, 14, sf_mex_dup
    (c2_input0)), false);
  sf_mex_destroy(&c2_input0);
  return c2_m;
}

static const mxArray *c2_getfield(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, const mxArray *c2_input0, const mxArray *c2_input1)
{
  const mxArray *c2_m = NULL;
  (void)chartInstance;
  c2_m = NULL;
  sf_mex_assign(&c2_m, sf_mex_call(c2_sp, NULL, "getfield", 1U, 2U, 14,
    sf_mex_dup(c2_input0), 14, sf_mex_dup(c2_input1)), false);
  sf_mex_destroy(&c2_input0);
  sf_mex_destroy(&c2_input1);
  return c2_m;
}

static const mxArray *c2_matlabroot(SFc2_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c2_sp)
{
  const mxArray *c2_m = NULL;
  (void)chartInstance;
  c2_m = NULL;
  sf_mex_assign(&c2_m, sf_mex_call(c2_sp, NULL, "matlabroot", 1U, 0U), false);
  return c2_m;
}

static const mxArray *c2_j_strcmp(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, const mxArray *c2_input0, const mxArray *c2_input1)
{
  const mxArray *c2_m = NULL;
  (void)chartInstance;
  c2_m = NULL;
  sf_mex_assign(&c2_m, sf_mex_call(c2_sp, NULL, "strcmp", 1U, 2U, 14, sf_mex_dup
    (c2_input0), 14, sf_mex_dup(c2_input1)), false);
  sf_mex_destroy(&c2_input0);
  sf_mex_destroy(&c2_input1);
  return c2_m;
}

static const mxArray *c2_coder_internal_ifWhileCondExtrinsic
  (SFc2_wwtp3InstanceStruct *chartInstance, const emlrtStack *c2_sp, const
   mxArray *c2_input0)
{
  const mxArray *c2_m = NULL;
  (void)chartInstance;
  c2_m = NULL;
  sf_mex_assign(&c2_m, sf_mex_call(c2_sp, NULL,
    "coder.internal.ifWhileCondExtrinsic", 1U, 1U, 14, sf_mex_dup(c2_input0)),
                false);
  sf_mex_destroy(&c2_input0);
  return c2_m;
}

static const mxArray *c2_exist(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, const mxArray *c2_input0, const mxArray *c2_input1)
{
  const mxArray *c2_m = NULL;
  (void)chartInstance;
  c2_m = NULL;
  sf_mex_assign(&c2_m, sf_mex_call(c2_sp, NULL, "exist", 1U, 2U, 14, sf_mex_dup
    (c2_input0), 14, sf_mex_dup(c2_input1)), false);
  sf_mex_destroy(&c2_input0);
  sf_mex_destroy(&c2_input1);
  return c2_m;
}

static const mxArray *c2_b_coder_internal_ifWhileCondExtrinsic
  (SFc2_wwtp3InstanceStruct *chartInstance, const emlrtStack *c2_sp, const
   mxArray *c2_input0)
{
  const mxArray *c2_m = NULL;
  (void)chartInstance;
  c2_m = NULL;
  sf_mex_assign(&c2_m, sf_mex_call(c2_sp, NULL,
    "coder.internal.ifWhileCondExtrinsic", 1U, 1U, 14, sf_mex_dup(c2_input0)),
                false);
  sf_mex_destroy(&c2_input0);
  return c2_m;
}

static const mxArray *c2_b_exist(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, const mxArray *c2_input0, const mxArray *c2_input1)
{
  const mxArray *c2_m = NULL;
  (void)chartInstance;
  c2_m = NULL;
  sf_mex_assign(&c2_m, sf_mex_call(c2_sp, NULL, "exist", 1U, 2U, 14, sf_mex_dup
    (c2_input0), 14, sf_mex_dup(c2_input1)), false);
  sf_mex_destroy(&c2_input0);
  sf_mex_destroy(&c2_input1);
  return c2_m;
}

static const mxArray *c2_c_coder_internal_ifWhileCondExtrinsic
  (SFc2_wwtp3InstanceStruct *chartInstance, const emlrtStack *c2_sp, const
   mxArray *c2_input0)
{
  const mxArray *c2_m = NULL;
  (void)chartInstance;
  c2_m = NULL;
  sf_mex_assign(&c2_m, sf_mex_call(c2_sp, NULL,
    "coder.internal.ifWhileCondExtrinsic", 1U, 1U, 14, sf_mex_dup(c2_input0)),
                false);
  sf_mex_destroy(&c2_input0);
  return c2_m;
}

static const mxArray *c2_b_ver(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, const mxArray *c2_input0)
{
  const mxArray *c2_m = NULL;
  (void)chartInstance;
  c2_m = NULL;
  sf_mex_assign(&c2_m, sf_mex_call(c2_sp, NULL, "ver", 1U, 1U, 14, sf_mex_dup
    (c2_input0)), false);
  sf_mex_destroy(&c2_input0);
  return c2_m;
}

static const mxArray *c2_b_getfield(SFc2_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, const mxArray *c2_input0, const mxArray *c2_input1)
{
  const mxArray *c2_m = NULL;
  (void)chartInstance;
  c2_m = NULL;
  sf_mex_assign(&c2_m, sf_mex_call(c2_sp, NULL, "getfield", 1U, 2U, 14,
    sf_mex_dup(c2_input0), 14, sf_mex_dup(c2_input1)), false);
  sf_mex_destroy(&c2_input0);
  sf_mex_destroy(&c2_input1);
  return c2_m;
}

static const mxArray *c2_b_matlabroot(SFc2_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c2_sp)
{
  const mxArray *c2_m = NULL;
  (void)chartInstance;
  c2_m = NULL;
  sf_mex_assign(&c2_m, sf_mex_call(c2_sp, NULL, "matlabroot", 1U, 0U), false);
  return c2_m;
}

static const mxArray *c2_k_strcmp(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, const mxArray *c2_input0, const mxArray *c2_input1)
{
  const mxArray *c2_m = NULL;
  (void)chartInstance;
  c2_m = NULL;
  sf_mex_assign(&c2_m, sf_mex_call(c2_sp, NULL, "strcmp", 1U, 2U, 14, sf_mex_dup
    (c2_input0), 14, sf_mex_dup(c2_input1)), false);
  sf_mex_destroy(&c2_input0);
  sf_mex_destroy(&c2_input1);
  return c2_m;
}

static const mxArray *c2_d_coder_internal_ifWhileCondExtrinsic
  (SFc2_wwtp3InstanceStruct *chartInstance, const emlrtStack *c2_sp, const
   mxArray *c2_input0)
{
  const mxArray *c2_m = NULL;
  (void)chartInstance;
  c2_m = NULL;
  sf_mex_assign(&c2_m, sf_mex_call(c2_sp, NULL,
    "coder.internal.ifWhileCondExtrinsic", 1U, 1U, 14, sf_mex_dup(c2_input0)),
                false);
  sf_mex_destroy(&c2_input0);
  return c2_m;
}

static const mxArray *c2_c_exist(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, const mxArray *c2_input0, const mxArray *c2_input1)
{
  const mxArray *c2_m = NULL;
  (void)chartInstance;
  c2_m = NULL;
  sf_mex_assign(&c2_m, sf_mex_call(c2_sp, NULL, "exist", 1U, 2U, 14, sf_mex_dup
    (c2_input0), 14, sf_mex_dup(c2_input1)), false);
  sf_mex_destroy(&c2_input0);
  sf_mex_destroy(&c2_input1);
  return c2_m;
}

static const mxArray *c2_e_coder_internal_ifWhileCondExtrinsic
  (SFc2_wwtp3InstanceStruct *chartInstance, const emlrtStack *c2_sp, const
   mxArray *c2_input0)
{
  const mxArray *c2_m = NULL;
  (void)chartInstance;
  c2_m = NULL;
  sf_mex_assign(&c2_m, sf_mex_call(c2_sp, NULL,
    "coder.internal.ifWhileCondExtrinsic", 1U, 1U, 14, sf_mex_dup(c2_input0)),
                false);
  sf_mex_destroy(&c2_input0);
  return c2_m;
}

static const mxArray *c2_d_exist(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, const mxArray *c2_input0, const mxArray *c2_input1)
{
  const mxArray *c2_m = NULL;
  (void)chartInstance;
  c2_m = NULL;
  sf_mex_assign(&c2_m, sf_mex_call(c2_sp, NULL, "exist", 1U, 2U, 14, sf_mex_dup
    (c2_input0), 14, sf_mex_dup(c2_input1)), false);
  sf_mex_destroy(&c2_input0);
  sf_mex_destroy(&c2_input1);
  return c2_m;
}

static const mxArray *c2_f_coder_internal_ifWhileCondExtrinsic
  (SFc2_wwtp3InstanceStruct *chartInstance, const emlrtStack *c2_sp, const
   mxArray *c2_input0)
{
  const mxArray *c2_m = NULL;
  (void)chartInstance;
  c2_m = NULL;
  sf_mex_assign(&c2_m, sf_mex_call(c2_sp, NULL,
    "coder.internal.ifWhileCondExtrinsic", 1U, 1U, 14, sf_mex_dup(c2_input0)),
                false);
  sf_mex_destroy(&c2_input0);
  return c2_m;
}

static const mxArray *c2_matlab_internal_language_TimerSuspender
  (SFc2_wwtp3InstanceStruct *chartInstance, const emlrtStack *c2_sp)
{
  const mxArray *c2_m = NULL;
  (void)chartInstance;
  c2_m = NULL;
  sf_mex_assign(&c2_m, sf_mex_call(c2_sp, NULL,
    "matlab.internal.language.TimerSuspender", 0U, 0U), false);
  return c2_m;
}

static void c2_b_feval(SFc2_wwtp3InstanceStruct *chartInstance, const emlrtStack
  *c2_sp, const mxArray *c2_input0, const mxArray *c2_input1)
{
  (void)chartInstance;
  sf_mex_call(c2_sp, NULL, "feval", 0U, 2U, 14, sf_mex_dup(c2_input0), 14,
              sf_mex_dup(c2_input1));
  sf_mex_destroy(&c2_input0);
  sf_mex_destroy(&c2_input1);
}

static const mxArray *c2_c_feval(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, const mxArray *c2_input0, const mxArray *c2_input1)
{
  const mxArray *c2_m = NULL;
  (void)chartInstance;
  c2_m = NULL;
  sf_mex_assign(&c2_m, sf_mex_call(c2_sp, NULL, "feval", 1U, 2U, 14, sf_mex_dup
    (c2_input0), 14, sf_mex_dup(c2_input1)), false);
  sf_mex_destroy(&c2_input0);
  sf_mex_destroy(&c2_input1);
  return c2_m;
}

static void c2_d_feval(SFc2_wwtp3InstanceStruct *chartInstance, const emlrtStack
  *c2_sp, const mxArray *c2_input0, const mxArray *c2_input1)
{
  (void)chartInstance;
  sf_mex_call(c2_sp, NULL, "feval", 0U, 2U, 14, sf_mex_dup(c2_input0), 14,
              sf_mex_dup(c2_input1));
  sf_mex_destroy(&c2_input0);
  sf_mex_destroy(&c2_input1);
}

static void c2_emxEnsureCapacity_uint8_T(SFc2_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_emxArray_uint8_T *c2_emxArray, int32_T c2_oldNumel,
  const emlrtRTEInfo *c2_srcLocation)
{
  int32_T c2_i;
  int32_T c2_newCapacity;
  int32_T c2_newNumel;
  void *c2_newData;
  (void)chartInstance;
  if (c2_oldNumel < 0) {
    c2_oldNumel = 0;
  }

  c2_newNumel = 1;
  for (c2_i = 0; c2_i < c2_emxArray->numDimensions; c2_i++) {
    c2_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c2_newNumel,
      (size_t)(uint32_T)c2_emxArray->size[c2_i], c2_srcLocation, (void *)c2_sp);
  }

  if (c2_newNumel > c2_emxArray->allocatedSize) {
    c2_newCapacity = c2_emxArray->allocatedSize;
    if (c2_newCapacity < 16) {
      c2_newCapacity = 16;
    }

    while (c2_newCapacity < c2_newNumel) {
      if (c2_newCapacity > 1073741823) {
        c2_newCapacity = MAX_int32_T;
      } else {
        c2_newCapacity <<= 1;
      }
    }

    c2_newData = emlrtCallocMex((uint32_T)c2_newCapacity, sizeof(uint8_T));
    if (c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if (c2_emxArray->data != NULL) {
      memcpy(c2_newData, c2_emxArray->data, sizeof(uint8_T) * (uint32_T)
             c2_oldNumel);
      if (c2_emxArray->canFreeData) {
        emlrtFreeMex(c2_emxArray->data);
      }
    }

    c2_emxArray->data = (uint8_T *)c2_newData;
    c2_emxArray->allocatedSize = c2_newCapacity;
    c2_emxArray->canFreeData = true;
  }
}

static void c2_emxEnsureCapacity_char_T(SFc2_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_emxArray_char_T *c2_emxArray, int32_T c2_oldNumel,
  const emlrtRTEInfo *c2_srcLocation)
{
  int32_T c2_i;
  int32_T c2_newCapacity;
  int32_T c2_newNumel;
  void *c2_newData;
  (void)chartInstance;
  if (c2_oldNumel < 0) {
    c2_oldNumel = 0;
  }

  c2_newNumel = 1;
  for (c2_i = 0; c2_i < c2_emxArray->numDimensions; c2_i++) {
    c2_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c2_newNumel,
      (size_t)(uint32_T)c2_emxArray->size[c2_i], c2_srcLocation, (void *)c2_sp);
  }

  if (c2_newNumel > c2_emxArray->allocatedSize) {
    c2_newCapacity = c2_emxArray->allocatedSize;
    if (c2_newCapacity < 16) {
      c2_newCapacity = 16;
    }

    while (c2_newCapacity < c2_newNumel) {
      if (c2_newCapacity > 1073741823) {
        c2_newCapacity = MAX_int32_T;
      } else {
        c2_newCapacity <<= 1;
      }
    }

    c2_newData = emlrtCallocMex((uint32_T)c2_newCapacity, sizeof(char_T));
    if (c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if (c2_emxArray->data != NULL) {
      memcpy(c2_newData, c2_emxArray->data, sizeof(char_T) * (uint32_T)
             c2_oldNumel);
      if (c2_emxArray->canFreeData) {
        emlrtFreeMex(c2_emxArray->data);
      }
    }

    c2_emxArray->data = (char_T *)c2_newData;
    c2_emxArray->allocatedSize = c2_newCapacity;
    c2_emxArray->canFreeData = true;
  }
}

static void c2_emxFree_uint8_T(SFc2_wwtp3InstanceStruct *chartInstance,
  c2_emxArray_uint8_T **c2_pEmxArray)
{
  (void)chartInstance;
  if (*c2_pEmxArray != (c2_emxArray_uint8_T *)NULL) {
    if (((*c2_pEmxArray)->data != (uint8_T *)NULL) && (*c2_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c2_pEmxArray)->data);
    }

    emlrtFreeMex((*c2_pEmxArray)->size);
    emlrtFreeMex(*c2_pEmxArray);
    *c2_pEmxArray = (c2_emxArray_uint8_T *)NULL;
  }
}

static void c2_emxFreeStruct_cell_wrap_31(SFc2_wwtp3InstanceStruct
  *chartInstance, c2_cell_wrap_31 *c2_pStruct)
{
  c2_emxFree_uint8_T(chartInstance, &c2_pStruct->f1);
}

static void c2_emxTrim_cell_wrap_31_1x1(SFc2_wwtp3InstanceStruct *chartInstance,
  c2_cell_wrap_31 c2_data[1], int32_T c2_fromIndex, int32_T c2_toIndex)
{
  int32_T c2_i;
  for (c2_i = c2_fromIndex; c2_i < c2_toIndex; c2_i++) {
    c2_emxFreeStruct_cell_wrap_31(chartInstance, &c2_data[c2_i]);
  }
}

static void c2_emxInitStruct_cell_wrap_31(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_cell_wrap_31 *c2_pStruct, const
  emlrtRTEInfo *c2_srcLocation)
{
  c2_emxInit_uint8_T(chartInstance, c2_sp, &c2_pStruct->f1, 2, c2_srcLocation);
}

static void c2_emxInit_uint8_T(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_uint8_T **c2_pEmxArray, int32_T
  c2_numDimensions, const emlrtRTEInfo *c2_srcLocation)
{
  c2_emxArray_uint8_T *c2_emxArray;
  int32_T c2_i;
  (void)chartInstance;
  *c2_pEmxArray = (c2_emxArray_uint8_T *)emlrtMallocMex(sizeof
    (c2_emxArray_uint8_T));
  if ((void *)*c2_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
  }

  c2_emxArray = *c2_pEmxArray;
  c2_emxArray->data = (uint8_T *)NULL;
  c2_emxArray->numDimensions = c2_numDimensions;
  c2_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c2_numDimensions);
  if ((void *)c2_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
  }

  c2_emxArray->allocatedSize = 0;
  c2_emxArray->canFreeData = true;
  for (c2_i = 0; c2_i < c2_numDimensions; c2_i++) {
    c2_emxArray->size[c2_i] = 0;
  }
}

static void c2_emxExpand_cell_wrap_31_1x1(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_cell_wrap_31 c2_data[1], int32_T
  c2_fromIndex, int32_T c2_toIndex, const emlrtRTEInfo *c2_srcLocation)
{
  int32_T c2_i;
  for (c2_i = c2_fromIndex; c2_i < c2_toIndex; c2_i++) {
    c2_emxInitStruct_cell_wrap_31(chartInstance, c2_sp, &c2_data[c2_i],
      c2_srcLocation);
  }
}

static void c2_emxEnsureCapacity_cell_wrap_31(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_cell_wrap_31 c2_data[1], int32_T
  c2_size[2], int32_T c2_oldNumel, const emlrtRTEInfo *c2_srcLocation)
{
  int32_T c2_newNumel;
  if (c2_oldNumel < 0) {
    c2_oldNumel = 0;
  }

  c2_newNumel = c2_size[0] * c2_size[1];
  if (c2_oldNumel > c2_newNumel) {
    c2_emxTrim_cell_wrap_31_1x1(chartInstance, c2_data, c2_newNumel, c2_oldNumel);
  } else if (c2_oldNumel < c2_newNumel) {
    c2_emxExpand_cell_wrap_31_1x1(chartInstance, c2_sp, c2_data, c2_oldNumel,
      c2_newNumel, c2_srcLocation);
  }
}

static void c2_emxCopyStruct_cell_wrap_31(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_cell_wrap_31 *c2_dst, const
  c2_cell_wrap_31 *c2_src, const emlrtRTEInfo *c2_srcLocation)
{
  c2_emxCopy_uint8_T(chartInstance, c2_sp, &c2_dst->f1, &c2_src->f1,
                     c2_srcLocation);
}

static void c2_emxCopy_uint8_T(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_uint8_T **c2_dst, c2_emxArray_uint8_T * const
  *c2_src, const emlrtRTEInfo *c2_srcLocation)
{
  int32_T c2_i;
  int32_T c2_numElDst;
  int32_T c2_numElSrc;
  c2_numElDst = 1;
  c2_numElSrc = 1;
  for (c2_i = 0; c2_i < (*c2_dst)->numDimensions; c2_i++) {
    c2_numElDst *= (*c2_dst)->size[c2_i];
    c2_numElSrc *= (*c2_src)->size[c2_i];
  }

  for (c2_i = 0; c2_i < (*c2_dst)->numDimensions; c2_i++) {
    (*c2_dst)->size[c2_i] = (*c2_src)->size[c2_i];
  }

  c2_emxEnsureCapacity_uint8_T(chartInstance, c2_sp, *c2_dst, c2_numElDst,
    c2_srcLocation);
  for (c2_i = 0; c2_i < c2_numElSrc; c2_i++) {
    (*c2_dst)->data[c2_i] = (*c2_src)->data[c2_i];
  }
}

static void c2_emxTrim_cell_wrap_31_1(SFc2_wwtp3InstanceStruct *chartInstance,
  c2_cell_wrap_31 c2_data[1], int32_T c2_fromIndex, int32_T c2_toIndex)
{
  int32_T c2_i;
  for (c2_i = c2_fromIndex; c2_i < c2_toIndex; c2_i++) {
    c2_emxFreeStruct_cell_wrap_31(chartInstance, &c2_data[c2_i]);
  }
}

static void c2_emxExpand_cell_wrap_31_1(SFc2_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_cell_wrap_31 c2_data[1], int32_T c2_fromIndex,
  int32_T c2_toIndex, const emlrtRTEInfo *c2_srcLocation)
{
  int32_T c2_i;
  for (c2_i = c2_fromIndex; c2_i < c2_toIndex; c2_i++) {
    c2_emxInitStruct_cell_wrap_31(chartInstance, c2_sp, &c2_data[c2_i],
      c2_srcLocation);
  }
}

static void c2_emxEnsureCapacity_cell_wrap_311(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_cell_wrap_31 c2_data[1], int32_T
  c2_size[1], int32_T c2_oldNumel, const emlrtRTEInfo *c2_srcLocation)
{
  int32_T c2_newNumel;
  if (c2_oldNumel < 0) {
    c2_oldNumel = 0;
  }

  c2_newNumel = c2_size[0];
  if (c2_oldNumel > c2_newNumel) {
    c2_emxTrim_cell_wrap_31_1(chartInstance, c2_data, c2_newNumel, c2_oldNumel);
  } else if (c2_oldNumel < c2_newNumel) {
    c2_emxExpand_cell_wrap_31_1(chartInstance, c2_sp, c2_data, c2_oldNumel,
      c2_newNumel, c2_srcLocation);
  }
}

static void c2_emxInitStruct_icomm_interface_m(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_icomm_interface_modbus_tcpip_Modbus *c2_pStruct, const emlrtRTEInfo
  *c2_srcLocation)
{
  c2_emxInitStruct_icomm_interface_c(chartInstance, c2_sp,
    &c2_pStruct->Converter, c2_srcLocation);
  c2_emxInitStruct_matlabshared_netw(chartInstance, c2_sp, &c2_pStruct->_pobj0,
    c2_srcLocation);
}

static void c2_emxInitStruct_icomm_interface_c(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_icomm_interface_coder_modbus_DataConverter *c2_pStruct, const emlrtRTEInfo *
  c2_srcLocation)
{
  c2_emxInit_char_T(chartInstance, c2_sp, &c2_pStruct->ByteOrder, 2,
                    c2_srcLocation);
  c2_emxInit_char_T(chartInstance, c2_sp, &c2_pStruct->WordOrder, 2,
                    c2_srcLocation);
}

static void c2_emxInit_char_T(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_char_T **c2_pEmxArray, int32_T c2_numDimensions,
  const emlrtRTEInfo *c2_srcLocation)
{
  c2_emxArray_char_T *c2_emxArray;
  int32_T c2_i;
  (void)chartInstance;
  *c2_pEmxArray = (c2_emxArray_char_T *)emlrtMallocMex(sizeof(c2_emxArray_char_T));
  if ((void *)*c2_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
  }

  c2_emxArray = *c2_pEmxArray;
  c2_emxArray->data = (char_T *)NULL;
  c2_emxArray->numDimensions = c2_numDimensions;
  c2_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c2_numDimensions);
  if ((void *)c2_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
  }

  c2_emxArray->allocatedSize = 0;
  c2_emxArray->canFreeData = true;
  for (c2_i = 0; c2_i < c2_numDimensions; c2_i++) {
    c2_emxArray->size[c2_i] = 0;
  }
}

static void c2_emxInitStruct_matlabshared_netw(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_matlabshared_network_internal_TCPClient *c2_pStruct, const emlrtRTEInfo
  *c2_srcLocation)
{
  c2_emxInit_char_T(chartInstance, c2_sp, &c2_pStruct->ByteOrder, 2,
                    c2_srcLocation);
  c2_emxInit_char_T(chartInstance, c2_sp, &c2_pStruct->NativeDataType, 2,
                    c2_srcLocation);
  c2_emxInit_char_T(chartInstance, c2_sp, &c2_pStruct->DataFieldName, 2,
                    c2_srcLocation);
  c2_emxInitStruct_matlabshared_tran(chartInstance, c2_sp, &c2_pStruct->_pobj0,
    c2_srcLocation);
  c2_c_emxInitStruct_matlabshared_asyn(chartInstance, c2_sp, &c2_pStruct->_pobj1,
    c2_srcLocation);
}

static void c2_emxInitStruct_matlabshared_tran(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_pStruct,
  const emlrtRTEInfo *c2_srcLocation)
{
  c2_emxInitStruct_matlabshared_asyn(chartInstance, c2_sp,
    &c2_pStruct->UnreadDataBuffer, c2_srcLocation);
  c2_emxInit_char_T(chartInstance, c2_sp, &c2_pStruct->ByteOrder, 2,
                    c2_srcLocation);
  c2_emxInit_char_T(chartInstance, c2_sp, &c2_pStruct->NativeDataType, 2,
                    c2_srcLocation);
  c2_emxInit_char_T(chartInstance, c2_sp, &c2_pStruct->DataFieldName, 2,
                    c2_srcLocation);
}

static void c2_emxInitStruct_matlabshared_asyn(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_matlabshared_asyncio_buffer_internal_BufferChannel *c2_pStruct, const
  emlrtRTEInfo *c2_srcLocation)
{
  c2_b_emxInitStruct_matlabshared_asyn(chartInstance, c2_sp,
    &c2_pStruct->InputStream, c2_srcLocation);
  c2_emxInit_uint8_T(chartInstance, c2_sp, &c2_pStruct->PartialPacket, 2,
                     c2_srcLocation);
}

static void c2_b_emxInitStruct_matlabshared_asyn(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_matlabshared_asyncio_internal_InputStream *c2_pStruct, const emlrtRTEInfo
  *c2_srcLocation)
{
  c2_emxInit_uint8_T(chartInstance, c2_sp, &c2_pStruct->PartialPacket, 2,
                     c2_srcLocation);
  c2_emxInit_uint8_T(chartInstance, c2_sp, &c2_pStruct->ExampleData, 2,
                     c2_srcLocation);
}

static void c2_c_emxInitStruct_matlabshared_asyn(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_matlabshared_asyncio_internal_Channel *c2_pStruct, const emlrtRTEInfo
  *c2_srcLocation)
{
  c2_b_emxInitStruct_matlabshared_asyn(chartInstance, c2_sp,
    &c2_pStruct->InputStream, c2_srcLocation);
}

static void c2_emxInitStruct_s_n2xUWXvqAPN0Osm(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_s_n2xUWXvqAPN0OsmrtE3c5D
  *c2_pStruct, const emlrtRTEInfo *c2_srcLocation)
{
  c2_emxInit_uint8_T(chartInstance, c2_sp, &c2_pStruct->Data, 2, c2_srcLocation);
}

static void c2_emxInitStruct_cell_33(SFc2_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_cell_33 *c2_pStruct, const emlrtRTEInfo
  *c2_srcLocation)
{
  c2_emxInit_uint8_T(chartInstance, c2_sp, &c2_pStruct->f4, 2, c2_srcLocation);
}

static void c2_emxInit_cell_wrap_31_1x1(SFc2_wwtp3InstanceStruct *chartInstance,
  c2_emxArray_cell_wrap_31_1x1 *c2_pEmxArray)
{
  int32_T c2_i;
  (void)chartInstance;
  for (c2_i = 0; c2_i < 2; c2_i++) {
    c2_pEmxArray->size[c2_i] = 0;
  }
}

static void c2_emxFree_cell_wrap_31_1x1(SFc2_wwtp3InstanceStruct *chartInstance,
  c2_emxArray_cell_wrap_31_1x1 *c2_pEmxArray)
{
  int32_T c2_b_i;
  int32_T c2_i;
  int32_T c2_numEl;
  c2_numEl = 1;
  for (c2_i = 0; c2_i < 2; c2_i++) {
    c2_numEl *= c2_pEmxArray->size[c2_i];
  }

  for (c2_b_i = 0; c2_b_i < c2_numEl; c2_b_i++) {
    c2_emxFreeStruct_cell_wrap_31(chartInstance, &c2_pEmxArray->data[c2_b_i]);
  }
}

static void c2_emxInit_cell_wrap_31_1(SFc2_wwtp3InstanceStruct *chartInstance,
  c2_emxArray_cell_wrap_31_1 *c2_pEmxArray)
{
  int32_T c2_i;
  (void)chartInstance;
  for (c2_i = 0; c2_i < 1; c2_i++) {
    c2_pEmxArray->size[c2_i] = 0;
  }
}

static void c2_emxFree_cell_wrap_31_1(SFc2_wwtp3InstanceStruct *chartInstance,
  c2_emxArray_cell_wrap_31_1 *c2_pEmxArray)
{
  int32_T c2_b_i;
  int32_T c2_i;
  int32_T c2_numEl;
  c2_numEl = 1;
  for (c2_i = 0; c2_i < 1; c2_i++) {
    c2_numEl *= c2_pEmxArray->size[c2_i];
  }

  for (c2_b_i = 0; c2_b_i < c2_numEl; c2_b_i++) {
    c2_emxFreeStruct_cell_wrap_31(chartInstance, &c2_pEmxArray->data[c2_b_i]);
  }
}

static void c2_emxFree_char_T(SFc2_wwtp3InstanceStruct *chartInstance,
  c2_emxArray_char_T **c2_pEmxArray)
{
  (void)chartInstance;
  if (*c2_pEmxArray != (c2_emxArray_char_T *)NULL) {
    if (((*c2_pEmxArray)->data != (char_T *)NULL) && (*c2_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c2_pEmxArray)->data);
    }

    emlrtFreeMex((*c2_pEmxArray)->size);
    emlrtFreeMex(*c2_pEmxArray);
    *c2_pEmxArray = (c2_emxArray_char_T *)NULL;
  }
}

static void c2_emxFreeStruct_icomm_interface_c(SFc2_wwtp3InstanceStruct
  *chartInstance, c2_icomm_interface_coder_modbus_DataConverter *c2_pStruct)
{
  c2_emxFree_char_T(chartInstance, &c2_pStruct->ByteOrder);
  c2_emxFree_char_T(chartInstance, &c2_pStruct->WordOrder);
}

static void c2_emxFreeStruct_icomm_interface_m(SFc2_wwtp3InstanceStruct
  *chartInstance, c2_icomm_interface_modbus_tcpip_Modbus *c2_pStruct)
{
  c2_emxFreeStruct_icomm_interface_c(chartInstance, &c2_pStruct->Converter);
  c2_emxFreeStruct_matlabshared_netw(chartInstance, &c2_pStruct->_pobj0);
}

static void c2_emxFreeStruct_matlabshared_netw(SFc2_wwtp3InstanceStruct
  *chartInstance, c2_matlabshared_network_internal_TCPClient *c2_pStruct)
{
  c2_emxFree_char_T(chartInstance, &c2_pStruct->ByteOrder);
  c2_emxFree_char_T(chartInstance, &c2_pStruct->NativeDataType);
  c2_emxFree_char_T(chartInstance, &c2_pStruct->DataFieldName);
  c2_emxFreeStruct_matlabshared_tran(chartInstance, &c2_pStruct->_pobj0);
  c2_c_emxFreeStruct_matlabshared_asyn(chartInstance, &c2_pStruct->_pobj1);
}

static void c2_emxFreeStruct_matlabshared_asyn(SFc2_wwtp3InstanceStruct
  *chartInstance, c2_matlabshared_asyncio_internal_InputStream *c2_pStruct)
{
  c2_emxFree_uint8_T(chartInstance, &c2_pStruct->PartialPacket);
  c2_emxFree_uint8_T(chartInstance, &c2_pStruct->ExampleData);
}

static void c2_b_emxFreeStruct_matlabshared_asyn(SFc2_wwtp3InstanceStruct
  *chartInstance, c2_matlabshared_asyncio_buffer_internal_BufferChannel
  *c2_pStruct)
{
  c2_emxFreeStruct_matlabshared_asyn(chartInstance, &c2_pStruct->InputStream);
  c2_emxFree_uint8_T(chartInstance, &c2_pStruct->PartialPacket);
}

static void c2_emxFreeStruct_matlabshared_tran(SFc2_wwtp3InstanceStruct
  *chartInstance,
  c2_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c2_pStruct)
{
  c2_b_emxFreeStruct_matlabshared_asyn(chartInstance,
    &c2_pStruct->UnreadDataBuffer);
  c2_emxFree_char_T(chartInstance, &c2_pStruct->ByteOrder);
  c2_emxFree_char_T(chartInstance, &c2_pStruct->NativeDataType);
  c2_emxFree_char_T(chartInstance, &c2_pStruct->DataFieldName);
}

static void c2_c_emxFreeStruct_matlabshared_asyn(SFc2_wwtp3InstanceStruct
  *chartInstance, c2_matlabshared_asyncio_internal_Channel *c2_pStruct)
{
  c2_emxFreeStruct_matlabshared_asyn(chartInstance, &c2_pStruct->InputStream);
}

static void c2_emxFreeStruct_s_n2xUWXvqAPN0Osm(SFc2_wwtp3InstanceStruct
  *chartInstance, c2_s_n2xUWXvqAPN0OsmrtE3c5D *c2_pStruct)
{
  c2_emxFree_uint8_T(chartInstance, &c2_pStruct->Data);
}

static void c2_emxFreeStruct_cell_33(SFc2_wwtp3InstanceStruct *chartInstance,
  c2_cell_33 *c2_pStruct)
{
  c2_emxFree_uint8_T(chartInstance, &c2_pStruct->f4);
}

static void c2_emxInitStruct_s_puOqsSoDdBk28aK(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_s_puOqsSoDdBk28aK0dkajGG
  *c2_pStruct, const emlrtRTEInfo *c2_srcLocation)
{
  c2_emxInit_char_T(chartInstance, c2_sp, &c2_pStruct->ServiceName, 2,
                    c2_srcLocation);
}

static void c2_emxInitStruct_cell_11(SFc2_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_cell_11 *c2_pStruct, const emlrtRTEInfo
  *c2_srcLocation)
{
  c2_emxInit_char_T(chartInstance, c2_sp, &c2_pStruct->f8, 2, c2_srcLocation);
}

static void c2_emxFreeStruct_s_puOqsSoDdBk28aK(SFc2_wwtp3InstanceStruct
  *chartInstance, c2_s_puOqsSoDdBk28aK0dkajGG *c2_pStruct)
{
  c2_emxFree_char_T(chartInstance, &c2_pStruct->ServiceName);
}

static void c2_emxFreeStruct_cell_11(SFc2_wwtp3InstanceStruct *chartInstance,
  c2_cell_11 *c2_pStruct)
{
  c2_emxFree_char_T(chartInstance, &c2_pStruct->f8);
}

static void c2_emxInitStruct_s_IiVysWyVj7T2O9P(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_s_IiVysWyVj7T2O9POL8hpXH
  *c2_pStruct, const emlrtRTEInfo *c2_srcLocation)
{
  c2_emxInit_char_T(chartInstance, c2_sp, &c2_pStruct->ServiceName, 2,
                    c2_srcLocation);
}

static void c2_emxInitStruct_cell_17(SFc2_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_cell_17 *c2_pStruct, const emlrtRTEInfo
  *c2_srcLocation)
{
  c2_emxInit_char_T(chartInstance, c2_sp, &c2_pStruct->f8, 2, c2_srcLocation);
}

static void c2_emxFreeStruct_s_IiVysWyVj7T2O9P(SFc2_wwtp3InstanceStruct
  *chartInstance, c2_s_IiVysWyVj7T2O9POL8hpXH *c2_pStruct)
{
  c2_emxFree_char_T(chartInstance, &c2_pStruct->ServiceName);
}

static void c2_emxFreeStruct_cell_17(SFc2_wwtp3InstanceStruct *chartInstance,
  c2_cell_17 *c2_pStruct)
{
  c2_emxFree_char_T(chartInstance, &c2_pStruct->f8);
}

static void c2_emxInitMatrix_cell_wrap_37(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_cell_wrap_37 c2_pMatrix[2], const
  emlrtRTEInfo *c2_srcLocation)
{
  int32_T c2_i;
  for (c2_i = 0; c2_i < 2; c2_i++) {
    c2_emxInitStruct_cell_wrap_37(chartInstance, c2_sp, &c2_pMatrix[c2_i],
      c2_srcLocation);
  }
}

static void c2_emxInitStruct_cell_wrap_37(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_cell_wrap_37 *c2_pStruct, const
  emlrtRTEInfo *c2_srcLocation)
{
  c2_emxInit_uint8_T(chartInstance, c2_sp, &c2_pStruct->f1, 2, c2_srcLocation);
}

static void c2_emxFreeMatrix_cell_wrap_37(SFc2_wwtp3InstanceStruct
  *chartInstance, c2_cell_wrap_37 c2_pMatrix[2])
{
  int32_T c2_i;
  for (c2_i = 0; c2_i < 2; c2_i++) {
    c2_emxFreeStruct_cell_wrap_37(chartInstance, &c2_pMatrix[c2_i]);
  }
}

static void c2_emxFreeStruct_cell_wrap_37(SFc2_wwtp3InstanceStruct
  *chartInstance, c2_cell_wrap_37 *c2_pStruct)
{
  c2_emxFree_uint8_T(chartInstance, &c2_pStruct->f1);
}

static void c2_emxInit_cell_wrap_31(SFc2_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_emxArray_cell_wrap_31 **c2_pEmxArray, int32_T
  c2_numDimensions, const emlrtRTEInfo *c2_srcLocation)
{
  c2_emxArray_cell_wrap_31 *c2_emxArray;
  int32_T c2_i;
  (void)chartInstance;
  *c2_pEmxArray = (c2_emxArray_cell_wrap_31 *)emlrtMallocMex(sizeof
    (c2_emxArray_cell_wrap_31));
  if ((void *)*c2_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
  }

  c2_emxArray = *c2_pEmxArray;
  c2_emxArray->data = (c2_cell_wrap_31 *)NULL;
  c2_emxArray->numDimensions = c2_numDimensions;
  c2_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c2_numDimensions);
  if ((void *)c2_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
  }

  c2_emxArray->allocatedSize = 0;
  c2_emxArray->canFreeData = true;
  for (c2_i = 0; c2_i < c2_numDimensions; c2_i++) {
    c2_emxArray->size[c2_i] = 0;
  }
}

static void c2_emxFree_cell_wrap_31(SFc2_wwtp3InstanceStruct *chartInstance,
  c2_emxArray_cell_wrap_31 **c2_pEmxArray)
{
  int32_T c2_b_i;
  int32_T c2_i;
  int32_T c2_numEl;
  if (*c2_pEmxArray != (c2_emxArray_cell_wrap_31 *)NULL) {
    if ((*c2_pEmxArray)->data != (c2_cell_wrap_31 *)NULL) {
      c2_numEl = 1;
      for (c2_i = 0; c2_i < (*c2_pEmxArray)->numDimensions; c2_i++) {
        c2_numEl *= (*c2_pEmxArray)->size[c2_i];
      }

      for (c2_b_i = 0; c2_b_i < c2_numEl; c2_b_i++) {
        c2_emxFreeStruct_cell_wrap_31(chartInstance, &(*c2_pEmxArray)->
          data[c2_b_i]);
      }

      if ((*c2_pEmxArray)->canFreeData) {
        emlrtFreeMex((*c2_pEmxArray)->data);
      }
    }

    emlrtFreeMex((*c2_pEmxArray)->size);
    emlrtFreeMex(*c2_pEmxArray);
    *c2_pEmxArray = (c2_emxArray_cell_wrap_31 *)NULL;
  }
}

static void c2_emxTrim_cell_wrap_31(SFc2_wwtp3InstanceStruct *chartInstance,
  c2_emxArray_cell_wrap_31 *c2_emxArray, int32_T c2_fromIndex, int32_T
  c2_toIndex)
{
  int32_T c2_i;
  for (c2_i = c2_fromIndex; c2_i < c2_toIndex; c2_i++) {
    c2_emxFreeStruct_cell_wrap_31(chartInstance, &c2_emxArray->data[c2_i]);
  }
}

static void c2_emxExpand_cell_wrap_31(SFc2_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_emxArray_cell_wrap_31 *c2_emxArray, int32_T
  c2_fromIndex, int32_T c2_toIndex, const emlrtRTEInfo *c2_srcLocation)
{
  int32_T c2_i;
  for (c2_i = c2_fromIndex; c2_i < c2_toIndex; c2_i++) {
    c2_emxInitStruct_cell_wrap_31(chartInstance, c2_sp, &c2_emxArray->data[c2_i],
      c2_srcLocation);
  }
}

static void c2_emxEnsureCapacity_cell_wrap_312(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_cell_wrap_31 *c2_emxArray,
  int32_T c2_oldNumel, const emlrtRTEInfo *c2_srcLocation)
{
  int32_T c2_i;
  int32_T c2_newCapacity;
  int32_T c2_newNumel;
  void *c2_newData;
  if (c2_oldNumel < 0) {
    c2_oldNumel = 0;
  }

  c2_newNumel = 1;
  for (c2_i = 0; c2_i < c2_emxArray->numDimensions; c2_i++) {
    c2_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c2_newNumel,
      (size_t)(uint32_T)c2_emxArray->size[c2_i], c2_srcLocation, (void *)c2_sp);
  }

  if (c2_newNumel > c2_emxArray->allocatedSize) {
    c2_newCapacity = c2_emxArray->allocatedSize;
    if (c2_newCapacity < 16) {
      c2_newCapacity = 16;
    }

    while (c2_newCapacity < c2_newNumel) {
      if (c2_newCapacity > 1073741823) {
        c2_newCapacity = MAX_int32_T;
      } else {
        c2_newCapacity <<= 1;
      }
    }

    c2_newData = emlrtCallocMex((uint32_T)c2_newCapacity, sizeof(c2_cell_wrap_31));
    if (c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if (c2_emxArray->data != NULL) {
      memcpy(c2_newData, c2_emxArray->data, sizeof(c2_cell_wrap_31) * (uint32_T)
             c2_oldNumel);
      if (c2_emxArray->canFreeData) {
        emlrtFreeMex(c2_emxArray->data);
      }
    }

    c2_emxArray->data = (c2_cell_wrap_31 *)c2_newData;
    c2_emxArray->allocatedSize = c2_newCapacity;
    c2_emxArray->canFreeData = true;
  }

  if (c2_oldNumel > c2_newNumel) {
    c2_emxTrim_cell_wrap_31(chartInstance, c2_emxArray, c2_newNumel, c2_oldNumel);
  } else if (c2_oldNumel < c2_newNumel) {
    c2_emxExpand_cell_wrap_31(chartInstance, c2_sp, c2_emxArray, c2_oldNumel,
      c2_newNumel, c2_srcLocation);
  }
}

static void c2_emxEnsureCapacity_boolean_T(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_boolean_T *c2_emxArray,
  int32_T c2_oldNumel, const emlrtRTEInfo *c2_srcLocation)
{
  int32_T c2_i;
  int32_T c2_newCapacity;
  int32_T c2_newNumel;
  void *c2_newData;
  (void)chartInstance;
  if (c2_oldNumel < 0) {
    c2_oldNumel = 0;
  }

  c2_newNumel = 1;
  for (c2_i = 0; c2_i < c2_emxArray->numDimensions; c2_i++) {
    c2_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c2_newNumel,
      (size_t)(uint32_T)c2_emxArray->size[c2_i], c2_srcLocation, (void *)c2_sp);
  }

  if (c2_newNumel > c2_emxArray->allocatedSize) {
    c2_newCapacity = c2_emxArray->allocatedSize;
    if (c2_newCapacity < 16) {
      c2_newCapacity = 16;
    }

    while (c2_newCapacity < c2_newNumel) {
      if (c2_newCapacity > 1073741823) {
        c2_newCapacity = MAX_int32_T;
      } else {
        c2_newCapacity <<= 1;
      }
    }

    c2_newData = emlrtCallocMex((uint32_T)c2_newCapacity, sizeof(boolean_T));
    if (c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if (c2_emxArray->data != NULL) {
      memcpy(c2_newData, c2_emxArray->data, sizeof(boolean_T) * (uint32_T)
             c2_oldNumel);
      if (c2_emxArray->canFreeData) {
        emlrtFreeMex(c2_emxArray->data);
      }
    }

    c2_emxArray->data = (boolean_T *)c2_newData;
    c2_emxArray->allocatedSize = c2_newCapacity;
    c2_emxArray->canFreeData = true;
  }
}

static void c2_emxInit_boolean_T(SFc2_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_boolean_T **c2_pEmxArray, int32_T
  c2_numDimensions, const emlrtRTEInfo *c2_srcLocation)
{
  c2_emxArray_boolean_T *c2_emxArray;
  int32_T c2_i;
  (void)chartInstance;
  *c2_pEmxArray = (c2_emxArray_boolean_T *)emlrtMallocMex(sizeof
    (c2_emxArray_boolean_T));
  if ((void *)*c2_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
  }

  c2_emxArray = *c2_pEmxArray;
  c2_emxArray->data = (boolean_T *)NULL;
  c2_emxArray->numDimensions = c2_numDimensions;
  c2_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c2_numDimensions);
  if ((void *)c2_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
  }

  c2_emxArray->allocatedSize = 0;
  c2_emxArray->canFreeData = true;
  for (c2_i = 0; c2_i < c2_numDimensions; c2_i++) {
    c2_emxArray->size[c2_i] = 0;
  }
}

static void c2_emxFree_boolean_T(SFc2_wwtp3InstanceStruct *chartInstance,
  c2_emxArray_boolean_T **c2_pEmxArray)
{
  (void)chartInstance;
  if (*c2_pEmxArray != (c2_emxArray_boolean_T *)NULL) {
    if (((*c2_pEmxArray)->data != (boolean_T *)NULL) && (*c2_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c2_pEmxArray)->data);
    }

    emlrtFreeMex((*c2_pEmxArray)->size);
    emlrtFreeMex(*c2_pEmxArray);
    *c2_pEmxArray = (c2_emxArray_boolean_T *)NULL;
  }
}

static void c2_emxTrim_cell_wrap_37_1x1(SFc2_wwtp3InstanceStruct *chartInstance,
  c2_cell_wrap_37 c2_data[1], int32_T c2_fromIndex, int32_T c2_toIndex)
{
  int32_T c2_i;
  for (c2_i = c2_fromIndex; c2_i < c2_toIndex; c2_i++) {
    c2_emxFreeStruct_cell_wrap_37(chartInstance, &c2_data[c2_i]);
  }
}

static void c2_emxExpand_cell_wrap_37_1x1(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_cell_wrap_37 c2_data[1], int32_T
  c2_fromIndex, int32_T c2_toIndex, const emlrtRTEInfo *c2_srcLocation)
{
  int32_T c2_i;
  for (c2_i = c2_fromIndex; c2_i < c2_toIndex; c2_i++) {
    c2_emxInitStruct_cell_wrap_37(chartInstance, c2_sp, &c2_data[c2_i],
      c2_srcLocation);
  }
}

static void c2_emxEnsureCapacity_cell_wrap_37(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_cell_wrap_37 c2_data[1], int32_T
  c2_size[2], int32_T c2_oldNumel, const emlrtRTEInfo *c2_srcLocation)
{
  int32_T c2_newNumel;
  if (c2_oldNumel < 0) {
    c2_oldNumel = 0;
  }

  c2_newNumel = c2_size[0] * c2_size[1];
  if (c2_oldNumel > c2_newNumel) {
    c2_emxTrim_cell_wrap_37_1x1(chartInstance, c2_data, c2_newNumel, c2_oldNumel);
  } else if (c2_oldNumel < c2_newNumel) {
    c2_emxExpand_cell_wrap_37_1x1(chartInstance, c2_sp, c2_data, c2_oldNumel,
      c2_newNumel, c2_srcLocation);
  }
}

static void c2_emxCopyStruct_cell_wrap_37(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_cell_wrap_37 *c2_dst, const
  c2_cell_wrap_37 *c2_src, const emlrtRTEInfo *c2_srcLocation)
{
  c2_emxCopy_uint8_T(chartInstance, c2_sp, &c2_dst->f1, &c2_src->f1,
                     c2_srcLocation);
}

static void c2_emxTrim_cell_wrap_37_1(SFc2_wwtp3InstanceStruct *chartInstance,
  c2_cell_wrap_37 c2_data[1], int32_T c2_fromIndex, int32_T c2_toIndex)
{
  int32_T c2_i;
  for (c2_i = c2_fromIndex; c2_i < c2_toIndex; c2_i++) {
    c2_emxFreeStruct_cell_wrap_37(chartInstance, &c2_data[c2_i]);
  }
}

static void c2_emxExpand_cell_wrap_37_1(SFc2_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_cell_wrap_37 c2_data[1], int32_T c2_fromIndex,
  int32_T c2_toIndex, const emlrtRTEInfo *c2_srcLocation)
{
  int32_T c2_i;
  for (c2_i = c2_fromIndex; c2_i < c2_toIndex; c2_i++) {
    c2_emxInitStruct_cell_wrap_37(chartInstance, c2_sp, &c2_data[c2_i],
      c2_srcLocation);
  }
}

static void c2_emxEnsureCapacity_cell_wrap_371(SFc2_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_cell_wrap_37 c2_data[1], int32_T
  c2_size[1], int32_T c2_oldNumel, const emlrtRTEInfo *c2_srcLocation)
{
  int32_T c2_newNumel;
  if (c2_oldNumel < 0) {
    c2_oldNumel = 0;
  }

  c2_newNumel = c2_size[0];
  if (c2_oldNumel > c2_newNumel) {
    c2_emxTrim_cell_wrap_37_1(chartInstance, c2_data, c2_newNumel, c2_oldNumel);
  } else if (c2_oldNumel < c2_newNumel) {
    c2_emxExpand_cell_wrap_37_1(chartInstance, c2_sp, c2_data, c2_oldNumel,
      c2_newNumel, c2_srcLocation);
  }
}

static void c2_emxInit_cell_wrap_37_1x1(SFc2_wwtp3InstanceStruct *chartInstance,
  c2_emxArray_cell_wrap_37_1x1 *c2_pEmxArray)
{
  int32_T c2_i;
  (void)chartInstance;
  for (c2_i = 0; c2_i < 2; c2_i++) {
    c2_pEmxArray->size[c2_i] = 0;
  }
}

static void c2_emxFree_cell_wrap_37_1x1(SFc2_wwtp3InstanceStruct *chartInstance,
  c2_emxArray_cell_wrap_37_1x1 *c2_pEmxArray)
{
  int32_T c2_b_i;
  int32_T c2_i;
  int32_T c2_numEl;
  c2_numEl = 1;
  for (c2_i = 0; c2_i < 2; c2_i++) {
    c2_numEl *= c2_pEmxArray->size[c2_i];
  }

  for (c2_b_i = 0; c2_b_i < c2_numEl; c2_b_i++) {
    c2_emxFreeStruct_cell_wrap_37(chartInstance, &c2_pEmxArray->data[c2_b_i]);
  }
}

static void c2_emxInit_cell_wrap_37_1(SFc2_wwtp3InstanceStruct *chartInstance,
  c2_emxArray_cell_wrap_37_1 *c2_pEmxArray)
{
  int32_T c2_i;
  (void)chartInstance;
  for (c2_i = 0; c2_i < 1; c2_i++) {
    c2_pEmxArray->size[c2_i] = 0;
  }
}

static void c2_emxFree_cell_wrap_37_1(SFc2_wwtp3InstanceStruct *chartInstance,
  c2_emxArray_cell_wrap_37_1 *c2_pEmxArray)
{
  int32_T c2_b_i;
  int32_T c2_i;
  int32_T c2_numEl;
  c2_numEl = 1;
  for (c2_i = 0; c2_i < 1; c2_i++) {
    c2_numEl *= c2_pEmxArray->size[c2_i];
  }

  for (c2_b_i = 0; c2_b_i < c2_numEl; c2_b_i++) {
    c2_emxFreeStruct_cell_wrap_37(chartInstance, &c2_pEmxArray->data[c2_b_i]);
  }
}

static void init_dsm_address_info(SFc2_wwtp3InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc2_wwtp3InstanceStruct *chartInstance)
{
  chartInstance->c2_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c2_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c2_u = (uint16_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c2_a = (real_T *)ssGetOutputPortSignal_wrapper(chartInstance->S,
    1);
  chartInstance->c2_ir = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c2_ws = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c2_wwtp3_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2419576117U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1581563315U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(842094550U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(108787310U);
}

mxArray *sf_c2_wwtp3_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,4);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "matlabshared.network.internal.coder.TCPClient"));
  mxSetCell(mxcell3p, 1, mxCreateString(
             "matlabshared.asyncio.buffer.internal.coder.BufferChannel"));
  mxSetCell(mxcell3p, 2, mxCreateString(
             "matlabshared.asyncio.internal.coder.API"));
  mxSetCell(mxcell3p, 3, mxCreateString("coder.internal.time.CoderTimeAPI"));
  return(mxcell3p);
}

mxArray *sf_c2_wwtp3_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_vars");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("chImpl");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c2_wwtp3_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c2_wwtp3(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiAuYGZgYAPSHEDMxAABrFA+IxCzQGmIOAtcXAGISyoLUkHixUXJnilAOi8xF8x"
    "PLK3wzEvLB5tvwYAwnw2L+YxI5nNCxSHggz1l+kUcQPoNkPSzENAvAGQlQsMFFj4D534JotzPhO"
    "J+JobMosHifhmy3F9eTC33KzhQph9ivwcB9wuhuB/CzyyOT0wuySxLjU82ii8vLykwRpgHAgDZi"
    "B3c"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c2_wwtp3_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "syLzv5TKf0fv9MmY55J60kD";
}

static void sf_opaque_initialize_c2_wwtp3(void *chartInstanceVar)
{
  initialize_params_c2_wwtp3((SFc2_wwtp3InstanceStruct*) chartInstanceVar);
  initialize_c2_wwtp3((SFc2_wwtp3InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c2_wwtp3(void *chartInstanceVar)
{
  enable_c2_wwtp3((SFc2_wwtp3InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c2_wwtp3(void *chartInstanceVar)
{
  disable_c2_wwtp3((SFc2_wwtp3InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c2_wwtp3(void *chartInstanceVar)
{
  sf_gateway_c2_wwtp3((SFc2_wwtp3InstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c2_wwtp3(SimStruct* S)
{
  return get_sim_state_c2_wwtp3((SFc2_wwtp3InstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c2_wwtp3(SimStruct* S, const mxArray *st)
{
  set_sim_state_c2_wwtp3((SFc2_wwtp3InstanceStruct*)sf_get_chart_instance_ptr(S),
    st);
}

static void sf_opaque_cleanup_runtime_resources_c2_wwtp3(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc2_wwtp3InstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_wwtp3_optimization_info();
    }

    mdl_cleanup_runtime_resources_c2_wwtp3((SFc2_wwtp3InstanceStruct*)
      chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c2_wwtp3(void *chartInstanceVar)
{
  mdl_start_c2_wwtp3((SFc2_wwtp3InstanceStruct*) chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc2_wwtp3InstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c2_wwtp3(void *chartInstanceVar)
{
  mdl_terminate_c2_wwtp3((SFc2_wwtp3InstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c2_wwtp3(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c2_wwtp3((SFc2_wwtp3InstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc2_wwtp3((SFc2_wwtp3InstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c2_wwtp3_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [22] = {
    "eNrtWFtvG0UUnrgmakWpoqoSCFUijzyAFFJSqIQgiS9gapOIdYLgJZrsHntHnp3ZzsWOIyT+Hn8",
    "AiZ/BA0J95Mx67ZqNcXZsaFPESuv17O435zLnfOfMko1Wh+BxD8/n7xKyidfbeFbI5HgjH2/MnZ",
    "P7VfJZPv7xTUJCGUEfRGB7PXZB/A5hk2OqaKKJ/yFoAt+CltwaJkVL9GR5LBM9UCBCnCCVynjJ1",
    "SyxnIlB04rQSdbfxSyMg1haHh3ihDQ6Enz8d3JTa45RYp0pCE0TIDKxkrYfNzntL/eCMqNaDOFA",
    "28TbVxpMYFNnqu5YbljKoXEBYUtoQ9EL+hp7A0MN1MyFn5OdvTqYomWSckZFeV/HVAeQYnQYOEk",
    "j/D2yBr1XChvGVJlDiOkQdJsNMulSQCnpTOPb50xQIxWjvJHwmputpL3HHG3sYEpw3zVCew8V0E",
    "EqmTCeCRE00c8NQc851OHc9j3lBvDMumw4ZTAC5be+vZocgqJ9OBJ+Omdr1LjIgnKWSyWxhiVwS",
    "tVBiLGrIfLjDUw6HVAMR+jiNF5YyFzc0l3FhhgbvlzXcum/EtfZZBL9eiVsJrcxBO+4mslthqJG",
    "Odd+2K5M2zAEnsmvU0NXwE7ke4C1ZlFXYnQ4tvFkLCsYZkKOrUkRsfJROSygssL2DRapEnCWuDS",
    "ACN08U3020XV5ZLWRSQ0pp95ul5R3FdsSBlSPhlC6xijKNKDCWVx5yo2YdomEaPSSyawsPcMkB1",
    "eCEt2zoj6SaoA+9i1mL3zlMsEPDVEfidlARnINjO5Tym1JnRPdx/zB8DjRyLJ+chHr8mclcEjDG",
    "CJXORmHDvIsTlB2ibUr+Qdo7ZCZcR10qFhaNpMsEjoWXeel7jiFEzEQciSaSiZB3nktiSsAZA2q",
    "BBP9QyzhatxE5ctpreBZN2N33ybH+ZkaTs9dbHwJAquhs9V1DTTErGoIbJFRoXWwAbvEJkZopg0",
    "W6vGk1E/qnuvfPyUv+vfqgv799lz/vpWPw92z0cikjxx+Zw5/t0T/P5W7DEeu4MgMN72+P4ffWC",
    "CXzF2L8u5UlutZwX8bOW5/DvdWQU61gNvMffTHk18qT03rwQc/yctPPv7593Xkb1f99lf38vHDa",
    "Z80Y+XhFeJy7351zfq/XVh/N9bj9uVwr/u0t9MbPukk3+/tff14Z1DP5ktvLde3WtB3en/b9WaY",
    "tBkHqLAV5fs0N6Z2sn8oxuvmNf64MxdPhPz2xXr4B/vFdaxeg9/Cf7QQt69O/3dK6V/5i/4VwtR",
    "N0f/hSvqP9D+l//b+evhy+Xa/kG/3s73SGXUVEc6mzHuVD1flF18cecm410XP//3y79tXpr9YFX",
    "drRRx5ybh17fPtm17395fVC1J4f+sG27GM733655tm16/Er799Lx9/PvteU4sZjxbsGPPHuKnrL",
    "Xr6H4nv557+m/bzDee//MP+D48OBOVj3CJOtuD57WPlvs/OHimgevE+/FXUE7Jgf7aon7pbyG83",
    "HjERyZH+8KPdvd116tOfvZsYhg==",
    ""
  };

  static char newstr [1529] = "";
  newstr[0] = '\0';
  for (i = 0; i < 22; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c2_wwtp3(SimStruct *S)
{
  const char* newstr = sf_c2_wwtp3_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(47528438U));
  ssSetChecksum1(S,(340358219U));
  ssSetChecksum2(S,(2054127404U));
  ssSetChecksum3(S,(4106761271U));
}

static void mdlRTW_c2_wwtp3(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c2_wwtp3(SimStruct *S)
{
  SFc2_wwtp3InstanceStruct *chartInstance;
  chartInstance = (SFc2_wwtp3InstanceStruct *)utMalloc(sizeof
    (SFc2_wwtp3InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc2_wwtp3InstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c2_wwtp3;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c2_wwtp3;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c2_wwtp3;
  chartInstance->chartInfo.mdlTerminate = sf_opaque_mdl_terminate_c2_wwtp3;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c2_wwtp3;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c2_wwtp3;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c2_wwtp3;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c2_wwtp3;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c2_wwtp3;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c2_wwtp3;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c2_wwtp3;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c2_wwtp3;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0,
    chartInstance->c2_JITStateAnimation,
    chartInstance->c2_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c2_wwtp3(chartInstance);
}

void c2_wwtp3_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c2_wwtp3(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c2_wwtp3(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c2_wwtp3(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c2_wwtp3_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
