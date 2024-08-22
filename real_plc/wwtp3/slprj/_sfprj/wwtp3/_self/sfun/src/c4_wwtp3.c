/* Include files */

#include "wwtp3_sfun.h"
#include "c4_wwtp3.h"
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
static emlrtMCInfo c4_emlrtMCI = { 22, /* lineNo */
  27,                                  /* colNo */
  "validatege",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatege.m"/* pName */
};

static emlrtMCInfo c4_b_emlrtMCI = { 22,/* lineNo */
  27,                                  /* colNo */
  "validatele",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatele.m"/* pName */
};

static emlrtMCInfo c4_c_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatenonnegative",               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnegative.m"/* pName */
};

static emlrtMCInfo c4_d_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatefinite",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatefinite.m"/* pName */
};

static emlrtMCInfo c4_e_emlrtMCI = { 1,/* lineNo */
  1,                                   /* colNo */
  "TCPClient",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\networklib\\+matlabshared\\+network\\+internal\\+coder\\TCPClient.p"/* pName */
};

static emlrtMCInfo c4_f_emlrtMCI = { 154,/* lineNo */
  13,                                  /* colNo */
  "Channel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Channel.m"/* pName */
};

static emlrtMCInfo c4_g_emlrtMCI = { 790,/* lineNo */
  17,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtMCInfo c4_h_emlrtMCI = { 788,/* lineNo */
  17,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtMCInfo c4_i_emlrtMCI = { 786,/* lineNo */
  17,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtMCInfo c4_j_emlrtMCI = { 784,/* lineNo */
  17,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtMCInfo c4_k_emlrtMCI = { 782,/* lineNo */
  17,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtMCInfo c4_l_emlrtMCI = { 780,/* lineNo */
  17,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtMCInfo c4_m_emlrtMCI = { 778,/* lineNo */
  17,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtMCInfo c4_n_emlrtMCI = { 776,/* lineNo */
  17,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtMCInfo c4_o_emlrtMCI = { 774,/* lineNo */
  17,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtMCInfo c4_p_emlrtMCI = { 772,/* lineNo */
  17,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtMCInfo c4_q_emlrtMCI = { 770,/* lineNo */
  17,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtMCInfo c4_r_emlrtMCI = { 768,/* lineNo */
  17,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtMCInfo c4_s_emlrtMCI = { 766,/* lineNo */
  17,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtMCInfo c4_t_emlrtMCI = { 764,/* lineNo */
  17,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtMCInfo c4_u_emlrtMCI = { 792,/* lineNo */
  17,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtMCInfo c4_v_emlrtMCI = { 800,/* lineNo */
  13,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtMCInfo c4_w_emlrtMCI = { 326,/* lineNo */
  13,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtMCInfo c4_x_emlrtMCI = { 47,/* lineNo */
  5,                                   /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pName */
};

static emlrtMCInfo c4_y_emlrtMCI = { 333,/* lineNo */
  13,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtMCInfo c4_ab_emlrtMCI = { 148,/* lineNo */
  25,                                  /* colNo */
  "BufferChannel",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pName */
};

static emlrtMCInfo c4_bb_emlrtMCI = { 162,/* lineNo */
  25,                                  /* colNo */
  "BufferChannel",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pName */
};

static emlrtMCInfo c4_cb_emlrtMCI = { 168,/* lineNo */
  21,                                  /* colNo */
  "BufferChannel",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pName */
};

static emlrtMCInfo c4_db_emlrtMCI = { 963,/* lineNo */
  25,                                  /* colNo */
  "Modbus",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pName */
};

static emlrtMCInfo c4_eb_emlrtMCI = { 969,/* lineNo */
  21,                                  /* colNo */
  "Modbus",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pName */
};

static emlrtMCInfo c4_fb_emlrtMCI = { 15,/* lineNo */
  9,                                   /* colNo */
  "assertSupportedString",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\assertSupportedString.m"/* pName */
};

static emlrtMCInfo c4_gb_emlrtMCI = { 1,/* lineNo */
  1,                                   /* colNo */
  "AsyncIOTransportChannel",           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\transportlib\\+matlabshared\\+transportlib\\+internal\\+asyncIOTransportChan"
  "nel\\+coder\\AsyncIOTransportChannel.p"/* pName */
};

static emlrtMCInfo c4_hb_emlrtMCI = { 159,/* lineNo */
  13,                                  /* colNo */
  "CoderTimeAPI",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\+time\\CoderTimeAPI.m"/* pName */
};

static emlrtMCInfo c4_ib_emlrtMCI = { 249,/* lineNo */
  17,                                  /* colNo */
  "OutputStream",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\OutputStream.m"/* pName */
};

static emlrtMCInfo c4_jb_emlrtMCI = { 375,/* lineNo */
  21,                                  /* colNo */
  "Modbus",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pName */
};

static emlrtMCInfo c4_kb_emlrtMCI = { 540,/* lineNo */
  25,                                  /* colNo */
  "BufferChannel",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pName */
};

static emlrtMCInfo c4_lb_emlrtMCI = { 122,/* lineNo */
  5,                                   /* colNo */
  "indexShapeCheck",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pName */
};

static emlrtMCInfo c4_mb_emlrtMCI = { 135,/* lineNo */
  13,                                  /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pName */
};

static emlrtMCInfo c4_nb_emlrtMCI = { 147,/* lineNo */
  17,                                  /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pName */
};

static emlrtMCInfo c4_ob_emlrtMCI = { 58,/* lineNo */
  23,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtMCInfo c4_pb_emlrtMCI = { 64,/* lineNo */
  15,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtMCInfo c4_qb_emlrtMCI = { 91,/* lineNo */
  27,                                  /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\cat.m"/* pName */
};

static emlrtMCInfo c4_rb_emlrtMCI = { 87,/* lineNo */
  33,                                  /* colNo */
  "eml_int_forloop_overflow_check",    /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pName */
};

static emlrtMCInfo c4_sb_emlrtMCI = { 288,/* lineNo */
  27,                                  /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtMCInfo c4_tb_emlrtMCI = { 13,/* lineNo */
  37,                                  /* colNo */
  "validatenonempty",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonempty.m"/* pName */
};

static emlrtMCInfo c4_ub_emlrtMCI = { 13,/* lineNo */
  37,                                  /* colNo */
  "validatevector",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatevector.m"/* pName */
};

static emlrtMCInfo c4_vb_emlrtMCI = { 11,/* lineNo */
  24,                                  /* colNo */
  "mustBeNonnegative",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\validators\\mustBeNonnegative.m"/* pName */
};

static emlrtMCInfo c4_wb_emlrtMCI = { 64,/* lineNo */
  9,                                   /* colNo */
  "bitget",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\bitget.m"/* pName */
};

static emlrtMCInfo c4_xb_emlrtMCI = { 82,/* lineNo */
  5,                                   /* colNo */
  "power",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pName */
};

static emlrtMCInfo c4_yb_emlrtMCI = { 13,/* lineNo */
  13,                                  /* colNo */
  "toLogicalCheck",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\toLogicalCheck.m"/* pName */
};

static emlrtMCInfo c4_ac_emlrtMCI = { 1051,/* lineNo */
  21,                                  /* colNo */
  "Modbus",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pName */
};

static emlrtMCInfo c4_bc_emlrtMCI = { 1046,/* lineNo */
  25,                                  /* colNo */
  "Modbus",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pName */
};

static emlrtMCInfo c4_cc_emlrtMCI = { 1048,/* lineNo */
  25,                                  /* colNo */
  "Modbus",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pName */
};

static emlrtMCInfo c4_dc_emlrtMCI = { 1043,/* lineNo */
  21,                                  /* colNo */
  "Modbus",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pName */
};

static emlrtMCInfo c4_ec_emlrtMCI = { 1038,/* lineNo */
  25,                                  /* colNo */
  "Modbus",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pName */
};

static emlrtMCInfo c4_fc_emlrtMCI = { 1040,/* lineNo */
  25,                                  /* colNo */
  "Modbus",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pName */
};

static emlrtMCInfo c4_gc_emlrtMCI = { 1035,/* lineNo */
  21,                                  /* colNo */
  "Modbus",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pName */
};

static emlrtMCInfo c4_hc_emlrtMCI = { 1053,/* lineNo */
  21,                                  /* colNo */
  "Modbus",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pName */
};

static emlrtMCInfo c4_ic_emlrtMCI = { 82,/* lineNo */
  27,                                  /* colNo */
  "bitbinop",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\private\\bitbinop.m"/* pName */
};

static emlrtRSInfo c4_emlrtRSI = { 96, /* lineNo */
  "modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\modbus.m"/* pathName */
};

static emlrtRSInfo c4_b_emlrtRSI = { 45,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_c_emlrtRSI = { 90,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_d_emlrtRSI = { 97,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_e_emlrtRSI = { 119,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_f_emlrtRSI = { 85,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_g_emlrtRSI = { 80,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_h_emlrtRSI = { 83,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_i_emlrtRSI = { 67,/* lineNo */
  "DataConverter",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\DataConverter.m"/* pathName */
};

static emlrtRSInfo c4_j_emlrtRSI = { 70,/* lineNo */
  "DataConverter",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\DataConverter.m"/* pathName */
};

static emlrtRSInfo c4_k_emlrtRSI = { 71,/* lineNo */
  "DataConverter",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\DataConverter.m"/* pathName */
};

static emlrtRSInfo c4_l_emlrtRSI = { 147,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_m_emlrtRSI = { 13,/* lineNo */
  "GetTransport",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\GetTransport.m"/* pathName */
};

static emlrtRSInfo c4_n_emlrtRSI = { 1,/* lineNo */
  "TCPClient",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\networklib\\+matlabshared\\+network\\+internal\\+coder\\TCPClient.p"/* pathName */
};

static emlrtRSInfo c4_o_emlrtRSI = { 93,/* lineNo */
  "validateattributes",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"/* pathName */
};

static emlrtRSInfo c4_p_emlrtRSI = { 1,/* lineNo */
  "ITransport",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\transportlib\\+matlabshared\\+transportlib\\+internal\\ITransport.p"/* pathName */
};

static emlrtRSInfo c4_q_emlrtRSI = { 1,/* lineNo */
  "ITokenReader",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\transportlib\\+matlabshared\\+transportlib\\+internal\\ITokenReader.p"/* pathName */
};

static emlrtRSInfo c4_r_emlrtRSI = { 1,/* lineNo */
  "IFilterable",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\transportlib\\+matlabshared\\+transportlib\\+internal\\IFilterable.p"/* pathName */
};

static emlrtRSInfo c4_s_emlrtRSI = { 29,/* lineNo */
  "sprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\strfun\\sprintf.m"/* pathName */
};

static emlrtRSInfo c4_t_emlrtRSI = { 53,/* lineNo */
  "sprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\strfun\\sprintf.m"/* pathName */
};

static emlrtRSInfo c4_u_emlrtRSI = { 55,/* lineNo */
  "sprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\strfun\\sprintf.m"/* pathName */
};

static emlrtRSInfo c4_v_emlrtRSI = { 54,/* lineNo */
  "Channel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Channel.m"/* pathName */
};

static emlrtRSInfo c4_w_emlrtRSI = { 162,/* lineNo */
  "Channel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Channel.m"/* pathName */
};

static emlrtRSInfo c4_x_emlrtRSI = { 165,/* lineNo */
  "Channel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Channel.m"/* pathName */
};

static emlrtRSInfo c4_y_emlrtRSI = { 168,/* lineNo */
  "Channel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Channel.m"/* pathName */
};

static emlrtRSInfo c4_ab_emlrtRSI = { 169,/* lineNo */
  "Channel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Channel.m"/* pathName */
};

static emlrtRSInfo c4_bb_emlrtRSI = { 252,/* lineNo */
  "API",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pathName */
};

static emlrtRSInfo c4_cb_emlrtRSI = { 761,/* lineNo */
  "API",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pathName */
};

static emlrtRSInfo c4_db_emlrtRSI = { 403,/* lineNo */
  "API",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pathName */
};

static emlrtRSInfo c4_eb_emlrtRSI = { 470,/* lineNo */
  "API",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pathName */
};

static emlrtRSInfo c4_fb_emlrtRSI = { 478,/* lineNo */
  "API",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pathName */
};

static emlrtRSInfo c4_gb_emlrtRSI = { 799,/* lineNo */
  "API",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pathName */
};

static emlrtRSInfo c4_hb_emlrtRSI = { 55,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c4_ib_emlrtRSI = { 76,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c4_jb_emlrtRSI = { 25,/* lineNo */
  "Stream",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m"/* pathName */
};

static emlrtRSInfo c4_kb_emlrtRSI = { 36,/* lineNo */
  "Stream",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m"/* pathName */
};

static emlrtRSInfo c4_lb_emlrtRSI = { 563,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c4_mb_emlrtRSI = { 279,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c4_nb_emlrtRSI = { 292,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c4_ob_emlrtRSI = { 40,/* lineNo */
  "OutputStream",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\OutputStream.m"/* pathName */
};

static emlrtRSInfo c4_pb_emlrtRSI = { 38,/* lineNo */
  "Stream",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m"/* pathName */
};

static emlrtRSInfo c4_qb_emlrtRSI = { 1,/* lineNo */
  "AsyncIOTransportChannel",           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\transportlib\\+matlabshared\\+transportlib\\+internal\\+asyncIOTransportChan"
  "nel\\+coder\\AsyncIOTransportChannel.p"/* pathName */
};

static emlrtRSInfo c4_rb_emlrtRSI = { 1,/* lineNo */
  "ByteOrder",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\transportlib\\+matlabshared\\+transportlib\\+internal\\ByteOrder.p"/* pathName */
};

static emlrtRSInfo c4_sb_emlrtRSI = { 254,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c4_tb_emlrtRSI = { 229,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c4_ub_emlrtRSI = { 255,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c4_vb_emlrtRSI = { 273,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c4_wb_emlrtRSI = { 131,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c4_xb_emlrtRSI = { 133,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c4_yb_emlrtRSI = { 136,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c4_ac_emlrtRSI = { 140,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c4_bc_emlrtRSI = { 154,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c4_cc_emlrtRSI = { 587,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c4_dc_emlrtRSI = { 286,/* lineNo */
  "Channel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Channel.m"/* pathName */
};

static emlrtRSInfo c4_ec_emlrtRSI = { 294,/* lineNo */
  "Channel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Channel.m"/* pathName */
};

static emlrtRSInfo c4_fc_emlrtRSI = { 229,/* lineNo */
  "Channel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Channel.m"/* pathName */
};

static emlrtRSInfo c4_gc_emlrtRSI = { 286,/* lineNo */
  "API",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pathName */
};

static emlrtRSInfo c4_hc_emlrtRSI = { 416,/* lineNo */
  "API",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pathName */
};

static emlrtRSInfo c4_ic_emlrtRSI = { 152,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_jc_emlrtRSI = { 153,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_kc_emlrtRSI = { 155,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_lc_emlrtRSI = { 247,/* lineNo */
  "Channel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Channel.m"/* pathName */
};

static emlrtRSInfo c4_mc_emlrtRSI = { 319,/* lineNo */
  "API",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pathName */
};

static emlrtRSInfo c4_nc_emlrtRSI = { 185,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_oc_emlrtRSI = { 186,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_pc_emlrtRSI = { 187,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_qc_emlrtRSI = { 188,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_rc_emlrtRSI = { 97,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_sc_emlrtRSI = { 106,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_tc_emlrtRSI = { 132,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_uc_emlrtRSI = { 1072,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_vc_emlrtRSI = { 16,/* lineNo */
  "PacketBuilder",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\PacketBuilder.m"/* pathName */
};

static emlrtRSInfo c4_wc_emlrtRSI = { 40,/* lineNo */
  "PacketBuilder",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\PacketBuilder.m"/* pathName */
};

static emlrtRSInfo c4_xc_emlrtRSI = { 376,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_yc_emlrtRSI = { 420,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_ad_emlrtRSI = { 370,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_bd_emlrtRSI = { 943,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_cd_emlrtRSI = { 724,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_dd_emlrtRSI = { 727,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_ed_emlrtRSI = { 730,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_fd_emlrtRSI = { 733,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_gd_emlrtRSI = { 112,/* lineNo */
  "DataConverter",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\DataConverter.m"/* pathName */
};

static emlrtRSInfo c4_hd_emlrtRSI = { 207,/* lineNo */
  "DataConverter",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\DataConverter.m"/* pathName */
};

static emlrtRSInfo c4_id_emlrtRSI = { 211,/* lineNo */
  "DataConverter",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\DataConverter.m"/* pathName */
};

static emlrtRSInfo c4_jd_emlrtRSI = { 91,/* lineNo */
  "strcmp",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\strcmp.m"/* pathName */
};

static emlrtRSInfo c4_kd_emlrtRSI = { 167,/* lineNo */
  "strcmp",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\strcmp.m"/* pathName */
};

static emlrtRSInfo c4_ld_emlrtRSI = { 240,/* lineNo */
  "strcmp",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\strcmp.m"/* pathName */
};

static emlrtRSInfo c4_md_emlrtRSI = { 241,/* lineNo */
  "strcmp",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\strcmp.m"/* pathName */
};

static emlrtRSInfo c4_nd_emlrtRSI = { 242,/* lineNo */
  "strcmp",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\strcmp.m"/* pathName */
};

static emlrtRSInfo c4_od_emlrtRSI = { 16,/* lineNo */
  "lower",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\strfun\\lower.m"/* pathName */
};

static emlrtRSInfo c4_pd_emlrtRSI = { 10,/* lineNo */
  "eml_string_transform",              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\strfun\\eml_string_transform.m"/* pathName */
};

static emlrtRSInfo c4_qd_emlrtRSI = { 176,/* lineNo */
  "DataConverter",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\DataConverter.m"/* pathName */
};

static emlrtRSInfo c4_rd_emlrtRSI = { 177,/* lineNo */
  "DataConverter",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\DataConverter.m"/* pathName */
};

static emlrtRSInfo c4_sd_emlrtRSI = { 179,/* lineNo */
  "DataConverter",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\DataConverter.m"/* pathName */
};

static emlrtRSInfo c4_td_emlrtRSI = { 250,/* lineNo */
  "DataConverter",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\DataConverter.m"/* pathName */
};

static emlrtRSInfo c4_ud_emlrtRSI = { 19,/* lineNo */
  "swapbytes",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\datatypes\\swapbytes.m"/* pathName */
};

static emlrtRSInfo c4_vd_emlrtRSI = { 35,/* lineNo */
  "PacketBuilder",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\PacketBuilder.m"/* pathName */
};

static emlrtRSInfo c4_wd_emlrtRSI = { 36,/* lineNo */
  "PacketBuilder",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\PacketBuilder.m"/* pathName */
};

static emlrtRSInfo c4_xd_emlrtRSI = { 162,/* lineNo */
  "PacketBuilder",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\PacketBuilder.m"/* pathName */
};

static emlrtRSInfo c4_yd_emlrtRSI = { 195,/* lineNo */
  "PacketBuilder",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\PacketBuilder.m"/* pathName */
};

static emlrtRSInfo c4_ae_emlrtRSI = { 196,/* lineNo */
  "PacketBuilder",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\PacketBuilder.m"/* pathName */
};

static emlrtRSInfo c4_be_emlrtRSI = { 203,/* lineNo */
  "PacketBuilder",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\PacketBuilder.m"/* pathName */
};

static emlrtRSInfo c4_ce_emlrtRSI = { 204,/* lineNo */
  "PacketBuilder",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\PacketBuilder.m"/* pathName */
};

static emlrtRSInfo c4_de_emlrtRSI = { 240,/* lineNo */
  "PacketBuilder",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\PacketBuilder.m"/* pathName */
};

static emlrtRSInfo c4_ee_emlrtRSI = { 68,/* lineNo */
  "PacketBuilder",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\PacketBuilder.m"/* pathName */
};

static emlrtRSInfo c4_fe_emlrtRSI = { 78,/* lineNo */
  "PacketBuilder",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\PacketBuilder.m"/* pathName */
};

static emlrtRSInfo c4_ge_emlrtRSI = { 83,/* lineNo */
  "PacketBuilder",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\PacketBuilder.m"/* pathName */
};

static emlrtRSInfo c4_he_emlrtRSI = { 1008,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_ie_emlrtRSI = { 253,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_je_emlrtRSI = { 254,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_ke_emlrtRSI = { 255,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_le_emlrtRSI = { 268,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_me_emlrtRSI = { 137,/* lineNo */
  "OutputStream",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\OutputStream.m"/* pathName */
};

static emlrtRSInfo c4_ne_emlrtRSI = { 140,/* lineNo */
  "OutputStream",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\OutputStream.m"/* pathName */
};

static emlrtRSInfo c4_oe_emlrtRSI = { 143,/* lineNo */
  "OutputStream",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\OutputStream.m"/* pathName */
};

static emlrtRSInfo c4_pe_emlrtRSI = { 148,/* lineNo */
  "OutputStream",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\OutputStream.m"/* pathName */
};

static emlrtRSInfo c4_qe_emlrtRSI = { 167,/* lineNo */
  "OutputStream",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\OutputStream.m"/* pathName */
};

static emlrtRSInfo c4_re_emlrtRSI = { 232,/* lineNo */
  "Stream",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m"/* pathName */
};

static emlrtRSInfo c4_se_emlrtRSI = { 527,/* lineNo */
  "API",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pathName */
};

static emlrtRSInfo c4_te_emlrtRSI = { 585,/* lineNo */
  "API",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pathName */
};

static emlrtRSInfo c4_ue_emlrtRSI = { 186,/* lineNo */
  "Stream",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m"/* pathName */
};

static emlrtRSInfo c4_ve_emlrtRSI = { 187,/* lineNo */
  "Stream",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m"/* pathName */
};

static emlrtRSInfo c4_we_emlrtRSI = { 192,/* lineNo */
  "Stream",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m"/* pathName */
};

static emlrtRSInfo c4_xe_emlrtRSI = { 195,/* lineNo */
  "Stream",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m"/* pathName */
};

static emlrtRSInfo c4_ye_emlrtRSI = { 197,/* lineNo */
  "Stream",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m"/* pathName */
};

static emlrtRSInfo c4_af_emlrtRSI = { 200,/* lineNo */
  "Stream",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m"/* pathName */
};

static emlrtRSInfo c4_bf_emlrtRSI = { 202,/* lineNo */
  "Stream",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m"/* pathName */
};

static emlrtRSInfo c4_cf_emlrtRSI = { 203,/* lineNo */
  "Stream",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m"/* pathName */
};

static emlrtRSInfo c4_df_emlrtRSI = { 31,/* lineNo */
  "tic",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\timefun\\tic.m"/* pathName */
};

static emlrtRSInfo c4_ef_emlrtRSI = { 7,/* lineNo */
  "getTime",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\+time\\getTime.m"/* pathName */
};

static emlrtRSInfo c4_ff_emlrtRSI = { 21,/* lineNo */
  "CoderTimeAPI",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\+time\\CoderTimeAPI.m"/* pathName */
};

static emlrtRSInfo c4_gf_emlrtRSI = { 148,/* lineNo */
  "CoderTimeAPI",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\+time\\CoderTimeAPI.m"/* pathName */
};

static emlrtRSInfo c4_hf_emlrtRSI = { 36,/* lineNo */
  "toc",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\timefun\\toc.m"/* pathName */
};

static emlrtRSInfo c4_if_emlrtRSI = { 249,/* lineNo */
  "Stream",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m"/* pathName */
};

static emlrtRSInfo c4_jf_emlrtRSI = { 46,/* lineNo */
  "pause",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\timefun\\pause.m"/* pathName */
};

static emlrtRSInfo c4_kf_emlrtRSI = { 90,/* lineNo */
  "Stream",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m"/* pathName */
};

static emlrtRSInfo c4_lf_emlrtRSI = { 509,/* lineNo */
  "API",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pathName */
};

static emlrtRSInfo c4_mf_emlrtRSI = { 225,/* lineNo */
  "Stream",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m"/* pathName */
};

static emlrtRSInfo c4_nf_emlrtRSI = { 518,/* lineNo */
  "API",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pathName */
};

static emlrtRSInfo c4_of_emlrtRSI = { 204,/* lineNo */
  "OutputStream",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\OutputStream.m"/* pathName */
};

static emlrtRSInfo c4_pf_emlrtRSI = { 676,/* lineNo */
  "API",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pathName */
};

static emlrtRSInfo c4_qf_emlrtRSI = { 352,/* lineNo */
  "Channel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Channel.m"/* pathName */
};

static emlrtRSInfo c4_rf_emlrtRSI = { 438,/* lineNo */
  "API",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pathName */
};

static emlrtRSInfo c4_sf_emlrtRSI = { 239,/* lineNo */
  "OutputStream",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\OutputStream.m"/* pathName */
};

static emlrtRSInfo c4_tf_emlrtRSI = { 242,/* lineNo */
  "OutputStream",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\OutputStream.m"/* pathName */
};

static emlrtRSInfo c4_uf_emlrtRSI = { 247,/* lineNo */
  "OutputStream",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\OutputStream.m"/* pathName */
};

static emlrtRSInfo c4_vf_emlrtRSI = { 254,/* lineNo */
  "OutputStream",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\OutputStream.m"/* pathName */
};

static emlrtRSInfo c4_wf_emlrtRSI = { 238,/* lineNo */
  "Stream",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m"/* pathName */
};

static emlrtRSInfo c4_xf_emlrtRSI = { 536,/* lineNo */
  "API",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pathName */
};

static emlrtRSInfo c4_yf_emlrtRSI = { 162,/* lineNo */
  "Stream",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m"/* pathName */
};

static emlrtRSInfo c4_ag_emlrtRSI = { 576,/* lineNo */
  "API",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pathName */
};

static emlrtRSInfo c4_bg_emlrtRSI = { 336,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_cg_emlrtRSI = { 340,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_dg_emlrtRSI = { 343,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_eg_emlrtRSI = { 350,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_fg_emlrtRSI = { 353,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_gg_emlrtRSI = { 354,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_hg_emlrtRSI = { 355,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_ig_emlrtRSI = { 358,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_jg_emlrtRSI = { 361,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_kg_emlrtRSI = { 371,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_lg_emlrtRSI = { 373,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_mg_emlrtRSI = { 377,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_ng_emlrtRSI = { 206,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_og_emlrtRSI = { 209,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_pg_emlrtRSI = { 210,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_qg_emlrtRSI = { 293,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c4_rg_emlrtRSI = { 270,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c4_sg_emlrtRSI = { 225,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_tg_emlrtRSI = { 226,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_ug_emlrtRSI = { 385,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c4_vg_emlrtRSI = { 397,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c4_wg_emlrtRSI = { 535,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c4_xg_emlrtRSI = { 539,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c4_yg_emlrtRSI = { 542,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c4_ah_emlrtRSI = { 544,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c4_bh_emlrtRSI = { 545,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c4_ch_emlrtRSI = { 546,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c4_dh_emlrtRSI = { 548,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c4_eh_emlrtRSI = { 563,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c4_fh_emlrtRSI = { 569,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c4_gh_emlrtRSI = { 572,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c4_hh_emlrtRSI = { 612,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c4_ih_emlrtRSI = { 33,/* lineNo */
  "indexShapeCheck",                   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pathName */
};

static emlrtRSInfo c4_jh_emlrtRSI = { 182,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c4_kh_emlrtRSI = { 186,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c4_lh_emlrtRSI = { 193,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c4_mh_emlrtRSI = { 196,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c4_nh_emlrtRSI = { 199,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c4_oh_emlrtRSI = { 204,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c4_ph_emlrtRSI = { 210,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c4_qh_emlrtRSI = { 220,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c4_rh_emlrtRSI = { 225,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c4_sh_emlrtRSI = { 232,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c4_th_emlrtRSI = { 233,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c4_uh_emlrtRSI = { 235,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c4_vh_emlrtRSI = { 242,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c4_wh_emlrtRSI = { 533,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c4_xh_emlrtRSI = { 539,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c4_yh_emlrtRSI = { 541,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c4_ai_emlrtRSI = { 544,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c4_bi_emlrtRSI = { 307,/* lineNo */
  "Stream",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m"/* pathName */
};

static emlrtRSInfo c4_ci_emlrtRSI = { 371,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c4_di_emlrtRSI = { 417,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c4_ei_emlrtRSI = { 436,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c4_fi_emlrtRSI = { 440,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c4_gi_emlrtRSI = { 471,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c4_hi_emlrtRSI = { 479,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c4_ii_emlrtRSI = { 613,/* lineNo */
  "API",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pathName */
};

static emlrtRSInfo c4_ji_emlrtRSI = { 28,/* lineNo */
  "repmat",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

static emlrtRSInfo c4_ki_emlrtRSI = { 627,/* lineNo */
  "API",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pathName */
};

static emlrtRSInfo c4_li_emlrtRSI = { 522,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c4_mi_emlrtRSI = { 646,/* lineNo */
  "API",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pathName */
};

static emlrtRSInfo c4_ni_emlrtRSI = { 130,/* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\cat.m"/* pathName */
};

static emlrtRSInfo c4_oi_emlrtRSI = { 20,/* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

static emlrtRSInfo c4_pi_emlrtRSI = { 581,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c4_qi_emlrtRSI = { 41,/* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtRSInfo c4_ri_emlrtRSI = { 113,/* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtRSInfo c4_si_emlrtRSI = { 387,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c4_ti_emlrtRSI = { 333,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c4_ui_emlrtRSI = { 357,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c4_vi_emlrtRSI = { 48,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c4_wi_emlrtRSI = { 456,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_xi_emlrtRSI = { 64,/* lineNo */
  "bitget",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\bitget.m"/* pathName */
};

static emlrtRSInfo c4_yi_emlrtRSI = { 27,/* lineNo */
  "all_in_integer_range",              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\private\\all_in_integer_range.m"/* pathName */
};

static emlrtRSInfo c4_aj_emlrtRSI = { 58,/* lineNo */
  "eml_i64relops",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\eml\\eml_i64relops.m"/* pathName */
};

static emlrtRSInfo c4_bj_emlrtRSI = { 47,/* lineNo */
  "ixfun",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m"/* pathName */
};

static emlrtRSInfo c4_cj_emlrtRSI = { 40,/* lineNo */
  "eml_i64relops",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\eml\\eml_i64relops.m"/* pathName */
};

static emlrtRSInfo c4_dj_emlrtRSI = { 103,/* lineNo */
  "eml_i64relops",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\eml\\eml_i64relops.m"/* pathName */
};

static emlrtRSInfo c4_ej_emlrtRSI = { 216,/* lineNo */
  "eml_i64relops",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\eml\\eml_i64relops.m"/* pathName */
};

static emlrtRSInfo c4_fj_emlrtRSI = { 44,/* lineNo */
  "mpower",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\matfun\\mpower.m"/* pathName */
};

static emlrtRSInfo c4_gj_emlrtRSI = { 71,/* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo c4_hj_emlrtRSI = { 63,/* lineNo */
  "function_handle",                   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\function_handle.m"/* pathName */
};

static emlrtRSInfo c4_ij_emlrtRSI = { 38,/* lineNo */
  "eml_i64relops",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\eml\\eml_i64relops.m"/* pathName */
};

static emlrtRSInfo c4_jj_emlrtRSI = { 137,/* lineNo */
  "eml_i64relops",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\eml\\eml_i64relops.m"/* pathName */
};

static emlrtRSInfo c4_kj_emlrtRSI = { 443,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_lj_emlrtRSI = { 444,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_mj_emlrtRSI = { 256,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c4_nj_emlrtRSI = { 259,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c4_oj_emlrtRSI = { 405,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c4_pj_emlrtRSI = { 406,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c4_qj_emlrtRSI = { 407,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c4_rj_emlrtRSI = { 1034,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_sj_emlrtRSI = { 1037,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_tj_emlrtRSI = { 1045,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_uj_emlrtRSI = { 12,/* lineNo */
  "bitand",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\bitand.m"/* pathName */
};

static emlrtRSInfo c4_vj_emlrtRSI = { 82,/* lineNo */
  "bitbinop",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\private\\bitbinop.m"/* pathName */
};

static emlrtRSInfo c4_wj_emlrtRSI = { 1060,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_xj_emlrtRSI = { 1082,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_yj_emlrtRSI = { 1085,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_ak_emlrtRSI = { 436,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_bk_emlrtRSI = { 437,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_ck_emlrtRSI = { 438,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_dk_emlrtRSI = { 316,/* lineNo */
  "Channel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Channel.m"/* pathName */
};

static emlrtRSInfo c4_ek_emlrtRSI = { 321,/* lineNo */
  "Channel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Channel.m"/* pathName */
};

static emlrtRSInfo c4_fk_emlrtRSI = { 424,/* lineNo */
  "API",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pathName */
};

static emlrtRSInfo c4_gk_emlrtRSI = { 22,/* lineNo */
  "matlabCodegenHandle",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\matlabCodegenHandle.m"/* pathName */
};

static emlrtRSInfo c4_hk_emlrtRSI = { 124,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_ik_emlrtRSI = { 162,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_jk_emlrtRSI = { 163,/* lineNo */
  "Modbus",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pathName */
};

static emlrtRSInfo c4_kk_emlrtRSI = { 182,/* lineNo */
  "Channel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Channel.m"/* pathName */
};

static emlrtRSInfo c4_lk_emlrtRSI = { 198,/* lineNo */
  "Channel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Channel.m"/* pathName */
};

static emlrtRSInfo c4_mk_emlrtRSI = { 199,/* lineNo */
  "Channel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Channel.m"/* pathName */
};

static emlrtRSInfo c4_nk_emlrtRSI = { 200,/* lineNo */
  "Channel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Channel.m"/* pathName */
};

static emlrtRSInfo c4_ok_emlrtRSI = { 207,/* lineNo */
  "Channel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Channel.m"/* pathName */
};

static emlrtRSInfo c4_pk_emlrtRSI = { 215,/* lineNo */
  "Channel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Channel.m"/* pathName */
};

static emlrtRSInfo c4_qk_emlrtRSI = { 14,/* lineNo */
  "warning",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pathName */
};

static emlrtRSInfo c4_rk_emlrtRSI = { 446,/* lineNo */
  "API",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pathName */
};

static emlrtRSInfo c4_sk_emlrtRSI = { 324,/* lineNo */
  "Channel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Channel.m"/* pathName */
};

static emlrtRSInfo c4_tk_emlrtRSI = { 673,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c4_uk_emlrtRSI = { 414,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c4_vk_emlrtRSI = { 281,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c4_wk_emlrtRSI = { 282,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c4_xk_emlrtRSI = { 3,/* lineNo */
  "MATLAB Function3",                  /* fcnName */
  "#wwtp3:404"                         /* pathName */
};

static emlrtRSInfo c4_yk_emlrtRSI = { 1,/* lineNo */
  "MATLAB Function3",                  /* fcnName */
  "#wwtp3:404"                         /* pathName */
};

static emlrtRSInfo c4_al_emlrtRSI = { 2,/* lineNo */
  "MATLAB Function3",                  /* fcnName */
  "#wwtp3:404"                         /* pathName */
};

static emlrtRTEInfo c4_emlrtRTEI = { 112,/* lineNo */
  21,                                  /* colNo */
  "DataConverter",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\DataConverter.m"/* pName */
};

static emlrtRTEInfo c4_b_emlrtRTEI = { 195,/* lineNo */
  21,                                  /* colNo */
  "PacketBuilder",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\PacketBuilder.m"/* pName */
};

static emlrtRTEInfo c4_c_emlrtRTEI = { 64,/* lineNo */
  13,                                  /* colNo */
  "DataConverter",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\DataConverter.m"/* pName */
};

static emlrtRTEInfo c4_d_emlrtRTEI = { 730,/* lineNo */
  13,                                  /* colNo */
  "Modbus",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pName */
};

static emlrtRTEInfo c4_e_emlrtRTEI = { 2,/* lineNo */
  1,                                   /* colNo */
  "MATLAB Function3",                  /* fName */
  "#wwtp3:404"                         /* pName */
};

static emlrtRTEInfo c4_f_emlrtRTEI = { 35,/* lineNo */
  13,                                  /* colNo */
  "PacketBuilder",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\PacketBuilder.m"/* pName */
};

static emlrtRTEInfo c4_g_emlrtRTEI = { 211,/* lineNo */
  24,                                  /* colNo */
  "DataConverter",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\DataConverter.m"/* pName */
};

static emlrtRTEInfo c4_h_emlrtRTEI = { 39,/* lineNo */
  13,                                  /* colNo */
  "DataConverter",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\DataConverter.m"/* pName */
};

static emlrtRTEInfo c4_i_emlrtRTEI = { 40,/* lineNo */
  13,                                  /* colNo */
  "DataConverter",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\DataConverter.m"/* pName */
};

static emlrtRTEInfo c4_j_emlrtRTEI = { 59,/* lineNo */
  13,                                  /* colNo */
  "DataConverter",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\DataConverter.m"/* pName */
};

static emlrtRTEInfo c4_k_emlrtRTEI = { 60,/* lineNo */
  13,                                  /* colNo */
  "DataConverter",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\DataConverter.m"/* pName */
};

static emlrtRTEInfo c4_l_emlrtRTEI = { 1,/* lineNo */
  1,                                   /* colNo */
  "AsyncIOTransportChannel",           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\transportlib\\+matlabshared\\+transportlib\\+internal\\+asyncIOTransportChan"
  "nel\\+coder\\AsyncIOTransportChannel.p"/* pName */
};

static emlrtRTEInfo c4_m_emlrtRTEI = { 1,/* lineNo */
  1,                                   /* colNo */
  "TCPClient",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\networklib\\+matlabshared\\+network\\+internal\\+coder\\TCPClient.p"/* pName */
};

static emlrtRTEInfo c4_n_emlrtRTEI = { 162,/* lineNo */
  85,                                  /* colNo */
  "Channel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Channel.m"/* pName */
};

static emlrtRTEInfo c4_o_emlrtRTEI = { 162,/* lineNo */
  103,                                 /* colNo */
  "Channel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Channel.m"/* pName */
};

static emlrtRTEInfo c4_p_emlrtRTEI = { 242,/* lineNo */
  88,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtRTEInfo c4_q_emlrtRTEI = { 744,/* lineNo */
  17,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtRTEInfo c4_r_emlrtRTEI = { 242,/* lineNo */
  13,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtRTEInfo c4_s_emlrtRTEI = { 243,/* lineNo */
  91,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtRTEInfo c4_t_emlrtRTEI = { 243,/* lineNo */
  13,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtRTEInfo c4_u_emlrtRTEI = { 733,/* lineNo */
  21,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtRTEInfo c4_v_emlrtRTEI = { 731,/* lineNo */
  21,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtRTEInfo c4_w_emlrtRTEI = { 396,/* lineNo */
  13,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtRTEInfo c4_x_emlrtRTEI = { 402,/* lineNo */
  44,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtRTEInfo c4_y_emlrtRTEI = { 138,/* lineNo */
  21,                                  /* colNo */
  "BufferChannel",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pName */
};

static emlrtRTEInfo c4_ab_emlrtRTEI = { 142,/* lineNo */
  25,                                  /* colNo */
  "BufferChannel",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pName */
};

static emlrtRTEInfo c4_bb_emlrtRTEI = { 152,/* lineNo */
  21,                                  /* colNo */
  "BufferChannel",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pName */
};

static emlrtRTEInfo c4_cb_emlrtRTEI = { 156,/* lineNo */
  25,                                  /* colNo */
  "BufferChannel",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pName */
};

static emlrtRTEInfo c4_db_emlrtRTEI = { 205,/* lineNo */
  50,                                  /* colNo */
  "strcmp",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\strcmp.m"/* pName */
};

static emlrtRTEInfo c4_eb_emlrtRTEI = { 793,/* lineNo */
  38,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtRTEInfo c4_fb_emlrtRTEI = { 756,/* lineNo */
  13,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtRTEInfo c4_gb_emlrtRTEI = { 70,/* lineNo */
  17,                                  /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pName */
};

static emlrtRTEInfo c4_hb_emlrtRTEI = { 72,/* lineNo */
  17,                                  /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pName */
};

static emlrtRTEInfo c4_ib_emlrtRTEI = { 563,/* lineNo */
  102,                                 /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pName */
};

static emlrtRTEInfo c4_jb_emlrtRTEI = { 563,/* lineNo */
  13,                                  /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pName */
};

static emlrtRTEInfo c4_kb_emlrtRTEI = { 409,/* lineNo */
  13,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtRTEInfo c4_lb_emlrtRTEI = { 415,/* lineNo */
  44,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtRTEInfo c4_mb_emlrtRTEI = { 44,/* lineNo */
  13,                                  /* colNo */
  "DataConverter",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\DataConverter.m"/* pName */
};

static emlrtRTEInfo c4_nb_emlrtRTEI = { 250,/* lineNo */
  28,                                  /* colNo */
  "DataConverter",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\DataConverter.m"/* pName */
};

static emlrtRTEInfo c4_ob_emlrtRTEI = { 68,/* lineNo */
  24,                                  /* colNo */
  "typecast",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\datatypes\\typecast.m"/* pName */
};

static emlrtRTEInfo c4_pb_emlrtRTEI = { 126,/* lineNo */
  34,                                  /* colNo */
  "OutputStream",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\OutputStream.m"/* pName */
};

static emlrtRTEInfo c4_qb_emlrtRTEI = { 431,/* lineNo */
  13,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtRTEInfo c4_rb_emlrtRTEI = { 437,/* lineNo */
  53,                                  /* colNo */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m"/* pName */
};

static emlrtRTEInfo c4_sb_emlrtRTEI = { 145,/* lineNo */
  25,                                  /* colNo */
  "OutputStream",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\OutputStream.m"/* pName */
};

static emlrtRTEInfo c4_tb_emlrtRTEI = { 203,/* lineNo */
  26,                                  /* colNo */
  "OutputStream",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\OutputStream.m"/* pName */
};

static emlrtRTEInfo c4_ub_emlrtRTEI = { 203,/* lineNo */
  17,                                  /* colNo */
  "OutputStream",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\OutputStream.m"/* pName */
};

static emlrtRTEInfo c4_vb_emlrtRTEI = { 998,/* lineNo */
  18,                                  /* colNo */
  "Modbus",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\Modbus.m"/* pName */
};

static emlrtRTEInfo c4_wb_emlrtRTEI = { 203,/* lineNo */
  34,                                  /* colNo */
  "OutputStream",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\OutputStream.m"/* pName */
};

static emlrtRTEInfo c4_xb_emlrtRTEI = { 208,/* lineNo */
  17,                                  /* colNo */
  "Stream",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m"/* pName */
};

static emlrtRTEInfo c4_yb_emlrtRTEI = { 210,/* lineNo */
  17,                                  /* colNo */
  "Stream",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m"/* pName */
};

static emlrtRTEInfo c4_ac_emlrtRTEI = { 212,/* lineNo */
  17,                                  /* colNo */
  "Stream",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m"/* pName */
};

static emlrtRTEInfo c4_bc_emlrtRTEI = { 239,/* lineNo */
  13,                                  /* colNo */
  "OutputStream",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\OutputStream.m"/* pName */
};

static emlrtRTEInfo c4_cc_emlrtRTEI = { 225,/* lineNo */
  13,                                  /* colNo */
  "Modbus",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m"/* pName */
};

static emlrtRTEInfo c4_dc_emlrtRTEI = { 300,/* lineNo */
  13,                                  /* colNo */
  "BufferChannel",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pName */
};

static emlrtRTEInfo c4_ec_emlrtRTEI = { 125,/* lineNo */
  9,                                   /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo c4_fc_emlrtRTEI = { 128,/* lineNo */
  30,                                  /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo c4_gc_emlrtRTEI = { 548,/* lineNo */
  25,                                  /* colNo */
  "BufferChannel",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pName */
};

static emlrtRTEInfo c4_hc_emlrtRTEI = { 546,/* lineNo */
  25,                                  /* colNo */
  "BufferChannel",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pName */
};

static emlrtRTEInfo c4_ic_emlrtRTEI = { 542,/* lineNo */
  21,                                  /* colNo */
  "BufferChannel",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pName */
};

static emlrtRTEInfo c4_jc_emlrtRTEI = { 116,/* lineNo */
  1,                                   /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo c4_kc_emlrtRTEI = { 619,/* lineNo */
  21,                                  /* colNo */
  "BufferChannel",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pName */
};

static emlrtRTEInfo c4_lc_emlrtRTEI = { 612,/* lineNo */
  17,                                  /* colNo */
  "BufferChannel",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pName */
};

static emlrtRTEInfo c4_mc_emlrtRTEI = { 165,/* lineNo */
  17,                                  /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pName */
};

static emlrtRTEInfo c4_nc_emlrtRTEI = { 182,/* lineNo */
  14,                                  /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pName */
};

static emlrtRTEInfo c4_oc_emlrtRTEI = { 555,/* lineNo */
  13,                                  /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pName */
};

static emlrtRTEInfo c4_pc_emlrtRTEI = { 235,/* lineNo */
  83,                                  /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pName */
};

static emlrtRTEInfo c4_qc_emlrtRTEI = { 201,/* lineNo */
  25,                                  /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pName */
};

static emlrtRTEInfo c4_rc_emlrtRTEI = { 225,/* lineNo */
  52,                                  /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pName */
};

static emlrtRTEInfo c4_sc_emlrtRTEI = { 232,/* lineNo */
  17,                                  /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pName */
};

static emlrtRTEInfo c4_tc_emlrtRTEI = { 88,/* lineNo */
  43,                                  /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pName */
};

static emlrtRTEInfo c4_uc_emlrtRTEI = { 539,/* lineNo */
  91,                                  /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pName */
};

static emlrtRTEInfo c4_vc_emlrtRTEI = { 533,/* lineNo */
  91,                                  /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pName */
};

static emlrtRTEInfo c4_wc_emlrtRTEI = { 533,/* lineNo */
  21,                                  /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pName */
};

static emlrtRTEInfo c4_xc_emlrtRTEI = { 314,/* lineNo */
  21,                                  /* colNo */
  "Stream",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m"/* pName */
};

static emlrtRTEInfo c4_yc_emlrtRTEI = { 307,/* lineNo */
  17,                                  /* colNo */
  "Stream",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m"/* pName */
};

static emlrtRTEInfo c4_ad_emlrtRTEI = { 378,/* lineNo */
  41,                                  /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pName */
};

static emlrtRTEInfo c4_bd_emlrtRTEI = { 423,/* lineNo */
  31,                                  /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pName */
};

static emlrtRTEInfo c4_cd_emlrtRTEI = { 450,/* lineNo */
  17,                                  /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pName */
};

static emlrtRTEInfo c4_dd_emlrtRTEI = { 31,/* lineNo */
  1,                                   /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pName */
};

static emlrtRTEInfo c4_ed_emlrtRTEI = { 436,/* lineNo */
  17,                                  /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pName */
};

static emlrtRTEInfo c4_fd_emlrtRTEI = { 481,/* lineNo */
  17,                                  /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pName */
};

static emlrtRTEInfo c4_gd_emlrtRTEI = { 106,/* lineNo */
  1,                                   /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\cat.m"/* pName */
};

static emlrtRTEInfo c4_hd_emlrtRTEI = { 114,/* lineNo */
  9,                                   /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\cat.m"/* pName */
};

static emlrtRTEInfo c4_id_emlrtRTEI = { 357,/* lineNo */
  21,                                  /* colNo */
  "BufferChannel",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pName */
};

static emlrtRTEInfo c4_jd_emlrtRTEI = { 307,/* lineNo */
  18,                                  /* colNo */
  "BufferChannel",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pName */
};

static emlrtBCInfo c4_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  112,                                 /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "DataConverter",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\DataConverter.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_b_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  235,                                 /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "PacketBuilder",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\PacketBuilder.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_c_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  237,                                 /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "PacketBuilder",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\PacketBuilder.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_d_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  241,                                 /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "PacketBuilder",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\PacketBuilder.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_e_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  243,                                 /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "PacketBuilder",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\PacketBuilder.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_emlrtDCI = { 234,/* lineNo */
  34,                                  /* colNo */
  "PacketBuilder",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\PacketBuilder.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c4_b_emlrtDCI = { 234,/* lineNo */
  34,                                  /* colNo */
  "PacketBuilder",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\PacketBuilder.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo c4_c_emlrtDCI = { 195,/* lineNo */
  21,                                  /* colNo */
  "PacketBuilder",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\PacketBuilder.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c4_d_emlrtDCI = { 195,/* lineNo */
  21,                                  /* colNo */
  "PacketBuilder",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\PacketBuilder.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo c4_f_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  199,                                 /* lineNo */
  31,                                  /* colNo */
  "",                                  /* aName */
  "PacketBuilder",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\PacketBuilder.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_g_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  216,                                 /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "PacketBuilder",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\PacketBuilder.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_e_emlrtDCI = { 57,/* lineNo */
  53,                                  /* colNo */
  "sprintf",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\strfun\\sprintf.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo c4_h_emlrtBCI = { 1,/* iFirst */
  1024,                                /* iLast */
  756,                                 /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "API",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\API.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo c4_kd_emlrtRTEI = { 200,/* lineNo */
  22,                                  /* colNo */
  "OutputStream",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\OutputStream.m"/* pName */
};

static emlrtDCInfo c4_f_emlrtDCI = { 203,/* lineNo */
  34,                                  /* colNo */
  "OutputStream",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\OutputStream.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_i_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  203,                                 /* lineNo */
  34,                                  /* colNo */
  "",                                  /* aName */
  "OutputStream",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\OutputStream.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_j_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  226,                                 /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "Modbus",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\icomm\\modbus\\modbus\\+icomm\\+interface\\+coder\\+modbus\\+tcpip\\Modbus.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_k_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1,                                   /* lineNo */
  1,                                   /* colNo */
  "",                                  /* aName */
  "AsyncIOTransportChannel",           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\transportlib\\+matlabshared\\+transportlib\\+internal\\+asyncIOTransportChan"
  "nel\\+coder\\AsyncIOTransportChannel.p",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_g_emlrtDCI = { 612,/* lineNo */
  44,                                  /* colNo */
  "BufferChannel",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m",                    /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_l_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  612,                                 /* lineNo */
  44,                                  /* colNo */
  "",                                  /* aName */
  "BufferChannel",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m",                    /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_h_emlrtDCI = { 612,/* lineNo */
  55,                                  /* colNo */
  "BufferChannel",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m",                    /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_m_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  612,                                 /* lineNo */
  55,                                  /* colNo */
  "",                                  /* aName */
  "BufferChannel",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m",                    /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_i_emlrtDCI = { 619,/* lineNo */
  50,                                  /* colNo */
  "BufferChannel",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m",                    /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_n_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  619,                                 /* lineNo */
  50,                                  /* colNo */
  "",                                  /* aName */
  "BufferChannel",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m",                    /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_j_emlrtDCI = { 619,/* lineNo */
  61,                                  /* colNo */
  "BufferChannel",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m",                    /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_o_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  619,                                 /* lineNo */
  61,                                  /* colNo */
  "",                                  /* aName */
  "BufferChannel",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m",                    /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_p_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  225,                                 /* lineNo */
  70,                                  /* colNo */
  "",                                  /* aName */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_k_emlrtDCI = { 307,/* lineNo */
  33,                                  /* colNo */
  "Stream",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_q_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  307,                                 /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "Stream",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_l_emlrtDCI = { 307,/* lineNo */
  44,                                  /* colNo */
  "Stream",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_r_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  307,                                 /* lineNo */
  44,                                  /* colNo */
  "",                                  /* aName */
  "Stream",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_m_emlrtDCI = { 314,/* lineNo */
  39,                                  /* colNo */
  "Stream",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_s_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  314,                                 /* lineNo */
  39,                                  /* colNo */
  "",                                  /* aName */
  "Stream",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_n_emlrtDCI = { 314,/* lineNo */
  50,                                  /* colNo */
  "Stream",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_t_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  314,                                 /* lineNo */
  50,                                  /* colNo */
  "",                                  /* aName */
  "Stream",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo c4_ld_emlrtRTEI = { 433,/* lineNo */
  31,                                  /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pName */
};

static emlrtRTEInfo c4_md_emlrtRTEI = { 448,/* lineNo */
  31,                                  /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pName */
};

static emlrtBCInfo c4_u_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  450,                                 /* lineNo */
  34,                                  /* colNo */
  "",                                  /* aName */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_o_emlrtDCI = { 31,/* lineNo */
  14,                                  /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo c4_v_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  436,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_w_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  481,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_p_emlrtDCI = { 423,/* lineNo */
  31,                                  /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c4_q_emlrtDCI = { 423,/* lineNo */
  31,                                  /* colNo */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo c4_x_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  423,                                 /* lineNo */
  31,                                  /* colNo */
  "",                                  /* aName */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_y_emlrtBCI = { 1,/* iFirst */
  80,                                  /* iLast */
  435,                                 /* lineNo */
  61,                                  /* colNo */
  "",                                  /* aName */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_r_emlrtDCI = { 31,/* lineNo */
  1,                                   /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo c4_ab_emlrtBCI = { 1,/* iFirst */
  80,                                  /* iLast */
  482,                                 /* lineNo */
  54,                                  /* colNo */
  "",                                  /* aName */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_bb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  450,                                 /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_cb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  436,                                 /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_db_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  481,                                 /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "InputStream",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRSInfo c4_bl_emlrtRSI = { 165,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c4_cl_emlrtRSI = { 114,/* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\cat.m"/* pathName */
};

static emlrtRSInfo c4_dl_emlrtRSI = { 106,/* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\cat.m"/* pathName */
};

static emlrtRSInfo c4_el_emlrtRSI = { 481,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c4_fl_emlrtRSI = { 450,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c4_gl_emlrtRSI = { 314,/* lineNo */
  "Stream",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\Stream.m"/* pathName */
};

static emlrtRSInfo c4_hl_emlrtRSI = { 619,/* lineNo */
  "BufferChannel",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\testmeaslib\\general\\+matlabshared\\+asyncio\\+buffer\\+internal\\+coder\\B"
  "ufferChannel.m"                     /* pathName */
};

static emlrtRSInfo c4_il_emlrtRSI = { 72,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c4_jl_emlrtRSI = { 423,/* lineNo */
  "InputStream",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\asynciolib\\+matlabshared\\+asyncio\\+internal\\+coder\\InputStream.m"/* pathName */
};

static emlrtRSInfo c4_kl_emlrtRSI = { 66,/* lineNo */
  "eml_switch_helper",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\eml\\eml_switch_helper.m"/* pathName */
};

static emlrtRSInfo c4_ll_emlrtRSI = { 58,/* lineNo */
  "sprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\strfun\\sprintf.m"/* pathName */
};

static char_T c4_cv[10] = { 'b', 'i', 'g', '-', 'e', 'n', 'd', 'i', 'a', 'n' };

static char_T c4_cv1[128] = { '\x00', '\x01', '\x02', '\x03', '\x04', '\x05',
  '\x06', '\a', '\b', '\t', '\n', '\v', '\f', '\r', '\x0e', '\x0f', '\x10',
  '\x11', '\x12', '\x13', '\x14', '\x15', '\x16', '\x17', '\x18', '\x19', '\x1a',
  '\x1b', '\x1c', '\x1d', '\x1e', '\x1f', ' ', '!', '\"', '#', '$', '%', '&',
  '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5',
  '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'a', 'b', 'c', 'd', 'e',
  'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u',
  'v', 'w', 'x', 'y', 'z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd',
  'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
  'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', '\x7f' };

static char_T c4_cv2[31] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
  'b', 'o', 'x', ':', 'u', 'n', 's', 'u', 'p', 'p', 'o', 'r', 't', 'e', 'd', 'S',
  't', 'r', 'i', 'n', 'g' };

static char_T c4_cv3[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
  'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't', 'r',
  'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'F', 'i',
  'n', 'i', 't', 'e' };

static char_T c4_cv4[13] = { 'l', 'i', 't', 't', 'l', 'e', '-', 'e', 'n', 'd',
  'i', 'a', 'n' };

static char_T c4_cv5[35] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'C', 'h',
  'a', 'n', 'n', 'e', 'l', ':', 'u', 'n', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
  'E', 'x', 'c', 'e', 'p', 't', 'i', 'o', 'n' };

static char_T c4_cv6[39] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'S', 't',
  'r', 'e', 'a', 'm', ':', 'c', 'a', 'n', 'n', 'o', 't', 'A', 'd', 'd', 'F', 'i',
  'l', 't', 'e', 'r', 'W', 'h', 'i', 'l', 'e', 'O', 'p', 'e', 'n' };

static char_T c4_cv7[46] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'O', 'u',
  't', 'p', 'u', 't', 'S', 't', 'r', 'e', 'a', 'm', ':', 'c', 'o', 'u', 'l', 'd',
  'N', 'o', 't', 'C', 'o', 'n', 'v', 'e', 'r', 't', 'O', 'u', 't', 'p', 'u', 't',
  'D', 'a', 't', 'a' };

static char_T c4_cv8[44] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'I', 'n',
  'p', 'u', 't', 'S', 't', 'r', 'e', 'a', 'm', ':', 'c', 'o', 'u', 'l', 'd', 'N',
  'o', 't', 'C', 'o', 'n', 'v', 'e', 'r', 't', 'I', 'n', 'p', 'u', 't', 'D', 'a',
  't', 'a' };

static char_T c4_cv9[37] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'C', 'h',
  'a', 'n', 'n', 'e', 'l', ':', 'c', 'o', 'd', 'e', 'r', 'S', 'y', 'n', 'c', 'h',
  'r', 'o', 'n', 'o', 'u', 's', 'E', 'r', 'r', 'o', 'r' };

static char_T c4_cv10[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'b', 'u', 'i', 'l',
  't', 'i', 'n', 's', ':', 'A', 's', 's', 'e', 'r', 't', 'i', 'o', 'n', 'F', 'a',
  'i', 'l', 'e', 'd' };

static char_T c4_cv11[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm', 'a',
  'x', 's', 'i', 'z', 'e' };

static char_T c4_cv12[9] = { 'c', 'o', 'm', 'p', 'l', 'e', 't', 'e', 'd' };

static char_T c4_cv13[33] = { 'C', 'o', 'd', 'e', 'r', ':', 'F', 'E', ':', 'P',
  'o', 't', 'e', 'n', 't', 'i', 'a', 'l', 'M', 'a', 't', 'r', 'i', 'x', 'M', 'a',
  't', 'r', 'i', 'x', '_', 'M', 'V' };

static char_T c4_cv14[47] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'I', 'n',
  'p', 'u', 't', 'S', 't', 'r', 'e', 'a', 'm', ':', 'c', 'o', 'd', 'e', 'r', 'E',
  'x', 'a', 'm', 'p', 'l', 'e', 'D', 'a', 't', 'a', 'S', 'i', 'z', 'e', 'C', 'h',
  'a', 'n', 'g', 'e', 'd' };

static char_T c4_cv15[41] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'I', 'n',
  'p', 'u', 't', 'S', 't', 'r', 'e', 'a', 'm', ':', 'i', 'n', 'v', 'a', 'l', 'i',
  'd', 'C', 'o', 'u', 'n', 't', 'R', 'e', 'q', 'u', 'e', 's', 't', 'e', 'd' };

static char_T c4_cv16[29] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'b', 'i', 't',
  'A', 'n', 'd', 'X', 'o', 'r', 'O', 'r', ':', 'o', 'u', 't', 'O', 'f', 'R', 'a',
  'n', 'g', 'e' };

/* Function Declarations */
static void initialize_c4_wwtp3(SFc4_wwtp3InstanceStruct *chartInstance);
static void initialize_params_c4_wwtp3(SFc4_wwtp3InstanceStruct *chartInstance);
static void mdl_start_c4_wwtp3(SFc4_wwtp3InstanceStruct *chartInstance);
static void mdl_terminate_c4_wwtp3(SFc4_wwtp3InstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c4_wwtp3(SFc4_wwtp3InstanceStruct
  *chartInstance);
static void mdl_cleanup_runtime_resources_c4_wwtp3(SFc4_wwtp3InstanceStruct
  *chartInstance);
static void enable_c4_wwtp3(SFc4_wwtp3InstanceStruct *chartInstance);
static void disable_c4_wwtp3(SFc4_wwtp3InstanceStruct *chartInstance);
static void sf_gateway_c4_wwtp3(SFc4_wwtp3InstanceStruct *chartInstance);
static void ext_mode_exec_c4_wwtp3(SFc4_wwtp3InstanceStruct *chartInstance);
static void c4_update_jit_animation_c4_wwtp3(SFc4_wwtp3InstanceStruct
  *chartInstance);
static void c4_do_animation_call_c4_wwtp3(SFc4_wwtp3InstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c4_wwtp3(SFc4_wwtp3InstanceStruct
  *chartInstance);
static void set_sim_state_c4_wwtp3(SFc4_wwtp3InstanceStruct *chartInstance,
  const mxArray *c4_st);
static void initSimStructsc4_wwtp3(SFc4_wwtp3InstanceStruct *chartInstance);
static void initSubchartIOPointersc4_wwtp3(SFc4_wwtp3InstanceStruct
  *chartInstance);
static boolean_T c4_vectorAny(SFc4_wwtp3InstanceStruct *chartInstance, boolean_T
  c4_x_data[], int32_T c4_x_size[2]);
static c4_icomm_interface_modbus_tcpip_Modbus *c4_modbus
  (SFc4_wwtp3InstanceStruct *chartInstance, const emlrtStack *c4_sp,
   c4_icomm_interface_modbus_tcpip_Modbus *c4_iobj_0);
static void c4_TCPClient_initializeChannel(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_matlabshared_network_internal_TCPClient *c4_obj,
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_iobj_0,
  c4_matlabshared_asyncio_internal_Channel *c4_iobj_1);
static void c4_sprintf(SFc4_wwtp3InstanceStruct *chartInstance, const emlrtStack
  *c4_sp, uint32_T c4_varargin_1, c4_emxArray_char_T *c4_str);
static void c4_API_dispatchInternalError(SFc4_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c4_sp, char_T c4_errorID[1024], char_T c4_errorText[1024]);
static void c4_API_trimString(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, char_T c4_in[1024], char_T c4_out_data[], int32_T
  c4_out_size[2]);
static boolean_T c4_strcmp(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, char_T c4_a_data[], int32_T c4_a_size[2]);
static boolean_T c4_b_strcmp(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, char_T c4_a_data[], int32_T c4_a_size[2]);
static boolean_T c4_c_strcmp(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, char_T c4_a_data[], int32_T c4_a_size[2]);
static boolean_T c4_d_strcmp(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, char_T c4_a_data[], int32_T c4_a_size[2]);
static void c4_API_channelErrorIfFailed(SFc4_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c4_sp, CoderChannel c4_chImpl, int32_T c4_success);
static c4_matlabshared_asyncio_internal_InputStream *c4_InputStream_InputStream
  (SFc4_wwtp3InstanceStruct *chartInstance, const emlrtStack *c4_sp,
   c4_matlabshared_asyncio_internal_InputStream *c4_obj, CoderChannel
   c4_channelImpl);
static void c4_InputStream_clearPartialPacket(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_matlabshared_asyncio_internal_InputStream *c4_obj);
static c4_matlabshared_asyncio_internal_OutputStream
  *c4_OutputStream_OutputStream(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_matlabshared_asyncio_internal_OutputStream *c4_obj,
  CoderChannel c4_channelImpl);
static void c4_TCPClient_connect(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_matlabshared_network_internal_TCPClient *c4_obj);
static void c4_DataConverter_word2bytes(SFc4_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_icomm_interface_coder_modbus_DataConverter *c4_obj,
  real_T c4_wordval, uint8_T c4_bytes[2]);
static boolean_T c4_e_strcmp(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_emxArray_char_T *c4_a, char_T c4_b[13]);
static void c4_b_DataConverter_word2bytes(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_icomm_interface_coder_modbus_DataConverter *c4_obj, uint16_T c4_wordval,
  uint8_T c4_bytes[2]);
static void c4_Modbus_executeWrite(SFc4_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_icomm_interface_modbus_tcpip_Modbus *c4_obj,
  c4_emxArray_uint8_T *c4_reqPacket);
static void c4_TCPClient_validateConnected(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_matlabshared_network_internal_TCPClient *c4_obj);
static void c4_b_API_channelErrorIfFailed(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, CoderChannel c4_chImpl);
static void c4_Stream_wait(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_matlabshared_asyncio_internal_OutputStream *c4_obj,
  char_T c4_status_data[], int32_T c4_status_size[2]);
static emlrtTimespec c4_tic(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp);
static emlrtTimespec c4_getTime(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp);
static real_T c4_toc(SFc4_wwtp3InstanceStruct *chartInstance, const emlrtStack
                     *c4_sp, emlrtTimespec c4_tstart);
static boolean_T c4_f_strcmp(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, char_T c4_a_data[], int32_T c4_a_size[2]);
static boolean_T c4_g_strcmp(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, char_T c4_a_data[], int32_T c4_a_size[2]);
static void c4_OutputStream_drain(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_matlabshared_asyncio_internal_OutputStream *c4_obj);
static boolean_T c4_h_strcmp(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, char_T c4_a_data[], int32_T c4_a_size[2]);
static boolean_T c4_Modbus_getWriteResponse(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_icomm_interface_modbus_tcpip_Modbus *c4_obj, uint8_T c4_reqPacketID);
static real_T c4_TCPClient_get_NumBytesAvailable(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_matlabshared_network_internal_TCPClient *c4_obj);
static real_T c4_BufferChannel_get_NumElementsAvailable(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_matlabshared_asyncio_buffer_internal_BufferChannel *c4_obj);
static boolean_T c4_AsyncIOTransportChannel_get_StructData
  (SFc4_wwtp3InstanceStruct *chartInstance, const emlrtStack *c4_sp,
   c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_obj);
static void c4_AsyncIOTransportChannel_readRaw(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_obj,
  real_T c4_numBytes, c4_emxArray_uint8_T *c4_data);
static void c4_AsyncIOTransportChannel_getUnreadData(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_obj,
  real_T c4_numToRead, c4_emxArray_uint8_T *c4_data);
static void c4_BufferChannel_readRaw(SFc4_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_matlabshared_asyncio_buffer_internal_BufferChannel
  *c4_obj, real_T c4_numBytesToRead, c4_emxArray_uint8_T *c4_data);
static void c4_BufferChannel_extractFromPacket(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_matlabshared_asyncio_buffer_internal_BufferChannel *c4_obj, real_T
  c4_startIndex, real_T c4_endIndex, c4_emxArray_uint8_T *c4_result);
static void c4_indexShapeCheck(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, int32_T c4_matrixSize[2], int32_T c4_indexSize[2]);
static void c4_InputStream_read(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_matlabshared_asyncio_internal_InputStream *c4_obj,
  real_T c4_countRequested, c4_emxArray_uint8_T *c4_data);
static void c4_InputStream_readPartialPacket(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_matlabshared_asyncio_internal_InputStream *c4_obj, real_T c4_countRequested,
  c4_emxArray_uint8_T *c4_dataRead, real_T *c4_countRead);
static void c4_Stream_extractFromPacket(SFc4_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_emxArray_uint8_T *c4_packet, real_T c4_startIndex,
  real_T c4_endIndex, c4_emxArray_uint8_T *c4_result);
static void c4_b_Stream_extractFromPacket(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_uint8_T *c4_packet,
  real_T c4_endIndex, c4_emxArray_uint8_T *c4_result);
static void c4_b_Stream_wait(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_matlabshared_asyncio_internal_InputStream *c4_obj,
  char_T c4_status_data[], int32_T c4_status_size[2]);
static void c4_InputStream_readPackets(SFc4_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_matlabshared_asyncio_internal_InputStream *c4_obj,
  real_T c4_countRequested, c4_emxArray_cell_wrap_33 *c4_packets, real_T
  *c4_countRead);
static void c4_cat(SFc4_wwtp3InstanceStruct *chartInstance, const emlrtStack
                   *c4_sp, c4_emxArray_uint8_T *c4_varargin_1,
                   c4_emxArray_uint8_T *c4_varargin_2, c4_emxArray_uint8_T *c4_y);
static void c4_check_forloop_overflow_error(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp);
static void c4_b_InputStream_read(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_matlabshared_asyncio_internal_InputStream *c4_obj,
  real_T c4_countRequested, c4_emxArray_uint8_T *c4_data, real_T *c4_countRead,
  char_T c4_err_data[], int32_T c4_err_size[2]);
static void c4_BufferChannel_write(SFc4_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_matlabshared_asyncio_buffer_internal_BufferChannel
  *c4_obj, c4_emxArray_uint8_T *c4_data);
static boolean_T c4_i_strcmp(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_emxArray_char_T *c4_b);
static void c4_b_indexShapeCheck(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, int32_T c4_matrixSize[2]);
static boolean_T c4_all_in_integer_range(SFc4_wwtp3InstanceStruct *chartInstance,
  real_T c4_x);
static void c4_Modbus_flushIO(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_icomm_interface_modbus_tcpip_Modbus *c4_obj);
static void c4_BufferChannel_flush(SFc4_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_matlabshared_asyncio_buffer_internal_BufferChannel
  *c4_obj);
static void c4_Modbus_translateandGenerateServerError(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, real_T c4_errCode, real_T c4_fcnCode);
static boolean_T c4_Modbus_isReadFunction(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, real_T c4_fcnCode);
static void c4_handle_matlabCodegenDestructor(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_icomm_interface_modbus_tcpip_Modbus *c4_obj);
static void c4_b_handle_matlabCodegenDestructor(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_matlabshared_network_internal_TCPClient *c4_obj);
static void c4_c_handle_matlabCodegenDestructor(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_matlabshared_asyncio_internal_Channel *c4_obj);
static void c4_warning(SFc4_wwtp3InstanceStruct *chartInstance, const emlrtStack
  *c4_sp);
static void c4_d_handle_matlabCodegenDestructor(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_obj);
static void c4_e_handle_matlabCodegenDestructor(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_matlabshared_asyncio_buffer_internal_BufferChannel *c4_obj);
static void c4_Channel_close(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_matlabshared_asyncio_buffer_internal_BufferChannel
  *c4_obj);
static void c4_f_handle_matlabCodegenDestructor(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_matlabshared_asyncio_internal_InputStream *c4_obj);
static void c4_g_handle_matlabCodegenDestructor(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_matlabshared_asyncio_internal_OutputStream *c4_obj);
static real_T c4_emlrt_marshallIn(SFc4_wwtp3InstanceStruct *chartInstance, const
  mxArray *c4_a__output_of_length_, const char_T *c4_identifier);
static real_T c4_b_emlrt_marshallIn(SFc4_wwtp3InstanceStruct *chartInstance,
  const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId);
static void c4_c_emlrt_marshallIn(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, const mxArray *c4_tmpStr, const char_T *c4_identifier,
  c4_emxArray_char_T *c4_y);
static void c4_d_emlrt_marshallIn(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId,
  c4_emxArray_char_T *c4_y);
static void c4_e_emlrt_marshallIn(SFc4_wwtp3InstanceStruct *chartInstance, const
  mxArray *c4_a__output_of_matlabroot_, const char_T *c4_identifier, char_T
  c4_y_data[], int32_T c4_y_size[2]);
static void c4_f_emlrt_marshallIn(SFc4_wwtp3InstanceStruct *chartInstance, const
  mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId, char_T c4_y_data[],
  int32_T c4_y_size[2]);
static boolean_T c4_g_emlrt_marshallIn(SFc4_wwtp3InstanceStruct *chartInstance,
  const mxArray *c4_a__output_of_coder_internal_ifWhileCondExtrinsic_, const
  char_T *c4_identifier);
static boolean_T c4_h_emlrt_marshallIn(SFc4_wwtp3InstanceStruct *chartInstance,
  const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId);
static uint8_T c4_i_emlrt_marshallIn(SFc4_wwtp3InstanceStruct *chartInstance,
  const mxArray *c4_b_is_active_c4_wwtp3, const char_T *c4_identifier);
static uint8_T c4_j_emlrt_marshallIn(SFc4_wwtp3InstanceStruct *chartInstance,
  const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId);
static void c4_slStringInitializeDynamicBuffers(SFc4_wwtp3InstanceStruct
  *chartInstance);
static void c4_chart_data_browse_helper(SFc4_wwtp3InstanceStruct *chartInstance,
  int32_T c4_ssIdNumber, const mxArray **c4_mxData, uint8_T *c4_isValueTooBig);
static const mxArray *c4_feval(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, const mxArray *c4_input0, const mxArray *c4_input1, const
  mxArray *c4_input2);
static const mxArray *c4_length(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, const mxArray *c4_input0);
static const mxArray *c4_ver(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, const mxArray *c4_input0);
static const mxArray *c4_getfield(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, const mxArray *c4_input0, const mxArray *c4_input1);
static const mxArray *c4_matlabroot(SFc4_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c4_sp);
static const mxArray *c4_j_strcmp(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, const mxArray *c4_input0, const mxArray *c4_input1);
static const mxArray *c4_coder_internal_ifWhileCondExtrinsic
  (SFc4_wwtp3InstanceStruct *chartInstance, const emlrtStack *c4_sp, const
   mxArray *c4_input0);
static const mxArray *c4_exist(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, const mxArray *c4_input0, const mxArray *c4_input1);
static const mxArray *c4_b_coder_internal_ifWhileCondExtrinsic
  (SFc4_wwtp3InstanceStruct *chartInstance, const emlrtStack *c4_sp, const
   mxArray *c4_input0);
static const mxArray *c4_b_exist(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, const mxArray *c4_input0, const mxArray *c4_input1);
static const mxArray *c4_c_coder_internal_ifWhileCondExtrinsic
  (SFc4_wwtp3InstanceStruct *chartInstance, const emlrtStack *c4_sp, const
   mxArray *c4_input0);
static const mxArray *c4_b_ver(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, const mxArray *c4_input0);
static const mxArray *c4_b_getfield(SFc4_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c4_sp, const mxArray *c4_input0, const mxArray *c4_input1);
static const mxArray *c4_b_matlabroot(SFc4_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c4_sp);
static const mxArray *c4_k_strcmp(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, const mxArray *c4_input0, const mxArray *c4_input1);
static const mxArray *c4_d_coder_internal_ifWhileCondExtrinsic
  (SFc4_wwtp3InstanceStruct *chartInstance, const emlrtStack *c4_sp, const
   mxArray *c4_input0);
static const mxArray *c4_c_exist(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, const mxArray *c4_input0, const mxArray *c4_input1);
static const mxArray *c4_e_coder_internal_ifWhileCondExtrinsic
  (SFc4_wwtp3InstanceStruct *chartInstance, const emlrtStack *c4_sp, const
   mxArray *c4_input0);
static const mxArray *c4_d_exist(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, const mxArray *c4_input0, const mxArray *c4_input1);
static const mxArray *c4_f_coder_internal_ifWhileCondExtrinsic
  (SFc4_wwtp3InstanceStruct *chartInstance, const emlrtStack *c4_sp, const
   mxArray *c4_input0);
static const mxArray *c4_matlab_internal_language_TimerSuspender
  (SFc4_wwtp3InstanceStruct *chartInstance, const emlrtStack *c4_sp);
static void c4_b_feval(SFc4_wwtp3InstanceStruct *chartInstance, const emlrtStack
  *c4_sp, const mxArray *c4_input0, const mxArray *c4_input1);
static const mxArray *c4_c_feval(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, const mxArray *c4_input0, const mxArray *c4_input1);
static void c4_d_feval(SFc4_wwtp3InstanceStruct *chartInstance, const emlrtStack
  *c4_sp, const mxArray *c4_input0, const mxArray *c4_input1);
static void c4_emxEnsureCapacity_uint8_T(SFc4_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_emxArray_uint8_T *c4_emxArray, int32_T c4_oldNumel,
  const emlrtRTEInfo *c4_srcLocation);
static void c4_emxEnsureCapacity_char_T(SFc4_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_emxArray_char_T *c4_emxArray, int32_T c4_oldNumel,
  const emlrtRTEInfo *c4_srcLocation);
static void c4_emxInitStruct_icomm_interface_m(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_icomm_interface_modbus_tcpip_Modbus *c4_pStruct, const emlrtRTEInfo
  *c4_srcLocation);
static void c4_emxInitStruct_icomm_interface_c(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_icomm_interface_coder_modbus_DataConverter *c4_pStruct, const emlrtRTEInfo *
  c4_srcLocation);
static void c4_emxInit_char_T(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_emxArray_char_T **c4_pEmxArray, int32_T c4_numDimensions,
  const emlrtRTEInfo *c4_srcLocation);
static void c4_emxInitStruct_matlabshared_netw(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_matlabshared_network_internal_TCPClient *c4_pStruct, const emlrtRTEInfo
  *c4_srcLocation);
static void c4_emxInitStruct_matlabshared_tran(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_pStruct,
  const emlrtRTEInfo *c4_srcLocation);
static void c4_emxInitStruct_matlabshared_asyn(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_matlabshared_asyncio_buffer_internal_BufferChannel *c4_pStruct, const
  emlrtRTEInfo *c4_srcLocation);
static void c4_b_emxInitStruct_matlabshared_asyn(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_matlabshared_asyncio_internal_InputStream *c4_pStruct, const emlrtRTEInfo
  *c4_srcLocation);
static void c4_emxInit_uint8_T(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_emxArray_uint8_T **c4_pEmxArray, int32_T
  c4_numDimensions, const emlrtRTEInfo *c4_srcLocation);
static void c4_c_emxInitStruct_matlabshared_asyn(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_matlabshared_asyncio_internal_Channel *c4_pStruct, const emlrtRTEInfo
  *c4_srcLocation);
static void c4_emxFree_char_T(SFc4_wwtp3InstanceStruct *chartInstance,
  c4_emxArray_char_T **c4_pEmxArray);
static void c4_emxFreeStruct_icomm_interface_c(SFc4_wwtp3InstanceStruct
  *chartInstance, c4_icomm_interface_coder_modbus_DataConverter *c4_pStruct);
static void c4_emxFreeStruct_icomm_interface_m(SFc4_wwtp3InstanceStruct
  *chartInstance, c4_icomm_interface_modbus_tcpip_Modbus *c4_pStruct);
static void c4_emxFreeStruct_matlabshared_netw(SFc4_wwtp3InstanceStruct
  *chartInstance, c4_matlabshared_network_internal_TCPClient *c4_pStruct);
static void c4_emxFree_uint8_T(SFc4_wwtp3InstanceStruct *chartInstance,
  c4_emxArray_uint8_T **c4_pEmxArray);
static void c4_emxFreeStruct_matlabshared_asyn(SFc4_wwtp3InstanceStruct
  *chartInstance, c4_matlabshared_asyncio_internal_InputStream *c4_pStruct);
static void c4_b_emxFreeStruct_matlabshared_asyn(SFc4_wwtp3InstanceStruct
  *chartInstance, c4_matlabshared_asyncio_buffer_internal_BufferChannel
  *c4_pStruct);
static void c4_emxFreeStruct_matlabshared_tran(SFc4_wwtp3InstanceStruct
  *chartInstance,
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_pStruct);
static void c4_c_emxFreeStruct_matlabshared_asyn(SFc4_wwtp3InstanceStruct
  *chartInstance, c4_matlabshared_asyncio_internal_Channel *c4_pStruct);
static void c4_emxInitStruct_s_puOqsSoDdBk28aK(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_s_puOqsSoDdBk28aK0dkajGG
  *c4_pStruct, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxInitStruct_cell_11(SFc4_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_cell_11 *c4_pStruct, const emlrtRTEInfo
  *c4_srcLocation);
static void c4_emxFreeStruct_s_puOqsSoDdBk28aK(SFc4_wwtp3InstanceStruct
  *chartInstance, c4_s_puOqsSoDdBk28aK0dkajGG *c4_pStruct);
static void c4_emxFreeStruct_cell_11(SFc4_wwtp3InstanceStruct *chartInstance,
  c4_cell_11 *c4_pStruct);
static void c4_emxInitStruct_s_IiVysWyVj7T2O9P(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_s_IiVysWyVj7T2O9POL8hpXH
  *c4_pStruct, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxInitStruct_cell_17(SFc4_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_cell_17 *c4_pStruct, const emlrtRTEInfo
  *c4_srcLocation);
static void c4_emxFreeStruct_s_IiVysWyVj7T2O9P(SFc4_wwtp3InstanceStruct
  *chartInstance, c4_s_IiVysWyVj7T2O9POL8hpXH *c4_pStruct);
static void c4_emxFreeStruct_cell_17(SFc4_wwtp3InstanceStruct *chartInstance,
  c4_cell_17 *c4_pStruct);
static void c4_emxFreeStruct_cell_wrap_33(SFc4_wwtp3InstanceStruct
  *chartInstance, c4_cell_wrap_33 *c4_pStruct);
static void c4_emxTrim_cell_wrap_33_1x1(SFc4_wwtp3InstanceStruct *chartInstance,
  c4_cell_wrap_33 c4_data[1], int32_T c4_fromIndex, int32_T c4_toIndex);
static void c4_emxInitStruct_cell_wrap_33(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_cell_wrap_33 *c4_pStruct, const
  emlrtRTEInfo *c4_srcLocation);
static void c4_emxExpand_cell_wrap_33_1x1(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_cell_wrap_33 c4_data[1], int32_T
  c4_fromIndex, int32_T c4_toIndex, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxEnsureCapacity_cell_wrap_33(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_cell_wrap_33 c4_data[1], int32_T
  c4_size[2], int32_T c4_oldNumel, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxCopyStruct_cell_wrap_33(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_cell_wrap_33 *c4_dst, const
  c4_cell_wrap_33 *c4_src, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxCopy_uint8_T(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_emxArray_uint8_T **c4_dst, c4_emxArray_uint8_T * const
  *c4_src, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxTrim_cell_wrap_33_1(SFc4_wwtp3InstanceStruct *chartInstance,
  c4_cell_wrap_33 c4_data[1], int32_T c4_fromIndex, int32_T c4_toIndex);
static void c4_emxExpand_cell_wrap_33_1(SFc4_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_cell_wrap_33 c4_data[1], int32_T c4_fromIndex,
  int32_T c4_toIndex, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxEnsureCapacity_cell_wrap_331(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_cell_wrap_33 c4_data[1], int32_T
  c4_size[1], int32_T c4_oldNumel, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxInitStruct_s_n2xUWXvqAPN0Osm(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_s_n2xUWXvqAPN0OsmrtE3c5D
  *c4_pStruct, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxInitStruct_cell_35(SFc4_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_cell_35 *c4_pStruct, const emlrtRTEInfo
  *c4_srcLocation);
static void c4_emxInit_cell_wrap_33_1x1(SFc4_wwtp3InstanceStruct *chartInstance,
  c4_emxArray_cell_wrap_33_1x1 *c4_pEmxArray);
static void c4_emxFree_cell_wrap_33_1x1(SFc4_wwtp3InstanceStruct *chartInstance,
  c4_emxArray_cell_wrap_33_1x1 *c4_pEmxArray);
static void c4_emxInit_cell_wrap_33_1(SFc4_wwtp3InstanceStruct *chartInstance,
  c4_emxArray_cell_wrap_33_1 *c4_pEmxArray);
static void c4_emxFree_cell_wrap_33_1(SFc4_wwtp3InstanceStruct *chartInstance,
  c4_emxArray_cell_wrap_33_1 *c4_pEmxArray);
static void c4_emxFreeStruct_s_n2xUWXvqAPN0Osm(SFc4_wwtp3InstanceStruct
  *chartInstance, c4_s_n2xUWXvqAPN0OsmrtE3c5D *c4_pStruct);
static void c4_emxFreeStruct_cell_35(SFc4_wwtp3InstanceStruct *chartInstance,
  c4_cell_35 *c4_pStruct);
static void c4_emxInitMatrix_cell_wrap_38(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_cell_wrap_38 c4_pMatrix[2], const
  emlrtRTEInfo *c4_srcLocation);
static void c4_emxInitStruct_cell_wrap_38(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_cell_wrap_38 *c4_pStruct, const
  emlrtRTEInfo *c4_srcLocation);
static void c4_emxFreeMatrix_cell_wrap_38(SFc4_wwtp3InstanceStruct
  *chartInstance, c4_cell_wrap_38 c4_pMatrix[2]);
static void c4_emxFreeStruct_cell_wrap_38(SFc4_wwtp3InstanceStruct
  *chartInstance, c4_cell_wrap_38 *c4_pStruct);
static void c4_emxInit_cell_wrap_33(SFc4_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_emxArray_cell_wrap_33 **c4_pEmxArray, int32_T
  c4_numDimensions, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxFree_cell_wrap_33(SFc4_wwtp3InstanceStruct *chartInstance,
  c4_emxArray_cell_wrap_33 **c4_pEmxArray);
static void c4_emxTrim_cell_wrap_33(SFc4_wwtp3InstanceStruct *chartInstance,
  c4_emxArray_cell_wrap_33 *c4_emxArray, int32_T c4_fromIndex, int32_T
  c4_toIndex);
static void c4_emxExpand_cell_wrap_33(SFc4_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_emxArray_cell_wrap_33 *c4_emxArray, int32_T
  c4_fromIndex, int32_T c4_toIndex, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxEnsureCapacity_cell_wrap_332(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_cell_wrap_33 *c4_emxArray,
  int32_T c4_oldNumel, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxEnsureCapacity_boolean_T(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_boolean_T *c4_emxArray,
  int32_T c4_oldNumel, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxInit_boolean_T(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_emxArray_boolean_T **c4_pEmxArray, int32_T
  c4_numDimensions, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxFree_boolean_T(SFc4_wwtp3InstanceStruct *chartInstance,
  c4_emxArray_boolean_T **c4_pEmxArray);
static void c4_emxTrim_cell_wrap_38_1x1(SFc4_wwtp3InstanceStruct *chartInstance,
  c4_cell_wrap_38 c4_data[1], int32_T c4_fromIndex, int32_T c4_toIndex);
static void c4_emxExpand_cell_wrap_38_1x1(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_cell_wrap_38 c4_data[1], int32_T
  c4_fromIndex, int32_T c4_toIndex, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxEnsureCapacity_cell_wrap_38(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_cell_wrap_38 c4_data[1], int32_T
  c4_size[2], int32_T c4_oldNumel, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxCopyStruct_cell_wrap_38(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_cell_wrap_38 *c4_dst, const
  c4_cell_wrap_38 *c4_src, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxTrim_cell_wrap_38_1(SFc4_wwtp3InstanceStruct *chartInstance,
  c4_cell_wrap_38 c4_data[1], int32_T c4_fromIndex, int32_T c4_toIndex);
static void c4_emxExpand_cell_wrap_38_1(SFc4_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_cell_wrap_38 c4_data[1], int32_T c4_fromIndex,
  int32_T c4_toIndex, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxEnsureCapacity_cell_wrap_381(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_cell_wrap_38 c4_data[1], int32_T
  c4_size[1], int32_T c4_oldNumel, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxInit_cell_wrap_38_1x1(SFc4_wwtp3InstanceStruct *chartInstance,
  c4_emxArray_cell_wrap_38_1x1 *c4_pEmxArray);
static void c4_emxFree_cell_wrap_38_1x1(SFc4_wwtp3InstanceStruct *chartInstance,
  c4_emxArray_cell_wrap_38_1x1 *c4_pEmxArray);
static void c4_emxInit_cell_wrap_38_1(SFc4_wwtp3InstanceStruct *chartInstance,
  c4_emxArray_cell_wrap_38_1 *c4_pEmxArray);
static void c4_emxFree_cell_wrap_38_1(SFc4_wwtp3InstanceStruct *chartInstance,
  c4_emxArray_cell_wrap_38_1 *c4_pEmxArray);
static void init_dsm_address_info(SFc4_wwtp3InstanceStruct *chartInstance);
static void init_simulink_io_address(SFc4_wwtp3InstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c4_wwtp3(SFc4_wwtp3InstanceStruct *chartInstance)
{
  emlrtStack c4_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c4_st.tls = chartInstance->c4_fEmlrtCtx;
  emlrtLicenseCheckR2022a(&c4_st, "EMLRT:runTime:MexFunctionNeedsLicense",
    "opc_toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c4_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c4_is_active_c4_wwtp3 = 0U;
}

static void initialize_params_c4_wwtp3(SFc4_wwtp3InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c4_wwtp3(SFc4_wwtp3InstanceStruct *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c4_wwtp3(SFc4_wwtp3InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c4_wwtp3(SFc4_wwtp3InstanceStruct
  *chartInstance)
{
  static const uint32_T c4_decisionTxtEndIdx = 0U;
  static const uint32_T c4_decisionTxtStartIdx = 0U;
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c4_chart_data_browse_helper);
  chartInstance->c4_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c4_RuntimeVar,
    &chartInstance->c4_IsDebuggerActive,
    &chartInstance->c4_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c4_mlFcnLineNumber, &chartInstance->c4_IsHeatMapPresent, 0);
  covrtCreateStateflowInstanceData(chartInstance->c4_covrtInstance, 1U, 0U, 1U,
    12U);
  covrtChartInitFcn(chartInstance->c4_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c4_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c4_decisionTxtStartIdx, &c4_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c4_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c4_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  1U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 173);
  covrtEmlSaturationInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 0U, 102, -1,
    172);
}

static void mdl_cleanup_runtime_resources_c4_wwtp3(SFc4_wwtp3InstanceStruct
  *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c4_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c4_covrtInstance);
}

static void enable_c4_wwtp3(SFc4_wwtp3InstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c4_wwtp3(SFc4_wwtp3InstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c4_wwtp3(SFc4_wwtp3InstanceStruct *chartInstance)
{
  static int32_T c4_iv[2] = { 1, 4 };

  static char_T c4_b_cv4[36] = { 'm', 'o', 'd', 'b', 'u', 's', ':', 'm', 'o',
    'd', 'b', 'u', 's', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'V', 'a', 'l',
    'u', 'e', 'F', 'r', 'a', 'c', 't', 'i', 'o', 'n', 'a', 'l' };

  static char_T c4_b_cv2[29] = { 'm', 'o', 'd', 'b', 'u', 's', ':', 'm', 'o',
    'd', 'b', 'u', 's', ':', 'v', 'a', 'l', 'u', 'e', 'O', 'u', 't', 'O', 'f',
    'R', 'a', 'n', 'g', 'e' };

  static char_T c4_b_cv[28] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'M', 'o', 'd',
    'b', 'u', 's', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'F', 'i', 'n',
    'i', 't', 'e' };

  static char_T c4_b_cv1[23] = { 'i', 'n', 'p', 'u', 't', ' ', 'n', 'u', 'm',
    'b', 'e', 'r', ' ', '4', ',', ' ', 'v', 'a', 'l', 'u', 'e', 's', ',' };

  static char_T c4_b_cv5[8] = { '\'', 'u', 'i', 'n', 't', '1', '6', '\'' };

  static char_T c4_b_cv3[5] = { '6', '5', '5', '3', '5' };

  c4_emxArray_char_T *c4_out;
  c4_emxArray_uint8_T *c4_pdu;
  c4_emxArray_uint8_T *c4_reqPacket;
  c4_icomm_interface_coder_modbus_DataConverter *c4_b_obj;
  c4_icomm_interface_coder_modbus_DataConverter *c4_f_obj;
  c4_icomm_interface_coder_modbus_DataConverter *c4_g_obj;
  c4_icomm_interface_modbus_tcpip_Modbus c4_modcon;
  c4_icomm_interface_modbus_tcpip_Modbus *c4_obj;
  c4_icomm_interface_modbus_tcpip_Modbus *c4_varargin_1;
  c4_icomm_interface_modbus_tcpip_PacketBuilder *c4_c_obj;
  c4_icomm_interface_modbus_tcpip_PacketBuilder *c4_d_obj;
  c4_icomm_interface_modbus_tcpip_PacketBuilder *c4_e_obj;
  c4_icomm_interface_modbus_tcpip_PacketBuilder *c4_h_obj;
  c4_icomm_interface_modbus_tcpip_PacketBuilder *c4_i_obj;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_e_st;
  emlrtStack c4_f_st;
  emlrtStack c4_g_st;
  emlrtStack c4_h_st;
  emlrtStack c4_i_st;
  emlrtStack c4_j_st;
  emlrtStack c4_k_st;
  emlrtStack c4_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *c4_ab_y = NULL;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_f_y = NULL;
  const mxArray *c4_g_y = NULL;
  const mxArray *c4_h_y = NULL;
  const mxArray *c4_i_y = NULL;
  const mxArray *c4_j_y = NULL;
  const mxArray *c4_k_y = NULL;
  const mxArray *c4_l_y = NULL;
  const mxArray *c4_m_y = NULL;
  const mxArray *c4_n_y = NULL;
  const mxArray *c4_o_y = NULL;
  const mxArray *c4_p_y = NULL;
  const mxArray *c4_q_y = NULL;
  const mxArray *c4_r_y = NULL;
  const mxArray *c4_s_y = NULL;
  const mxArray *c4_u_y = NULL;
  const mxArray *c4_v_y = NULL;
  const mxArray *c4_w_y = NULL;
  const mxArray *c4_y = NULL;
  const mxArray *c4_y_y = NULL;
  real_T c4_values[4];
  real_T c4_a;
  real_T c4_b_ammonium;
  real_T c4_b_currentVal;
  real_T c4_b_idx;
  real_T c4_b_index;
  real_T c4_b_k;
  real_T c4_b_nitrates;
  real_T c4_b_oxygen;
  real_T c4_b_temperature;
  real_T c4_b_val;
  real_T c4_b_varargin_1;
  real_T c4_b_x;
  real_T c4_b_x1;
  real_T c4_c_index;
  real_T c4_c_varargin_1;
  real_T c4_c_x;
  real_T c4_d;
  real_T c4_d1;
  real_T c4_d2;
  real_T c4_d3;
  real_T c4_d4;
  real_T c4_d_index;
  real_T c4_d_x;
  real_T c4_f_x;
  real_T c4_index;
  real_T c4_len;
  real_T c4_r;
  real_T c4_startIdx;
  real_T c4_x;
  real_T c4_x1;
  int32_T c4_tmp_data[4];
  int32_T c4_tmp_size[2];
  int32_T c4_b_kstr;
  int32_T c4_b_loop_ub;
  int32_T c4_c_loop_ub;
  int32_T c4_currentVal;
  int32_T c4_d_loop_ub;
  int32_T c4_e_b;
  int32_T c4_e_loop_ub;
  int32_T c4_g_b;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i15;
  int32_T c4_i16;
  int32_T c4_i17;
  int32_T c4_i18;
  int32_T c4_i19;
  int32_T c4_i2;
  int32_T c4_i20;
  int32_T c4_i21;
  int32_T c4_i22;
  int32_T c4_i23;
  int32_T c4_i24;
  int32_T c4_i25;
  int32_T c4_i26;
  int32_T c4_i27;
  int32_T c4_i28;
  int32_T c4_i29;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_idx;
  int32_T c4_k;
  int32_T c4_kstr;
  int32_T c4_loop_ub;
  int32_T c4_remainingDimsA;
  int32_T c4_val;
  uint16_T c4_b_values[4];
  uint16_T c4_b_out;
  uint16_T c4_b_u;
  uint16_T c4_c_val;
  uint16_T c4_g_x;
  uint16_T c4_packetLen;
  uint16_T c4_transactionId;
  uint16_T c4_u1;
  uint16_T c4_u2;
  char_T c4_b_s;
  char_T c4_c_s;
  char_T c4_d_s;
  char_T c4_e_s;
  char_T c4_f_s;
  char_T c4_g_s;
  char_T c4_h_s;
  char_T c4_h_x;
  char_T c4_i_x;
  char_T c4_j_x;
  char_T c4_k_x;
  char_T c4_s;
  char_T c4_t_y;
  char_T c4_u;
  char_T c4_x_y;
  int8_T c4_c_u;
  int8_T c4_d_u;
  int8_T c4_e_u;
  int8_T c4_f_u;
  uint8_T c4_mbap[6];
  uint8_T c4_addrBytes[2];
  uint8_T c4_cntBytes[2];
  uint8_T c4_f_b;
  uint8_T c4_h_b;
  boolean_T c4_e_x[4];
  boolean_T c4_b;
  boolean_T c4_b1;
  boolean_T c4_b2;
  boolean_T c4_b3;
  boolean_T c4_b4;
  boolean_T c4_b5;
  boolean_T c4_b6;
  boolean_T c4_b7;
  boolean_T c4_b_b;
  boolean_T c4_b_p;
  boolean_T c4_c_b;
  boolean_T c4_c_p;
  boolean_T c4_covSaturation = false;
  boolean_T c4_d_b;
  boolean_T c4_d_p;
  boolean_T c4_d_y;
  boolean_T c4_e_p;
  boolean_T c4_e_y;
  boolean_T c4_exitg1;
  boolean_T c4_f_p;
  boolean_T c4_g_p;
  boolean_T c4_guard1;
  boolean_T c4_h_p;
  boolean_T c4_p;
  c4_st.tls = chartInstance->c4_fEmlrtCtx;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_e_st.prev = &c4_d_st;
  c4_e_st.tls = c4_d_st.tls;
  c4_f_st.prev = &c4_e_st;
  c4_f_st.tls = c4_e_st.tls;
  c4_g_st.prev = &c4_f_st;
  c4_g_st.tls = c4_f_st.tls;
  c4_h_st.prev = &c4_g_st;
  c4_h_st.tls = c4_g_st.tls;
  c4_i_st.prev = &c4_h_st;
  c4_i_st.tls = c4_h_st.tls;
  c4_j_st.prev = &c4_i_st;
  c4_j_st.tls = c4_i_st.tls;
  c4_k_st.prev = &c4_j_st;
  c4_k_st.tls = c4_j_st.tls;
  chartInstance->c4_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  covrtSigUpdateFcn(chartInstance->c4_covrtInstance, 3U,
                    *chartInstance->c4_temperature);
  covrtSigUpdateFcn(chartInstance->c4_covrtInstance, 2U,
                    *chartInstance->c4_ammonium);
  covrtSigUpdateFcn(chartInstance->c4_covrtInstance, 1U,
                    *chartInstance->c4_nitrates);
  covrtSigUpdateFcn(chartInstance->c4_covrtInstance, 0U,
                    *chartInstance->c4_oxygen);
  chartInstance->c4_sfEvent = CALL_EVENT;
  c4_b_oxygen = *chartInstance->c4_oxygen;
  c4_b_nitrates = *chartInstance->c4_nitrates;
  c4_b_ammonium = *chartInstance->c4_ammonium;
  c4_b_temperature = *chartInstance->c4_temperature;
  emlrtHeapReferenceStackEnterFcnR2012b(&c4_st);
  c4_emxInitStruct_icomm_interface_m(chartInstance, &c4_st, &c4_modcon,
    &c4_e_emlrtRTEI);
  c4_emxInit_uint8_T(chartInstance, &c4_st, &c4_reqPacket, 2, &c4_d_emlrtRTEI);
  c4_emxInit_uint8_T(chartInstance, &c4_st, &c4_pdu, 2, &c4_f_emlrtRTEI);
  c4_emxInit_char_T(chartInstance, &c4_st, &c4_out, 2, &c4_g_emlrtRTEI);
  emlrtPushHeapReferenceStackR2021a(&c4_st, true,
    &c4_modcon._pobj0._pobj1.InputStream, (void *)
    &c4_f_handle_matlabCodegenDestructor, chartInstance, NULL, NULL);
  c4_modcon._pobj0._pobj1.InputStream.matlabCodegenIsDeleted = true;
  emlrtPushHeapReferenceStackR2021a(&c4_st, true,
    &c4_modcon._pobj0._pobj0.UnreadDataBuffer.InputStream, (void *)
    &c4_f_handle_matlabCodegenDestructor, chartInstance, NULL, NULL);
  c4_modcon._pobj0._pobj0.UnreadDataBuffer.InputStream.matlabCodegenIsDeleted =
    true;
  emlrtPushHeapReferenceStackR2021a(&c4_st, true,
    &c4_modcon._pobj0._pobj1.OutputStream, (void *)
    &c4_g_handle_matlabCodegenDestructor, chartInstance, NULL, NULL);
  c4_modcon._pobj0._pobj1.OutputStream.matlabCodegenIsDeleted = true;
  emlrtPushHeapReferenceStackR2021a(&c4_st, true,
    &c4_modcon._pobj0._pobj0.UnreadDataBuffer.OutputStream, (void *)
    &c4_g_handle_matlabCodegenDestructor, chartInstance, NULL, NULL);
  c4_modcon._pobj0._pobj0.UnreadDataBuffer.OutputStream.matlabCodegenIsDeleted =
    true;
  emlrtPushHeapReferenceStackR2021a(&c4_st, true, &c4_modcon._pobj0._pobj1,
    (void *)&c4_c_handle_matlabCodegenDestructor, chartInstance, NULL, NULL);
  c4_modcon._pobj0._pobj1.matlabCodegenIsDeleted = true;
  emlrtPushHeapReferenceStackR2021a(&c4_st, true,
    &c4_modcon._pobj0._pobj0.UnreadDataBuffer, (void *)
    &c4_e_handle_matlabCodegenDestructor, chartInstance, NULL, NULL);
  c4_modcon._pobj0._pobj0.UnreadDataBuffer.matlabCodegenIsDeleted = true;
  emlrtPushHeapReferenceStackR2021a(&c4_st, true, &c4_modcon._pobj0._pobj0,
    (void *)&c4_d_handle_matlabCodegenDestructor, chartInstance, NULL, NULL);
  c4_modcon._pobj0._pobj0.matlabCodegenIsDeleted = true;
  emlrtPushHeapReferenceStackR2021a(&c4_st, true, &c4_modcon._pobj0, (void *)
    &c4_b_handle_matlabCodegenDestructor, chartInstance, NULL, NULL);
  c4_modcon._pobj0.matlabCodegenIsDeleted = true;
  emlrtPushHeapReferenceStackR2021a(&c4_st, true, &c4_modcon, (void *)
    &c4_handle_matlabCodegenDestructor, chartInstance, NULL, NULL);
  c4_modcon.matlabCodegenIsDeleted = true;
  covrtEmlFcnEval(chartInstance->c4_covrtInstance, 4U, 0, 0);
  c4_b_st.site = &c4_al_emlrtRSI;
  c4_modbus(chartInstance, &c4_b_st, &c4_modcon);
  c4_b_st.site = &c4_xk_emlrtRSI;
  c4_varargin_1 = &c4_modcon;
  c4_values[0] = c4_b_oxygen;
  c4_values[1] = c4_b_nitrates;
  c4_values[2] = c4_b_ammonium;
  c4_values[3] = c4_b_temperature;
  c4_c_st.site = &c4_ad_emlrtRSI;
  c4_matlab_internal_language_TimerSuspender(chartInstance, &c4_c_st);
  c4_c_st.site = &c4_xc_emlrtRSI;
  c4_d_st.site = &c4_bd_emlrtRSI;
  c4_e_st.site = &c4_o_emlrtRSI;
  c4_p = true;
  c4_k = 0;
  c4_exitg1 = false;
  while ((!c4_exitg1) && (c4_k < 4)) {
    c4_b_k = (real_T)c4_k + 1.0;
    c4_x = c4_values[(int32_T)c4_b_k - 1];
    c4_b_x = c4_x;
    c4_b_b = muDoubleScalarIsInf(c4_b_x);
    c4_b1 = !c4_b_b;
    c4_c_x = c4_x;
    c4_c_b = muDoubleScalarIsNaN(c4_c_x);
    c4_b2 = !c4_c_b;
    c4_d_b = (c4_b1 && c4_b2);
    if (c4_d_b) {
      c4_k++;
    } else {
      c4_p = false;
      c4_exitg1 = true;
    }
  }

  if (c4_p) {
    c4_b = true;
  } else {
    c4_b = false;
  }

  if (!c4_b) {
    c4_y = NULL;
    sf_mex_assign(&c4_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 28),
                  false);
    c4_b_y = NULL;
    sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_cv3, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c4_c_y = NULL;
    sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2, 1, 23),
                  false);
    sf_mex_call(&c4_e_st, &c4_d_emlrtMCI, "error", 0U, 2U, 14, c4_y, 14,
                sf_mex_call(&c4_e_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_e_st, NULL, "message", 1U, 2U, 14, c4_b_y, 14, c4_c_y)));
  }

  c4_c_st.site = &c4_yc_emlrtRSI;
  c4_obj = c4_varargin_1;
  c4_d_st.site = &c4_cd_emlrtRSI;
  for (c4_val = 0; c4_val < 4; c4_val++) {
    c4_b_val = (real_T)c4_val + 1.0;
    c4_d_x = c4_values[(int32_T)c4_b_val - 1];
    c4_a = c4_d_x;
    c4_f_x = c4_a;
    c4_r = muDoubleScalarRem(c4_f_x, 1.0);
    c4_b_varargin_1 = c4_r;
    c4_c_varargin_1 = c4_b_varargin_1;
    c4_b_p = false;
    c4_x1 = c4_c_varargin_1;
    c4_c_p = true;
    c4_b_x1 = c4_x1;
    c4_d_p = (c4_b_x1 == 0.0);
    if (!c4_d_p) {
      c4_c_p = false;
    }

    if (c4_c_p) {
      c4_b_p = true;
    }

    if (!c4_b_p) {
      c4_j_y = NULL;
      sf_mex_assign(&c4_j_y, sf_mex_create("y", c4_b_cv4, 10, 0U, 1U, 0U, 2, 1,
        36), false);
      c4_k_y = NULL;
      sf_mex_assign(&c4_k_y, sf_mex_create("y", c4_b_cv4, 10, 0U, 1U, 0U, 2, 1,
        36), false);
      c4_l_y = NULL;
      sf_mex_assign(&c4_l_y, sf_mex_create("y", c4_b_cv5, 10, 0U, 1U, 0U, 2, 1,
        8), false);
      sf_mex_call(&c4_d_st, &c4_db_emlrtMCI, "error", 0U, 2U, 14, c4_j_y, 14,
                  sf_mex_call(&c4_d_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c4_d_st, NULL, "message", 1U, 2U, 14, c4_k_y, 14, c4_l_y)));
    }
  }

  for (c4_i = 0; c4_i < 4; c4_i++) {
    c4_e_x[c4_i] = (c4_values[c4_i] < 0.0);
  }

  c4_d_y = c4_vectorAny(chartInstance, c4_e_x, c4_iv);
  c4_guard1 = false;
  if (c4_d_y) {
    c4_guard1 = true;
  } else {
    for (c4_i1 = 0; c4_i1 < 4; c4_i1++) {
      c4_e_x[c4_i1] = (c4_values[c4_i1] > 65535.0);
    }

    c4_e_y = c4_vectorAny(chartInstance, c4_e_x, c4_iv);
    if (c4_e_y) {
      c4_guard1 = true;
    }
  }

  if (c4_guard1) {
    c4_f_y = NULL;
    sf_mex_assign(&c4_f_y, sf_mex_create("y", c4_b_cv2, 10, 0U, 1U, 0U, 2, 1, 29),
                  false);
    c4_g_y = NULL;
    sf_mex_assign(&c4_g_y, sf_mex_create("y", c4_b_cv2, 10, 0U, 1U, 0U, 2, 1, 29),
                  false);
    c4_u = '0';
    c4_h_y = NULL;
    sf_mex_assign(&c4_h_y, sf_mex_create("y", &c4_u, 10, 0U, 0U, 0U, 0), false);
    c4_i_y = NULL;
    sf_mex_assign(&c4_i_y, sf_mex_create("y", c4_b_cv3, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(&c4_d_st, &c4_eb_emlrtMCI, "error", 0U, 2U, 14, c4_f_y, 14,
                sf_mex_call(&c4_d_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_d_st, NULL, "message", 1U, 3U, 14, c4_g_y, 14, c4_h_y, 14, c4_i_y)));
  }

  c4_d_st.site = &c4_dd_emlrtRSI;
  c4_b_obj = &c4_obj->Converter;
  for (c4_i2 = 0; c4_i2 < 4; c4_i2++) {
    c4_b_values[c4_i2] = 0U;
  }

  c4_startIdx = 1.0;
  for (c4_currentVal = 0; c4_currentVal < 4; c4_currentVal++) {
    c4_b_currentVal = (real_T)c4_currentVal + 1.0;
    c4_b3 = (c4_startIdx > c4_b_currentVal);
    if (c4_b3) {
      c4_i4 = 0;
      c4_i5 = -1;
    } else {
      c4_i3 = (int32_T)c4_startIdx;
      if ((c4_i3 < 1) || (c4_i3 > 4)) {
        emlrtDynamicBoundsCheckR2012b(c4_i3, 1, 4, &c4_emlrtBCI, &c4_d_st);
      }

      c4_i4 = c4_i3 - 1;
      c4_i5 = (int32_T)c4_b_currentVal - 1;
    }

    c4_tmp_size[1] = (c4_i5 - c4_i4) + 1;
    c4_loop_ub = c4_i5 - c4_i4;
    for (c4_i6 = 0; c4_i6 <= c4_loop_ub; c4_i6++) {
      c4_tmp_data[c4_i6] = c4_i4 + c4_i6;
    }

    c4_e_st.site = &c4_gd_emlrtRSI;
    c4_f_obj = c4_b_obj;
    c4_d = muDoubleScalarRound(c4_values[(int32_T)c4_b_currentVal - 1]);
    if (c4_d < 65536.0) {
      if (c4_d >= 0.0) {
        c4_b_u = (uint16_T)c4_d;
      } else {
        c4_b_u = 0U;
      }
    } else if (c4_d >= 65536.0) {
      c4_b_u = MAX_uint16_T;
    } else {
      c4_b_u = 0U;
    }

    c4_c_val = c4_b_u;
    c4_f_st.site = &c4_hd_emlrtRSI;
    c4_g_x = c4_c_val;
    memcpy((void *)&c4_b_out, (void *)&c4_g_x, (size_t)1 * sizeof(uint16_T));
    c4_f_st.site = &c4_id_emlrtRSI;
    c4_g_obj = c4_f_obj;
    c4_i8 = c4_out->size[0] * c4_out->size[1];
    c4_out->size[0] = 1;
    c4_out->size[1] = c4_g_obj->WordOrder->size[1];
    c4_emxEnsureCapacity_char_T(chartInstance, &c4_f_st, c4_out, c4_i8,
      &c4_c_emlrtRTEI);
    c4_c_loop_ub = c4_g_obj->WordOrder->size[1] - 1;
    for (c4_i12 = 0; c4_i12 <= c4_c_loop_ub; c4_i12++) {
      c4_out->data[c4_i12] = c4_g_obj->WordOrder->data[c4_i12];
    }

    c4_f_st.site = &c4_id_emlrtRSI;
    c4_g_st.site = &c4_jd_emlrtRSI;
    c4_h_st.site = &c4_kd_emlrtRSI;
    c4_remainingDimsA = c4_out->size[1];
    if (c4_remainingDimsA != 10) {
    } else {
      c4_kstr = 1;
      c4_exitg1 = false;
      while ((!c4_exitg1) && (c4_kstr - 1 < 10)) {
        c4_b_kstr = c4_kstr - 1;
        c4_i_st.site = &c4_ld_emlrtRSI;
        c4_s = c4_out->data[c4_b_kstr];
        c4_b_s = c4_s;
        c4_b4 = ((real_T)(uint8_T)c4_b_s <= 127.0);
        c4_e_p = c4_b4;
        if (!c4_e_p) {
          c4_m_y = NULL;
          sf_mex_assign(&c4_m_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_n_y = NULL;
          sf_mex_assign(&c4_n_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_c_u = MAX_int8_T;
          c4_o_y = NULL;
          sf_mex_assign(&c4_o_y, sf_mex_create("y", &c4_c_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c4_i_st, &c4_fb_emlrtMCI, "error", 0U, 2U, 14, c4_m_y, 14,
                      sf_mex_call(&c4_i_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c4_i_st, NULL, "message", 1U, 2U, 14, c4_n_y, 14,
                        c4_o_y)));
        }

        c4_i_st.site = &c4_md_emlrtRSI;
        c4_c_s = c4_cv[c4_b_kstr];
        c4_d_s = c4_c_s;
        c4_b5 = ((real_T)(uint8_T)c4_d_s <= 127.0);
        c4_f_p = c4_b5;
        if (!c4_f_p) {
          c4_p_y = NULL;
          sf_mex_assign(&c4_p_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_q_y = NULL;
          sf_mex_assign(&c4_q_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_d_u = MAX_int8_T;
          c4_r_y = NULL;
          sf_mex_assign(&c4_r_y, sf_mex_create("y", &c4_d_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c4_i_st, &c4_fb_emlrtMCI, "error", 0U, 2U, 14, c4_p_y, 14,
                      sf_mex_call(&c4_i_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c4_i_st, NULL, "message", 1U, 2U, 14, c4_q_y, 14,
                        c4_r_y)));
        }

        c4_i_st.site = &c4_nd_emlrtRSI;
        c4_h_x = c4_out->data[c4_b_kstr];
        c4_j_st.site = &c4_od_emlrtRSI;
        c4_i_x = c4_h_x;
        c4_k_st.site = &c4_pd_emlrtRSI;
        c4_e_s = c4_i_x;
        c4_f_s = c4_e_s;
        c4_b6 = ((real_T)(uint8_T)c4_f_s <= 127.0);
        c4_g_p = c4_b6;
        if (!c4_g_p) {
          c4_s_y = NULL;
          sf_mex_assign(&c4_s_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_u_y = NULL;
          sf_mex_assign(&c4_u_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_e_u = MAX_int8_T;
          c4_v_y = NULL;
          sf_mex_assign(&c4_v_y, sf_mex_create("y", &c4_e_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c4_k_st, &c4_fb_emlrtMCI, "error", 0U, 2U, 14, c4_s_y, 14,
                      sf_mex_call(&c4_k_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c4_k_st, NULL, "message", 1U, 2U, 14, c4_u_y, 14,
                        c4_v_y)));
        }

        c4_t_y = c4_cv1[(uint8_T)c4_i_x & 127];
        c4_i_st.site = &c4_nd_emlrtRSI;
        c4_j_x = c4_cv[c4_b_kstr];
        c4_j_st.site = &c4_od_emlrtRSI;
        c4_k_x = c4_j_x;
        c4_k_st.site = &c4_pd_emlrtRSI;
        c4_g_s = c4_k_x;
        c4_h_s = c4_g_s;
        c4_b7 = ((real_T)(uint8_T)c4_h_s <= 127.0);
        c4_h_p = c4_b7;
        if (!c4_h_p) {
          c4_w_y = NULL;
          sf_mex_assign(&c4_w_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_y_y = NULL;
          sf_mex_assign(&c4_y_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_f_u = MAX_int8_T;
          c4_ab_y = NULL;
          sf_mex_assign(&c4_ab_y, sf_mex_create("y", &c4_f_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c4_k_st, &c4_fb_emlrtMCI, "error", 0U, 2U, 14, c4_w_y, 14,
                      sf_mex_call(&c4_k_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c4_k_st, NULL, "message", 1U, 2U, 14, c4_y_y, 14,
                        c4_ab_y)));
        }

        c4_x_y = c4_cv1[(uint8_T)c4_k_x & 127];
        if (c4_t_y != c4_x_y) {
          c4_exitg1 = true;
        } else {
          c4_kstr++;
        }
      }
    }

    c4_d_loop_ub = c4_tmp_size[1] - 1;
    for (c4_i15 = 0; c4_i15 <= c4_d_loop_ub; c4_i15++) {
      c4_b_values[c4_tmp_data[c4_i15]] = c4_b_out;
    }

    c4_startIdx = c4_b_currentVal + 1.0;
  }

  c4_d_st.site = &c4_ed_emlrtRSI;
  c4_c_obj = &c4_obj->PacketBuilder;
  c4_e_st.site = &c4_vd_emlrtRSI;
  c4_d_obj = c4_c_obj;
  c4_d_obj->ModbusPDUSize = 6.0;
  c4_f_st.site = &c4_xd_emlrtRSI;
  c4_DataConverter_word2bytes(chartInstance, &c4_f_st, c4_d_obj->Converter, 4.0,
    c4_cntBytes);
  c4_d_obj->ModbusPDUSize = 15.0;
  c4_f_st.site = &c4_yd_emlrtRSI;
  c4_e_obj = c4_d_obj;
  c4_i7 = c4_pdu->size[0] * c4_pdu->size[1];
  c4_pdu->size[0] = 1;
  if (!(c4_e_obj->ModbusPDUSize >= 0.0)) {
    emlrtNonNegativeCheckR2012b(c4_e_obj->ModbusPDUSize, &c4_b_emlrtDCI,
      &c4_f_st);
  }

  c4_d1 = c4_e_obj->ModbusPDUSize;
  if (c4_d1 != (real_T)(int32_T)muDoubleScalarFloor(c4_d1)) {
    emlrtIntegerCheckR2012b(c4_d1, &c4_emlrtDCI, &c4_f_st);
  }

  c4_pdu->size[1] = (int32_T)c4_d1;
  c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_f_st, c4_pdu, c4_i7,
    &c4_b_emlrtRTEI);
  if (!(c4_e_obj->ModbusPDUSize >= 0.0)) {
    emlrtNonNegativeCheckR2012b(c4_e_obj->ModbusPDUSize, &c4_d_emlrtDCI,
      &c4_f_st);
  }

  c4_d2 = c4_e_obj->ModbusPDUSize;
  if (c4_d2 != (real_T)(int32_T)muDoubleScalarFloor(c4_d2)) {
    emlrtIntegerCheckR2012b(c4_d2, &c4_c_emlrtDCI, &c4_f_st);
  }

  c4_b_loop_ub = (int32_T)c4_d2 - 1;
  for (c4_i9 = 0; c4_i9 <= c4_b_loop_ub; c4_i9++) {
    c4_pdu->data[c4_i9] = 0U;
  }

  c4_i10 = c4_pdu->size[1];
  c4_i11 = 1;
  if ((c4_i11 < 1) || (c4_i11 > c4_i10)) {
    emlrtDynamicBoundsCheckR2012b(c4_i11, 1, c4_i10, &c4_b_emlrtBCI, &c4_f_st);
  }

  c4_pdu->data[0] = 1U;
  c4_i13 = c4_pdu->size[1];
  c4_i14 = 2;
  if ((c4_i14 < 1) || (c4_i14 > c4_i13)) {
    emlrtDynamicBoundsCheckR2012b(c4_i14, 1, c4_i13, &c4_c_emlrtBCI, &c4_f_st);
  }

  c4_pdu->data[1] = 16U;
  c4_g_st.site = &c4_de_emlrtRSI;
  c4_DataConverter_word2bytes(chartInstance, &c4_g_st, c4_e_obj->Converter, 3.0,
    c4_addrBytes);
  c4_i16 = c4_pdu->size[1];
  c4_i17 = 3;
  if ((c4_i17 < 1) || (c4_i17 > c4_i16)) {
    emlrtDynamicBoundsCheckR2012b(c4_i17, 1, c4_i16, &c4_d_emlrtBCI, &c4_f_st);
  }

  c4_pdu->data[2] = c4_addrBytes[0];
  c4_i18 = c4_pdu->size[1];
  c4_i19 = 4;
  if ((c4_i19 < 1) || (c4_i19 > c4_i18)) {
    emlrtDynamicBoundsCheckR2012b(c4_i19, 1, c4_i18, &c4_e_emlrtBCI, &c4_f_st);
  }

  c4_pdu->data[3] = c4_addrBytes[1];
  c4_f_st.site = &c4_ae_emlrtRSI;
  c4_index = 5.0;
  for (c4_e_b = 0; c4_e_b < 2; c4_e_b++) {
    c4_f_b = c4_cntBytes[c4_e_b];
    c4_i22 = c4_pdu->size[1];
    c4_i23 = (int32_T)c4_index;
    if ((c4_i23 < 1) || (c4_i23 > c4_i22)) {
      emlrtDynamicBoundsCheckR2012b(c4_i23, 1, c4_i22, &c4_g_emlrtBCI, &c4_f_st);
    }

    c4_pdu->data[c4_i23 - 1] = c4_f_b;
    c4_index++;
  }

  c4_i20 = c4_pdu->size[1];
  c4_i21 = (int32_T)c4_index;
  if ((c4_i21 < 1) || (c4_i21 > c4_i20)) {
    emlrtDynamicBoundsCheckR2012b(c4_i21, 1, c4_i20, &c4_f_emlrtBCI, &c4_e_st);
  }

  c4_pdu->data[c4_i21 - 1] = 8U;
  c4_b_index = c4_index + 1.0;
  for (c4_idx = 0; c4_idx < 4; c4_idx++) {
    c4_b_idx = (real_T)c4_idx + 1.0;
    c4_f_st.site = &c4_be_emlrtRSI;
    c4_b_DataConverter_word2bytes(chartInstance, &c4_f_st, c4_d_obj->Converter,
      c4_b_values[(int32_T)c4_b_idx - 1], c4_cntBytes);
    c4_f_st.site = &c4_ce_emlrtRSI;
    c4_c_index = c4_b_index;
    c4_d_index = c4_c_index;
    for (c4_g_b = 0; c4_g_b < 2; c4_g_b++) {
      c4_h_b = c4_cntBytes[c4_g_b];
      c4_i24 = c4_pdu->size[1];
      c4_i25 = (int32_T)c4_d_index;
      if ((c4_i25 < 1) || (c4_i25 > c4_i24)) {
        emlrtDynamicBoundsCheckR2012b(c4_i25, 1, c4_i24, &c4_g_emlrtBCI,
          &c4_f_st);
      }

      c4_pdu->data[c4_i25 - 1] = c4_h_b;
      c4_d_index++;
    }

    c4_b_index = c4_d_index;
  }

  c4_e_st.site = &c4_wd_emlrtRSI;
  c4_h_obj = c4_c_obj;
  c4_len = (real_T)c4_pdu->size[1];
  c4_f_st.site = &c4_ee_emlrtRSI;
  c4_i_obj = c4_h_obj;
  c4_d3 = muDoubleScalarRound(c4_h_obj->TransactionId);
  if (c4_d3 < 65536.0) {
    if (c4_d3 >= 0.0) {
      c4_u1 = (uint16_T)c4_d3;
    } else {
      c4_u1 = 0U;
    }
  } else if (c4_d3 >= 65536.0) {
    c4_u1 = MAX_uint16_T;
  } else {
    c4_u1 = 0U;
  }

  c4_transactionId = c4_u1;
  c4_d4 = muDoubleScalarRound(c4_len);
  c4_covSaturation = false;
  if (c4_d4 < 65536.0) {
    if (c4_d4 >= 0.0) {
      c4_u2 = (uint16_T)c4_d4;
    } else {
      c4_covSaturation = true;
      c4_u2 = 0U;
    }
  } else if (c4_d4 >= 65536.0) {
    c4_covSaturation = true;
    c4_u2 = MAX_uint16_T;
  } else {
    c4_u2 = 0U;
  }

  covrtSaturationUpdateFcn(chartInstance->c4_covrtInstance, 4, 0, 0, 0,
    c4_covSaturation);
  c4_packetLen = c4_u2;
  for (c4_i26 = 0; c4_i26 < 6; c4_i26++) {
    c4_mbap[c4_i26] = 0U;
  }

  c4_g_st.site = &c4_fe_emlrtRSI;
  c4_b_DataConverter_word2bytes(chartInstance, &c4_g_st, c4_i_obj->Converter,
    c4_transactionId, c4_cntBytes);
  c4_mbap[0] = c4_cntBytes[0];
  c4_mbap[1] = c4_cntBytes[1];
  c4_g_st.site = &c4_ge_emlrtRSI;
  c4_b_DataConverter_word2bytes(chartInstance, &c4_g_st, c4_i_obj->Converter,
    c4_packetLen, c4_cntBytes);
  c4_mbap[4] = c4_cntBytes[0];
  c4_mbap[5] = c4_cntBytes[1];
  c4_h_obj->TransactionId++;
  c4_i27 = c4_reqPacket->size[0] * c4_reqPacket->size[1];
  c4_reqPacket->size[0] = 1;
  c4_reqPacket->size[1] = 6 + c4_pdu->size[1];
  c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_e_st, c4_reqPacket, c4_i27,
    &c4_d_emlrtRTEI);
  for (c4_i28 = 0; c4_i28 < 6; c4_i28++) {
    c4_reqPacket->data[c4_i28] = c4_mbap[c4_i28];
  }

  c4_e_loop_ub = c4_pdu->size[1] - 1;
  for (c4_i29 = 0; c4_i29 <= c4_e_loop_ub; c4_i29++) {
    c4_reqPacket->data[c4_i29 + 6] = c4_pdu->data[c4_i29];
  }

  c4_d_st.site = &c4_fd_emlrtRSI;
  c4_Modbus_executeWrite(chartInstance, &c4_d_st, c4_obj, c4_reqPacket);
  c4_b_st.site = &c4_yk_emlrtRSI;
  c4_handle_matlabCodegenDestructor(chartInstance, &c4_b_st, &c4_modcon);
  c4_b_st.site = &c4_yk_emlrtRSI;
  c4_b_handle_matlabCodegenDestructor(chartInstance, &c4_b_st, &c4_modcon._pobj0);
  c4_b_st.site = &c4_yk_emlrtRSI;
  c4_d_handle_matlabCodegenDestructor(chartInstance, &c4_b_st,
    &c4_modcon._pobj0._pobj0);
  c4_b_st.site = &c4_yk_emlrtRSI;
  c4_e_handle_matlabCodegenDestructor(chartInstance, &c4_b_st,
    &c4_modcon._pobj0._pobj0.UnreadDataBuffer);
  c4_b_st.site = &c4_yk_emlrtRSI;
  c4_c_handle_matlabCodegenDestructor(chartInstance, &c4_b_st,
    &c4_modcon._pobj0._pobj1);
  c4_b_st.site = &c4_yk_emlrtRSI;
  c4_g_handle_matlabCodegenDestructor(chartInstance, &c4_b_st,
    &c4_modcon._pobj0._pobj0.UnreadDataBuffer.OutputStream);
  c4_b_st.site = &c4_yk_emlrtRSI;
  c4_g_handle_matlabCodegenDestructor(chartInstance, &c4_b_st,
    &c4_modcon._pobj0._pobj1.OutputStream);
  c4_b_st.site = &c4_yk_emlrtRSI;
  c4_f_handle_matlabCodegenDestructor(chartInstance, &c4_b_st,
    &c4_modcon._pobj0._pobj0.UnreadDataBuffer.InputStream);
  c4_b_st.site = &c4_yk_emlrtRSI;
  c4_f_handle_matlabCodegenDestructor(chartInstance, &c4_b_st,
    &c4_modcon._pobj0._pobj1.InputStream);
  c4_emxFree_char_T(chartInstance, &c4_out);
  c4_emxFree_uint8_T(chartInstance, &c4_pdu);
  c4_emxFree_uint8_T(chartInstance, &c4_reqPacket);
  c4_emxFreeStruct_icomm_interface_m(chartInstance, &c4_modcon);
  emlrtHeapReferenceStackLeaveFcnR2012b(&c4_st);
  c4_do_animation_call_c4_wwtp3(chartInstance);
}

static void ext_mode_exec_c4_wwtp3(SFc4_wwtp3InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c4_update_jit_animation_c4_wwtp3(SFc4_wwtp3InstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c4_do_animation_call_c4_wwtp3(SFc4_wwtp3InstanceStruct
  *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c4_wwtp3(SFc4_wwtp3InstanceStruct
  *chartInstance)
{
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_st = NULL;
  const mxArray *c4_y = NULL;
  c4_st = NULL;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_createcellmatrix(1, 1), false);
  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_create("y",
    &chartInstance->c4_is_active_c4_wwtp3, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c4_y, 0, c4_b_y);
  sf_mex_assign(&c4_st, c4_y, false);
  return c4_st;
}

static void set_sim_state_c4_wwtp3(SFc4_wwtp3InstanceStruct *chartInstance,
  const mxArray *c4_st)
{
  const mxArray *c4_u;
  chartInstance->c4_doneDoubleBufferReInit = true;
  c4_u = sf_mex_dup(c4_st);
  chartInstance->c4_is_active_c4_wwtp3 = c4_i_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c4_u, 0)), "is_active_c4_wwtp3");
  sf_mex_destroy(&c4_u);
  sf_mex_destroy(&c4_st);
}

static void initSimStructsc4_wwtp3(SFc4_wwtp3InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void initSubchartIOPointersc4_wwtp3(SFc4_wwtp3InstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static boolean_T c4_vectorAny(SFc4_wwtp3InstanceStruct *chartInstance, boolean_T
  c4_x_data[], int32_T c4_x_size[2])
{
  real_T c4_b_k;
  real_T c4_d;
  int32_T c4_i;
  int32_T c4_k;
  boolean_T c4_b;
  boolean_T c4_exitg1;
  boolean_T c4_y;
  (void)chartInstance;
  c4_y = false;
  c4_d = (real_T)c4_x_size[1];
  c4_i = (int32_T)c4_d - 1;
  c4_k = 0;
  c4_exitg1 = false;
  while ((!c4_exitg1) && (c4_k <= c4_i)) {
    c4_b_k = (real_T)c4_k + 1.0;
    if (!c4_x_data[(int32_T)c4_b_k - 1]) {
      c4_b = true;
    } else {
      c4_b = false;
    }

    if (!c4_b) {
      c4_y = true;
      c4_exitg1 = true;
    } else {
      c4_k++;
    }
  }

  return c4_y;
}

static c4_icomm_interface_modbus_tcpip_Modbus *c4_modbus
  (SFc4_wwtp3InstanceStruct *chartInstance, const emlrtStack *c4_sp,
   c4_icomm_interface_modbus_tcpip_Modbus *c4_iobj_0)
{
  static char_T c4_b_cv11[51] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't',
    't', 'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'N', 'o', 'n', 'n', 'e', 'g', 'a', 't', 'i', 'v', 'e' };

  static char_T c4_b_cv2[40] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'a',
    'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't', 'r', 'i', 'b', 'u', 't', 'e',
    's', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'S', 'c', 'a', 'l', 'a',
    'r' };

  static char_T c4_b_cv6[40] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'a',
    'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't', 'r', 'i', 'b', 'u', 't', 'e',
    's', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'S', 'c', 'a', 'l', 'a',
    'r' };

  static char_T c4_b_cv10[36] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'T', 'C',
    'P', 'C', 'l', 'i', 'e', 'n', 't', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'N', 'o', 'n', 'n', 'e', 'g', 'a', 't', 'i', 'v', 'e' };

  static char_T c4_b_cv1[32] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'T', 'C',
    'P', 'C', 'l', 'i', 'e', 'n', 't', ':', 'n', 'o', 't', 'G', 'r', 'e', 'a',
    't', 'e', 'r', 'E', 'q', 'u', 'a', 'l' };

  static char_T c4_b_cv13[31] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'T', 'C',
    'P', 'C', 'l', 'i', 'e', 'n', 't', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static char_T c4_b_cv5[29] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'T', 'C',
    'P', 'C', 'l', 'i', 'e', 'n', 't', ':', 'n', 'o', 't', 'L', 'e', 's', 's',
    'E', 'q', 'u', 'a', 'l' };

  static char_T c4_b_cv12[27] = { 'i', 'n', 'p', 'u', 't', ' ', 'n', 'u', 'm',
    'b', 'e', 'r', ' ', '2', ',', ' ', 'P', 'O', 'R', 'T', 'N', 'U', 'M', 'B',
    'E', 'R', ',' };

  static char_T c4_b_cv14[27] = { 'i', 'n', 'p', 'u', 't', ' ', 'n', 'u', 'm',
    'b', 'e', 'r', ' ', '2', ',', ' ', 'P', 'O', 'R', 'T', 'N', 'U', 'M', 'B',
    'E', 'R', ',' };

  static char_T c4_b_cv3[27] = { 'i', 'n', 'p', 'u', 't', ' ', 'n', 'u', 'm',
    'b', 'e', 'r', ' ', '2', ',', ' ', 'P', 'O', 'R', 'T', 'N', 'U', 'M', 'B',
    'E', 'R', ',' };

  static char_T c4_b_cv7[27] = { 'i', 'n', 'p', 'u', 't', ' ', 'n', 'u', 'm',
    'b', 'e', 'r', ' ', '2', ',', ' ', 'P', 'O', 'R', 'T', 'N', 'U', 'M', 'B',
    'E', 'R', ',' };

  static char_T c4_b_cv[11] = { '1', '0', '.', '6', '3', '.', '2', '8', '.', '5',
    '3' };

  static char_T c4_b_cv9[5] = { '6', '5', '5', '3', '5' };

  static char_T c4_val[5] = { 'u', 'i', 'n', 't', '8' };

  static char_T c4_b_val[4] = { 'D', 'a', 't', 'a' };

  static char_T c4_b_cv4[2] = { '>', '=' };

  static char_T c4_b_cv8[2] = { '<', '=' };

  CoderChannel c4_chImpl;
  c4_emxArray_char_T *c4_out;
  c4_icomm_interface_coder_modbus_DataConverter *c4_b_converter;
  c4_icomm_interface_coder_modbus_DataConverter *c4_b_this;
  c4_icomm_interface_coder_modbus_DataConverter *c4_converter;
  c4_icomm_interface_coder_modbus_DataConverter *c4_d_obj;
  c4_icomm_interface_coder_modbus_DataConverter *c4_e_obj;
  c4_icomm_interface_coder_modbus_DataConverter *c4_eb_obj;
  c4_icomm_interface_coder_modbus_DataConverter *c4_f_obj;
  c4_icomm_interface_coder_modbus_DataConverter *c4_g_obj;
  c4_icomm_interface_coder_modbus_DataConverter *c4_gb_obj;
  c4_icomm_interface_modbus_tcpip_Modbus *c4_ab_obj;
  c4_icomm_interface_modbus_tcpip_Modbus *c4_b_obj;
  c4_icomm_interface_modbus_tcpip_Modbus *c4_c_obj;
  c4_icomm_interface_modbus_tcpip_Modbus *c4_cb_obj;
  c4_icomm_interface_modbus_tcpip_Modbus *c4_fb_obj;
  c4_icomm_interface_modbus_tcpip_Modbus *c4_hb_obj;
  c4_icomm_interface_modbus_tcpip_Modbus *c4_i_obj;
  c4_icomm_interface_modbus_tcpip_Modbus *c4_ib_obj;
  c4_icomm_interface_modbus_tcpip_Modbus *c4_jb_obj;
  c4_icomm_interface_modbus_tcpip_Modbus *c4_obj;
  c4_icomm_interface_modbus_tcpip_Modbus *c4_this;
  c4_icomm_interface_modbus_tcpip_Modbus *c4_v_obj;
  c4_icomm_interface_modbus_tcpip_PacketBuilder *c4_g_this;
  c4_icomm_interface_modbus_tcpip_PacketBuilder *c4_mb_obj;
  c4_icomm_interface_modbus_tcpip_PacketBuilder *c4_ob_obj;
  c4_icomm_interface_modbus_tcpip_PacketBuilder *c4_pb_obj;
  c4_matlabshared_asyncio_internal_Channel *c4_y_obj;
  c4_matlabshared_asyncio_internal_InputStream *c4_inputStream;
  c4_matlabshared_asyncio_internal_InputStream *c4_qb_obj;
  c4_matlabshared_asyncio_internal_OutputStream *c4_nb_obj;
  c4_matlabshared_asyncio_internal_OutputStream *c4_outputStream;
  c4_matlabshared_network_internal_TCPClient *c4_b_iobj_0;
  c4_matlabshared_network_internal_TCPClient *c4_b_transportObj;
  c4_matlabshared_network_internal_TCPClient *c4_bb_obj;
  c4_matlabshared_network_internal_TCPClient *c4_c_iobj_0;
  c4_matlabshared_network_internal_TCPClient *c4_c_this;
  c4_matlabshared_network_internal_TCPClient *c4_d_this;
  c4_matlabshared_network_internal_TCPClient *c4_e_this;
  c4_matlabshared_network_internal_TCPClient *c4_f_this;
  c4_matlabshared_network_internal_TCPClient *c4_j_obj;
  c4_matlabshared_network_internal_TCPClient *c4_k_obj;
  c4_matlabshared_network_internal_TCPClient *c4_kb_obj;
  c4_matlabshared_network_internal_TCPClient *c4_l_obj;
  c4_matlabshared_network_internal_TCPClient *c4_lb_obj;
  c4_matlabshared_network_internal_TCPClient *c4_m_obj;
  c4_matlabshared_network_internal_TCPClient *c4_n_obj;
  c4_matlabshared_network_internal_TCPClient *c4_o_obj;
  c4_matlabshared_network_internal_TCPClient *c4_r_obj;
  c4_matlabshared_network_internal_TCPClient *c4_t_obj;
  c4_matlabshared_network_internal_TCPClient *c4_transportObj;
  c4_matlabshared_network_internal_TCPClient *c4_w_obj;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_db_obj;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_p_obj;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_q_obj;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_s_obj;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_u_obj;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_x_obj;
  c4_rtString c4_h_obj;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_e_st;
  emlrtStack c4_f_st;
  emlrtStack c4_g_st;
  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_f_y = NULL;
  const mxArray *c4_g_y = NULL;
  const mxArray *c4_h_y = NULL;
  const mxArray *c4_i_y = NULL;
  const mxArray *c4_j_y = NULL;
  const mxArray *c4_k_y = NULL;
  const mxArray *c4_l_y = NULL;
  const mxArray *c4_m_y = NULL;
  const mxArray *c4_n_y = NULL;
  const mxArray *c4_o_y = NULL;
  const mxArray *c4_p_y = NULL;
  const mxArray *c4_y = NULL;
  real_T c4_a;
  real_T c4_b_a;
  real_T c4_b_x;
  real_T c4_c_a;
  real_T c4_c_x;
  real_T c4_d_a;
  real_T c4_d_x;
  real_T c4_e_a;
  real_T c4_f_a;
  real_T c4_g_a;
  real_T c4_h_a;
  real_T c4_i_a;
  real_T c4_portNumber;
  real_T c4_varargin_2;
  real_T c4_x;
  int32_T c4_b_size[2];
  int32_T c4_b_loop_ub;
  int32_T c4_c_loop_ub;
  int32_T c4_d_loop_ub;
  int32_T c4_e_loop_ub;
  int32_T c4_f_loop_ub;
  int32_T c4_g_loop_ub;
  int32_T c4_h_loop_ub;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i15;
  int32_T c4_i16;
  int32_T c4_i17;
  int32_T c4_i18;
  int32_T c4_i19;
  int32_T c4_i2;
  int32_T c4_i20;
  int32_T c4_i21;
  int32_T c4_i22;
  int32_T c4_i23;
  int32_T c4_i24;
  int32_T c4_i25;
  int32_T c4_i26;
  int32_T c4_i27;
  int32_T c4_i28;
  int32_T c4_i29;
  int32_T c4_i3;
  int32_T c4_i30;
  int32_T c4_i31;
  int32_T c4_i32;
  int32_T c4_i33;
  int32_T c4_i34;
  int32_T c4_i35;
  int32_T c4_i36;
  int32_T c4_i37;
  int32_T c4_i38;
  int32_T c4_i39;
  int32_T c4_i4;
  int32_T c4_i40;
  int32_T c4_i41;
  int32_T c4_i42;
  int32_T c4_i43;
  int32_T c4_i44;
  int32_T c4_i45;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_i_loop_ub;
  int32_T c4_j_loop_ub;
  int32_T c4_k_loop_ub;
  int32_T c4_l_loop_ub;
  int32_T c4_loop_ub;
  int32_T c4_success;
  char_T c4_b_data[512];
  char_T c4_hostName[11];
  char_T c4_u;
  boolean_T c4_b;
  boolean_T c4_b1;
  boolean_T c4_b2;
  boolean_T c4_b3;
  boolean_T c4_b_b;
  boolean_T c4_b_out;
  boolean_T c4_b_p;
  boolean_T c4_b_value;
  boolean_T c4_c_b;
  boolean_T c4_c_p;
  boolean_T c4_d_b;
  boolean_T c4_d_p;
  boolean_T c4_e_p;
  boolean_T c4_p;
  boolean_T c4_value;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_e_st.prev = &c4_d_st;
  c4_e_st.tls = c4_d_st.tls;
  c4_f_st.prev = &c4_e_st;
  c4_f_st.tls = c4_e_st.tls;
  c4_g_st.prev = &c4_f_st;
  c4_g_st.tls = c4_f_st.tls;
  c4_st.site = &c4_emlrtRSI;
  c4_b_obj = c4_iobj_0;
  c4_obj = c4_b_obj;
  c4_b_st.site = &c4_b_emlrtRSI;
  c4_c_obj = c4_obj;
  c4_obj = c4_c_obj;
  c4_obj->TransportInjected = false;
  c4_c_st.site = &c4_g_emlrtRSI;
  c4_this = c4_obj;
  c4_obj = c4_this;
  c4_c_st.site = &c4_h_emlrtRSI;
  c4_d_obj = &c4_obj->Converter;
  c4_e_obj = c4_d_obj;
  c4_d_st.site = &c4_i_emlrtRSI;
  c4_b_this = c4_e_obj;
  c4_e_obj = c4_b_this;
  c4_d_st.site = &c4_j_emlrtRSI;
  c4_f_obj = c4_e_obj;
  c4_b_size[1] = 0;
  c4_i = c4_f_obj->ByteOrder->size[0] * c4_f_obj->ByteOrder->size[1];
  c4_f_obj->ByteOrder->size[0] = 1;
  c4_f_obj->ByteOrder->size[1] = c4_b_size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_d_st, c4_f_obj->ByteOrder, c4_i,
    &c4_h_emlrtRTEI);
  c4_loop_ub = c4_b_size[1] - 1;
  for (c4_i1 = 0; c4_i1 <= c4_loop_ub; c4_i1++) {
    c4_f_obj->ByteOrder->data[c4_i1] = c4_b_data[c4_i1];
  }

  c4_i2 = c4_f_obj->ByteOrder->size[0] * c4_f_obj->ByteOrder->size[1];
  c4_f_obj->ByteOrder->size[0] = 1;
  c4_f_obj->ByteOrder->size[1] = 10;
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_d_st, c4_f_obj->ByteOrder,
    c4_i2, &c4_i_emlrtRTEI);
  for (c4_i3 = 0; c4_i3 < 10; c4_i3++) {
    c4_f_obj->ByteOrder->data[c4_i3] = c4_cv[c4_i3];
  }

  c4_d_st.site = &c4_k_emlrtRSI;
  c4_g_obj = c4_e_obj;
  c4_b_size[1] = 0;
  c4_i4 = c4_g_obj->WordOrder->size[0] * c4_g_obj->WordOrder->size[1];
  c4_g_obj->WordOrder->size[0] = 1;
  c4_g_obj->WordOrder->size[1] = c4_b_size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_d_st, c4_g_obj->WordOrder,
    c4_i4, &c4_j_emlrtRTEI);
  c4_b_loop_ub = c4_b_size[1] - 1;
  for (c4_i5 = 0; c4_i5 <= c4_b_loop_ub; c4_i5++) {
    c4_g_obj->WordOrder->data[c4_i5] = c4_b_data[c4_i5];
  }

  c4_i6 = c4_g_obj->WordOrder->size[0] * c4_g_obj->WordOrder->size[1];
  c4_g_obj->WordOrder->size[0] = 1;
  c4_g_obj->WordOrder->size[1] = 10;
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_d_st, c4_g_obj->WordOrder,
    c4_i6, &c4_k_emlrtRTEI);
  for (c4_i7 = 0; c4_i7 < 10; c4_i7++) {
    c4_g_obj->WordOrder->data[c4_i7] = c4_cv[c4_i7];
  }

  for (c4_i8 = 0; c4_i8 < 13; c4_i8++) {
    c4_e_obj->MachineByteOrder[c4_i8] = c4_cv4[c4_i8];
  }

  for (c4_i9 = 0; c4_i9 < 11; c4_i9++) {
    c4_h_obj.Value[c4_i9] = c4_b_cv[c4_i9];
  }

  c4_obj->DeviceAddress = c4_h_obj;
  c4_obj->Port = 5020.0;
  c4_b_st.site = &c4_f_emlrtRSI;
  c4_i_obj = c4_obj;
  c4_b_iobj_0 = &c4_obj->_pobj0;
  c4_c_st.site = &c4_l_emlrtRSI;
  c4_h_obj = c4_i_obj->DeviceAddress;
  c4_varargin_2 = c4_i_obj->Port;
  c4_c_iobj_0 = c4_b_iobj_0;
  c4_d_st.site = &c4_m_emlrtRSI;
  c4_j_obj = c4_c_iobj_0;
  c4_portNumber = c4_varargin_2;
  c4_transportObj = c4_j_obj;
  c4_transportObj->ConnectTimeout = rtInf;
  c4_transportObj->InputBufferSize = rtInf;
  c4_transportObj->OutputBufferSize = rtInf;
  c4_transportObj->TransferDelay = true;
  for (c4_i10 = 0; c4_i10 < 11; c4_i10++) {
    c4_hostName[c4_i10] = c4_h_obj.Value[c4_i10];
  }

  c4_e_st.site = &c4_n_emlrtRSI;
  c4_a = c4_portNumber;
  c4_f_st.site = &c4_o_emlrtRSI;
  c4_b_a = c4_a;
  c4_c_a = c4_b_a;
  c4_p = true;
  if (!(c4_c_a >= 1.0)) {
    c4_p = false;
  }

  if (!c4_p) {
    c4_y = NULL;
    sf_mex_assign(&c4_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2, 1, 32),
                  false);
    c4_b_y = NULL;
    sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_b_cv2, 10, 0U, 1U, 0U, 2, 1, 40),
                  false);
    c4_c_y = NULL;
    sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_b_cv3, 10, 0U, 1U, 0U, 2, 1, 27),
                  false);
    c4_d_y = NULL;
    sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_b_cv4, 10, 0U, 1U, 0U, 2, 1, 2),
                  false);
    c4_u = '1';
    c4_f_y = NULL;
    sf_mex_assign(&c4_f_y, sf_mex_create("y", &c4_u, 10, 0U, 0U, 0U, 0), false);
    sf_mex_call(&c4_f_st, &c4_emlrtMCI, "error", 0U, 2U, 14, c4_y, 14,
                sf_mex_call(&c4_f_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_f_st, NULL, "message", 1U, 4U, 14, c4_b_y, 14, c4_c_y, 14, c4_d_y, 14,
       c4_f_y)));
  }

  c4_f_st.site = &c4_o_emlrtRSI;
  c4_d_a = c4_a;
  c4_e_a = c4_d_a;
  c4_b_p = true;
  if (!(c4_e_a <= 65535.0)) {
    c4_b_p = false;
  }

  if (!c4_b_p) {
    c4_e_y = NULL;
    sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_b_cv5, 10, 0U, 1U, 0U, 2, 1, 29),
                  false);
    c4_g_y = NULL;
    sf_mex_assign(&c4_g_y, sf_mex_create("y", c4_b_cv6, 10, 0U, 1U, 0U, 2, 1, 40),
                  false);
    c4_h_y = NULL;
    sf_mex_assign(&c4_h_y, sf_mex_create("y", c4_b_cv7, 10, 0U, 1U, 0U, 2, 1, 27),
                  false);
    c4_i_y = NULL;
    sf_mex_assign(&c4_i_y, sf_mex_create("y", c4_b_cv8, 10, 0U, 1U, 0U, 2, 1, 2),
                  false);
    c4_j_y = NULL;
    sf_mex_assign(&c4_j_y, sf_mex_create("y", c4_b_cv9, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(&c4_f_st, &c4_b_emlrtMCI, "error", 0U, 2U, 14, c4_e_y, 14,
                sf_mex_call(&c4_f_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_f_st, NULL, "message", 1U, 4U, 14, c4_g_y, 14, c4_h_y, 14, c4_i_y, 14,
       c4_j_y)));
  }

  c4_f_st.site = &c4_o_emlrtRSI;
  c4_f_a = c4_a;
  c4_g_a = c4_f_a;
  c4_c_p = true;
  c4_x = c4_g_a;
  c4_d_p = !(c4_x < 0.0);
  if (!c4_d_p) {
    c4_c_p = false;
  }

  if (c4_c_p) {
    c4_b = true;
  } else {
    c4_b = false;
  }

  if (!c4_b) {
    c4_k_y = NULL;
    sf_mex_assign(&c4_k_y, sf_mex_create("y", c4_b_cv10, 10, 0U, 1U, 0U, 2, 1,
      36), false);
    c4_l_y = NULL;
    sf_mex_assign(&c4_l_y, sf_mex_create("y", c4_b_cv11, 10, 0U, 1U, 0U, 2, 1,
      51), false);
    c4_m_y = NULL;
    sf_mex_assign(&c4_m_y, sf_mex_create("y", c4_b_cv12, 10, 0U, 1U, 0U, 2, 1,
      27), false);
    sf_mex_call(&c4_f_st, &c4_c_emlrtMCI, "error", 0U, 2U, 14, c4_k_y, 14,
                sf_mex_call(&c4_f_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_f_st, NULL, "message", 1U, 2U, 14, c4_l_y, 14, c4_m_y)));
  }

  c4_f_st.site = &c4_o_emlrtRSI;
  c4_h_a = c4_a;
  c4_i_a = c4_h_a;
  c4_e_p = true;
  c4_b_x = c4_i_a;
  c4_c_x = c4_b_x;
  c4_b_b = muDoubleScalarIsInf(c4_c_x);
  c4_b1 = !c4_b_b;
  c4_d_x = c4_b_x;
  c4_c_b = muDoubleScalarIsNaN(c4_d_x);
  c4_b2 = !c4_c_b;
  c4_d_b = (c4_b1 && c4_b2);
  if (!c4_d_b) {
    c4_e_p = false;
  }

  if (c4_e_p) {
    c4_b3 = true;
  } else {
    c4_b3 = false;
  }

  if (!c4_b3) {
    c4_n_y = NULL;
    sf_mex_assign(&c4_n_y, sf_mex_create("y", c4_b_cv13, 10, 0U, 1U, 0U, 2, 1,
      31), false);
    c4_o_y = NULL;
    sf_mex_assign(&c4_o_y, sf_mex_create("y", c4_cv3, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c4_p_y = NULL;
    sf_mex_assign(&c4_p_y, sf_mex_create("y", c4_b_cv14, 10, 0U, 1U, 0U, 2, 1,
      27), false);
    sf_mex_call(&c4_f_st, &c4_d_emlrtMCI, "error", 0U, 2U, 14, c4_n_y, 14,
                sf_mex_call(&c4_f_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_f_st, NULL, "message", 1U, 2U, 14, c4_o_y, 14, c4_p_y)));
  }

  c4_e_st.site = &c4_n_emlrtRSI;
  c4_k_obj = c4_transportObj;
  c4_transportObj = c4_k_obj;
  c4_f_st.site = &c4_p_emlrtRSI;
  c4_c_this = c4_transportObj;
  c4_transportObj = c4_c_this;
  c4_e_st.site = &c4_n_emlrtRSI;
  c4_l_obj = c4_transportObj;
  c4_transportObj = c4_l_obj;
  c4_f_st.site = &c4_q_emlrtRSI;
  c4_d_this = c4_transportObj;
  c4_transportObj = c4_d_this;
  c4_e_st.site = &c4_n_emlrtRSI;
  c4_m_obj = c4_transportObj;
  c4_transportObj = c4_m_obj;
  c4_f_st.site = &c4_r_emlrtRSI;
  c4_e_this = c4_transportObj;
  c4_transportObj = c4_e_this;
  c4_e_st.site = &c4_n_emlrtRSI;
  c4_f_this = c4_transportObj;
  c4_transportObj = c4_f_this;
  for (c4_i11 = 0; c4_i11 < 11; c4_i11++) {
    c4_transportObj->RemoteHost[c4_i11] = c4_hostName[c4_i11];
  }

  c4_transportObj->RemotePort = c4_portNumber;
  c4_e_st.site = &c4_n_emlrtRSI;
  c4_TCPClient_initializeChannel(chartInstance, &c4_e_st, c4_transportObj,
    &c4_transportObj->_pobj0, &c4_transportObj->_pobj1);
  c4_e_st.site = &c4_n_emlrtRSI;
  c4_n_obj = c4_transportObj;
  c4_n_obj->IsWriteOnly = false;
  c4_n_obj->IsSharingPort = false;
  c4_e_st.site = &c4_n_emlrtRSI;
  c4_o_obj = c4_transportObj;
  c4_f_st.site = &c4_n_emlrtRSI;
  c4_p_obj = c4_o_obj->TransportChannel;
  c4_b_size[1] = 0;
  c4_i12 = c4_p_obj->ByteOrder->size[0] * c4_p_obj->ByteOrder->size[1];
  c4_p_obj->ByteOrder->size[0] = 1;
  c4_p_obj->ByteOrder->size[1] = c4_b_size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_f_st, c4_p_obj->ByteOrder,
    c4_i12, &c4_l_emlrtRTEI);
  c4_c_loop_ub = c4_b_size[1] - 1;
  for (c4_i13 = 0; c4_i13 <= c4_c_loop_ub; c4_i13++) {
    c4_p_obj->ByteOrder->data[c4_i13] = c4_b_data[c4_i13];
  }

  c4_i14 = c4_p_obj->ByteOrder->size[0] * c4_p_obj->ByteOrder->size[1];
  c4_p_obj->ByteOrder->size[0] = 1;
  c4_p_obj->ByteOrder->size[1] = 13;
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_f_st, c4_p_obj->ByteOrder,
    c4_i14, &c4_l_emlrtRTEI);
  for (c4_i15 = 0; c4_i15 < 13; c4_i15++) {
    c4_p_obj->ByteOrder->data[c4_i15] = c4_cv4[c4_i15];
  }

  c4_b_size[1] = 0;
  c4_i16 = c4_o_obj->ByteOrder->size[0] * c4_o_obj->ByteOrder->size[1];
  c4_o_obj->ByteOrder->size[0] = 1;
  c4_o_obj->ByteOrder->size[1] = c4_b_size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_e_st, c4_o_obj->ByteOrder,
    c4_i16, &c4_m_emlrtRTEI);
  c4_d_loop_ub = c4_b_size[1] - 1;
  for (c4_i17 = 0; c4_i17 <= c4_d_loop_ub; c4_i17++) {
    c4_o_obj->ByteOrder->data[c4_i17] = c4_b_data[c4_i17];
  }

  c4_emxInit_char_T(chartInstance, &c4_e_st, &c4_out, 2, &c4_m_emlrtRTEI);
  c4_f_st.site = &c4_n_emlrtRSI;
  c4_q_obj = c4_o_obj->TransportChannel;
  c4_i18 = c4_out->size[0] * c4_out->size[1];
  c4_out->size[0] = 1;
  c4_out->size[1] = c4_q_obj->ByteOrder->size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_f_st, c4_out, c4_i18,
    &c4_l_emlrtRTEI);
  c4_e_loop_ub = c4_q_obj->ByteOrder->size[1] - 1;
  for (c4_i19 = 0; c4_i19 <= c4_e_loop_ub; c4_i19++) {
    c4_out->data[c4_i19] = c4_q_obj->ByteOrder->data[c4_i19];
  }

  c4_i20 = c4_o_obj->ByteOrder->size[0] * c4_o_obj->ByteOrder->size[1];
  c4_o_obj->ByteOrder->size[0] = 1;
  c4_o_obj->ByteOrder->size[1] = c4_out->size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_e_st, c4_o_obj->ByteOrder,
    c4_i20, &c4_m_emlrtRTEI);
  c4_f_loop_ub = c4_out->size[1] - 1;
  for (c4_i21 = 0; c4_i21 <= c4_f_loop_ub; c4_i21++) {
    c4_o_obj->ByteOrder->data[c4_i21] = c4_out->data[c4_i21];
  }

  c4_emxFree_char_T(chartInstance, &c4_out);
  c4_e_st.site = &c4_n_emlrtRSI;
  c4_r_obj = c4_transportObj;
  c4_b_size[1] = 0;
  c4_i22 = c4_r_obj->NativeDataType->size[0] * c4_r_obj->NativeDataType->size[1];
  c4_r_obj->NativeDataType->size[0] = 1;
  c4_r_obj->NativeDataType->size[1] = c4_b_size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_e_st, c4_r_obj->NativeDataType,
    c4_i22, &c4_m_emlrtRTEI);
  c4_g_loop_ub = c4_b_size[1] - 1;
  for (c4_i23 = 0; c4_i23 <= c4_g_loop_ub; c4_i23++) {
    c4_r_obj->NativeDataType->data[c4_i23] = c4_b_data[c4_i23];
  }

  c4_i24 = c4_r_obj->NativeDataType->size[0] * c4_r_obj->NativeDataType->size[1];
  c4_r_obj->NativeDataType->size[0] = 1;
  c4_r_obj->NativeDataType->size[1] = 5;
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_e_st, c4_r_obj->NativeDataType,
    c4_i24, &c4_m_emlrtRTEI);
  for (c4_i25 = 0; c4_i25 < 5; c4_i25++) {
    c4_r_obj->NativeDataType->data[c4_i25] = c4_val[c4_i25];
  }

  c4_f_st.site = &c4_n_emlrtRSI;
  c4_s_obj = c4_r_obj->TransportChannel;
  c4_b_size[1] = 0;
  c4_i26 = c4_s_obj->NativeDataType->size[0] * c4_s_obj->NativeDataType->size[1];
  c4_s_obj->NativeDataType->size[0] = 1;
  c4_s_obj->NativeDataType->size[1] = c4_b_size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_f_st, c4_s_obj->NativeDataType,
    c4_i26, &c4_l_emlrtRTEI);
  c4_h_loop_ub = c4_b_size[1] - 1;
  for (c4_i27 = 0; c4_i27 <= c4_h_loop_ub; c4_i27++) {
    c4_s_obj->NativeDataType->data[c4_i27] = c4_b_data[c4_i27];
  }

  c4_i28 = c4_s_obj->NativeDataType->size[0] * c4_s_obj->NativeDataType->size[1];
  c4_s_obj->NativeDataType->size[0] = 1;
  c4_s_obj->NativeDataType->size[1] = 5;
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_f_st, c4_s_obj->NativeDataType,
    c4_i28, &c4_l_emlrtRTEI);
  for (c4_i29 = 0; c4_i29 < 5; c4_i29++) {
    c4_s_obj->NativeDataType->data[c4_i29] = c4_val[c4_i29];
  }

  c4_e_st.site = &c4_n_emlrtRSI;
  c4_t_obj = c4_transportObj;
  c4_b_size[1] = 0;
  c4_i30 = c4_t_obj->DataFieldName->size[0] * c4_t_obj->DataFieldName->size[1];
  c4_t_obj->DataFieldName->size[0] = 1;
  c4_t_obj->DataFieldName->size[1] = c4_b_size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_e_st, c4_t_obj->DataFieldName,
    c4_i30, &c4_m_emlrtRTEI);
  c4_i_loop_ub = c4_b_size[1] - 1;
  for (c4_i31 = 0; c4_i31 <= c4_i_loop_ub; c4_i31++) {
    c4_t_obj->DataFieldName->data[c4_i31] = c4_b_data[c4_i31];
  }

  c4_i32 = c4_t_obj->DataFieldName->size[0] * c4_t_obj->DataFieldName->size[1];
  c4_t_obj->DataFieldName->size[0] = 1;
  c4_t_obj->DataFieldName->size[1] = 4;
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_e_st, c4_t_obj->DataFieldName,
    c4_i32, &c4_m_emlrtRTEI);
  for (c4_i33 = 0; c4_i33 < 4; c4_i33++) {
    c4_t_obj->DataFieldName->data[c4_i33] = c4_b_val[c4_i33];
  }

  c4_f_st.site = &c4_n_emlrtRSI;
  c4_u_obj = c4_t_obj->TransportChannel;
  c4_b_size[1] = 0;
  c4_i34 = c4_u_obj->DataFieldName->size[0] * c4_u_obj->DataFieldName->size[1];
  c4_u_obj->DataFieldName->size[0] = 1;
  c4_u_obj->DataFieldName->size[1] = c4_b_size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_f_st, c4_u_obj->DataFieldName,
    c4_i34, &c4_l_emlrtRTEI);
  c4_j_loop_ub = c4_b_size[1] - 1;
  for (c4_i35 = 0; c4_i35 <= c4_j_loop_ub; c4_i35++) {
    c4_u_obj->DataFieldName->data[c4_i35] = c4_b_data[c4_i35];
  }

  c4_i36 = c4_u_obj->DataFieldName->size[0] * c4_u_obj->DataFieldName->size[1];
  c4_u_obj->DataFieldName->size[0] = 1;
  c4_u_obj->DataFieldName->size[1] = 4;
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_f_st, c4_u_obj->DataFieldName,
    c4_i36, &c4_l_emlrtRTEI);
  for (c4_i37 = 0; c4_i37 < 4; c4_i37++) {
    c4_u_obj->DataFieldName->data[c4_i37] = c4_b_val[c4_i37];
  }

  c4_transportObj->matlabCodegenIsDeleted = false;
  c4_i_obj->TcpIpObj = c4_transportObj;
  c4_b_st.site = &c4_c_emlrtRSI;
  c4_v_obj = c4_obj;
  c4_c_st.site = &c4_ic_emlrtRSI;
  c4_w_obj = c4_v_obj->TcpIpObj;
  c4_d_st.site = &c4_n_emlrtRSI;
  c4_x_obj = c4_w_obj->TransportChannel;
  c4_e_st.site = &c4_qb_emlrtRSI;
  c4_y_obj = c4_x_obj->AsyncIOChannel;
  c4_f_st.site = &c4_fc_emlrtRSI;
  c4_chImpl = c4_y_obj->ChannelImpl;
  c4_success = coderChannelIsOpen(c4_chImpl, &c4_b_out);
  c4_g_st.site = &c4_gc_emlrtRSI;
  c4_API_channelErrorIfFailed(chartInstance, &c4_g_st, c4_chImpl, c4_success);
  if (c4_b_out) {
    c4_value = true;
  } else {
    c4_value = false;
  }

  c4_b_value = c4_value;
  if ((!c4_b_value) && (!c4_v_obj->TransportInjected)) {
    c4_c_st.site = &c4_jc_emlrtRSI;
    c4_TCPClient_connect(chartInstance, &c4_c_st, c4_v_obj->TcpIpObj);
    c4_c_st.site = &c4_kc_emlrtRSI;
    c4_bb_obj = c4_v_obj->TcpIpObj;
    c4_db_obj = c4_bb_obj->TransportChannel;
    c4_db_obj->WriteAsync = false;
  }

  c4_b_st.site = &c4_d_emlrtRSI;
  c4_ab_obj = c4_obj;
  c4_c_st.site = &c4_nc_emlrtRSI;
  c4_cb_obj = c4_ab_obj;
  c4_d_st.site = &c4_rc_emlrtRSI;
  c4_eb_obj = &c4_cb_obj->Converter;
  c4_b_size[1] = 0;
  c4_i38 = c4_eb_obj->ByteOrder->size[0] * c4_eb_obj->ByteOrder->size[1];
  c4_eb_obj->ByteOrder->size[0] = 1;
  c4_eb_obj->ByteOrder->size[1] = c4_b_size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_d_st, c4_eb_obj->ByteOrder,
    c4_i38, &c4_h_emlrtRTEI);
  c4_k_loop_ub = c4_b_size[1] - 1;
  for (c4_i39 = 0; c4_i39 <= c4_k_loop_ub; c4_i39++) {
    c4_eb_obj->ByteOrder->data[c4_i39] = c4_b_data[c4_i39];
  }

  c4_i40 = c4_eb_obj->ByteOrder->size[0] * c4_eb_obj->ByteOrder->size[1];
  c4_eb_obj->ByteOrder->size[0] = 1;
  c4_eb_obj->ByteOrder->size[1] = 10;
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_d_st, c4_eb_obj->ByteOrder,
    c4_i40, &c4_i_emlrtRTEI);
  for (c4_i41 = 0; c4_i41 < 10; c4_i41++) {
    c4_eb_obj->ByteOrder->data[c4_i41] = c4_cv[c4_i41];
  }

  c4_c_st.site = &c4_oc_emlrtRSI;
  c4_fb_obj = c4_ab_obj;
  c4_d_st.site = &c4_sc_emlrtRSI;
  c4_gb_obj = &c4_fb_obj->Converter;
  c4_b_size[1] = 0;
  c4_i42 = c4_gb_obj->WordOrder->size[0] * c4_gb_obj->WordOrder->size[1];
  c4_gb_obj->WordOrder->size[0] = 1;
  c4_gb_obj->WordOrder->size[1] = c4_b_size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_d_st, c4_gb_obj->WordOrder,
    c4_i42, &c4_j_emlrtRTEI);
  c4_l_loop_ub = c4_b_size[1] - 1;
  for (c4_i43 = 0; c4_i43 <= c4_l_loop_ub; c4_i43++) {
    c4_gb_obj->WordOrder->data[c4_i43] = c4_b_data[c4_i43];
  }

  c4_i44 = c4_gb_obj->WordOrder->size[0] * c4_gb_obj->WordOrder->size[1];
  c4_gb_obj->WordOrder->size[0] = 1;
  c4_gb_obj->WordOrder->size[1] = 10;
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_d_st, c4_gb_obj->WordOrder,
    c4_i44, &c4_k_emlrtRTEI);
  for (c4_i45 = 0; c4_i45 < 10; c4_i45++) {
    c4_gb_obj->WordOrder->data[c4_i45] = c4_cv[c4_i45];
  }

  c4_c_st.site = &c4_pc_emlrtRSI;
  c4_hb_obj = c4_ab_obj;
  c4_hb_obj->NumRetries = 1.0;
  c4_c_st.site = &c4_qc_emlrtRSI;
  c4_ib_obj = c4_ab_obj;
  c4_d_st.site = &c4_tc_emlrtRSI;
  c4_jb_obj = c4_ib_obj;
  c4_b_transportObj = c4_ib_obj->TcpIpObj;
  if (!c4_jb_obj->TransportInjected) {
    c4_e_st.site = &c4_uc_emlrtRSI;
    c4_kb_obj = c4_b_transportObj;
    c4_f_st.site = &c4_n_emlrtRSI;
    c4_lb_obj = c4_kb_obj;
    c4_outputStream = &c4_lb_obj->AsyncIOChannel->OutputStream;
    c4_nb_obj = c4_outputStream;
    c4_nb_obj->Timeout = 10.0;
    c4_inputStream = &c4_lb_obj->AsyncIOChannel->InputStream;
    c4_qb_obj = c4_inputStream;
    c4_qb_obj->Timeout = 10.0;
    c4_kb_obj->Timeout = 10.0;
  }

  c4_jb_obj->TransactionTimeout = 10.0;
  c4_jb_obj->RetryCount = 0.0;
  c4_b_st.site = &c4_e_emlrtRSI;
  c4_mb_obj = &c4_obj->PacketBuilder;
  c4_converter = &c4_obj->Converter;
  c4_ob_obj = c4_mb_obj;
  c4_c_st.site = &c4_vc_emlrtRSI;
  c4_pb_obj = c4_ob_obj;
  c4_b_converter = c4_converter;
  c4_ob_obj = c4_pb_obj;
  c4_d_st.site = &c4_wc_emlrtRSI;
  c4_g_this = c4_ob_obj;
  c4_ob_obj = c4_g_this;
  c4_ob_obj->Converter = c4_b_converter;
  c4_ob_obj->TransactionId = 1.0;
  c4_obj->matlabCodegenIsDeleted = false;
  return c4_obj;
}

static void c4_TCPClient_initializeChannel(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_matlabshared_network_internal_TCPClient *c4_obj,
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_iobj_0,
  c4_matlabshared_asyncio_internal_Channel *c4_iobj_1)
{
  static c4_syRUN6P8dnDtW4zHaczOEwG c4_r = { true,/* InitAccess */
    true,                              /* TransferDelay */
    0ULL                               /* LatestNumBytesWrittenToDevice */
  };

  static real_T c4_streamLimits[2] = { 0.0, 0.0 };

  static int32_T c4_iv[2] = { 1, 2 };

  static char_T c4_b_cv12[44] = { 't', 'e', 's', 't', 'm', 'e', 'a', 's', 'l',
    'i', 'b', ':', 'A', 's', 'y', 'n', 'c', 'i', 'o', 'B', 'u', 'f', 'f', 'e',
    'r', ':', 'W', 'r', 'o', 'n', 'g', 'M', 'A', 'T', 'L', 'A', 'B', 'V', 'e',
    'r', 's', 'i', 'o', 'n' };

  static char_T c4_b_cv14[44] = { 't', 'o', 'o', 'l', 'b', 'o', 'x', '\\', 's',
    'h', 'a', 'r', 'e', 'd', '\\', 't', 'e', 's', 't', 'm', 'e', 'a', 's', 'l',
    'i', 'b', '\\', 'g', 'e', 'n', 'e', 'r', 'a', 'l', '\\', 'b', 'i', 'n', '\\',
    'w', 'i', 'n', '6', '4' };

  static char_T c4_b_cv16[42] = { 't', 'e', 's', 't', 'm', 'e', 'a', 's', 'l',
    'i', 'b', ':', 'A', 's', 'y', 'n', 'c', 'i', 'o', 'B', 'u', 'f', 'f', 'e',
    'r', ':', 'C', 'a', 'n', 'n', 'o', 't', 'F', 'i', 'n', 'd', 'P', 'l', 'u',
    'g', 'i', 'n' };

  static char_T c4_b_cv3[36] = { 'n', 'e', 't', 'w', 'o', 'r', 'k', ':', 't',
    'c', 'p', 'c', 'l', 'i', 'e', 'n', 't', ':', 'W', 'r', 'o', 'n', 'g', 'M',
    'A', 'T', 'L', 'A', 'B', 'V', 'e', 'r', 's', 'i', 'o', 'n' };

  static char_T c4_b_cv5[35] = { 't', 'o', 'o', 'l', 'b', 'o', 'x', '\\', 's',
    'h', 'a', 'r', 'e', 'd', '\\', 'n', 'e', 't', 'w', 'o', 'r', 'k', 'l', 'i',
    'b', '\\', 'b', 'i', 'n', '\\', 'w', 'i', 'n', '6', '4' };

  static char_T c4_b_cv8[35] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'C',
    'h', 'a', 'n', 'n', 'e', 'l', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'S',
    't', 'r', 'e', 'a', 'm', 'L', 'i', 'm', 'i', 't', 's' };

  static char_T c4_b_cv7[34] = { 'n', 'e', 't', 'w', 'o', 'r', 'k', ':', 't',
    'c', 'p', 'c', 'l', 'i', 'e', 'n', 't', ':', 'C', 'a', 'n', 'n', 'o', 't',
    'F', 'i', 'n', 'd', 'P', 'l', 'u', 'g', 'i', 'n' };

  static char_T c4_converterFullName[25] = { 'n', 'e', 't', 'w', 'o', 'r', 'k',
    'c', 'o', 'd', 'e', 'r', 'c', 'o', 'n', 'v', 'e', 'r', 't', 'e', 'r', '.',
    'd', 'l', 'l' };

  static char_T c4_b_converterFullName[24] = { 'b', 'u', 'f', 'f', 'e', 'r', 'c',
    'o', 'd', 'e', 'r', 'c', 'o', 'n', 'v', 'e', 'r', 't', 'e', 'r', '.', 'd',
    'l', 'l' };

  static char_T c4_deviceFullName[19] = { 't', 'c', 'p', 'c', 'l', 'i', 'e', 'n',
    't', 'd', 'e', 'v', 'i', 'c', 'e', '.', 'd', 'l', 'l' };

  static char_T c4_b_deviceFullName[10] = { 'b', 'u', 'f', 'f', 'e', 'r', '.',
    'd', 'l', 'l' };

  static char_T c4_b_cv11[8] = { '(', 'R', '2', '0', '2', '3', 'a', ')' };

  static char_T c4_b_cv2[8] = { '(', 'R', '2', '0', '2', '3', 'a', ')' };

  static char_T c4_b_cv1[7] = { 'R', 'e', 'l', 'e', 'a', 's', 'e' };

  static char_T c4_b_cv10[7] = { 'R', 'e', 'l', 'e', 'a', 's', 'e' };

  static char_T c4_b_cv[6] = { 'm', 'a', 't', 'l', 'a', 'b' };

  static char_T c4_b_cv9[6] = { 'm', 'a', 't', 'l', 'a', 'b' };

  static char_T c4_b_cv13[5] = { 'w', 'i', 'n', '6', '4' };

  static char_T c4_b_cv4[5] = { 'w', 'i', 'n', '6', '4' };

  static char_T c4_b_val[5] = { 'u', 'i', 'n', 't', '8' };

  static char_T c4_b_cv15[4] = { 'f', 'i', 'l', 'e' };

  static char_T c4_b_cv6[4] = { 'f', 'i', 'l', 'e' };

  static char_T c4_val[4] = { 'D', 'a', 't', 'a' };

  CoderChannel c4_b_chImpl;
  CoderChannel c4_c_chImpl;
  CoderChannel c4_chImpl;
  CoderChannel c4_d_chImpl;
  CoderChannel c4_e_chImpl;
  CoderChannel c4_f_chImpl;
  c4_cell_11 c4_args;
  c4_emxArray_char_T *c4_b_value;
  c4_matlabshared_asyncio_buffer_internal_BufferChannel *c4_d_this;
  c4_matlabshared_asyncio_buffer_internal_BufferChannel *c4_e_this;
  c4_matlabshared_asyncio_buffer_internal_BufferChannel *c4_j_obj;
  c4_matlabshared_asyncio_buffer_internal_BufferChannel *c4_k_obj;
  c4_matlabshared_asyncio_buffer_internal_BufferChannel *c4_l_obj;
  c4_matlabshared_asyncio_buffer_internal_BufferChannel *c4_m_obj;
  c4_matlabshared_asyncio_buffer_internal_BufferChannel *c4_n_obj;
  c4_matlabshared_asyncio_buffer_internal_BufferChannel *c4_o_obj;
  c4_matlabshared_asyncio_buffer_internal_BufferChannel *c4_p_obj;
  c4_matlabshared_asyncio_buffer_internal_BufferChannel *c4_q_obj;
  c4_matlabshared_asyncio_internal_Channel *c4_b_obj;
  c4_matlabshared_asyncio_internal_Channel *c4_c_obj;
  c4_matlabshared_asyncio_internal_Channel *c4_channel;
  c4_matlabshared_asyncio_internal_Channel *c4_this;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_b_this;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_c_this;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_d_obj;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_e_obj;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_f_obj;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_g_obj;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_h_obj;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_i_obj;
  c4_s_puOqsSoDdBk28aK0dkajGG c4_options;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_e_st;
  emlrtStack c4_st;
  const mxArray *c4_ab_y = NULL;
  const mxArray *c4_b_thisMLVersion = NULL;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_bb_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_cb_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_db_y = NULL;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_eb_y = NULL;
  const mxArray *c4_f_y = NULL;
  const mxArray *c4_fb_y = NULL;
  const mxArray *c4_g_y = NULL;
  const mxArray *c4_gb_y = NULL;
  const mxArray *c4_h_y = NULL;
  const mxArray *c4_hb_y = NULL;
  const mxArray *c4_i_y = NULL;
  const mxArray *c4_ib_y = NULL;
  const mxArray *c4_j_y = NULL;
  const mxArray *c4_k_y = NULL;
  const mxArray *c4_n_y = NULL;
  const mxArray *c4_o_y = NULL;
  const mxArray *c4_p_y = NULL;
  const mxArray *c4_q_y = NULL;
  const mxArray *c4_r_y = NULL;
  const mxArray *c4_s_y = NULL;
  const mxArray *c4_t_y = NULL;
  const mxArray *c4_thisMLVersion = NULL;
  const mxArray *c4_u_y = NULL;
  const mxArray *c4_v_y = NULL;
  const mxArray *c4_w_y = NULL;
  const mxArray *c4_x_y = NULL;
  const mxArray *c4_y = NULL;
  const mxArray *c4_y_y = NULL;
  real_T c4_b_streamLimits[2];
  real_T c4_d;
  int32_T c4_b_converterFullPathML_size[2];
  int32_T c4_b_converterPluginPath_size[2];
  int32_T c4_converterFullPathML_size[2];
  int32_T c4_converterPath_size[2];
  int32_T c4_converterPluginPath_size[2];
  int32_T c4_converterPlugin_size[2];
  int32_T c4_deviceFullPathML_size[2];
  int32_T c4_devicePath_size[2];
  int32_T c4_devicePluginPath_size[2];
  int32_T c4_devicePlugin_size[2];
  int32_T c4_out_size[2];
  int32_T c4_thisMatlabRoot_size[2];
  int32_T c4_ab_loop_ub;
  int32_T c4_b_loop_ub;
  int32_T c4_b_success;
  int32_T c4_bb_loop_ub;
  int32_T c4_c_loop_ub;
  int32_T c4_c_success;
  int32_T c4_cb_loop_ub;
  int32_T c4_d_loop_ub;
  int32_T c4_d_success;
  int32_T c4_db_loop_ub;
  int32_T c4_e_loop_ub;
  int32_T c4_eb_loop_ub;
  int32_T c4_f_loop_ub;
  int32_T c4_fb_loop_ub;
  int32_T c4_g_loop_ub;
  int32_T c4_h_loop_ub;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i15;
  int32_T c4_i16;
  int32_T c4_i17;
  int32_T c4_i18;
  int32_T c4_i19;
  int32_T c4_i2;
  int32_T c4_i20;
  int32_T c4_i21;
  int32_T c4_i22;
  int32_T c4_i23;
  int32_T c4_i24;
  int32_T c4_i25;
  int32_T c4_i26;
  int32_T c4_i27;
  int32_T c4_i28;
  int32_T c4_i29;
  int32_T c4_i3;
  int32_T c4_i30;
  int32_T c4_i31;
  int32_T c4_i32;
  int32_T c4_i33;
  int32_T c4_i34;
  int32_T c4_i35;
  int32_T c4_i36;
  int32_T c4_i37;
  int32_T c4_i38;
  int32_T c4_i39;
  int32_T c4_i4;
  int32_T c4_i40;
  int32_T c4_i41;
  int32_T c4_i42;
  int32_T c4_i43;
  int32_T c4_i44;
  int32_T c4_i45;
  int32_T c4_i46;
  int32_T c4_i47;
  int32_T c4_i48;
  int32_T c4_i49;
  int32_T c4_i5;
  int32_T c4_i50;
  int32_T c4_i51;
  int32_T c4_i52;
  int32_T c4_i53;
  int32_T c4_i54;
  int32_T c4_i55;
  int32_T c4_i56;
  int32_T c4_i57;
  int32_T c4_i58;
  int32_T c4_i59;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_i_loop_ub;
  int32_T c4_j_loop_ub;
  int32_T c4_k_loop_ub;
  int32_T c4_l_loop_ub;
  int32_T c4_loop_ub;
  int32_T c4_m_loop_ub;
  int32_T c4_n_loop_ub;
  int32_T c4_o_loop_ub;
  int32_T c4_p_loop_ub;
  int32_T c4_q_loop_ub;
  int32_T c4_r_loop_ub;
  int32_T c4_s_loop_ub;
  int32_T c4_success;
  int32_T c4_t_loop_ub;
  int32_T c4_u_loop_ub;
  int32_T c4_v_loop_ub;
  int32_T c4_w_loop_ub;
  int32_T c4_x_loop_ub;
  int32_T c4_y_loop_ub;
  uint32_T c4_u;
  char_T c4_errorID[1024];
  char_T c4_errorText[1024];
  char_T c4_b_converterPluginPath_data[583];
  char_T c4_out_data[583];
  char_T c4_b_converterFullPathML_data[582];
  char_T c4_converterPath_data[582];
  char_T c4_converterPluginPath_data[575];
  char_T c4_converterFullPathML_data[574];
  char_T c4_converterPlugin_data[574];
  char_T c4_devicePluginPath_data[569];
  char_T c4_deviceFullPathML_data[568];
  char_T c4_devicePath_data[568];
  char_T c4_devicePlugin_data[568];
  char_T c4_thisMatlabRoot_data[512];
  char_T c4_value[11];
  boolean_T c4_b[2];
  boolean_T c4_b_b;
  boolean_T c4_invalidStreamLimits;
  boolean_T c4_l_y;
  boolean_T c4_m_y;
  boolean_T c4_result;
  c4_streamLimits[0U] = rtInf;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_e_st.prev = &c4_d_st;
  c4_e_st.tls = c4_d_st.tls;
  c4_emxInitStruct_s_puOqsSoDdBk28aK(chartInstance, c4_sp, &c4_options,
    &c4_m_emlrtRTEI);
  for (c4_i = 0; c4_i < 11; c4_i++) {
    c4_options.HostName[c4_i] = c4_obj->RemoteHost[c4_i];
  }

  c4_st.site = &c4_n_emlrtRSI;
  c4_d = muDoubleScalarRound(c4_obj->RemotePort);
  if (c4_d < 4.294967296E+9) {
    if (c4_d >= 0.0) {
      c4_u = (uint32_T)c4_d;
    } else {
      c4_u = 0U;
    }
  } else if (c4_d >= 4.294967296E+9) {
    c4_u = MAX_uint32_T;
  } else {
    c4_u = 0U;
  }

  c4_sprintf(chartInstance, &c4_st, c4_u, c4_options.ServiceName);
  c4_st.site = &c4_n_emlrtRSI;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 6),
                false);
  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c4_b_st.site = &c4_n_emlrtRSI;
  sf_mex_assign(&c4_thisMLVersion, c4_getfield(chartInstance, &c4_b_st, c4_ver
    (chartInstance, &c4_b_st, c4_y), c4_b_y), false);
  c4_b_st.site = &c4_n_emlrtRSI;
  c4_e_emlrt_marshallIn(chartInstance, c4_matlabroot(chartInstance, &c4_b_st),
                        "<output of matlabroot>", c4_thisMatlabRoot_data,
                        c4_thisMatlabRoot_size);
  c4_c_y = NULL;
  sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_b_cv2, 10, 0U, 1U, 0U, 2, 1, 8),
                false);
  c4_b_st.site = &c4_n_emlrtRSI;
  if (c4_g_emlrt_marshallIn(chartInstance,
       c4_coder_internal_ifWhileCondExtrinsic(chartInstance, &c4_b_st,
        c4_j_strcmp(chartInstance, &c4_b_st, sf_mex_dup(c4_thisMLVersion),
                    c4_c_y)), "<output of coder.internal.ifWhileCondExtrinsic>"))
  {
    c4_deviceFullPathML_size[1] = c4_thisMatlabRoot_size[1] + 56;
    c4_loop_ub = c4_thisMatlabRoot_size[1] - 1;
    for (c4_i1 = 0; c4_i1 <= c4_loop_ub; c4_i1++) {
      c4_deviceFullPathML_data[c4_i1] = c4_thisMatlabRoot_data[c4_i1];
    }

    c4_deviceFullPathML_data[c4_thisMatlabRoot_size[1]] = '\\';
    for (c4_i2 = 0; c4_i2 < 35; c4_i2++) {
      c4_deviceFullPathML_data[(c4_i2 + c4_thisMatlabRoot_size[1]) + 1] =
        c4_b_cv5[c4_i2];
    }

    c4_deviceFullPathML_data[c4_thisMatlabRoot_size[1] + 36] = '\\';
    for (c4_i3 = 0; c4_i3 < 19; c4_i3++) {
      c4_deviceFullPathML_data[(c4_i3 + c4_thisMatlabRoot_size[1]) + 37] =
        c4_deviceFullName[c4_i3];
    }

    c4_h_y = NULL;
    sf_mex_assign(&c4_h_y, sf_mex_create("y", &c4_deviceFullPathML_data, 10, 0U,
      1U, 0U, 2, 1, c4_deviceFullPathML_size[1]), false);
    c4_i_y = NULL;
    sf_mex_assign(&c4_i_y, sf_mex_create("y", c4_b_cv6, 10, 0U, 1U, 0U, 2, 1, 4),
                  false);
    c4_b_st.site = &c4_n_emlrtRSI;
    if (c4_g_emlrt_marshallIn(chartInstance,
         c4_b_coder_internal_ifWhileCondExtrinsic(chartInstance, &c4_b_st,
          c4_exist(chartInstance, &c4_b_st, c4_h_y, c4_i_y)),
         "<output of coder.internal.ifWhileCondExtrinsic>")) {
      c4_devicePlugin_size[1] = c4_deviceFullPathML_size[1];
      c4_b_loop_ub = c4_deviceFullPathML_size[1] - 1;
      for (c4_i4 = 0; c4_i4 <= c4_b_loop_ub; c4_i4++) {
        c4_devicePlugin_data[c4_i4] = c4_deviceFullPathML_data[c4_i4];
      }
    } else {
      c4_j_y = NULL;
      sf_mex_assign(&c4_j_y, sf_mex_create("y", c4_b_cv7, 10, 0U, 1U, 0U, 2, 1,
        34), false);
      c4_k_y = NULL;
      sf_mex_assign(&c4_k_y, sf_mex_create("y", c4_b_cv7, 10, 0U, 1U, 0U, 2, 1,
        34), false);
      sf_mex_call(&c4_st, &c4_e_emlrtMCI, "error", 0U, 2U, 14, c4_j_y, 14,
                  sf_mex_call(&c4_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (&c4_st, NULL, "message", 1U, 1U, 14, c4_k_y)));
    }

    c4_converterFullPathML_size[1] = c4_thisMatlabRoot_size[1] + 62;
    c4_c_loop_ub = c4_thisMatlabRoot_size[1] - 1;
    for (c4_i6 = 0; c4_i6 <= c4_c_loop_ub; c4_i6++) {
      c4_converterFullPathML_data[c4_i6] = c4_thisMatlabRoot_data[c4_i6];
    }

    c4_converterFullPathML_data[c4_thisMatlabRoot_size[1]] = '\\';
    for (c4_i8 = 0; c4_i8 < 35; c4_i8++) {
      c4_converterFullPathML_data[(c4_i8 + c4_thisMatlabRoot_size[1]) + 1] =
        c4_b_cv5[c4_i8];
    }

    c4_converterFullPathML_data[c4_thisMatlabRoot_size[1] + 36] = '\\';
    for (c4_i9 = 0; c4_i9 < 25; c4_i9++) {
      c4_converterFullPathML_data[(c4_i9 + c4_thisMatlabRoot_size[1]) + 37] =
        c4_converterFullName[c4_i9];
    }

    c4_p_y = NULL;
    sf_mex_assign(&c4_p_y, sf_mex_create("y", &c4_converterFullPathML_data, 10,
      0U, 1U, 0U, 2, 1, c4_converterFullPathML_size[1]), false);
    c4_q_y = NULL;
    sf_mex_assign(&c4_q_y, sf_mex_create("y", c4_b_cv6, 10, 0U, 1U, 0U, 2, 1, 4),
                  false);
    c4_b_st.site = &c4_n_emlrtRSI;
    if (c4_g_emlrt_marshallIn(chartInstance,
         c4_c_coder_internal_ifWhileCondExtrinsic(chartInstance, &c4_b_st,
          c4_b_exist(chartInstance, &c4_b_st, c4_p_y, c4_q_y)),
         "<output of coder.internal.ifWhileCondExtrinsic>")) {
      c4_converterPlugin_size[1] = c4_converterFullPathML_size[1];
      c4_f_loop_ub = c4_converterFullPathML_size[1] - 1;
      for (c4_i12 = 0; c4_i12 <= c4_f_loop_ub; c4_i12++) {
        c4_converterPlugin_data[c4_i12] = c4_converterFullPathML_data[c4_i12];
      }
    } else {
      c4_r_y = NULL;
      sf_mex_assign(&c4_r_y, sf_mex_create("y", c4_b_cv7, 10, 0U, 1U, 0U, 2, 1,
        34), false);
      c4_s_y = NULL;
      sf_mex_assign(&c4_s_y, sf_mex_create("y", c4_b_cv7, 10, 0U, 1U, 0U, 2, 1,
        34), false);
      sf_mex_call(&c4_st, &c4_e_emlrtMCI, "error", 0U, 2U, 14, c4_r_y, 14,
                  sf_mex_call(&c4_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (&c4_st, NULL, "message", 1U, 1U, 14, c4_s_y)));
    }
  } else {
    c4_d_y = NULL;
    sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_b_cv3, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    c4_e_y = NULL;
    sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_b_cv3, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    c4_f_y = NULL;
    sf_mex_assign(&c4_f_y, sf_mex_create("y", c4_b_cv2, 10, 0U, 1U, 0U, 2, 1, 8),
                  false);
    c4_g_y = NULL;
    sf_mex_assign(&c4_g_y, sf_mex_create("y", c4_b_cv4, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(&c4_st, &c4_e_emlrtMCI, "error", 0U, 2U, 14, c4_d_y, 14,
                sf_mex_call(&c4_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_st, NULL, "message", 1U, 3U, 14, c4_e_y, 14, c4_f_y, 14, c4_g_y)));
  }

  sf_mex_destroy(&c4_thisMLVersion);
  c4_st.site = &c4_n_emlrtRSI;
  c4_b_obj = c4_iobj_1;
  c4_b_streamLimits[0] = c4_obj->InputBufferSize;
  c4_b_streamLimits[1] = c4_obj->OutputBufferSize;
  c4_c_obj = c4_b_obj;
  c4_b_st.site = &c4_v_emlrtRSI;
  c4_this = c4_c_obj;
  c4_c_obj = c4_this;
  c4_c_obj->CustomProps = c4_r;
  for (c4_i5 = 0; c4_i5 < 2; c4_i5++) {
    c4_b[c4_i5] = muDoubleScalarIsNaN(c4_b_streamLimits[c4_i5]);
  }

  c4_l_y = c4_vectorAny(chartInstance, c4_b, c4_iv);
  if (c4_l_y) {
    c4_invalidStreamLimits = true;
  } else {
    for (c4_i7 = 0; c4_i7 < 2; c4_i7++) {
      c4_b[c4_i7] = (c4_b_streamLimits[c4_i7] < 0.0);
    }

    c4_m_y = c4_vectorAny(chartInstance, c4_b, c4_iv);
    if (c4_m_y) {
      c4_invalidStreamLimits = true;
    } else {
      c4_invalidStreamLimits = false;
    }
  }

  if (c4_invalidStreamLimits) {
    c4_n_y = NULL;
    sf_mex_assign(&c4_n_y, sf_mex_create("y", c4_b_cv8, 10, 0U, 1U, 0U, 2, 1, 35),
                  false);
    c4_o_y = NULL;
    sf_mex_assign(&c4_o_y, sf_mex_create("y", c4_b_cv8, 10, 0U, 1U, 0U, 2, 1, 35),
                  false);
    sf_mex_call(&c4_st, &c4_f_emlrtMCI, "error", 0U, 2U, 14, c4_n_y, 14,
                sf_mex_call(&c4_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_st, NULL, "message", 1U, 1U, 14, c4_o_y)));
  }

  c4_c_obj->ChannelImpl = 0;
  c4_b_st.site = &c4_w_emlrtRSI;
  c4_devicePluginPath_size[1] = c4_devicePlugin_size[1];
  c4_d_loop_ub = c4_devicePlugin_size[1] - 1;
  for (c4_i10 = 0; c4_i10 <= c4_d_loop_ub; c4_i10++) {
    c4_devicePluginPath_data[c4_i10] = c4_devicePlugin_data[c4_i10];
  }

  c4_converterPluginPath_size[1] = c4_converterPlugin_size[1];
  c4_e_loop_ub = c4_converterPlugin_size[1] - 1;
  for (c4_i11 = 0; c4_i11 <= c4_e_loop_ub; c4_i11++) {
    c4_converterPluginPath_data[c4_i11] = c4_converterPlugin_data[c4_i11];
  }

  c4_b_converterFullPathML_size[1] = c4_devicePluginPath_size[1];
  c4_g_loop_ub = c4_devicePluginPath_size[1] - 1;
  for (c4_i13 = 0; c4_i13 <= c4_g_loop_ub; c4_i13++) {
    c4_b_converterFullPathML_data[c4_i13] = c4_devicePluginPath_data[c4_i13];
  }

  c4_out_size[1] = c4_b_converterFullPathML_size[1] + 1;
  c4_h_loop_ub = c4_b_converterFullPathML_size[1] - 1;
  for (c4_i14 = 0; c4_i14 <= c4_h_loop_ub; c4_i14++) {
    c4_out_data[c4_i14] = c4_b_converterFullPathML_data[c4_i14];
  }

  c4_out_data[c4_b_converterFullPathML_size[1]] = '\x00';
  c4_i_loop_ub = c4_out_size[1] - 1;
  for (c4_i15 = 0; c4_i15 <= c4_i_loop_ub; c4_i15++) {
    c4_devicePluginPath_data[c4_i15] = c4_out_data[c4_i15];
  }

  c4_b_converterFullPathML_size[1] = c4_converterPluginPath_size[1];
  c4_j_loop_ub = c4_converterPluginPath_size[1] - 1;
  for (c4_i16 = 0; c4_i16 <= c4_j_loop_ub; c4_i16++) {
    c4_b_converterFullPathML_data[c4_i16] = c4_converterPluginPath_data[c4_i16];
  }

  c4_out_size[1] = c4_b_converterFullPathML_size[1] + 1;
  c4_k_loop_ub = c4_b_converterFullPathML_size[1] - 1;
  for (c4_i17 = 0; c4_i17 <= c4_k_loop_ub; c4_i17++) {
    c4_out_data[c4_i17] = c4_b_converterFullPathML_data[c4_i17];
  }

  c4_out_data[c4_b_converterFullPathML_size[1]] = '\x00';
  c4_l_loop_ub = c4_out_size[1] - 1;
  for (c4_i18 = 0; c4_i18 <= c4_l_loop_ub; c4_i18++) {
    c4_converterPluginPath_data[c4_i18] = c4_out_data[c4_i18];
  }

  c4_chImpl = coderChannelCreate(&c4_devicePluginPath_data[0],
    &c4_converterPluginPath_data[0], c4_b_streamLimits[0], c4_b_streamLimits[1],
    &c4_errorID[0], &c4_errorText[0]);
  if (c4_chImpl == 0) {
    c4_c_st.site = &c4_bb_emlrtRSI;
    c4_API_dispatchInternalError(chartInstance, &c4_c_st, c4_errorID,
      c4_errorText);
  }

  c4_c_obj->ChannelImpl = c4_chImpl;
  c4_b_st.site = &c4_x_emlrtRSI;
  c4_b_chImpl = c4_c_obj->ChannelImpl;
  c4_emxInitStruct_cell_11(chartInstance, &c4_b_st, &c4_args, &c4_m_emlrtRTEI);
  c4_args.f1 = "HostName";
  c4_args.f2 = "char";
  for (c4_i19 = 0; c4_i19 < 11; c4_i19++) {
    c4_value[c4_i19] = c4_options.HostName[c4_i19];
  }

  for (c4_i20 = 0; c4_i20 < 11; c4_i20++) {
    c4_args.f4[c4_i20] = c4_value[c4_i20];
  }

  c4_args.f5 = "ServiceName";
  c4_args.f6 = "char";
  c4_args.f7 = c4_options.ServiceName->size[1];
  c4_b_b = (c4_options.ServiceName->size[1] == 1);
  c4_emxInit_char_T(chartInstance, &c4_b_st, &c4_b_value, 2, &c4_v_emlrtRTEI);
  if (c4_b_b) {
    c4_i22 = c4_b_value->size[0] * c4_b_value->size[1];
    c4_b_value->size[0] = 1;
    c4_b_value->size[1] = c4_options.ServiceName->size[1] +
      c4_options.ServiceName->size[1];
    c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_b_value, c4_i22,
      &c4_v_emlrtRTEI);
    c4_n_loop_ub = c4_options.ServiceName->size[1] - 1;
    for (c4_i24 = 0; c4_i24 <= c4_n_loop_ub; c4_i24++) {
      c4_b_value->data[c4_i24] = c4_options.ServiceName->data[c4_i24];
    }

    c4_o_loop_ub = c4_options.ServiceName->size[1] - 1;
    for (c4_i25 = 0; c4_i25 <= c4_o_loop_ub; c4_i25++) {
      c4_b_value->data[c4_i25 + c4_options.ServiceName->size[1]] =
        c4_options.ServiceName->data[c4_i25];
    }
  } else {
    c4_i21 = c4_b_value->size[0] * c4_b_value->size[1];
    c4_b_value->size[0] = 1;
    c4_b_value->size[1] = c4_options.ServiceName->size[1];
    c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_b_value, c4_i21,
      &c4_u_emlrtRTEI);
    c4_m_loop_ub = c4_options.ServiceName->size[1] - 1;
    for (c4_i23 = 0; c4_i23 <= c4_m_loop_ub; c4_i23++) {
      c4_b_value->data[c4_i23] = c4_options.ServiceName->data[c4_i23];
    }
  }

  c4_emxFreeStruct_s_puOqsSoDdBk28aK(chartInstance, &c4_options);
  c4_i26 = c4_args.f8->size[0] * c4_args.f8->size[1];
  c4_args.f8->size[0] = 1;
  c4_args.f8->size[1] = c4_b_value->size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_args.f8, c4_i26,
    &c4_w_emlrtRTEI);
  c4_p_loop_ub = c4_b_value->size[1] - 1;
  for (c4_i27 = 0; c4_i27 <= c4_p_loop_ub; c4_i27++) {
    c4_args.f8->data[c4_i27] = c4_b_value->data[c4_i27];
  }

  for (c4_i28 = 0; c4_i28 < 11; c4_i28++) {
    c4_value[c4_i28] = c4_args.f4[c4_i28];
  }

  c4_i29 = c4_b_value->size[0] * c4_b_value->size[1];
  c4_b_value->size[0] = 1;
  c4_b_value->size[1] = c4_args.f8->size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_b_value, c4_i29,
    &c4_x_emlrtRTEI);
  c4_q_loop_ub = c4_args.f8->size[1] - 1;
  for (c4_i30 = 0; c4_i30 <= c4_q_loop_ub; c4_i30++) {
    c4_b_value->data[c4_i30] = c4_args.f8->data[c4_i30];
  }

  c4_success = coderChannelInit(c4_b_chImpl, 2, c4_args.f1, c4_args.f2, 11,
    &c4_value[0], c4_args.f5, c4_args.f6, c4_args.f7, &c4_b_value->data[0]);
  c4_emxFree_char_T(chartInstance, &c4_b_value);
  c4_emxFreeStruct_cell_11(chartInstance, &c4_args);
  c4_c_st.site = &c4_db_emlrtRSI;
  c4_API_channelErrorIfFailed(chartInstance, &c4_c_st, c4_b_chImpl, c4_success);
  c4_b_st.site = &c4_y_emlrtRSI;
  c4_InputStream_InputStream(chartInstance, &c4_b_st, &c4_c_obj->InputStream,
    c4_c_obj->ChannelImpl);
  c4_b_st.site = &c4_ab_emlrtRSI;
  c4_OutputStream_OutputStream(chartInstance, &c4_b_st, &c4_c_obj->OutputStream,
    c4_c_obj->ChannelImpl);
  c4_c_obj->matlabCodegenIsDeleted = false;
  c4_obj->AsyncIOChannel = c4_c_obj;
  c4_st.site = &c4_n_emlrtRSI;
  c4_d_obj = c4_iobj_0;
  c4_channel = c4_obj->AsyncIOChannel;
  c4_e_obj = c4_d_obj;
  c4_e_obj->NumBytesWritten = 0.0;
  c4_e_obj->AllowPartialReads = false;
  c4_e_obj->WriteAsync = true;
  c4_b_st.site = &c4_qb_emlrtRSI;
  c4_b_this = c4_e_obj;
  c4_e_obj = c4_b_this;
  c4_b_st.site = &c4_qb_emlrtRSI;
  c4_f_obj = c4_e_obj;
  c4_e_obj = c4_f_obj;
  c4_c_st.site = &c4_rb_emlrtRSI;
  c4_c_this = c4_e_obj;
  c4_e_obj = c4_c_this;
  for (c4_i31 = 0; c4_i31 < 13; c4_i31++) {
    c4_e_obj->MachineByteOrder[c4_i31] = c4_cv4[c4_i31];
  }

  c4_e_obj->AsyncIOChannel = c4_channel;
  c4_b_st.site = &c4_qb_emlrtRSI;
  c4_g_obj = c4_e_obj;
  c4_thisMatlabRoot_size[1] = 0;
  c4_i32 = c4_g_obj->ByteOrder->size[0] * c4_g_obj->ByteOrder->size[1];
  c4_g_obj->ByteOrder->size[0] = 1;
  c4_g_obj->ByteOrder->size[1] = c4_thisMatlabRoot_size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_g_obj->ByteOrder,
    c4_i32, &c4_l_emlrtRTEI);
  c4_r_loop_ub = c4_thisMatlabRoot_size[1] - 1;
  for (c4_i33 = 0; c4_i33 <= c4_r_loop_ub; c4_i33++) {
    c4_g_obj->ByteOrder->data[c4_i33] = c4_thisMatlabRoot_data[c4_i33];
  }

  c4_i34 = c4_g_obj->ByteOrder->size[0] * c4_g_obj->ByteOrder->size[1];
  c4_g_obj->ByteOrder->size[0] = 1;
  c4_g_obj->ByteOrder->size[1] = 13;
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_g_obj->ByteOrder,
    c4_i34, &c4_l_emlrtRTEI);
  for (c4_i35 = 0; c4_i35 < 13; c4_i35++) {
    c4_g_obj->ByteOrder->data[c4_i35] = c4_cv4[c4_i35];
  }

  c4_b_st.site = &c4_qb_emlrtRSI;
  c4_h_obj = c4_e_obj;
  c4_thisMatlabRoot_size[1] = 0;
  c4_i36 = c4_h_obj->DataFieldName->size[0] * c4_h_obj->DataFieldName->size[1];
  c4_h_obj->DataFieldName->size[0] = 1;
  c4_h_obj->DataFieldName->size[1] = c4_thisMatlabRoot_size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_h_obj->DataFieldName,
    c4_i36, &c4_l_emlrtRTEI);
  c4_s_loop_ub = c4_thisMatlabRoot_size[1] - 1;
  for (c4_i37 = 0; c4_i37 <= c4_s_loop_ub; c4_i37++) {
    c4_h_obj->DataFieldName->data[c4_i37] = c4_thisMatlabRoot_data[c4_i37];
  }

  c4_i38 = c4_h_obj->DataFieldName->size[0] * c4_h_obj->DataFieldName->size[1];
  c4_h_obj->DataFieldName->size[0] = 1;
  c4_h_obj->DataFieldName->size[1] = 4;
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_h_obj->DataFieldName,
    c4_i38, &c4_l_emlrtRTEI);
  for (c4_i39 = 0; c4_i39 < 4; c4_i39++) {
    c4_h_obj->DataFieldName->data[c4_i39] = c4_val[c4_i39];
  }

  c4_b_st.site = &c4_qb_emlrtRSI;
  c4_i_obj = c4_e_obj;
  c4_thisMatlabRoot_size[1] = 0;
  c4_i40 = c4_i_obj->NativeDataType->size[0] * c4_i_obj->NativeDataType->size[1];
  c4_i_obj->NativeDataType->size[0] = 1;
  c4_i_obj->NativeDataType->size[1] = c4_thisMatlabRoot_size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_i_obj->NativeDataType,
    c4_i40, &c4_l_emlrtRTEI);
  c4_t_loop_ub = c4_thisMatlabRoot_size[1] - 1;
  for (c4_i41 = 0; c4_i41 <= c4_t_loop_ub; c4_i41++) {
    c4_i_obj->NativeDataType->data[c4_i41] = c4_thisMatlabRoot_data[c4_i41];
  }

  c4_i42 = c4_i_obj->NativeDataType->size[0] * c4_i_obj->NativeDataType->size[1];
  c4_i_obj->NativeDataType->size[0] = 1;
  c4_i_obj->NativeDataType->size[1] = 5;
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_i_obj->NativeDataType,
    c4_i42, &c4_l_emlrtRTEI);
  for (c4_i43 = 0; c4_i43 < 5; c4_i43++) {
    c4_i_obj->NativeDataType->data[c4_i43] = c4_b_val[c4_i43];
  }

  c4_b_st.site = &c4_qb_emlrtRSI;
  c4_j_obj = &c4_e_obj->UnreadDataBuffer;
  c4_k_obj = c4_j_obj;
  c4_k_obj->BytesPerElement = 1.0;
  c4_c_st.site = &c4_sb_emlrtRSI;
  c4_t_y = NULL;
  sf_mex_assign(&c4_t_y, sf_mex_create("y", c4_b_cv9, 10, 0U, 1U, 0U, 2, 1, 6),
                false);
  c4_u_y = NULL;
  sf_mex_assign(&c4_u_y, sf_mex_create("y", c4_b_cv10, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c4_d_st.site = &c4_wb_emlrtRSI;
  sf_mex_assign(&c4_b_thisMLVersion, c4_b_getfield(chartInstance, &c4_d_st,
    c4_b_ver(chartInstance, &c4_d_st, c4_t_y), c4_u_y), false);
  c4_d_st.site = &c4_xb_emlrtRSI;
  c4_e_emlrt_marshallIn(chartInstance, c4_b_matlabroot(chartInstance, &c4_d_st),
                        "<output of matlabroot>", c4_thisMatlabRoot_data,
                        c4_thisMatlabRoot_size);
  c4_v_y = NULL;
  sf_mex_assign(&c4_v_y, sf_mex_create("y", c4_b_cv11, 10, 0U, 1U, 0U, 2, 1, 8),
                false);
  c4_d_st.site = &c4_yb_emlrtRSI;
  if (c4_g_emlrt_marshallIn(chartInstance,
       c4_d_coder_internal_ifWhileCondExtrinsic(chartInstance, &c4_d_st,
        c4_k_strcmp(chartInstance, &c4_d_st, sf_mex_dup(c4_b_thisMLVersion),
                    c4_v_y)), "<output of coder.internal.ifWhileCondExtrinsic>"))
  {
    c4_deviceFullPathML_size[1] = c4_thisMatlabRoot_size[1] + 56;
    c4_u_loop_ub = c4_thisMatlabRoot_size[1] - 1;
    for (c4_i44 = 0; c4_i44 <= c4_u_loop_ub; c4_i44++) {
      c4_deviceFullPathML_data[c4_i44] = c4_thisMatlabRoot_data[c4_i44];
    }

    c4_deviceFullPathML_data[c4_thisMatlabRoot_size[1]] = '\\';
    for (c4_i45 = 0; c4_i45 < 44; c4_i45++) {
      c4_deviceFullPathML_data[(c4_i45 + c4_thisMatlabRoot_size[1]) + 1] =
        c4_b_cv14[c4_i45];
    }

    c4_deviceFullPathML_data[c4_thisMatlabRoot_size[1] + 45] = '\\';
    for (c4_i46 = 0; c4_i46 < 10; c4_i46++) {
      c4_deviceFullPathML_data[(c4_i46 + c4_thisMatlabRoot_size[1]) + 46] =
        c4_b_deviceFullName[c4_i46];
    }

    c4_bb_y = NULL;
    sf_mex_assign(&c4_bb_y, sf_mex_create("y", &c4_deviceFullPathML_data, 10, 0U,
      1U, 0U, 2, 1, c4_deviceFullPathML_size[1]), false);
    c4_cb_y = NULL;
    sf_mex_assign(&c4_cb_y, sf_mex_create("y", c4_b_cv15, 10, 0U, 1U, 0U, 2, 1,
      4), false);
    c4_d_st.site = &c4_ac_emlrtRSI;
    if (c4_g_emlrt_marshallIn(chartInstance,
         c4_e_coder_internal_ifWhileCondExtrinsic(chartInstance, &c4_d_st,
          c4_c_exist(chartInstance, &c4_d_st, c4_bb_y, c4_cb_y)),
         "<output of coder.internal.ifWhileCondExtrinsic>")) {
      c4_devicePath_size[1] = c4_deviceFullPathML_size[1];
      c4_v_loop_ub = c4_deviceFullPathML_size[1] - 1;
      for (c4_i47 = 0; c4_i47 <= c4_v_loop_ub; c4_i47++) {
        c4_devicePath_data[c4_i47] = c4_deviceFullPathML_data[c4_i47];
      }
    } else {
      c4_db_y = NULL;
      sf_mex_assign(&c4_db_y, sf_mex_create("y", c4_b_cv16, 10, 0U, 1U, 0U, 2, 1,
        42), false);
      c4_eb_y = NULL;
      sf_mex_assign(&c4_eb_y, sf_mex_create("y", c4_b_cv16, 10, 0U, 1U, 0U, 2, 1,
        42), false);
      sf_mex_call(&c4_c_st, &c4_ab_emlrtMCI, "error", 0U, 2U, 14, c4_db_y, 14,
                  sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c4_c_st, NULL, "message", 1U, 1U, 14, c4_eb_y)));
    }

    c4_b_converterFullPathML_size[1] = c4_thisMatlabRoot_size[1] + 70;
    c4_w_loop_ub = c4_thisMatlabRoot_size[1] - 1;
    for (c4_i48 = 0; c4_i48 <= c4_w_loop_ub; c4_i48++) {
      c4_b_converterFullPathML_data[c4_i48] = c4_thisMatlabRoot_data[c4_i48];
    }

    c4_b_converterFullPathML_data[c4_thisMatlabRoot_size[1]] = '\\';
    for (c4_i50 = 0; c4_i50 < 44; c4_i50++) {
      c4_b_converterFullPathML_data[(c4_i50 + c4_thisMatlabRoot_size[1]) + 1] =
        c4_b_cv14[c4_i50];
    }

    c4_b_converterFullPathML_data[c4_thisMatlabRoot_size[1] + 45] = '\\';
    for (c4_i52 = 0; c4_i52 < 24; c4_i52++) {
      c4_b_converterFullPathML_data[(c4_i52 + c4_thisMatlabRoot_size[1]) + 46] =
        c4_b_converterFullName[c4_i52];
    }

    c4_fb_y = NULL;
    sf_mex_assign(&c4_fb_y, sf_mex_create("y", &c4_b_converterFullPathML_data,
      10, 0U, 1U, 0U, 2, 1, c4_b_converterFullPathML_size[1]), false);
    c4_gb_y = NULL;
    sf_mex_assign(&c4_gb_y, sf_mex_create("y", c4_b_cv15, 10, 0U, 1U, 0U, 2, 1,
      4), false);
    c4_d_st.site = &c4_bc_emlrtRSI;
    if (c4_g_emlrt_marshallIn(chartInstance,
         c4_f_coder_internal_ifWhileCondExtrinsic(chartInstance, &c4_d_st,
          c4_d_exist(chartInstance, &c4_d_st, c4_fb_y, c4_gb_y)),
         "<output of coder.internal.ifWhileCondExtrinsic>")) {
      c4_converterPath_size[1] = c4_b_converterFullPathML_size[1];
      c4_cb_loop_ub = c4_b_converterFullPathML_size[1] - 1;
      for (c4_i55 = 0; c4_i55 <= c4_cb_loop_ub; c4_i55++) {
        c4_converterPath_data[c4_i55] = c4_b_converterFullPathML_data[c4_i55];
      }
    } else {
      c4_hb_y = NULL;
      sf_mex_assign(&c4_hb_y, sf_mex_create("y", c4_b_cv16, 10, 0U, 1U, 0U, 2, 1,
        42), false);
      c4_ib_y = NULL;
      sf_mex_assign(&c4_ib_y, sf_mex_create("y", c4_b_cv16, 10, 0U, 1U, 0U, 2, 1,
        42), false);
      sf_mex_call(&c4_c_st, &c4_bb_emlrtMCI, "error", 0U, 2U, 14, c4_hb_y, 14,
                  sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c4_c_st, NULL, "message", 1U, 1U, 14, c4_ib_y)));
    }
  } else {
    c4_w_y = NULL;
    sf_mex_assign(&c4_w_y, sf_mex_create("y", c4_b_cv12, 10, 0U, 1U, 0U, 2, 1,
      44), false);
    c4_x_y = NULL;
    sf_mex_assign(&c4_x_y, sf_mex_create("y", c4_b_cv12, 10, 0U, 1U, 0U, 2, 1,
      44), false);
    c4_y_y = NULL;
    sf_mex_assign(&c4_y_y, sf_mex_create("y", c4_b_cv11, 10, 0U, 1U, 0U, 2, 1, 8),
                  false);
    c4_ab_y = NULL;
    sf_mex_assign(&c4_ab_y, sf_mex_create("y", c4_b_cv13, 10, 0U, 1U, 0U, 2, 1,
      5), false);
    sf_mex_call(&c4_c_st, &c4_cb_emlrtMCI, "error", 0U, 2U, 14, c4_w_y, 14,
                sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_c_st, NULL, "message", 1U, 3U, 14, c4_x_y, 14, c4_y_y, 14, c4_ab_y)));
  }

  sf_mex_destroy(&c4_b_thisMLVersion);
  c4_c_st.site = &c4_tb_emlrtRSI;
  c4_d_this = c4_k_obj;
  c4_k_obj = c4_d_this;
  c4_c_st.site = &c4_ub_emlrtRSI;
  c4_l_obj = c4_k_obj;
  c4_k_obj = c4_l_obj;
  c4_d_st.site = &c4_v_emlrtRSI;
  c4_e_this = c4_k_obj;
  c4_k_obj = c4_e_this;
  c4_k_obj->ChannelImpl = 0;
  c4_d_st.site = &c4_w_emlrtRSI;
  c4_converterPluginPath_size[1] = c4_devicePath_size[1];
  c4_x_loop_ub = c4_devicePath_size[1] - 1;
  for (c4_i49 = 0; c4_i49 <= c4_x_loop_ub; c4_i49++) {
    c4_converterPluginPath_data[c4_i49] = c4_devicePath_data[c4_i49];
  }

  c4_b_converterPluginPath_size[1] = c4_converterPath_size[1];
  c4_y_loop_ub = c4_converterPath_size[1] - 1;
  for (c4_i51 = 0; c4_i51 <= c4_y_loop_ub; c4_i51++) {
    c4_b_converterPluginPath_data[c4_i51] = c4_converterPath_data[c4_i51];
  }

  c4_b_converterFullPathML_size[1] = c4_converterPluginPath_size[1];
  c4_ab_loop_ub = c4_converterPluginPath_size[1] - 1;
  for (c4_i53 = 0; c4_i53 <= c4_ab_loop_ub; c4_i53++) {
    c4_b_converterFullPathML_data[c4_i53] = c4_converterPluginPath_data[c4_i53];
  }

  c4_out_size[1] = c4_b_converterFullPathML_size[1] + 1;
  c4_bb_loop_ub = c4_b_converterFullPathML_size[1] - 1;
  for (c4_i54 = 0; c4_i54 <= c4_bb_loop_ub; c4_i54++) {
    c4_out_data[c4_i54] = c4_b_converterFullPathML_data[c4_i54];
  }

  c4_out_data[c4_b_converterFullPathML_size[1]] = '\x00';
  c4_db_loop_ub = c4_out_size[1] - 1;
  for (c4_i56 = 0; c4_i56 <= c4_db_loop_ub; c4_i56++) {
    c4_converterPluginPath_data[c4_i56] = c4_out_data[c4_i56];
  }

  c4_b_converterFullPathML_size[1] = c4_b_converterPluginPath_size[1];
  c4_eb_loop_ub = c4_b_converterPluginPath_size[1] - 1;
  for (c4_i57 = 0; c4_i57 <= c4_eb_loop_ub; c4_i57++) {
    c4_b_converterFullPathML_data[c4_i57] = c4_b_converterPluginPath_data[c4_i57];
  }

  c4_fb_loop_ub = c4_b_converterFullPathML_size[1] - 1;
  for (c4_i58 = 0; c4_i58 <= c4_fb_loop_ub; c4_i58++) {
    c4_b_converterPluginPath_data[c4_i58] = c4_b_converterFullPathML_data[c4_i58];
  }

  c4_b_converterPluginPath_data[c4_b_converterFullPathML_size[1]] = '\x00';
  c4_c_chImpl = coderChannelCreate(&c4_converterPluginPath_data[0],
    &c4_b_converterPluginPath_data[0], rtInf, 0.0, &c4_errorID[0],
    &c4_errorText[0]);
  if (c4_c_chImpl == 0) {
    c4_e_st.site = &c4_bb_emlrtRSI;
    c4_API_dispatchInternalError(chartInstance, &c4_e_st, c4_errorID,
      c4_errorText);
  }

  c4_k_obj->ChannelImpl = c4_c_chImpl;
  c4_d_st.site = &c4_x_emlrtRSI;
  c4_d_chImpl = c4_k_obj->ChannelImpl;
  c4_b_success = coderChannelInit(c4_d_chImpl, 0);
  c4_e_st.site = &c4_db_emlrtRSI;
  c4_API_channelErrorIfFailed(chartInstance, &c4_e_st, c4_d_chImpl, c4_b_success);
  c4_d_st.site = &c4_y_emlrtRSI;
  c4_InputStream_InputStream(chartInstance, &c4_d_st, &c4_k_obj->InputStream,
    c4_k_obj->ChannelImpl);
  c4_d_st.site = &c4_ab_emlrtRSI;
  c4_OutputStream_OutputStream(chartInstance, &c4_d_st, &c4_k_obj->OutputStream,
    c4_k_obj->ChannelImpl);
  c4_k_obj->DataEventsDisabled = true;
  for (c4_i59 = 0; c4_i59 < 2; c4_i59++) {
    c4_k_obj->StreamLimits[c4_i59] = c4_streamLimits[c4_i59];
  }

  c4_m_obj = c4_k_obj;
  c4_m_obj->TotalElementsWritten = 0.0;
  c4_c_st.site = &c4_vb_emlrtRSI;
  c4_n_obj = c4_k_obj;
  c4_d_st.site = &c4_cc_emlrtRSI;
  c4_o_obj = c4_n_obj;
  c4_o_obj->PartialPacket->size[0] = 1;
  c4_o_obj->PartialPacket->size[1] = 0;
  c4_o_obj->PartialPacket->size[0] = 0;
  c4_o_obj->PartialPacket->size[1] = 0;
  c4_n_obj->PartialPacketStart = 0.0;
  c4_n_obj->PartialPacketCount = 0.0;
  c4_k_obj->matlabCodegenIsDeleted = false;
  c4_b_st.site = &c4_qb_emlrtRSI;
  c4_p_obj = &c4_e_obj->UnreadDataBuffer;
  c4_c_st.site = &c4_dc_emlrtRSI;
  c4_q_obj = c4_p_obj;
  c4_d_st.site = &c4_fc_emlrtRSI;
  c4_e_chImpl = c4_q_obj->ChannelImpl;
  c4_c_success = coderChannelIsOpen(c4_e_chImpl, &c4_result);
  c4_e_st.site = &c4_gc_emlrtRSI;
  c4_API_channelErrorIfFailed(chartInstance, &c4_e_st, c4_e_chImpl, c4_c_success);
  if (!c4_result) {
    c4_c_st.site = &c4_ec_emlrtRSI;
    c4_f_chImpl = c4_p_obj->ChannelImpl;
    c4_d_success = coderChannelOpen(c4_f_chImpl, 0);
    c4_d_st.site = &c4_hc_emlrtRSI;
    c4_API_channelErrorIfFailed(chartInstance, &c4_d_st, c4_f_chImpl,
      c4_d_success);
  }

  c4_e_obj->matlabCodegenIsDeleted = false;
  c4_obj->TransportChannel = c4_e_obj;
}

static void c4_sprintf(SFc4_wwtp3InstanceStruct *chartInstance, const emlrtStack
  *c4_sp, uint32_T c4_varargin_1, c4_emxArray_char_T *c4_str)
{
  static char_T c4_b_cv[7] = { 's', 'p', 'r', 'i', 'n', 't', 'f' };

  static char_T c4_formatSpec[2] = { '%', 'u' };

  emlrtStack c4_b_st;
  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_tmpStr = NULL;
  const mxArray *c4_y = NULL;
  real_T c4_strSize;
  uint32_T c4_b_varargin_1;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_st.site = &c4_s_emlrtRSI;
  c4_b_varargin_1 = c4_varargin_1;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_formatSpec, 10, 0U, 1U, 0U, 2, 1,
    2), false);
  c4_c_y = NULL;
  sf_mex_assign(&c4_c_y, sf_mex_create("y", &c4_b_varargin_1, 7, 0U, 0U, 0U, 0),
                false);
  c4_b_st.site = &c4_t_emlrtRSI;
  sf_mex_assign(&c4_tmpStr, c4_feval(chartInstance, &c4_b_st, c4_y, c4_b_y,
    c4_c_y), false);
  c4_b_st.site = &c4_u_emlrtRSI;
  c4_strSize = c4_emlrt_marshallIn(chartInstance, c4_length(chartInstance,
    &c4_b_st, sf_mex_dup(c4_tmpStr)), "<output of length>");
  if (!(c4_strSize >= 0.0)) {
    emlrtNonNegativeCheckR2012b(c4_strSize, &c4_e_emlrtDCI, &c4_st);
  }

  c4_b_st.site = &c4_ll_emlrtRSI;
  c4_c_emlrt_marshallIn(chartInstance, &c4_b_st, sf_mex_dup(c4_tmpStr), "tmpStr",
                        c4_str);
  sf_mex_destroy(&c4_tmpStr);
}

static void c4_API_dispatchInternalError(SFc4_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c4_sp, char_T c4_errorID[1024], char_T c4_errorText[1024])
{
  static char_T c4_b_cv10[49] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'O',
    'u', 't', 'p', 'u', 't', 'S', 't', 'r', 'e', 'a', 'm', ':', 's', 'y', 'n',
    'c', 'h', 'r', 'o', 'n', 'o', 'u', 's', 'O', 'u', 't', 'p', 'u', 't', 'N',
    'o', 't', 'P', 'o', 's', 's', 'i', 'b', 'l', 'e' };

  static char_T c4_cv21[49] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'O', 'u',
    't', 'p', 'u', 't', 'S', 't', 'r', 'e', 'a', 'm', ':', 's', 'y', 'n', 'c',
    'h', 'r', 'o', 'n', 'o', 'u', 's', 'O', 'u', 't', 'p', 'u', 't', 'N', 'o',
    't', 'P', 'o', 's', 's', 'i', 'b', 'l', 'e' };

  static char_T c4_b_cv9[47] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'I',
    'n', 'p', 'u', 't', 'S', 't', 'r', 'e', 'a', 'm', ':', 's', 'y', 'n', 'c',
    'h', 'r', 'o', 'n', 'o', 'u', 's', 'I', 'n', 'p', 'u', 't', 'N', 'o', 't',
    'P', 'o', 's', 's', 'i', 'b', 'l', 'e' };

  static char_T c4_cv20[47] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'I', 'n',
    'p', 'u', 't', 'S', 't', 'r', 'e', 'a', 'm', ':', 's', 'y', 'n', 'c', 'h',
    'r', 'o', 'n', 'o', 'u', 's', 'I', 'n', 'p', 'u', 't', 'N', 'o', 't', 'P',
    'o', 's', 's', 'i', 'b', 'l', 'e' };

  static char_T c4_b_cv7[39] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'C',
    'h', 'a', 'n', 'n', 'e', 'l', ':', 'c', 'o', 'u', 'l', 'd', 'N', 'o', 't',
    'C', 'r', 'e', 'a', 't', 'e', 'C', 'o', 'n', 'v', 'e', 'r', 't', 'e', 'r' };

  static char_T c4_cv18[39] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'C', 'h',
    'a', 'n', 'n', 'e', 'l', ':', 'c', 'o', 'u', 'l', 'd', 'N', 'o', 't', 'C',
    'r', 'e', 'a', 't', 'e', 'C', 'o', 'n', 'v', 'e', 'r', 't', 'e', 'r' };

  static char_T c4_b_cv15[37] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'C',
    'h', 'a', 'n', 'n', 'e', 'l', ':', 'c', 'o', 'u', 'l', 'd', 'N', 'o', 't',
    'L', 'o', 'a', 'd', 'C', 'o', 'n', 'v', 'e', 'r', 't', 'e', 'r' };

  static char_T c4_b_cv4[37] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'C',
    'h', 'a', 'n', 'n', 'e', 'l', ':', 'c', 'o', 'u', 'l', 'd', 'N', 'o', 't',
    'L', 'o', 'a', 'd', 'C', 'o', 'n', 'v', 'e', 'r', 't', 'e', 'r' };

  static char_T c4_b_cv6[36] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'C',
    'h', 'a', 'n', 'n', 'e', 'l', ':', 'c', 'o', 'u', 'l', 'd', 'N', 'o', 't',
    'C', 'r', 'e', 'a', 't', 'e', 'D', 'e', 'v', 'i', 'c', 'e' };

  static char_T c4_cv17[36] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'C', 'h',
    'a', 'n', 'n', 'e', 'l', ':', 'c', 'o', 'u', 'l', 'd', 'N', 'o', 't', 'C',
    'r', 'e', 'a', 't', 'e', 'D', 'e', 'v', 'i', 'c', 'e' };

  static char_T c4_b_cv8[35] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'S',
    't', 'r', 'e', 'a', 'm', ':', 'c', 'o', 'u', 'l', 'd', 'N', 'o', 't', 'C',
    'r', 'e', 'a', 't', 'e', 'F', 'i', 'l', 't', 'e', 'r' };

  static char_T c4_cv19[35] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'S', 't',
    'r', 'e', 'a', 'm', ':', 'c', 'o', 'u', 'l', 'd', 'N', 'o', 't', 'C', 'r',
    'e', 'a', 't', 'e', 'F', 'i', 'l', 't', 'e', 'r' };

  static char_T c4_b_cv14[34] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'C',
    'h', 'a', 'n', 'n', 'e', 'l', ':', 'c', 'o', 'u', 'l', 'd', 'N', 'o', 't',
    'L', 'o', 'a', 'd', 'D', 'e', 'v', 'i', 'c', 'e' };

  static char_T c4_b_cv3[34] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'C',
    'h', 'a', 'n', 'n', 'e', 'l', ':', 'c', 'o', 'u', 'l', 'd', 'N', 'o', 't',
    'L', 'o', 'a', 'd', 'D', 'e', 'v', 'i', 'c', 'e' };

  static char_T c4_b_cv12[33] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'O',
    'u', 't', 'p', 'u', 't', 'S', 't', 'r', 'e', 'a', 'm', ':', 'n', 'o', 't',
    'S', 'u', 'p', 'p', 'o', 'r', 't', 'e', 'd' };

  static char_T c4_b_cv16[33] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'S',
    't', 'r', 'e', 'a', 'm', ':', 'c', 'o', 'u', 'l', 'd', 'N', 'o', 't', 'L',
    'o', 'a', 'd', 'F', 'i', 'l', 't', 'e', 'r' };

  static char_T c4_b_cv2[33] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'O',
    'u', 't', 'p', 'u', 't', 'S', 't', 'r', 'e', 'a', 'm', ':', 'n', 'o', 't',
    'S', 'u', 'p', 'p', 'o', 'r', 't', 'e', 'd' };

  static char_T c4_b_cv5[33] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'S',
    't', 'r', 'e', 'a', 'm', ':', 'c', 'o', 'u', 'l', 'd', 'N', 'o', 't', 'L',
    'o', 'a', 'd', 'F', 'i', 'l', 't', 'e', 'r' };

  static char_T c4_b_cv[32] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'I', 'n',
    'p', 'u', 't', 'S', 't', 'r', 'e', 'a', 'm', ':', 'n', 'o', 't', 'S', 'u',
    'p', 'p', 'o', 'r', 't', 'e', 'd' };

  static char_T c4_b_cv1[32] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'I',
    'n', 'p', 'u', 't', 'S', 't', 'r', 'e', 'a', 'm', ':', 'n', 'o', 't', 'S',
    'u', 'p', 'p', 'o', 'r', 't', 'e', 'd' };

  static char_T c4_b_cv11[7] = { 'E', 'r', 'r', 'I', 'D', ':', ' ' };

  static char_T c4_b_cv13[7] = { ',', ' ', 'M', 's', 'g', ':', ' ' };

  c4_emxArray_char_T *c4_x;
  emlrtStack c4_st;
  const mxArray *c4_ab_y = NULL;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_bb_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_cb_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_db_y = NULL;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_eb_y = NULL;
  const mxArray *c4_f_y = NULL;
  const mxArray *c4_fb_y = NULL;
  const mxArray *c4_g_y = NULL;
  const mxArray *c4_gb_y = NULL;
  const mxArray *c4_h_y = NULL;
  const mxArray *c4_i_y = NULL;
  const mxArray *c4_j_y = NULL;
  const mxArray *c4_k_y = NULL;
  const mxArray *c4_l_y = NULL;
  const mxArray *c4_m_y = NULL;
  const mxArray *c4_n_y = NULL;
  const mxArray *c4_o_y = NULL;
  const mxArray *c4_p_y = NULL;
  const mxArray *c4_q_y = NULL;
  const mxArray *c4_r_y = NULL;
  const mxArray *c4_s_y = NULL;
  const mxArray *c4_t_y = NULL;
  const mxArray *c4_u_y = NULL;
  const mxArray *c4_v_y = NULL;
  const mxArray *c4_w_y = NULL;
  const mxArray *c4_x_y = NULL;
  const mxArray *c4_y = NULL;
  const mxArray *c4_y_y = NULL;
  real_T c4_index;
  int32_T c4_errorID_size[2];
  int32_T c4_u_size[2];
  int32_T c4_b_kstr;
  int32_T c4_b_loop_ub;
  int32_T c4_b_remainingDimsA;
  int32_T c4_c_kstr;
  int32_T c4_c_loop_ub;
  int32_T c4_c_remainingDimsA;
  int32_T c4_d_kstr;
  int32_T c4_d_loop_ub;
  int32_T c4_d_remainingDimsA;
  int32_T c4_e_kstr;
  int32_T c4_e_loop_ub;
  int32_T c4_e_remainingDimsA;
  int32_T c4_exitg1;
  int32_T c4_f_kstr;
  int32_T c4_f_loop_ub;
  int32_T c4_f_remainingDimsA;
  int32_T c4_g_kstr;
  int32_T c4_g_loop_ub;
  int32_T c4_g_remainingDimsA;
  int32_T c4_h_kstr;
  int32_T c4_h_loop_ub;
  int32_T c4_h_remainingDimsA;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i15;
  int32_T c4_i16;
  int32_T c4_i17;
  int32_T c4_i18;
  int32_T c4_i19;
  int32_T c4_i2;
  int32_T c4_i20;
  int32_T c4_i21;
  int32_T c4_i22;
  int32_T c4_i23;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_i_kstr;
  int32_T c4_i_loop_ub;
  int32_T c4_i_remainingDimsA;
  int32_T c4_j_kstr;
  int32_T c4_j_loop_ub;
  int32_T c4_j_remainingDimsA;
  int32_T c4_k_kstr;
  int32_T c4_k_loop_ub;
  int32_T c4_kstr;
  int32_T c4_l_kstr;
  int32_T c4_loop_ub;
  int32_T c4_m_kstr;
  int32_T c4_n_kstr;
  int32_T c4_o_kstr;
  int32_T c4_p_kstr;
  int32_T c4_q_kstr;
  int32_T c4_r_kstr;
  int32_T c4_remainingDimsA;
  int32_T c4_s_kstr;
  int32_T c4_t_kstr;
  char_T c4_u_data[2062];
  char_T c4_errorID_data[1024];
  boolean_T c4_b_bool;
  boolean_T c4_b_result;
  boolean_T c4_bool;
  boolean_T c4_c_bool;
  boolean_T c4_c_result;
  boolean_T c4_d_bool;
  boolean_T c4_d_result;
  boolean_T c4_e_bool;
  boolean_T c4_e_result;
  boolean_T c4_f_bool;
  boolean_T c4_f_result;
  boolean_T c4_g_bool;
  boolean_T c4_g_result;
  boolean_T c4_h_bool;
  boolean_T c4_h_result;
  boolean_T c4_i_bool;
  boolean_T c4_i_result;
  boolean_T c4_j_bool;
  boolean_T c4_j_result;
  boolean_T c4_k_result;
  boolean_T c4_l_result;
  boolean_T c4_m_result;
  boolean_T c4_n_result;
  boolean_T c4_result;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_st.site = &c4_cb_emlrtRSI;
  c4_API_trimString(chartInstance, &c4_st, c4_errorID, c4_errorID_data,
                    c4_errorID_size);
  c4_bool = false;
  c4_emxInit_char_T(chartInstance, c4_sp, &c4_x, 2, &c4_db_emlrtRTEI);
  c4_i = c4_x->size[0] * c4_x->size[1];
  c4_x->size[0] = 1;
  c4_x->size[1] = c4_errorID_size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, c4_sp, c4_x, c4_i, &c4_db_emlrtRTEI);
  c4_loop_ub = c4_errorID_size[1] - 1;
  for (c4_i1 = 0; c4_i1 <= c4_loop_ub; c4_i1++) {
    c4_x->data[c4_i1] = c4_errorID_data[c4_i1];
  }

  c4_remainingDimsA = c4_x->size[1];
  if (c4_remainingDimsA != 32) {
  } else {
    c4_kstr = 1;
    do {
      c4_exitg1 = 0;
      if (c4_kstr - 1 < 32) {
        c4_b_kstr = c4_kstr - 1;
        if (c4_errorID_data[c4_b_kstr] != c4_b_cv[c4_b_kstr]) {
          c4_exitg1 = 1;
        } else {
          c4_kstr++;
        }
      } else {
        c4_bool = true;
        c4_exitg1 = 1;
      }
    } while (c4_exitg1 == 0);
  }

  if (c4_bool) {
    c4_result = true;
  } else {
    c4_result = false;
  }

  if (c4_result) {
    c4_index = 0.0;
  } else {
    c4_b_bool = false;
    c4_i2 = c4_x->size[0] * c4_x->size[1];
    c4_x->size[0] = 1;
    c4_x->size[1] = c4_errorID_size[1];
    c4_emxEnsureCapacity_char_T(chartInstance, c4_sp, c4_x, c4_i2,
      &c4_db_emlrtRTEI);
    c4_b_loop_ub = c4_errorID_size[1] - 1;
    for (c4_i3 = 0; c4_i3 <= c4_b_loop_ub; c4_i3++) {
      c4_x->data[c4_i3] = c4_errorID_data[c4_i3];
    }

    c4_b_remainingDimsA = c4_x->size[1];
    if (c4_b_remainingDimsA != 33) {
    } else {
      c4_c_kstr = 1;
      do {
        c4_exitg1 = 0;
        if (c4_c_kstr - 1 < 33) {
          c4_d_kstr = c4_c_kstr - 1;
          if (c4_errorID_data[c4_d_kstr] != c4_b_cv12[c4_d_kstr]) {
            c4_exitg1 = 1;
          } else {
            c4_c_kstr++;
          }
        } else {
          c4_b_bool = true;
          c4_exitg1 = 1;
        }
      } while (c4_exitg1 == 0);
    }

    if (c4_b_bool) {
      c4_b_result = true;
    } else {
      c4_b_result = false;
    }

    if (c4_b_result) {
      c4_index = 1.0;
    } else {
      c4_c_bool = false;
      c4_i7 = c4_x->size[0] * c4_x->size[1];
      c4_x->size[0] = 1;
      c4_x->size[1] = c4_errorID_size[1];
      c4_emxEnsureCapacity_char_T(chartInstance, c4_sp, c4_x, c4_i7,
        &c4_db_emlrtRTEI);
      c4_d_loop_ub = c4_errorID_size[1] - 1;
      for (c4_i9 = 0; c4_i9 <= c4_d_loop_ub; c4_i9++) {
        c4_x->data[c4_i9] = c4_errorID_data[c4_i9];
      }

      c4_c_remainingDimsA = c4_x->size[1];
      if (c4_c_remainingDimsA != 34) {
      } else {
        c4_e_kstr = 1;
        do {
          c4_exitg1 = 0;
          if (c4_e_kstr - 1 < 34) {
            c4_f_kstr = c4_e_kstr - 1;
            if (c4_errorID_data[c4_f_kstr] != c4_b_cv14[c4_f_kstr]) {
              c4_exitg1 = 1;
            } else {
              c4_e_kstr++;
            }
          } else {
            c4_c_bool = true;
            c4_exitg1 = 1;
          }
        } while (c4_exitg1 == 0);
      }

      if (c4_c_bool) {
        c4_c_result = true;
      } else {
        c4_c_result = false;
      }

      if (c4_c_result) {
        c4_index = 2.0;
      } else {
        c4_d_bool = false;
        c4_i10 = c4_x->size[0] * c4_x->size[1];
        c4_x->size[0] = 1;
        c4_x->size[1] = c4_errorID_size[1];
        c4_emxEnsureCapacity_char_T(chartInstance, c4_sp, c4_x, c4_i10,
          &c4_db_emlrtRTEI);
        c4_e_loop_ub = c4_errorID_size[1] - 1;
        for (c4_i11 = 0; c4_i11 <= c4_e_loop_ub; c4_i11++) {
          c4_x->data[c4_i11] = c4_errorID_data[c4_i11];
        }

        c4_d_remainingDimsA = c4_x->size[1];
        if (c4_d_remainingDimsA != 37) {
        } else {
          c4_g_kstr = 1;
          do {
            c4_exitg1 = 0;
            if (c4_g_kstr - 1 < 37) {
              c4_h_kstr = c4_g_kstr - 1;
              if (c4_errorID_data[c4_h_kstr] != c4_b_cv15[c4_h_kstr]) {
                c4_exitg1 = 1;
              } else {
                c4_g_kstr++;
              }
            } else {
              c4_d_bool = true;
              c4_exitg1 = 1;
            }
          } while (c4_exitg1 == 0);
        }

        if (c4_d_bool) {
          c4_d_result = true;
        } else {
          c4_d_result = false;
        }

        if (c4_d_result) {
          c4_index = 3.0;
        } else {
          c4_e_bool = false;
          c4_i12 = c4_x->size[0] * c4_x->size[1];
          c4_x->size[0] = 1;
          c4_x->size[1] = c4_errorID_size[1];
          c4_emxEnsureCapacity_char_T(chartInstance, c4_sp, c4_x, c4_i12,
            &c4_db_emlrtRTEI);
          c4_f_loop_ub = c4_errorID_size[1] - 1;
          for (c4_i13 = 0; c4_i13 <= c4_f_loop_ub; c4_i13++) {
            c4_x->data[c4_i13] = c4_errorID_data[c4_i13];
          }

          c4_e_remainingDimsA = c4_x->size[1];
          if (c4_e_remainingDimsA != 33) {
          } else {
            c4_i_kstr = 1;
            do {
              c4_exitg1 = 0;
              if (c4_i_kstr - 1 < 33) {
                c4_j_kstr = c4_i_kstr - 1;
                if (c4_errorID_data[c4_j_kstr] != c4_b_cv16[c4_j_kstr]) {
                  c4_exitg1 = 1;
                } else {
                  c4_i_kstr++;
                }
              } else {
                c4_e_bool = true;
                c4_exitg1 = 1;
              }
            } while (c4_exitg1 == 0);
          }

          if (c4_e_bool) {
            c4_e_result = true;
          } else {
            c4_e_result = false;
          }

          if (c4_e_result) {
            c4_index = 4.0;
          } else {
            c4_f_bool = false;
            c4_i14 = c4_x->size[0] * c4_x->size[1];
            c4_x->size[0] = 1;
            c4_x->size[1] = c4_errorID_size[1];
            c4_emxEnsureCapacity_char_T(chartInstance, c4_sp, c4_x, c4_i14,
              &c4_db_emlrtRTEI);
            c4_g_loop_ub = c4_errorID_size[1] - 1;
            for (c4_i15 = 0; c4_i15 <= c4_g_loop_ub; c4_i15++) {
              c4_x->data[c4_i15] = c4_errorID_data[c4_i15];
            }

            c4_f_remainingDimsA = c4_x->size[1];
            if (c4_f_remainingDimsA != 36) {
            } else {
              c4_k_kstr = 1;
              do {
                c4_exitg1 = 0;
                if (c4_k_kstr - 1 < 36) {
                  c4_l_kstr = c4_k_kstr - 1;
                  if (c4_errorID_data[c4_l_kstr] != c4_cv17[c4_l_kstr]) {
                    c4_exitg1 = 1;
                  } else {
                    c4_k_kstr++;
                  }
                } else {
                  c4_f_bool = true;
                  c4_exitg1 = 1;
                }
              } while (c4_exitg1 == 0);
            }

            if (c4_f_bool) {
              c4_f_result = true;
            } else {
              c4_f_result = false;
            }

            if (c4_f_result) {
              c4_index = 5.0;
            } else {
              c4_g_bool = false;
              c4_i16 = c4_x->size[0] * c4_x->size[1];
              c4_x->size[0] = 1;
              c4_x->size[1] = c4_errorID_size[1];
              c4_emxEnsureCapacity_char_T(chartInstance, c4_sp, c4_x, c4_i16,
                &c4_db_emlrtRTEI);
              c4_h_loop_ub = c4_errorID_size[1] - 1;
              for (c4_i17 = 0; c4_i17 <= c4_h_loop_ub; c4_i17++) {
                c4_x->data[c4_i17] = c4_errorID_data[c4_i17];
              }

              c4_g_remainingDimsA = c4_x->size[1];
              if (c4_g_remainingDimsA != 39) {
              } else {
                c4_m_kstr = 1;
                do {
                  c4_exitg1 = 0;
                  if (c4_m_kstr - 1 < 39) {
                    c4_n_kstr = c4_m_kstr - 1;
                    if (c4_errorID_data[c4_n_kstr] != c4_cv18[c4_n_kstr]) {
                      c4_exitg1 = 1;
                    } else {
                      c4_m_kstr++;
                    }
                  } else {
                    c4_g_bool = true;
                    c4_exitg1 = 1;
                  }
                } while (c4_exitg1 == 0);
              }

              if (c4_g_bool) {
                c4_g_result = true;
              } else {
                c4_g_result = false;
              }

              if (c4_g_result) {
                c4_index = 6.0;
              } else {
                c4_h_bool = false;
                c4_i18 = c4_x->size[0] * c4_x->size[1];
                c4_x->size[0] = 1;
                c4_x->size[1] = c4_errorID_size[1];
                c4_emxEnsureCapacity_char_T(chartInstance, c4_sp, c4_x, c4_i18,
                  &c4_db_emlrtRTEI);
                c4_i_loop_ub = c4_errorID_size[1] - 1;
                for (c4_i19 = 0; c4_i19 <= c4_i_loop_ub; c4_i19++) {
                  c4_x->data[c4_i19] = c4_errorID_data[c4_i19];
                }

                c4_h_remainingDimsA = c4_x->size[1];
                if (c4_h_remainingDimsA != 35) {
                } else {
                  c4_o_kstr = 1;
                  do {
                    c4_exitg1 = 0;
                    if (c4_o_kstr - 1 < 35) {
                      c4_p_kstr = c4_o_kstr - 1;
                      if (c4_errorID_data[c4_p_kstr] != c4_cv19[c4_p_kstr]) {
                        c4_exitg1 = 1;
                      } else {
                        c4_o_kstr++;
                      }
                    } else {
                      c4_h_bool = true;
                      c4_exitg1 = 1;
                    }
                  } while (c4_exitg1 == 0);
                }

                if (c4_h_bool) {
                  c4_h_result = true;
                } else {
                  c4_h_result = false;
                }

                if (c4_h_result) {
                  c4_index = 7.0;
                } else {
                  c4_i_bool = false;
                  c4_i20 = c4_x->size[0] * c4_x->size[1];
                  c4_x->size[0] = 1;
                  c4_x->size[1] = c4_errorID_size[1];
                  c4_emxEnsureCapacity_char_T(chartInstance, c4_sp, c4_x, c4_i20,
                    &c4_db_emlrtRTEI);
                  c4_j_loop_ub = c4_errorID_size[1] - 1;
                  for (c4_i21 = 0; c4_i21 <= c4_j_loop_ub; c4_i21++) {
                    c4_x->data[c4_i21] = c4_errorID_data[c4_i21];
                  }

                  c4_i_remainingDimsA = c4_x->size[1];
                  if (c4_i_remainingDimsA != 47) {
                  } else {
                    c4_q_kstr = 1;
                    do {
                      c4_exitg1 = 0;
                      if (c4_q_kstr - 1 < 47) {
                        c4_r_kstr = c4_q_kstr - 1;
                        if (c4_errorID_data[c4_r_kstr] != c4_cv20[c4_r_kstr]) {
                          c4_exitg1 = 1;
                        } else {
                          c4_q_kstr++;
                        }
                      } else {
                        c4_i_bool = true;
                        c4_exitg1 = 1;
                      }
                    } while (c4_exitg1 == 0);
                  }

                  if (c4_i_bool) {
                    c4_i_result = true;
                  } else {
                    c4_i_result = false;
                  }

                  if (c4_i_result) {
                    c4_index = 8.0;
                  } else {
                    c4_j_bool = false;
                    c4_i22 = c4_x->size[0] * c4_x->size[1];
                    c4_x->size[0] = 1;
                    c4_x->size[1] = c4_errorID_size[1];
                    c4_emxEnsureCapacity_char_T(chartInstance, c4_sp, c4_x,
                      c4_i22, &c4_db_emlrtRTEI);
                    c4_k_loop_ub = c4_errorID_size[1] - 1;
                    for (c4_i23 = 0; c4_i23 <= c4_k_loop_ub; c4_i23++) {
                      c4_x->data[c4_i23] = c4_errorID_data[c4_i23];
                    }

                    c4_j_remainingDimsA = c4_x->size[1];
                    if (c4_j_remainingDimsA != 49) {
                    } else {
                      c4_s_kstr = 1;
                      do {
                        c4_exitg1 = 0;
                        if (c4_s_kstr - 1 < 49) {
                          c4_t_kstr = c4_s_kstr - 1;
                          if (c4_errorID_data[c4_t_kstr] != c4_cv21[c4_t_kstr])
                          {
                            c4_exitg1 = 1;
                          } else {
                            c4_s_kstr++;
                          }
                        } else {
                          c4_j_bool = true;
                          c4_exitg1 = 1;
                        }
                      } while (c4_exitg1 == 0);
                    }

                    if (c4_j_bool) {
                      c4_j_result = true;
                    } else {
                      c4_j_result = false;
                    }

                    if (c4_j_result) {
                      c4_index = 9.0;
                    } else {
                      c4_st.site = &c4_kl_emlrtRSI;
                      if (c4_strcmp(chartInstance, &c4_st, c4_errorID_data,
                                    c4_errorID_size)) {
                        c4_k_result = true;
                      } else {
                        c4_k_result = false;
                      }

                      if (c4_k_result) {
                        c4_index = 10.0;
                      } else {
                        c4_st.site = &c4_kl_emlrtRSI;
                        if (c4_b_strcmp(chartInstance, &c4_st, c4_errorID_data,
                                        c4_errorID_size)) {
                          c4_l_result = true;
                        } else {
                          c4_l_result = false;
                        }

                        if (c4_l_result) {
                          c4_index = 11.0;
                        } else {
                          c4_st.site = &c4_kl_emlrtRSI;
                          if (c4_c_strcmp(chartInstance, &c4_st, c4_errorID_data,
                                          c4_errorID_size)) {
                            c4_m_result = true;
                          } else {
                            c4_m_result = false;
                          }

                          if (c4_m_result) {
                            c4_index = 12.0;
                          } else {
                            c4_st.site = &c4_kl_emlrtRSI;
                            if (c4_d_strcmp(chartInstance, &c4_st,
                                            c4_errorID_data, c4_errorID_size)) {
                              c4_n_result = true;
                            } else {
                              c4_n_result = false;
                            }

                            if (c4_n_result) {
                              c4_index = 13.0;
                            } else {
                              c4_index = -1.0;
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

  c4_emxFree_char_T(chartInstance, &c4_x);
  switch ((int32_T)c4_index) {
   case 0:
    c4_b_y = NULL;
    sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2, 1, 32),
                  false);
    c4_q_y = NULL;
    sf_mex_assign(&c4_q_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2, 1, 32),
                  false);
    sf_mex_call(c4_sp, &c4_t_emlrtMCI, "error", 0U, 2U, 14, c4_b_y, 14,
                sf_mex_call(c4_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c4_sp, NULL, "message", 1U, 1U, 14, c4_q_y)));
    break;

   case 1:
    c4_c_y = NULL;
    sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_b_cv2, 10, 0U, 1U, 0U, 2, 1, 33),
                  false);
    c4_r_y = NULL;
    sf_mex_assign(&c4_r_y, sf_mex_create("y", c4_b_cv2, 10, 0U, 1U, 0U, 2, 1, 33),
                  false);
    sf_mex_call(c4_sp, &c4_s_emlrtMCI, "error", 0U, 2U, 14, c4_c_y, 14,
                sf_mex_call(c4_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c4_sp, NULL, "message", 1U, 1U, 14, c4_r_y)));
    break;

   case 2:
    c4_d_y = NULL;
    sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_b_cv3, 10, 0U, 1U, 0U, 2, 1, 34),
                  false);
    c4_s_y = NULL;
    sf_mex_assign(&c4_s_y, sf_mex_create("y", c4_b_cv3, 10, 0U, 1U, 0U, 2, 1, 34),
                  false);
    sf_mex_call(c4_sp, &c4_r_emlrtMCI, "error", 0U, 2U, 14, c4_d_y, 14,
                sf_mex_call(c4_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c4_sp, NULL, "message", 1U, 1U, 14, c4_s_y)));
    break;

   case 3:
    c4_e_y = NULL;
    sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_b_cv4, 10, 0U, 1U, 0U, 2, 1, 37),
                  false);
    c4_t_y = NULL;
    sf_mex_assign(&c4_t_y, sf_mex_create("y", c4_b_cv4, 10, 0U, 1U, 0U, 2, 1, 37),
                  false);
    sf_mex_call(c4_sp, &c4_q_emlrtMCI, "error", 0U, 2U, 14, c4_e_y, 14,
                sf_mex_call(c4_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c4_sp, NULL, "message", 1U, 1U, 14, c4_t_y)));
    break;

   case 4:
    c4_f_y = NULL;
    sf_mex_assign(&c4_f_y, sf_mex_create("y", c4_b_cv5, 10, 0U, 1U, 0U, 2, 1, 33),
                  false);
    c4_u_y = NULL;
    sf_mex_assign(&c4_u_y, sf_mex_create("y", c4_b_cv5, 10, 0U, 1U, 0U, 2, 1, 33),
                  false);
    sf_mex_call(c4_sp, &c4_p_emlrtMCI, "error", 0U, 2U, 14, c4_f_y, 14,
                sf_mex_call(c4_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c4_sp, NULL, "message", 1U, 1U, 14, c4_u_y)));
    break;

   case 5:
    c4_g_y = NULL;
    sf_mex_assign(&c4_g_y, sf_mex_create("y", c4_b_cv6, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    c4_v_y = NULL;
    sf_mex_assign(&c4_v_y, sf_mex_create("y", c4_b_cv6, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    sf_mex_call(c4_sp, &c4_o_emlrtMCI, "error", 0U, 2U, 14, c4_g_y, 14,
                sf_mex_call(c4_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c4_sp, NULL, "message", 1U, 1U, 14, c4_v_y)));
    break;

   case 6:
    c4_h_y = NULL;
    sf_mex_assign(&c4_h_y, sf_mex_create("y", c4_b_cv7, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c4_w_y = NULL;
    sf_mex_assign(&c4_w_y, sf_mex_create("y", c4_b_cv7, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    sf_mex_call(c4_sp, &c4_n_emlrtMCI, "error", 0U, 2U, 14, c4_h_y, 14,
                sf_mex_call(c4_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c4_sp, NULL, "message", 1U, 1U, 14, c4_w_y)));
    break;

   case 7:
    c4_i_y = NULL;
    sf_mex_assign(&c4_i_y, sf_mex_create("y", c4_b_cv8, 10, 0U, 1U, 0U, 2, 1, 35),
                  false);
    c4_x_y = NULL;
    sf_mex_assign(&c4_x_y, sf_mex_create("y", c4_b_cv8, 10, 0U, 1U, 0U, 2, 1, 35),
                  false);
    sf_mex_call(c4_sp, &c4_m_emlrtMCI, "error", 0U, 2U, 14, c4_i_y, 14,
                sf_mex_call(c4_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c4_sp, NULL, "message", 1U, 1U, 14, c4_x_y)));
    break;

   case 8:
    c4_j_y = NULL;
    sf_mex_assign(&c4_j_y, sf_mex_create("y", c4_b_cv9, 10, 0U, 1U, 0U, 2, 1, 47),
                  false);
    c4_y_y = NULL;
    sf_mex_assign(&c4_y_y, sf_mex_create("y", c4_b_cv9, 10, 0U, 1U, 0U, 2, 1, 47),
                  false);
    sf_mex_call(c4_sp, &c4_l_emlrtMCI, "error", 0U, 2U, 14, c4_j_y, 14,
                sf_mex_call(c4_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c4_sp, NULL, "message", 1U, 1U, 14, c4_y_y)));
    break;

   case 9:
    c4_k_y = NULL;
    sf_mex_assign(&c4_k_y, sf_mex_create("y", c4_b_cv10, 10, 0U, 1U, 0U, 2, 1,
      49), false);
    c4_ab_y = NULL;
    sf_mex_assign(&c4_ab_y, sf_mex_create("y", c4_b_cv10, 10, 0U, 1U, 0U, 2, 1,
      49), false);
    sf_mex_call(c4_sp, &c4_k_emlrtMCI, "error", 0U, 2U, 14, c4_k_y, 14,
                sf_mex_call(c4_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c4_sp, NULL, "message", 1U, 1U, 14, c4_ab_y)));
    break;

   case 10:
    c4_l_y = NULL;
    sf_mex_assign(&c4_l_y, sf_mex_create("y", c4_cv8, 10, 0U, 1U, 0U, 2, 1, 44),
                  false);
    c4_bb_y = NULL;
    sf_mex_assign(&c4_bb_y, sf_mex_create("y", c4_cv8, 10, 0U, 1U, 0U, 2, 1, 44),
                  false);
    sf_mex_call(c4_sp, &c4_j_emlrtMCI, "error", 0U, 2U, 14, c4_l_y, 14,
                sf_mex_call(c4_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c4_sp, NULL, "message", 1U, 1U, 14, c4_bb_y)));
    break;

   case 11:
    c4_m_y = NULL;
    sf_mex_assign(&c4_m_y, sf_mex_create("y", c4_cv7, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c4_cb_y = NULL;
    sf_mex_assign(&c4_cb_y, sf_mex_create("y", c4_cv7, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    sf_mex_call(c4_sp, &c4_i_emlrtMCI, "error", 0U, 2U, 14, c4_m_y, 14,
                sf_mex_call(c4_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c4_sp, NULL, "message", 1U, 1U, 14, c4_cb_y)));
    break;

   case 12:
    c4_n_y = NULL;
    sf_mex_assign(&c4_n_y, sf_mex_create("y", c4_cv6, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c4_db_y = NULL;
    sf_mex_assign(&c4_db_y, sf_mex_create("y", c4_cv6, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    sf_mex_call(c4_sp, &c4_h_emlrtMCI, "error", 0U, 2U, 14, c4_n_y, 14,
                sf_mex_call(c4_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c4_sp, NULL, "message", 1U, 1U, 14, c4_db_y)));
    break;

   case 13:
    c4_o_y = NULL;
    sf_mex_assign(&c4_o_y, sf_mex_create("y", c4_cv5, 10, 0U, 1U, 0U, 2, 1, 35),
                  false);
    c4_eb_y = NULL;
    sf_mex_assign(&c4_eb_y, sf_mex_create("y", c4_cv5, 10, 0U, 1U, 0U, 2, 1, 35),
                  false);
    c4_fb_y = NULL;
    sf_mex_assign(&c4_fb_y, sf_mex_create("y", c4_errorText, 10, 0U, 1U, 0U, 2,
      1, 1024), false);
    sf_mex_call(c4_sp, &c4_g_emlrtMCI, "error", 0U, 2U, 14, c4_o_y, 14,
                sf_mex_call(c4_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c4_sp, NULL, "message", 1U, 2U, 14, c4_eb_y, 14, c4_fb_y)));
    break;

   default:
    c4_y = NULL;
    sf_mex_assign(&c4_y, sf_mex_create("y", c4_cv5, 10, 0U, 1U, 0U, 2, 1, 35),
                  false);
    c4_p_y = NULL;
    sf_mex_assign(&c4_p_y, sf_mex_create("y", c4_cv5, 10, 0U, 1U, 0U, 2, 1, 35),
                  false);
    c4_u_size[1] = c4_errorID_size[1] + 1038;
    for (c4_i4 = 0; c4_i4 < 7; c4_i4++) {
      c4_u_data[c4_i4] = c4_b_cv11[c4_i4];
    }

    c4_c_loop_ub = c4_errorID_size[1] - 1;
    for (c4_i5 = 0; c4_i5 <= c4_c_loop_ub; c4_i5++) {
      c4_u_data[c4_i5 + 7] = c4_errorID_data[c4_i5];
    }

    for (c4_i6 = 0; c4_i6 < 7; c4_i6++) {
      c4_u_data[(c4_i6 + c4_errorID_size[1]) + 7] = c4_b_cv13[c4_i6];
    }

    for (c4_i8 = 0; c4_i8 < 1024; c4_i8++) {
      c4_u_data[(c4_i8 + c4_errorID_size[1]) + 14] = c4_errorText[c4_i8];
    }

    c4_gb_y = NULL;
    sf_mex_assign(&c4_gb_y, sf_mex_create("y", &c4_u_data, 10, 0U, 1U, 0U, 2, 1,
      c4_u_size[1]), false);
    sf_mex_call(c4_sp, &c4_u_emlrtMCI, "error", 0U, 2U, 14, c4_y, 14,
                sf_mex_call(c4_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c4_sp, NULL, "message", 1U, 2U, 14, c4_p_y, 14, c4_gb_y)));
    break;
  }
}

static void c4_API_trimString(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, char_T c4_in[1024], char_T c4_out_data[], int32_T
  c4_out_size[2])
{
  real_T c4_b_k;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_k;
  int32_T c4_len;
  int32_T c4_loop_ub;
  boolean_T c4_b;
  boolean_T c4_exitg1;
  (void)chartInstance;
  c4_len = 0;
  c4_k = 0;
  c4_exitg1 = false;
  while ((!c4_exitg1) && (c4_k < 1024)) {
    c4_b_k = (real_T)c4_k + 1.0;
    if (c4_in[(int32_T)c4_b_k - 1] == '\x00') {
      c4_exitg1 = true;
    } else {
      c4_len++;
      c4_k++;
    }
  }

  c4_b = (c4_len < 1);
  if (c4_b) {
    c4_i = -1;
  } else {
    if ((c4_len < 1) || (c4_len > 1024)) {
      emlrtDynamicBoundsCheckR2012b(c4_len, 1, 1024, &c4_h_emlrtBCI,
        (emlrtConstCTX)c4_sp);
    }

    c4_i = c4_len - 1;
  }

  c4_out_size[0] = 1;
  c4_out_size[1] = c4_i + 1;
  c4_loop_ub = c4_i;
  for (c4_i1 = 0; c4_i1 <= c4_loop_ub; c4_i1++) {
    c4_out_data[c4_i1] = c4_in[c4_i1];
  }
}

static boolean_T c4_strcmp(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, char_T c4_a_data[], int32_T c4_a_size[2])
{
  c4_emxArray_char_T *c4_x;
  int32_T c4_b_kstr;
  int32_T c4_exitg1;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_kstr;
  int32_T c4_loop_ub;
  int32_T c4_remainingDimsA;
  boolean_T c4_bool;
  c4_bool = false;
  c4_emxInit_char_T(chartInstance, c4_sp, &c4_x, 2, &c4_db_emlrtRTEI);
  c4_i = c4_x->size[0] * c4_x->size[1];
  c4_x->size[0] = 1;
  c4_x->size[1] = c4_a_size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, c4_sp, c4_x, c4_i, &c4_db_emlrtRTEI);
  c4_loop_ub = c4_a_size[1] - 1;
  for (c4_i1 = 0; c4_i1 <= c4_loop_ub; c4_i1++) {
    c4_x->data[c4_i1] = c4_a_data[c4_i1];
  }

  c4_remainingDimsA = c4_x->size[1];
  c4_emxFree_char_T(chartInstance, &c4_x);
  if (c4_remainingDimsA != 44) {
  } else {
    c4_kstr = 1;
    do {
      c4_exitg1 = 0;
      if (c4_kstr - 1 < 44) {
        c4_b_kstr = c4_kstr - 1;
        if (c4_a_data[c4_b_kstr] != c4_cv8[c4_b_kstr]) {
          c4_exitg1 = 1;
        } else {
          c4_kstr++;
        }
      } else {
        c4_bool = true;
        c4_exitg1 = 1;
      }
    } while (c4_exitg1 == 0);
  }

  return c4_bool;
}

static boolean_T c4_b_strcmp(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, char_T c4_a_data[], int32_T c4_a_size[2])
{
  c4_emxArray_char_T *c4_x;
  int32_T c4_b_kstr;
  int32_T c4_exitg1;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_kstr;
  int32_T c4_loop_ub;
  int32_T c4_remainingDimsA;
  boolean_T c4_bool;
  c4_bool = false;
  c4_emxInit_char_T(chartInstance, c4_sp, &c4_x, 2, &c4_db_emlrtRTEI);
  c4_i = c4_x->size[0] * c4_x->size[1];
  c4_x->size[0] = 1;
  c4_x->size[1] = c4_a_size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, c4_sp, c4_x, c4_i, &c4_db_emlrtRTEI);
  c4_loop_ub = c4_a_size[1] - 1;
  for (c4_i1 = 0; c4_i1 <= c4_loop_ub; c4_i1++) {
    c4_x->data[c4_i1] = c4_a_data[c4_i1];
  }

  c4_remainingDimsA = c4_x->size[1];
  c4_emxFree_char_T(chartInstance, &c4_x);
  if (c4_remainingDimsA != 46) {
  } else {
    c4_kstr = 1;
    do {
      c4_exitg1 = 0;
      if (c4_kstr - 1 < 46) {
        c4_b_kstr = c4_kstr - 1;
        if (c4_a_data[c4_b_kstr] != c4_cv7[c4_b_kstr]) {
          c4_exitg1 = 1;
        } else {
          c4_kstr++;
        }
      } else {
        c4_bool = true;
        c4_exitg1 = 1;
      }
    } while (c4_exitg1 == 0);
  }

  return c4_bool;
}

static boolean_T c4_c_strcmp(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, char_T c4_a_data[], int32_T c4_a_size[2])
{
  c4_emxArray_char_T *c4_x;
  int32_T c4_b_kstr;
  int32_T c4_exitg1;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_kstr;
  int32_T c4_loop_ub;
  int32_T c4_remainingDimsA;
  boolean_T c4_bool;
  c4_bool = false;
  c4_emxInit_char_T(chartInstance, c4_sp, &c4_x, 2, &c4_db_emlrtRTEI);
  c4_i = c4_x->size[0] * c4_x->size[1];
  c4_x->size[0] = 1;
  c4_x->size[1] = c4_a_size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, c4_sp, c4_x, c4_i, &c4_db_emlrtRTEI);
  c4_loop_ub = c4_a_size[1] - 1;
  for (c4_i1 = 0; c4_i1 <= c4_loop_ub; c4_i1++) {
    c4_x->data[c4_i1] = c4_a_data[c4_i1];
  }

  c4_remainingDimsA = c4_x->size[1];
  c4_emxFree_char_T(chartInstance, &c4_x);
  if (c4_remainingDimsA != 39) {
  } else {
    c4_kstr = 1;
    do {
      c4_exitg1 = 0;
      if (c4_kstr - 1 < 39) {
        c4_b_kstr = c4_kstr - 1;
        if (c4_a_data[c4_b_kstr] != c4_cv6[c4_b_kstr]) {
          c4_exitg1 = 1;
        } else {
          c4_kstr++;
        }
      } else {
        c4_bool = true;
        c4_exitg1 = 1;
      }
    } while (c4_exitg1 == 0);
  }

  return c4_bool;
}

static boolean_T c4_d_strcmp(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, char_T c4_a_data[], int32_T c4_a_size[2])
{
  c4_emxArray_char_T *c4_x;
  int32_T c4_b_kstr;
  int32_T c4_exitg1;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_kstr;
  int32_T c4_loop_ub;
  int32_T c4_remainingDimsA;
  boolean_T c4_bool;
  c4_bool = false;
  c4_emxInit_char_T(chartInstance, c4_sp, &c4_x, 2, &c4_db_emlrtRTEI);
  c4_i = c4_x->size[0] * c4_x->size[1];
  c4_x->size[0] = 1;
  c4_x->size[1] = c4_a_size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, c4_sp, c4_x, c4_i, &c4_db_emlrtRTEI);
  c4_loop_ub = c4_a_size[1] - 1;
  for (c4_i1 = 0; c4_i1 <= c4_loop_ub; c4_i1++) {
    c4_x->data[c4_i1] = c4_a_data[c4_i1];
  }

  c4_remainingDimsA = c4_x->size[1];
  c4_emxFree_char_T(chartInstance, &c4_x);
  if (c4_remainingDimsA != 35) {
  } else {
    c4_kstr = 1;
    do {
      c4_exitg1 = 0;
      if (c4_kstr - 1 < 35) {
        c4_b_kstr = c4_kstr - 1;
        if (c4_a_data[c4_b_kstr] != c4_cv5[c4_b_kstr]) {
          c4_exitg1 = 1;
        } else {
          c4_kstr++;
        }
      } else {
        c4_bool = true;
        c4_exitg1 = 1;
      }
    } while (c4_exitg1 == 0);
  }

  return c4_bool;
}

static void c4_API_channelErrorIfFailed(SFc4_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c4_sp, CoderChannel c4_chImpl, int32_T c4_success)
{
  emlrtStack c4_b_st;
  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_y = NULL;
  int32_T c4_errorID_size[2];
  char_T c4_errorID[1024];
  char_T c4_errorID_data[1024];
  char_T c4_errorText[1024];
  boolean_T c4_hasSyncError;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  if ((real_T)c4_success == 0.0) {
    coderChannelHasSyncError(c4_chImpl, &c4_hasSyncError);
    if (!c4_hasSyncError) {
      coderChannelGetLastError(c4_chImpl, &c4_errorID[0], &c4_errorText[0]);
      c4_st.site = &c4_eb_emlrtRSI;
      c4_API_dispatchInternalError(chartInstance, &c4_st, c4_errorID,
        c4_errorText);
    } else {
      coderChannelGetLastSyncError(c4_chImpl, &c4_errorID[0], &c4_errorText[0]);
      c4_st.site = &c4_fb_emlrtRSI;
      c4_b_st.site = &c4_gb_emlrtRSI;
      c4_API_trimString(chartInstance, &c4_b_st, c4_errorID, c4_errorID_data,
                        c4_errorID_size);
      c4_y = NULL;
      sf_mex_assign(&c4_y, sf_mex_create("y", c4_cv9, 10, 0U, 1U, 0U, 2, 1, 37),
                    false);
      c4_b_y = NULL;
      sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_cv9, 10, 0U, 1U, 0U, 2, 1, 37),
                    false);
      c4_c_y = NULL;
      sf_mex_assign(&c4_c_y, sf_mex_create("y", &c4_errorID_data, 10, 0U, 1U, 0U,
        2, 1, c4_errorID_size[1]), false);
      c4_d_y = NULL;
      sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_errorText, 10, 0U, 1U, 0U, 2,
        1, 1024), false);
      sf_mex_call(&c4_st, &c4_v_emlrtMCI, "error", 0U, 2U, 14, c4_y, 14,
                  sf_mex_call(&c4_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (&c4_st, NULL, "message", 1U, 3U, 14, c4_b_y, 14, c4_c_y, 14, c4_d_y)));
    }
  }
}

static c4_matlabshared_asyncio_internal_InputStream *c4_InputStream_InputStream
  (SFc4_wwtp3InstanceStruct *chartInstance, const emlrtStack *c4_sp,
   c4_matlabshared_asyncio_internal_InputStream *c4_obj, CoderChannel
   c4_channelImpl)
{
  CoderChannel c4_b_channelImpl;
  CoderChannel c4_chImpl;
  CoderInputStream c4_streamImpl;
  c4_matlabshared_asyncio_internal_InputStream *c4_b_obj;
  c4_matlabshared_asyncio_internal_InputStream *c4_c_obj;
  c4_matlabshared_asyncio_internal_InputStream *c4_this;
  emlrtStack c4_b_st;
  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_y = NULL;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_loop_ub;
  uint8_T c4_coderExampleDataLocal_data[1];
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_b_obj = c4_obj;
  c4_st.site = &c4_hb_emlrtRSI;
  c4_c_obj = c4_b_obj;
  c4_b_channelImpl = c4_channelImpl;
  c4_b_obj = c4_c_obj;
  c4_b_obj->Timeout = 10.0;
  c4_b_st.site = &c4_jb_emlrtRSI;
  c4_this = c4_b_obj;
  c4_b_obj = c4_this;
  c4_b_st.site = &c4_kb_emlrtRSI;
  c4_chImpl = c4_b_channelImpl;
  c4_streamImpl = coderChannelGetInputStream(c4_chImpl);
  if (!(c4_streamImpl != 0)) {
    c4_y = NULL;
    sf_mex_assign(&c4_y, sf_mex_create("y", c4_cv10, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c4_b_y = NULL;
    sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_cv10, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    sf_mex_call(&c4_b_st, &c4_w_emlrtMCI, "error", 0U, 2U, 14, c4_y, 14,
                sf_mex_call(&c4_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_b_st, NULL, "message", 1U, 1U, 14, c4_b_y)));
  }

  c4_b_obj->StreamImpl = c4_streamImpl;
  c4_b_obj->ChannelImpl = c4_b_channelImpl;
  c4_coderExampleDataLocal_data[0] = 0U;
  c4_i = c4_b_obj->ExampleData->size[0] * c4_b_obj->ExampleData->size[1];
  c4_b_obj->ExampleData->size[0] = 1;
  c4_b_obj->ExampleData->size[1] = 1;
  c4_st.site = &c4_il_emlrtRSI;
  c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_st, c4_b_obj->ExampleData,
    c4_i, &c4_hb_emlrtRTEI);
  c4_loop_ub = 0;
  for (c4_i1 = 0; c4_i1 <= c4_loop_ub; c4_i1++) {
    c4_b_obj->ExampleData->data[c4_i1] = c4_coderExampleDataLocal_data[c4_i1];
  }

  c4_st.site = &c4_ib_emlrtRSI;
  c4_InputStream_clearPartialPacket(chartInstance, &c4_st, c4_b_obj);
  c4_b_obj->matlabCodegenIsDeleted = false;
  return c4_b_obj;
}

static void c4_InputStream_clearPartialPacket(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_matlabshared_asyncio_internal_InputStream *c4_obj)
{
  c4_emxArray_uint8_T *c4_exampleData;
  c4_emxArray_uint8_T *c4_partialPacketInitializer;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_st;
  const mxArray *c4_y = NULL;
  int32_T c4_outsize[2];
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_loop_ub;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_st.site = &c4_lb_emlrtRSI;
  c4_emxInit_uint8_T(chartInstance, &c4_st, &c4_exampleData, 2, &c4_ib_emlrtRTEI);
  c4_i = c4_exampleData->size[0] * c4_exampleData->size[1];
  c4_exampleData->size[0] = c4_obj->ExampleData->size[0];
  c4_exampleData->size[1] = c4_obj->ExampleData->size[1];
  c4_b_st.site = &c4_lb_emlrtRSI;
  c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_b_st, c4_exampleData, c4_i,
    &c4_ib_emlrtRTEI);
  c4_loop_ub = c4_obj->ExampleData->size[0] * c4_obj->ExampleData->size[1] - 1;
  for (c4_i1 = 0; c4_i1 <= c4_loop_ub; c4_i1++) {
    c4_exampleData->data[c4_i1] = c4_obj->ExampleData->data[c4_i1];
  }

  c4_b_st.site = &c4_mb_emlrtRSI;
  c4_c_st.site = &c4_nb_emlrtRSI;
  c4_outsize[0] = c4_exampleData->size[0];
  if (!((real_T)c4_outsize[0] == (real_T)c4_exampleData->size[0])) {
    c4_y = NULL;
    sf_mex_assign(&c4_y, sf_mex_create("y", c4_cv11, 10, 0U, 1U, 0U, 2, 1, 15),
                  false);
    sf_mex_call(&c4_c_st, &c4_x_emlrtMCI, "error", 0U, 1U, 14, c4_y);
  }

  c4_emxFree_uint8_T(chartInstance, &c4_exampleData);
  c4_emxInit_uint8_T(chartInstance, &c4_c_st, &c4_partialPacketInitializer, 2,
                     &c4_jb_emlrtRTEI);
  c4_partialPacketInitializer->size[0] = c4_outsize[0];
  c4_partialPacketInitializer->size[1] = 0;
  c4_obj->PartialPacket->size[0] = c4_partialPacketInitializer->size[0];
  c4_obj->PartialPacket->size[1] = 0;
  c4_emxFree_uint8_T(chartInstance, &c4_partialPacketInitializer);
  c4_obj->PartialPacketStart = 0.0;
  c4_obj->PartialPacketCount = 0.0;
}

static c4_matlabshared_asyncio_internal_OutputStream
  *c4_OutputStream_OutputStream(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_matlabshared_asyncio_internal_OutputStream *c4_obj,
  CoderChannel c4_channelImpl)
{
  CoderChannel c4_b_channelImpl;
  CoderChannel c4_chImpl;
  CoderOutputStream c4_streamImpl;
  c4_matlabshared_asyncio_internal_OutputStream *c4_b_obj;
  c4_matlabshared_asyncio_internal_OutputStream *c4_c_obj;
  c4_matlabshared_asyncio_internal_OutputStream *c4_this;
  emlrtStack c4_b_st;
  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_y = NULL;
  (void)chartInstance;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_b_obj = c4_obj;
  c4_st.site = &c4_ob_emlrtRSI;
  c4_c_obj = c4_b_obj;
  c4_b_channelImpl = c4_channelImpl;
  c4_b_obj = c4_c_obj;
  c4_b_obj->Timeout = 10.0;
  c4_b_st.site = &c4_jb_emlrtRSI;
  c4_this = c4_b_obj;
  c4_b_obj = c4_this;
  c4_b_st.site = &c4_pb_emlrtRSI;
  c4_chImpl = c4_b_channelImpl;
  c4_streamImpl = coderChannelGetOutputStream(c4_chImpl);
  if (!(c4_streamImpl != 0)) {
    c4_y = NULL;
    sf_mex_assign(&c4_y, sf_mex_create("y", c4_cv10, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c4_b_y = NULL;
    sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_cv10, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    sf_mex_call(&c4_b_st, &c4_y_emlrtMCI, "error", 0U, 2U, 14, c4_y, 14,
                sf_mex_call(&c4_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_b_st, NULL, "message", 1U, 1U, 14, c4_b_y)));
  }

  c4_b_obj->StreamImpl = c4_streamImpl;
  c4_b_obj->ChannelImpl = c4_b_channelImpl;
  c4_b_obj->matlabCodegenIsDeleted = false;
  return c4_b_obj;
}

static void c4_TCPClient_connect(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_matlabshared_network_internal_TCPClient *c4_obj)
{
  static char_T c4_b_cv[39] = { 'n', 'e', 't', 'w', 'o', 'r', 'k', ':', 't', 'c',
    'p', 'c', 'l', 'i', 'e', 'n', 't', ':', 'a', 'l', 'r', 'e', 'a', 'd', 'y',
    'C', 'o', 'n', 'n', 'e', 'c', 't', 'e', 'd', 'E', 'r', 'r', 'o', 'r' };

  CoderChannel c4_b_chImpl;
  CoderChannel c4_c_chImpl;
  CoderChannel c4_chImpl;
  CoderChannel c4_d_chImpl;
  CoderChannel c4_e_chImpl;
  c4_cell_17 c4_args;
  c4_emxArray_char_T *c4_e_value;
  c4_matlabshared_asyncio_internal_Channel *c4_b_obj;
  c4_matlabshared_asyncio_internal_Channel *c4_g_obj;
  c4_matlabshared_asyncio_internal_Channel *c4_h_obj;
  c4_matlabshared_asyncio_internal_Channel *c4_i_obj;
  c4_matlabshared_asyncio_internal_Channel *c4_j_obj;
  c4_matlabshared_network_internal_TCPClient *c4_c_obj;
  c4_matlabshared_network_internal_TCPClient *c4_d_obj;
  c4_matlabshared_network_internal_TCPClient *c4_e_obj;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_f_obj;
  c4_s_IiVysWyVj7T2O9POL8hpXH c4_options;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_e_st;
  emlrtStack c4_f_st;
  emlrtStack c4_g_st;
  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_y = NULL;
  real_T c4_dv[2];
  real_T c4_dv1[2];
  real_T c4_f_value[2];
  real_T c4_d;
  int32_T c4_b_loop_ub;
  int32_T c4_b_success;
  int32_T c4_c_loop_ub;
  int32_T c4_c_success;
  int32_T c4_d_loop_ub;
  int32_T c4_d_success;
  int32_T c4_e_loop_ub;
  int32_T c4_e_success;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i15;
  int32_T c4_i16;
  int32_T c4_i17;
  int32_T c4_i18;
  int32_T c4_i19;
  int32_T c4_i2;
  int32_T c4_i20;
  int32_T c4_i21;
  int32_T c4_i22;
  int32_T c4_i23;
  int32_T c4_i24;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_loop_ub;
  int32_T c4_success;
  uint32_T c4_u;
  char_T c4_d_value[11];
  boolean_T c4_bv[2];
  boolean_T c4_bv1[2];
  boolean_T c4_g_value[2];
  boolean_T c4_b;
  boolean_T c4_b_exampleValue;
  boolean_T c4_b_result;
  boolean_T c4_b_value;
  boolean_T c4_c_value;
  boolean_T c4_exampleValue;
  boolean_T c4_out;
  boolean_T c4_result;
  boolean_T c4_value;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_e_st.prev = &c4_d_st;
  c4_e_st.tls = c4_d_st.tls;
  c4_f_st.prev = &c4_e_st;
  c4_f_st.tls = c4_e_st.tls;
  c4_g_st.prev = &c4_f_st;
  c4_g_st.tls = c4_f_st.tls;
  c4_st.site = &c4_n_emlrtRSI;
  c4_b_obj = c4_obj->AsyncIOChannel;
  c4_b_st.site = &c4_fc_emlrtRSI;
  c4_chImpl = c4_b_obj->ChannelImpl;
  c4_success = coderChannelIsOpen(c4_chImpl, &c4_result);
  c4_c_st.site = &c4_gc_emlrtRSI;
  c4_API_channelErrorIfFailed(chartInstance, &c4_c_st, c4_chImpl, c4_success);
  if (c4_result) {
    c4_y = NULL;
    sf_mex_assign(&c4_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c4_b_y = NULL;
    sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    sf_mex_call(c4_sp, &c4_e_emlrtMCI, "error", 0U, 2U, 14, c4_y, 14,
                sf_mex_call(c4_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c4_sp, NULL, "message", 1U, 1U, 14, c4_b_y)));
  }

  c4_st.site = &c4_n_emlrtRSI;
  c4_c_obj = c4_obj;
  c4_emxInitStruct_s_IiVysWyVj7T2O9P(chartInstance, &c4_st, &c4_options,
    &c4_m_emlrtRTEI);
  for (c4_i = 0; c4_i < 11; c4_i++) {
    c4_options.HostName[c4_i] = c4_c_obj->RemoteHost[c4_i];
  }

  c4_b_st.site = &c4_n_emlrtRSI;
  c4_d = muDoubleScalarRound(c4_c_obj->RemotePort);
  if (c4_d < 4.294967296E+9) {
    if (c4_d >= 0.0) {
      c4_u = (uint32_T)c4_d;
    } else {
      c4_u = 0U;
    }
  } else if (c4_d >= 4.294967296E+9) {
    c4_u = MAX_uint32_T;
  } else {
    c4_u = 0U;
  }

  c4_sprintf(chartInstance, &c4_b_st, c4_u, c4_options.ServiceName);
  c4_options.ConnectTimeout = c4_c_obj->ConnectTimeout;
  c4_options.IsWriteOnly = c4_c_obj->IsWriteOnly;
  c4_options.IsSharingPort = c4_c_obj->IsSharingPort;
  c4_b_st.site = &c4_n_emlrtRSI;
  c4_d_obj = c4_c_obj;
  c4_c_st.site = &c4_n_emlrtRSI;
  c4_e_obj = c4_d_obj;
  c4_d_st.site = &c4_n_emlrtRSI;
  c4_f_obj = c4_e_obj->TransportChannel;
  c4_e_st.site = &c4_qb_emlrtRSI;
  c4_g_obj = c4_f_obj->AsyncIOChannel;
  c4_f_st.site = &c4_fc_emlrtRSI;
  c4_b_chImpl = c4_g_obj->ChannelImpl;
  c4_b_success = coderChannelIsOpen(c4_b_chImpl, &c4_out);
  c4_g_st.site = &c4_gc_emlrtRSI;
  c4_API_channelErrorIfFailed(chartInstance, &c4_g_st, c4_b_chImpl, c4_b_success);
  if (c4_out) {
    c4_value = true;
  } else {
    c4_value = false;
  }

  c4_b_value = c4_value;
  if (!c4_b_value) {
    c4_c_value = c4_d_obj->TransferDelay;
  } else {
    c4_c_st.site = &c4_n_emlrtRSI;
    c4_h_obj = c4_d_obj->AsyncIOChannel;
    c4_exampleValue = c4_h_obj->CustomProps.TransferDelay;
    c4_d_st.site = &c4_lc_emlrtRSI;
    c4_c_chImpl = c4_h_obj->ChannelImpl;
    c4_b_exampleValue = c4_exampleValue;
    c4_c_value = c4_b_exampleValue;
    c4_c_success = coderChannelGetPropertyValue(c4_c_chImpl, "TransferDelay",
      "logical", 1, &c4_c_value);
    c4_e_st.site = &c4_mc_emlrtRSI;
    c4_API_channelErrorIfFailed(chartInstance, &c4_e_st, c4_c_chImpl,
      c4_c_success);
  }

  c4_options.TransferDelay = c4_c_value;
  c4_b_st.site = &c4_n_emlrtRSI;
  c4_i_obj = c4_c_obj->AsyncIOChannel;
  c4_c_st.site = &c4_dc_emlrtRSI;
  c4_j_obj = c4_i_obj;
  c4_d_st.site = &c4_fc_emlrtRSI;
  c4_d_chImpl = c4_j_obj->ChannelImpl;
  c4_d_success = coderChannelIsOpen(c4_d_chImpl, &c4_b_result);
  c4_e_st.site = &c4_gc_emlrtRSI;
  c4_API_channelErrorIfFailed(chartInstance, &c4_e_st, c4_d_chImpl, c4_d_success);
  if (!c4_b_result) {
    c4_c_st.site = &c4_ec_emlrtRSI;
    c4_e_chImpl = c4_i_obj->ChannelImpl;
    c4_emxInitStruct_cell_17(chartInstance, &c4_c_st, &c4_args, &c4_m_emlrtRTEI);
    c4_args.f1 = "HostName";
    c4_args.f2 = "char";
    for (c4_i1 = 0; c4_i1 < 11; c4_i1++) {
      c4_d_value[c4_i1] = c4_options.HostName[c4_i1];
    }

    for (c4_i2 = 0; c4_i2 < 11; c4_i2++) {
      c4_args.f4[c4_i2] = c4_d_value[c4_i2];
    }

    c4_args.f5 = "ServiceName";
    c4_args.f6 = "char";
    c4_args.f7 = c4_options.ServiceName->size[1];
    c4_b = (c4_options.ServiceName->size[1] == 1);
    c4_emxInit_char_T(chartInstance, &c4_c_st, &c4_e_value, 2, &c4_v_emlrtRTEI);
    if (c4_b) {
      c4_i4 = c4_e_value->size[0] * c4_e_value->size[1];
      c4_e_value->size[0] = 1;
      c4_e_value->size[1] = c4_options.ServiceName->size[1] +
        c4_options.ServiceName->size[1];
      c4_emxEnsureCapacity_char_T(chartInstance, &c4_c_st, c4_e_value, c4_i4,
        &c4_v_emlrtRTEI);
      c4_b_loop_ub = c4_options.ServiceName->size[1] - 1;
      for (c4_i6 = 0; c4_i6 <= c4_b_loop_ub; c4_i6++) {
        c4_e_value->data[c4_i6] = c4_options.ServiceName->data[c4_i6];
      }

      c4_c_loop_ub = c4_options.ServiceName->size[1] - 1;
      for (c4_i8 = 0; c4_i8 <= c4_c_loop_ub; c4_i8++) {
        c4_e_value->data[c4_i8 + c4_options.ServiceName->size[1]] =
          c4_options.ServiceName->data[c4_i8];
      }
    } else {
      c4_i3 = c4_e_value->size[0] * c4_e_value->size[1];
      c4_e_value->size[0] = 1;
      c4_e_value->size[1] = c4_options.ServiceName->size[1];
      c4_emxEnsureCapacity_char_T(chartInstance, &c4_c_st, c4_e_value, c4_i3,
        &c4_u_emlrtRTEI);
      c4_loop_ub = c4_options.ServiceName->size[1] - 1;
      for (c4_i5 = 0; c4_i5 <= c4_loop_ub; c4_i5++) {
        c4_e_value->data[c4_i5] = c4_options.ServiceName->data[c4_i5];
      }
    }

    c4_i7 = c4_args.f8->size[0] * c4_args.f8->size[1];
    c4_args.f8->size[0] = 1;
    c4_args.f8->size[1] = c4_e_value->size[1];
    c4_emxEnsureCapacity_char_T(chartInstance, &c4_c_st, c4_args.f8, c4_i7,
      &c4_kb_emlrtRTEI);
    c4_d_loop_ub = c4_e_value->size[1] - 1;
    for (c4_i9 = 0; c4_i9 <= c4_d_loop_ub; c4_i9++) {
      c4_args.f8->data[c4_i9] = c4_e_value->data[c4_i9];
    }

    c4_args.f9 = "ReceiveSize";
    c4_args.f10 = "double";
    for (c4_i10 = 0; c4_i10 < 2; c4_i10++) {
      c4_args.f12[c4_i10] = 65536.0;
    }

    c4_args.f13 = "SendSize";
    c4_args.f14 = "double";
    for (c4_i11 = 0; c4_i11 < 2; c4_i11++) {
      c4_args.f16[c4_i11] = 65536.0;
    }

    c4_args.f17 = "ConnectTimeout";
    c4_args.f18 = "double";
    c4_f_value[0] = c4_options.ConnectTimeout;
    c4_f_value[1] = c4_options.ConnectTimeout;
    for (c4_i12 = 0; c4_i12 < 2; c4_i12++) {
      c4_args.f20[c4_i12] = c4_f_value[c4_i12];
    }

    c4_args.f21 = "IsWriteOnly";
    c4_args.f22 = "logical";
    c4_g_value[0] = c4_options.IsWriteOnly;
    c4_g_value[1] = c4_options.IsWriteOnly;
    for (c4_i13 = 0; c4_i13 < 2; c4_i13++) {
      c4_args.f24[c4_i13] = c4_g_value[c4_i13];
    }

    c4_args.f25 = "IsSharingPort";
    c4_args.f26 = "logical";
    c4_g_value[0] = c4_options.IsSharingPort;
    c4_g_value[1] = c4_options.IsSharingPort;
    for (c4_i14 = 0; c4_i14 < 2; c4_i14++) {
      c4_args.f28[c4_i14] = c4_g_value[c4_i14];
    }

    c4_args.f29 = "TransferDelay";
    c4_args.f30 = "logical";
    c4_g_value[0] = c4_options.TransferDelay;
    c4_g_value[1] = c4_options.TransferDelay;
    for (c4_i15 = 0; c4_i15 < 2; c4_i15++) {
      c4_args.f32[c4_i15] = c4_g_value[c4_i15];
    }

    for (c4_i16 = 0; c4_i16 < 11; c4_i16++) {
      c4_d_value[c4_i16] = c4_args.f4[c4_i16];
    }

    c4_i17 = c4_e_value->size[0] * c4_e_value->size[1];
    c4_e_value->size[0] = 1;
    c4_e_value->size[1] = c4_args.f8->size[1];
    c4_emxEnsureCapacity_char_T(chartInstance, &c4_c_st, c4_e_value, c4_i17,
      &c4_lb_emlrtRTEI);
    c4_e_loop_ub = c4_args.f8->size[1] - 1;
    for (c4_i18 = 0; c4_i18 <= c4_e_loop_ub; c4_i18++) {
      c4_e_value->data[c4_i18] = c4_args.f8->data[c4_i18];
    }

    for (c4_i19 = 0; c4_i19 < 2; c4_i19++) {
      c4_f_value[c4_i19] = c4_args.f12[c4_i19];
    }

    for (c4_i20 = 0; c4_i20 < 2; c4_i20++) {
      c4_dv[c4_i20] = c4_args.f16[c4_i20];
    }

    for (c4_i21 = 0; c4_i21 < 2; c4_i21++) {
      c4_dv1[c4_i21] = c4_args.f20[c4_i21];
    }

    for (c4_i22 = 0; c4_i22 < 2; c4_i22++) {
      c4_g_value[c4_i22] = c4_args.f24[c4_i22];
    }

    for (c4_i23 = 0; c4_i23 < 2; c4_i23++) {
      c4_bv[c4_i23] = c4_args.f28[c4_i23];
    }

    for (c4_i24 = 0; c4_i24 < 2; c4_i24++) {
      c4_bv1[c4_i24] = c4_args.f32[c4_i24];
    }

    c4_e_success = coderChannelOpen(c4_e_chImpl, 8, c4_args.f1, c4_args.f2, 11,
      &c4_d_value[0], c4_args.f5, c4_args.f6, c4_args.f7, &c4_e_value->data[0],
      c4_args.f9, c4_args.f10, 1, &c4_f_value[0], c4_args.f13, c4_args.f14, 1,
      &c4_dv[0], c4_args.f17, c4_args.f18, 1, &c4_dv1[0], c4_args.f21,
      c4_args.f22, 1, &c4_g_value[0], c4_args.f25, c4_args.f26, 1, &c4_bv[0],
      c4_args.f29, c4_args.f30, 1, &c4_bv1[0]);
    c4_emxFree_char_T(chartInstance, &c4_e_value);
    c4_emxFreeStruct_cell_17(chartInstance, &c4_args);
    c4_d_st.site = &c4_hc_emlrtRSI;
    c4_API_channelErrorIfFailed(chartInstance, &c4_d_st, c4_e_chImpl,
      c4_e_success);
  }

  c4_emxFreeStruct_s_IiVysWyVj7T2O9P(chartInstance, &c4_options);
}

static void c4_DataConverter_word2bytes(SFc4_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_icomm_interface_coder_modbus_DataConverter *c4_obj,
  real_T c4_wordval, uint8_T c4_bytes[2])
{
  c4_emxArray_char_T *c4_out;
  c4_icomm_interface_coder_modbus_DataConverter *c4_b_obj;
  c4_icomm_interface_coder_modbus_DataConverter *c4_c_obj;
  emlrtStack c4_b_st;
  emlrtStack c4_st;
  real_T c4_d;
  real_T c4_d1;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i2;
  int32_T c4_loop_ub;
  uint16_T c4_b_x;
  uint16_T c4_c_x;
  uint16_T c4_convertedWordVal;
  uint16_T c4_u;
  uint16_T c4_u1;
  uint16_T c4_x;
  char_T c4_d_obj[13];
  uint8_T c4_y[2];
  uint8_T c4_xtmp;
  boolean_T c4_b_out;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_d = muDoubleScalarRound(c4_wordval);
  if (c4_d < 65536.0) {
    if (c4_d >= 0.0) {
      c4_u = (uint16_T)c4_d;
    } else {
      c4_u = 0U;
    }
  } else if (c4_d >= 65536.0) {
    c4_u = MAX_uint16_T;
  } else {
    c4_u = 0U;
  }

  c4_convertedWordVal = c4_u;
  c4_st.site = &c4_qd_emlrtRSI;
  c4_b_obj = c4_obj;
  c4_emxInit_char_T(chartInstance, &c4_st, &c4_out, 2, &c4_nb_emlrtRTEI);
  c4_b_st.site = &c4_td_emlrtRSI;
  c4_c_obj = c4_b_obj;
  c4_i = c4_out->size[0] * c4_out->size[1];
  c4_out->size[0] = 1;
  c4_out->size[1] = c4_c_obj->ByteOrder->size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_out, c4_i,
    &c4_mb_emlrtRTEI);
  c4_loop_ub = c4_c_obj->ByteOrder->size[1] - 1;
  for (c4_i1 = 0; c4_i1 <= c4_loop_ub; c4_i1++) {
    c4_out->data[c4_i1] = c4_c_obj->ByteOrder->data[c4_i1];
  }

  c4_b_st.site = &c4_td_emlrtRSI;
  for (c4_i2 = 0; c4_i2 < 13; c4_i2++) {
    c4_d_obj[c4_i2] = c4_b_obj->MachineByteOrder[c4_i2];
  }

  c4_b_out = !c4_e_strcmp(chartInstance, &c4_b_st, c4_out, c4_d_obj);
  c4_emxFree_char_T(chartInstance, &c4_out);
  if (c4_b_out) {
    c4_st.site = &c4_rd_emlrtRSI;
    c4_d1 = muDoubleScalarRound(c4_wordval);
    if (c4_d1 < 65536.0) {
      if (c4_d1 >= 0.0) {
        c4_u1 = (uint16_T)c4_d1;
      } else {
        c4_u1 = 0U;
      }
    } else if (c4_d1 >= 65536.0) {
      c4_u1 = MAX_uint16_T;
    } else {
      c4_u1 = 0U;
    }

    c4_b_x = c4_u1;
    c4_convertedWordVal = c4_b_x;
    c4_c_x = c4_convertedWordVal;
    memcpy((void *)&c4_y[0], (void *)&c4_c_x, (size_t)2 * sizeof(uint8_T));
    c4_xtmp = c4_y[0];
    c4_y[0] = c4_y[1];
    c4_y[1] = c4_xtmp;
    memcpy((void *)&c4_convertedWordVal, (void *)&c4_y[0], (size_t)1 * sizeof
           (uint16_T));
  }

  c4_st.site = &c4_sd_emlrtRSI;
  c4_x = c4_convertedWordVal;
  memcpy((void *)&c4_bytes[0], (void *)&c4_x, (size_t)2 * sizeof(uint8_T));
}

static boolean_T c4_e_strcmp(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_emxArray_char_T *c4_a, char_T c4_b[13])
{
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_e_st;
  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_f_y = NULL;
  const mxArray *c4_g_y = NULL;
  const mxArray *c4_i_y = NULL;
  const mxArray *c4_j_y = NULL;
  const mxArray *c4_k_y = NULL;
  const mxArray *c4_m_y = NULL;
  const mxArray *c4_n_y = NULL;
  const mxArray *c4_y = NULL;
  int32_T c4_b_kstr;
  int32_T c4_exitg1;
  int32_T c4_kstr;
  int32_T c4_remainingDimsA;
  char_T c4_b_s;
  char_T c4_b_x;
  char_T c4_c_s;
  char_T c4_c_x;
  char_T c4_d_s;
  char_T c4_d_x;
  char_T c4_e_s;
  char_T c4_f_s;
  char_T c4_g_s;
  char_T c4_h_s;
  char_T c4_h_y;
  char_T c4_l_y;
  char_T c4_s;
  char_T c4_x;
  int8_T c4_b_u;
  int8_T c4_c_u;
  int8_T c4_d_u;
  int8_T c4_u;
  boolean_T c4_b1;
  boolean_T c4_b2;
  boolean_T c4_b3;
  boolean_T c4_b_b;
  boolean_T c4_b_p;
  boolean_T c4_bool;
  boolean_T c4_c_p;
  boolean_T c4_d_p;
  boolean_T c4_p;
  (void)chartInstance;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_e_st.prev = &c4_d_st;
  c4_e_st.tls = c4_d_st.tls;
  c4_st.site = &c4_jd_emlrtRSI;
  c4_b_st.site = &c4_kd_emlrtRSI;
  c4_bool = false;
  c4_remainingDimsA = c4_a->size[1];
  if (c4_remainingDimsA != 13) {
  } else {
    c4_kstr = 1;
    do {
      c4_exitg1 = 0;
      if (c4_kstr - 1 < 13) {
        c4_b_kstr = c4_kstr - 1;
        c4_c_st.site = &c4_ld_emlrtRSI;
        c4_s = c4_a->data[c4_b_kstr];
        c4_b_s = c4_s;
        c4_b_b = ((real_T)(uint8_T)c4_b_s <= 127.0);
        c4_p = c4_b_b;
        if (!c4_p) {
          c4_y = NULL;
          sf_mex_assign(&c4_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_b_y = NULL;
          sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_u = MAX_int8_T;
          c4_c_y = NULL;
          sf_mex_assign(&c4_c_y, sf_mex_create("y", &c4_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c4_c_st, &c4_fb_emlrtMCI, "error", 0U, 2U, 14, c4_y, 14,
                      sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c4_c_st, NULL, "message", 1U, 2U, 14, c4_b_y, 14,
                        c4_c_y)));
        }

        c4_c_st.site = &c4_md_emlrtRSI;
        c4_c_s = c4_b[c4_b_kstr];
        c4_d_s = c4_c_s;
        c4_b1 = ((real_T)(uint8_T)c4_d_s <= 127.0);
        c4_b_p = c4_b1;
        if (!c4_b_p) {
          c4_d_y = NULL;
          sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_e_y = NULL;
          sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_b_u = MAX_int8_T;
          c4_f_y = NULL;
          sf_mex_assign(&c4_f_y, sf_mex_create("y", &c4_b_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c4_c_st, &c4_fb_emlrtMCI, "error", 0U, 2U, 14, c4_d_y, 14,
                      sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c4_c_st, NULL, "message", 1U, 2U, 14, c4_e_y, 14,
                        c4_f_y)));
        }

        c4_c_st.site = &c4_nd_emlrtRSI;
        c4_x = c4_a->data[c4_b_kstr];
        c4_d_st.site = &c4_od_emlrtRSI;
        c4_b_x = c4_x;
        c4_e_st.site = &c4_pd_emlrtRSI;
        c4_e_s = c4_b_x;
        c4_f_s = c4_e_s;
        c4_b2 = ((real_T)(uint8_T)c4_f_s <= 127.0);
        c4_c_p = c4_b2;
        if (!c4_c_p) {
          c4_g_y = NULL;
          sf_mex_assign(&c4_g_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_i_y = NULL;
          sf_mex_assign(&c4_i_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_c_u = MAX_int8_T;
          c4_j_y = NULL;
          sf_mex_assign(&c4_j_y, sf_mex_create("y", &c4_c_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c4_e_st, &c4_fb_emlrtMCI, "error", 0U, 2U, 14, c4_g_y, 14,
                      sf_mex_call(&c4_e_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c4_e_st, NULL, "message", 1U, 2U, 14, c4_i_y, 14,
                        c4_j_y)));
        }

        c4_h_y = c4_cv1[(uint8_T)c4_b_x & 127];
        c4_c_st.site = &c4_nd_emlrtRSI;
        c4_c_x = c4_b[c4_b_kstr];
        c4_d_st.site = &c4_od_emlrtRSI;
        c4_d_x = c4_c_x;
        c4_e_st.site = &c4_pd_emlrtRSI;
        c4_g_s = c4_d_x;
        c4_h_s = c4_g_s;
        c4_b3 = ((real_T)(uint8_T)c4_h_s <= 127.0);
        c4_d_p = c4_b3;
        if (!c4_d_p) {
          c4_k_y = NULL;
          sf_mex_assign(&c4_k_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_m_y = NULL;
          sf_mex_assign(&c4_m_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_d_u = MAX_int8_T;
          c4_n_y = NULL;
          sf_mex_assign(&c4_n_y, sf_mex_create("y", &c4_d_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c4_e_st, &c4_fb_emlrtMCI, "error", 0U, 2U, 14, c4_k_y, 14,
                      sf_mex_call(&c4_e_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c4_e_st, NULL, "message", 1U, 2U, 14, c4_m_y, 14,
                        c4_n_y)));
        }

        c4_l_y = c4_cv1[(uint8_T)c4_d_x & 127];
        if (c4_h_y != c4_l_y) {
          c4_exitg1 = 1;
        } else {
          c4_kstr++;
        }
      } else {
        c4_bool = true;
        c4_exitg1 = 1;
      }
    } while (c4_exitg1 == 0);
  }

  return c4_bool;
}

static void c4_b_DataConverter_word2bytes(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_icomm_interface_coder_modbus_DataConverter *c4_obj, uint16_T c4_wordval,
  uint8_T c4_bytes[2])
{
  c4_emxArray_char_T *c4_out;
  c4_icomm_interface_coder_modbus_DataConverter *c4_b_obj;
  c4_icomm_interface_coder_modbus_DataConverter *c4_c_obj;
  emlrtStack c4_b_st;
  emlrtStack c4_st;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i2;
  int32_T c4_loop_ub;
  uint16_T c4_b_x;
  uint16_T c4_convertedWordVal;
  uint16_T c4_x;
  char_T c4_d_obj[13];
  uint8_T c4_y[2];
  uint8_T c4_xtmp;
  boolean_T c4_b_out;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_convertedWordVal = c4_wordval;
  c4_st.site = &c4_qd_emlrtRSI;
  c4_b_obj = c4_obj;
  c4_emxInit_char_T(chartInstance, &c4_st, &c4_out, 2, &c4_nb_emlrtRTEI);
  c4_b_st.site = &c4_td_emlrtRSI;
  c4_c_obj = c4_b_obj;
  c4_i = c4_out->size[0] * c4_out->size[1];
  c4_out->size[0] = 1;
  c4_out->size[1] = c4_c_obj->ByteOrder->size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_out, c4_i,
    &c4_mb_emlrtRTEI);
  c4_loop_ub = c4_c_obj->ByteOrder->size[1] - 1;
  for (c4_i1 = 0; c4_i1 <= c4_loop_ub; c4_i1++) {
    c4_out->data[c4_i1] = c4_c_obj->ByteOrder->data[c4_i1];
  }

  c4_b_st.site = &c4_td_emlrtRSI;
  for (c4_i2 = 0; c4_i2 < 13; c4_i2++) {
    c4_d_obj[c4_i2] = c4_b_obj->MachineByteOrder[c4_i2];
  }

  c4_b_out = !c4_e_strcmp(chartInstance, &c4_b_st, c4_out, c4_d_obj);
  c4_emxFree_char_T(chartInstance, &c4_out);
  if (c4_b_out) {
    c4_st.site = &c4_rd_emlrtRSI;
    c4_x = c4_convertedWordVal;
    memcpy((void *)&c4_y[0], (void *)&c4_x, (size_t)2 * sizeof(uint8_T));
    c4_xtmp = c4_y[0];
    c4_y[0] = c4_y[1];
    c4_y[1] = c4_xtmp;
    memcpy((void *)&c4_convertedWordVal, (void *)&c4_y[0], (size_t)1 * sizeof
           (uint16_T));
  }

  c4_st.site = &c4_sd_emlrtRSI;
  c4_b_x = c4_convertedWordVal;
  memcpy((void *)&c4_bytes[0], (void *)&c4_b_x, (size_t)2 * sizeof(uint8_T));
}

static void c4_Modbus_executeWrite(SFc4_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_icomm_interface_modbus_tcpip_Modbus *c4_obj,
  c4_emxArray_uint8_T *c4_reqPacket)
{
  static char_T c4_b_cv[37] = { 't', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't', 'l',
    'i', 'b', ':', 't', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't', ':', 'i', 'n',
    'v', 'a', 'l', 'i', 'd', 'D', 'a', 't', 'a', 'D', 'i', 'm' };

  static char_T c4_b_cv2[34] = { 't', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't',
    'l', 'i', 'b', ':', 't', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't', ':', 'w',
    'r', 'i', 't', 'e', 'F', 'a', 'i', 'l', 'e', 'd' };

  static char_T c4_b_cv1[4] = { 'd', 'a', 't', 'a' };

  CoderChannel c4_b_chImpl;
  CoderChannel c4_c_chImpl;
  CoderChannel c4_chImpl;
  CoderChannel c4_d_chImpl;
  CoderOutputStream c4_b_streamImpl;
  CoderOutputStream c4_c_streamImpl;
  CoderOutputStream c4_d_streamImpl;
  CoderOutputStream c4_streamImpl;
  c4_cell_35 c4_args;
  c4_cell_wrap_33 c4_r;
  c4_emxArray_cell_wrap_33_1 c4_r1;
  c4_emxArray_cell_wrap_33_1x1 c4_packets;
  c4_emxArray_char_T *c4_out;
  c4_emxArray_uint8_T *c4_data;
  c4_emxArray_uint8_T *c4_value;
  c4_icomm_interface_modbus_tcpip_Modbus *c4_b_obj;
  c4_icomm_interface_modbus_tcpip_Modbus *c4_c_obj;
  c4_matlabshared_asyncio_internal_Channel *c4_k_obj;
  c4_matlabshared_asyncio_internal_Channel *c4_m_obj;
  c4_matlabshared_asyncio_internal_OutputStream *c4_j_obj;
  c4_matlabshared_asyncio_internal_OutputStream *c4_l_obj;
  c4_matlabshared_asyncio_internal_OutputStream *c4_n_obj;
  c4_matlabshared_network_internal_TCPClient *c4_varargin_1;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co
    *c4_b_varargin_1;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co
    *c4_c_varargin_1;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_d_obj;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_e_obj;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_f_obj;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_h_obj;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_i_obj;
  c4_s_n2xUWXvqAPN0OsmrtE3c5D c4_options;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_e_st;
  emlrtStack c4_f_st;
  emlrtStack c4_g_st;
  emlrtStack c4_h_st;
  emlrtStack c4_i_st;
  emlrtStack c4_j_st;
  emlrtStack c4_k_st;
  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_f_y = NULL;
  const mxArray *c4_g_y = NULL;
  const mxArray *c4_h_y = NULL;
  real_T c4_b_r[2];
  real_T c4_b_count;
  real_T c4_b_packetStartIndex;
  real_T c4_count;
  real_T c4_countToWrite;
  real_T c4_countWrittenThisIteration;
  real_T c4_numBytes;
  real_T c4_packetEndIndex;
  real_T c4_packetStartIndex;
  real_T c4_u;
  uint64_T c4_b_exampleValue;
  uint64_T c4_exampleValue;
  uint64_T c4_numBytesWritten;
  int32_T c4_b_packets[2];
  int32_T c4_errorStr_size[2];
  int32_T c4_status_size[2];
  int32_T c4_iv[1];
  int32_T c4_b_k;
  int32_T c4_b_loop_ub;
  int32_T c4_b_success;
  int32_T c4_c_loop_ub;
  int32_T c4_c_success;
  int32_T c4_d_loop_ub;
  int32_T c4_d_success;
  int32_T c4_e_loop_ub;
  int32_T c4_e_success;
  int32_T c4_f_loop_ub;
  int32_T c4_f_success;
  int32_T c4_g_loop_ub;
  int32_T c4_h_loop_ub;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i15;
  int32_T c4_i16;
  int32_T c4_i17;
  int32_T c4_i18;
  int32_T c4_i19;
  int32_T c4_i2;
  int32_T c4_i20;
  int32_T c4_i21;
  int32_T c4_i22;
  int32_T c4_i23;
  int32_T c4_i24;
  int32_T c4_i25;
  int32_T c4_i26;
  int32_T c4_i27;
  int32_T c4_i28;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_i_loop_ub;
  int32_T c4_ii;
  int32_T c4_j_loop_ub;
  int32_T c4_k;
  int32_T c4_loop_ub;
  int32_T c4_nx;
  int32_T c4_success;
  uint16_T c4_b_u;
  uint16_T c4_i_y;
  char_T c4_g_obj[13];
  char_T c4_errorStr_data[9];
  char_T c4_status_data[9];
  uint8_T c4_b_x[2];
  uint8_T c4_transactionID;
  boolean_T c4_x[2];
  boolean_T c4_b;
  boolean_T c4_exitg1;
  boolean_T c4_exitg2;
  boolean_T c4_guard1;
  boolean_T c4_retry;
  boolean_T c4_y;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_e_st.prev = &c4_d_st;
  c4_e_st.tls = c4_d_st.tls;
  c4_f_st.prev = &c4_e_st;
  c4_f_st.tls = c4_e_st.tls;
  c4_g_st.prev = &c4_f_st;
  c4_g_st.tls = c4_f_st.tls;
  c4_h_st.prev = &c4_g_st;
  c4_h_st.tls = c4_g_st.tls;
  c4_i_st.prev = &c4_h_st;
  c4_i_st.tls = c4_h_st.tls;
  c4_j_st.prev = &c4_i_st;
  c4_j_st.tls = c4_i_st.tls;
  c4_k_st.prev = &c4_j_st;
  c4_k_st.tls = c4_j_st.tls;
  c4_retry = true;
  c4_emxInit_uint8_T(chartInstance, c4_sp, &c4_data, 2, &c4_l_emlrtRTEI);
  c4_emxInit_char_T(chartInstance, c4_sp, &c4_out, 2, &c4_l_emlrtRTEI);
  c4_emxInitStruct_s_n2xUWXvqAPN0Osm(chartInstance, c4_sp, &c4_options,
    &c4_l_emlrtRTEI);
  c4_emxInitStruct_cell_wrap_33(chartInstance, c4_sp, &c4_r, &c4_vb_emlrtRTEI);
  c4_emxInitStruct_cell_35(chartInstance, c4_sp, &c4_args, &c4_vb_emlrtRTEI);
  c4_emxInit_cell_wrap_33_1x1(chartInstance, &c4_packets);
  c4_emxInit_cell_wrap_33_1(chartInstance, &c4_r1);
  c4_emxInit_uint8_T(chartInstance, c4_sp, &c4_value, 2, &c4_v_emlrtRTEI);
  while (c4_retry) {
    c4_st.site = &c4_he_emlrtRSI;
    c4_b_obj = c4_obj;
    c4_b_st.site = &c4_ie_emlrtRSI;
    c4_c_obj = c4_b_obj;
    c4_c_st.site = &c4_le_emlrtRSI;
    c4_varargin_1 = c4_c_obj->TcpIpObj;
    c4_d_st.site = &c4_n_emlrtRSI;
    c4_TCPClient_validateConnected(chartInstance, &c4_d_st, c4_varargin_1);
    c4_d_st.site = &c4_n_emlrtRSI;
    c4_b_varargin_1 = c4_varargin_1->TransportChannel;
    c4_d_obj = c4_b_varargin_1;
    c4_e_st.site = &c4_qb_emlrtRSI;
    c4_c_varargin_1 = c4_b_varargin_1;
    c4_f_st.site = &c4_qb_emlrtRSI;
    for (c4_i = 0; c4_i < 2; c4_i++) {
      c4_b_r[c4_i] = (real_T)c4_reqPacket->size[c4_i];
    }

    for (c4_i1 = 0; c4_i1 < 2; c4_i1++) {
      c4_x[c4_i1] = (c4_b_r[c4_i1] > 1.0);
    }

    c4_y = true;
    c4_k = 1;
    c4_exitg1 = false;
    while ((!c4_exitg1) && (c4_k - 1 < 2)) {
      c4_b_k = c4_k - 1;
      if (!c4_x[c4_b_k]) {
        c4_y = false;
        c4_exitg1 = true;
      } else {
        c4_k++;
      }
    }

    if (c4_y) {
      c4_b_y = NULL;
      sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1,
        37), false);
      c4_c_y = NULL;
      sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1,
        37), false);
      c4_u = 2.0;
      c4_d_y = NULL;
      sf_mex_assign(&c4_d_y, sf_mex_create("y", &c4_u, 0, 0U, 0U, 0U, 0), false);
      c4_e_y = NULL;
      sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2, 1,
        4), false);
      sf_mex_call(&c4_f_st, &c4_gb_emlrtMCI, "error", 0U, 2U, 14, c4_b_y, 14,
                  sf_mex_call(&c4_f_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c4_f_st, NULL, "message", 1U, 3U, 14, c4_c_y, 14, c4_d_y,
                    14, c4_e_y)));
    }

    c4_i2 = c4_data->size[0] * c4_data->size[1];
    c4_data->size[0] = 1;
    c4_data->size[1] = c4_reqPacket->size[1];
    c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_e_st, c4_data, c4_i2,
      &c4_l_emlrtRTEI);
    c4_loop_ub = c4_reqPacket->size[1] - 1;
    for (c4_i3 = 0; c4_i3 <= c4_loop_ub; c4_i3++) {
      c4_data->data[c4_i3] = c4_reqPacket->data[c4_i3];
    }

    c4_f_st.site = &c4_qb_emlrtRSI;
    c4_e_obj = c4_c_varargin_1;
    c4_i4 = c4_out->size[0] * c4_out->size[1];
    c4_out->size[0] = 1;
    c4_out->size[1] = c4_e_obj->ByteOrder->size[1];
    c4_emxEnsureCapacity_char_T(chartInstance, &c4_f_st, c4_out, c4_i4,
      &c4_l_emlrtRTEI);
    c4_b_loop_ub = c4_e_obj->ByteOrder->size[1] - 1;
    for (c4_i5 = 0; c4_i5 <= c4_b_loop_ub; c4_i5++) {
      c4_out->data[c4_i5] = c4_e_obj->ByteOrder->data[c4_i5];
    }

    c4_f_st.site = &c4_qb_emlrtRSI;
    c4_f_obj = c4_c_varargin_1;
    c4_g_st.site = &c4_rb_emlrtRSI;
    for (c4_i6 = 0; c4_i6 < 13; c4_i6++) {
      c4_g_obj[c4_i6] = c4_f_obj->MachineByteOrder[c4_i6];
    }

    c4_e_strcmp(chartInstance, &c4_g_st, c4_out, c4_g_obj);
    c4_f_st.site = &c4_qb_emlrtRSI;
    c4_i7 = c4_value->size[0] * c4_value->size[1];
    c4_value->size[0] = 1;
    c4_value->size[1] = c4_data->size[1];
    c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_f_st, c4_value, c4_i7,
      &c4_l_emlrtRTEI);
    c4_c_loop_ub = c4_data->size[1] - 1;
    for (c4_i8 = 0; c4_i8 <= c4_c_loop_ub; c4_i8++) {
      c4_value->data[c4_i8] = c4_data->data[c4_i8];
    }

    c4_nx = c4_value->size[1];
    c4_i9 = c4_data->size[0] * c4_data->size[1];
    c4_data->size[0] = 1;
    c4_data->size[1] = c4_nx;
    c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_f_st, c4_data, c4_i9,
      &c4_ob_emlrtRTEI);
    memcpy((void *)&c4_data->data[0], (void *)&c4_value->data[0], (size_t)c4_nx *
           sizeof(uint8_T));
    if (c4_c_varargin_1->WriteAsync) {
      c4_f_st.site = &c4_qb_emlrtRSI;
      c4_i_obj = c4_c_varargin_1;
      c4_g_st.site = &c4_qb_emlrtRSI;
      c4_j_obj = &c4_i_obj->AsyncIOChannel->OutputStream;
      c4_numBytes = 0.0;
      c4_errorStr_size[1] = 0;
      c4_countToWrite = (real_T)c4_data->size[1];
      c4_i12 = c4_r.f1->size[0] * c4_r.f1->size[1];
      c4_r.f1->size[0] = 1;
      c4_r.f1->size[1] = c4_data->size[1];
      c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_g_st, c4_r.f1, c4_i12,
        &c4_l_emlrtRTEI);
      c4_e_loop_ub = c4_data->size[1] - 1;
      for (c4_i13 = 0; c4_i13 <= c4_e_loop_ub; c4_i13++) {
        c4_r.f1->data[c4_i13] = c4_data->data[c4_i13];
      }

      c4_i14 = c4_packets.size[0] * c4_packets.size[1];
      c4_packets.size[0] = 1;
      c4_packets.size[1] = 1;
      for (c4_i16 = 0; c4_i16 < 2; c4_i16++) {
        c4_b_packets[c4_i16] = c4_packets.size[c4_i16];
      }

      c4_emxEnsureCapacity_cell_wrap_33(chartInstance, &c4_g_st, c4_packets.data,
        c4_b_packets, c4_i14, &c4_pb_emlrtRTEI);
      c4_emxCopyStruct_cell_wrap_33(chartInstance, &c4_g_st, &c4_packets.data[0],
        &c4_r, &c4_pb_emlrtRTEI);
      c4_packetStartIndex = 1.0;
      c4_exitg1 = false;
      while ((!c4_exitg1) && (c4_numBytes < c4_countToWrite)) {
        c4_h_st.site = &c4_me_emlrtRSI;
        c4_l_obj = c4_j_obj;
        c4_i_st.site = &c4_re_emlrtRSI;
        c4_streamImpl = c4_l_obj->StreamImpl;
        c4_success = coderStreamGetSpaceAvailable(c4_streamImpl, &c4_count);
        c4_j_st.site = &c4_se_emlrtRSI;
        c4_b_streamImpl = c4_streamImpl;
        c4_b_success = c4_success;
        if ((real_T)c4_b_success == 0.0) {
          c4_b_chImpl = coderStreamGetChannel(c4_b_streamImpl);
          c4_k_st.site = &c4_te_emlrtRSI;
          c4_b_API_channelErrorIfFailed(chartInstance, &c4_k_st, c4_b_chImpl);
        }

        c4_guard1 = false;
        if (c4_count == 0.0) {
          c4_h_st.site = &c4_ne_emlrtRSI;
          c4_Stream_wait(chartInstance, &c4_h_st, c4_j_obj, c4_status_data,
                         c4_status_size);
          c4_h_st.site = &c4_oe_emlrtRSI;
          if (!c4_f_strcmp(chartInstance, &c4_h_st, c4_status_data,
                           c4_status_size)) {
            c4_errorStr_size[1] = c4_status_size[1];
            c4_i_loop_ub = c4_status_size[1] - 1;
            for (c4_i23 = 0; c4_i23 <= c4_i_loop_ub; c4_i23++) {
              c4_errorStr_data[c4_i23] = c4_status_data[c4_i23];
            }

            c4_h_st.site = &c4_pe_emlrtRSI;
            if (c4_g_strcmp(chartInstance, &c4_h_st, c4_status_data,
                            c4_status_size)) {
              c4_errorStr_size[1] = 0;
            }

            c4_exitg1 = true;
          } else {
            c4_guard1 = true;
          }
        } else {
          c4_guard1 = true;
        }

        if (c4_guard1) {
          c4_h_st.site = &c4_qe_emlrtRSI;
          c4_n_obj = c4_j_obj;
          c4_b_packetStartIndex = c4_packetStartIndex;
          c4_b_count = 0.0;
          c4_packetEndIndex = c4_b_packetStartIndex;
          c4_i24 = (int32_T)(1.0 + (1.0 - c4_b_packetStartIndex));
          emlrtForLoopVectorCheckR2021a(c4_b_packetStartIndex, 1.0, 1.0,
            mxDOUBLE_CLASS, c4_i24, &c4_kd_emlrtRTEI, &c4_h_st);
          c4_ii = 0;
          c4_exitg2 = false;
          while ((!c4_exitg2) && (c4_ii <= c4_i24 - 1)) {
            c4_i25 = c4_r1.size[0];
            c4_r1.size[0] = 1;
            c4_iv[0] = c4_r1.size[0];
            c4_emxEnsureCapacity_cell_wrap_331(chartInstance, &c4_h_st,
              c4_r1.data, c4_iv, c4_i25, &c4_tb_emlrtRTEI);
            c4_emxCopyStruct_cell_wrap_33(chartInstance, &c4_h_st, &c4_r1.data[0],
              &c4_packets.data[0], &c4_tb_emlrtRTEI);
            if (c4_b_packetStartIndex != (real_T)(int32_T)muDoubleScalarFloor
                (c4_b_packetStartIndex)) {
              emlrtIntegerCheckR2012b(c4_b_packetStartIndex, &c4_f_emlrtDCI,
                &c4_h_st);
            }

            c4_i26 = (int32_T)c4_b_packetStartIndex - 1;
            if ((c4_i26 < 0) || (c4_i26 > 0)) {
              emlrtDynamicBoundsCheckR2012b(c4_i26, 0, 0, &c4_i_emlrtBCI,
                &c4_h_st);
            }

            c4_i27 = c4_value->size[0] * c4_value->size[1];
            c4_value->size[0] = 1;
            c4_value->size[1] = c4_r1.data[0].f1->size[1];
            c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_h_st, c4_value,
              c4_i27, &c4_ub_emlrtRTEI);
            c4_j_loop_ub = c4_r1.data[0].f1->size[1] - 1;
            for (c4_i28 = 0; c4_i28 <= c4_j_loop_ub; c4_i28++) {
              c4_value->data[c4_i28] = c4_r1.data[0].f1->data[c4_i28];
            }

            c4_i_st.site = &c4_of_emlrtRSI;
            c4_c_streamImpl = c4_n_obj->StreamImpl;
            c4_e_success = coderOutputStreamWriteTypedDataOld(c4_c_streamImpl,
              &c4_countWrittenThisIteration, 1, "uint8", c4_value->size[1],
              &c4_value->data[0]);
            c4_j_st.site = &c4_pf_emlrtRSI;
            c4_d_streamImpl = c4_c_streamImpl;
            c4_f_success = c4_e_success;
            if ((real_T)c4_f_success == 0.0) {
              c4_d_chImpl = coderStreamGetChannel(c4_d_streamImpl);
              c4_k_st.site = &c4_te_emlrtRSI;
              c4_b_API_channelErrorIfFailed(chartInstance, &c4_k_st, c4_d_chImpl);
            }

            if (c4_countWrittenThisIteration == 0.0) {
              c4_exitg2 = true;
            } else {
              c4_b_count += c4_countWrittenThisIteration;
              c4_packetEndIndex++;
              c4_ii++;
            }
          }

          c4_numBytes += c4_b_count;
          c4_packetStartIndex = c4_packetEndIndex;
        }
      }

      c4_b = (c4_errorStr_size[1] == 0);
      if (!c4_b) {
        c4_f_y = NULL;
        sf_mex_assign(&c4_f_y, sf_mex_create("y", c4_b_cv2, 10, 0U, 1U, 0U, 2, 1,
          34), false);
        c4_g_y = NULL;
        sf_mex_assign(&c4_g_y, sf_mex_create("y", c4_b_cv2, 10, 0U, 1U, 0U, 2, 1,
          34), false);
        c4_h_y = NULL;
        sf_mex_assign(&c4_h_y, sf_mex_create("y", &c4_errorStr_data, 10, 0U, 1U,
          0U, 2, 1, c4_errorStr_size[1]), false);
        sf_mex_call(&c4_f_st, &c4_gb_emlrtMCI, "error", 0U, 2U, 14, c4_f_y, 14,
                    sf_mex_call(&c4_f_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c4_f_st, NULL, "message", 1U, 2U, 14, c4_g_y, 14, c4_h_y)));
      }

      c4_i_obj->NumBytesWritten += c4_numBytes;
    } else {
      c4_f_st.site = &c4_qb_emlrtRSI;
      c4_h_obj = c4_c_varargin_1;
      c4_i10 = c4_options.Data->size[0] * c4_options.Data->size[1];
      c4_options.Data->size[0] = 1;
      c4_options.Data->size[1] = c4_data->size[1];
      c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_f_st, c4_options.Data,
        c4_i10, &c4_l_emlrtRTEI);
      c4_d_loop_ub = c4_data->size[1] - 1;
      for (c4_i11 = 0; c4_i11 <= c4_d_loop_ub; c4_i11++) {
        c4_options.Data->data[c4_i11] = c4_data->data[c4_i11];
      }

      c4_g_st.site = &c4_qb_emlrtRSI;
      c4_k_obj = c4_h_obj->AsyncIOChannel;
      c4_h_st.site = &c4_qf_emlrtRSI;
      c4_chImpl = c4_k_obj->ChannelImpl;
      c4_args.f1 = "Data";
      c4_args.f2 = "uint8";
      c4_args.f3 = c4_options.Data->size[1];
      c4_i15 = c4_value->size[0] * c4_value->size[1];
      c4_value->size[0] = 1;
      c4_value->size[1] = c4_options.Data->size[1];
      c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_h_st, c4_value, c4_i15,
        &c4_u_emlrtRTEI);
      c4_f_loop_ub = c4_options.Data->size[1] - 1;
      for (c4_i17 = 0; c4_i17 <= c4_f_loop_ub; c4_i17++) {
        c4_value->data[c4_i17] = c4_options.Data->data[c4_i17];
      }

      c4_i18 = c4_args.f4->size[0] * c4_args.f4->size[1];
      c4_args.f4->size[0] = 1;
      c4_args.f4->size[1] = c4_value->size[1];
      c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_h_st, c4_args.f4, c4_i18,
        &c4_qb_emlrtRTEI);
      c4_g_loop_ub = c4_value->size[1] - 1;
      for (c4_i19 = 0; c4_i19 <= c4_g_loop_ub; c4_i19++) {
        c4_args.f4->data[c4_i19] = c4_value->data[c4_i19];
      }

      c4_i20 = c4_value->size[0] * c4_value->size[1];
      c4_value->size[0] = 1;
      c4_value->size[1] = c4_args.f4->size[1];
      c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_h_st, c4_value, c4_i20,
        &c4_rb_emlrtRTEI);
      c4_h_loop_ub = c4_args.f4->size[1] - 1;
      for (c4_i22 = 0; c4_i22 <= c4_h_loop_ub; c4_i22++) {
        c4_value->data[c4_i22] = c4_args.f4->data[c4_i22];
      }

      c4_c_success = coderChannelExecute(c4_chImpl, "Write", 1, c4_args.f1,
        c4_args.f2, c4_args.f3, &c4_value->data[0]);
      c4_i_st.site = &c4_rf_emlrtRSI;
      c4_API_channelErrorIfFailed(chartInstance, &c4_i_st, c4_chImpl,
        c4_c_success);
      c4_g_st.site = &c4_qb_emlrtRSI;
      c4_m_obj = c4_h_obj->AsyncIOChannel;
      c4_exampleValue = c4_m_obj->CustomProps.LatestNumBytesWrittenToDevice;
      c4_h_st.site = &c4_lc_emlrtRSI;
      c4_c_chImpl = c4_m_obj->ChannelImpl;
      c4_b_exampleValue = c4_exampleValue;
      c4_numBytesWritten = c4_b_exampleValue;
      c4_d_success = coderChannelGetPropertyValue(c4_c_chImpl,
        "LatestNumBytesWrittenToDevice", "uint64", 1, &c4_numBytesWritten);
      c4_i_st.site = &c4_mc_emlrtRSI;
      c4_API_channelErrorIfFailed(chartInstance, &c4_i_st, c4_c_chImpl,
        c4_d_success);
      c4_h_obj->NumBytesWritten += (real_T)c4_numBytesWritten;
    }

    c4_e_st.site = &c4_qb_emlrtRSI;
    c4_OutputStream_drain(chartInstance, &c4_e_st, &c4_d_obj->
                          AsyncIOChannel->OutputStream);
    c4_b_st.site = &c4_je_emlrtRSI;
    for (c4_i21 = 0; c4_i21 < 2; c4_i21++) {
      c4_b_x[c4_i21] = c4_reqPacket->data[1 - c4_i21];
    }

    memcpy((void *)&c4_i_y, (void *)&c4_b_x[0], (size_t)1 * sizeof(uint16_T));
    c4_b_u = c4_i_y;
    if (c4_b_u > 255) {
      c4_b_u = 255U;
    }

    c4_transactionID = (uint8_T)c4_b_u;
    c4_b_st.site = &c4_ke_emlrtRSI;
    c4_retry = c4_Modbus_getWriteResponse(chartInstance, &c4_b_st, c4_b_obj,
      c4_transactionID);
  }

  c4_emxFree_uint8_T(chartInstance, &c4_value);
  c4_emxFree_cell_wrap_33_1(chartInstance, &c4_r1);
  c4_emxFree_cell_wrap_33_1x1(chartInstance, &c4_packets);
  c4_emxFreeStruct_cell_35(chartInstance, &c4_args);
  c4_emxFreeStruct_cell_wrap_33(chartInstance, &c4_r);
  c4_emxFreeStruct_s_n2xUWXvqAPN0Osm(chartInstance, &c4_options);
  c4_emxFree_char_T(chartInstance, &c4_out);
  c4_emxFree_uint8_T(chartInstance, &c4_data);
}

static void c4_TCPClient_validateConnected(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_matlabshared_network_internal_TCPClient *c4_obj)
{
  static char_T c4_b_cv[45] = { 't', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't', 'l',
    'i', 'b', ':', 't', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't', ':', 'i', 'n',
    'v', 'a', 'l', 'i', 'd', 'C', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n',
    'S', 't', 'a', 't', 'e' };

  static char_T c4_b_cv1[13] = { 'r', 'e', 'm', 'o', 't', 'e', ' ', 's', 'e',
    'r', 'v', 'e', 'r' };

  CoderChannel c4_chImpl;
  c4_matlabshared_asyncio_internal_Channel *c4_d_obj;
  c4_matlabshared_network_internal_TCPClient *c4_b_obj;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_c_obj;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_e_st;
  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_y = NULL;
  int32_T c4_success;
  boolean_T c4_b_value;
  boolean_T c4_out;
  boolean_T c4_value;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_e_st.prev = &c4_d_st;
  c4_e_st.tls = c4_d_st.tls;
  c4_st.site = &c4_n_emlrtRSI;
  c4_b_obj = c4_obj;
  c4_b_st.site = &c4_n_emlrtRSI;
  c4_c_obj = c4_b_obj->TransportChannel;
  c4_c_st.site = &c4_qb_emlrtRSI;
  c4_d_obj = c4_c_obj->AsyncIOChannel;
  c4_d_st.site = &c4_fc_emlrtRSI;
  c4_chImpl = c4_d_obj->ChannelImpl;
  c4_success = coderChannelIsOpen(c4_chImpl, &c4_out);
  c4_e_st.site = &c4_gc_emlrtRSI;
  c4_API_channelErrorIfFailed(chartInstance, &c4_e_st, c4_chImpl, c4_success);
  if (c4_out) {
    c4_value = true;
  } else {
    c4_value = false;
  }

  c4_b_value = c4_value;
  if (!c4_b_value) {
    c4_y = NULL;
    sf_mex_assign(&c4_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 45),
                  false);
    c4_b_y = NULL;
    sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 45),
                  false);
    c4_c_y = NULL;
    sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2, 1, 13),
                  false);
    sf_mex_call(c4_sp, &c4_e_emlrtMCI, "error", 0U, 2U, 14, c4_y, 14,
                sf_mex_call(c4_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c4_sp, NULL, "message", 1U, 2U, 14, c4_b_y, 14, c4_c_y)));
  }
}

static void c4_b_API_channelErrorIfFailed(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, CoderChannel c4_chImpl)
{
  emlrtStack c4_b_st;
  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_y = NULL;
  int32_T c4_errorID_size[2];
  char_T c4_errorID[1024];
  char_T c4_errorID_data[1024];
  char_T c4_errorText[1024];
  boolean_T c4_hasSyncError;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  coderChannelHasSyncError(c4_chImpl, &c4_hasSyncError);
  if (!c4_hasSyncError) {
    coderChannelGetLastError(c4_chImpl, &c4_errorID[0], &c4_errorText[0]);
    c4_st.site = &c4_eb_emlrtRSI;
    c4_API_dispatchInternalError(chartInstance, &c4_st, c4_errorID, c4_errorText);
  } else {
    coderChannelGetLastSyncError(c4_chImpl, &c4_errorID[0], &c4_errorText[0]);
    c4_st.site = &c4_fb_emlrtRSI;
    c4_b_st.site = &c4_gb_emlrtRSI;
    c4_API_trimString(chartInstance, &c4_b_st, c4_errorID, c4_errorID_data,
                      c4_errorID_size);
    c4_y = NULL;
    sf_mex_assign(&c4_y, sf_mex_create("y", c4_cv9, 10, 0U, 1U, 0U, 2, 1, 37),
                  false);
    c4_b_y = NULL;
    sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_cv9, 10, 0U, 1U, 0U, 2, 1, 37),
                  false);
    c4_c_y = NULL;
    sf_mex_assign(&c4_c_y, sf_mex_create("y", &c4_errorID_data, 10, 0U, 1U, 0U,
      2, 1, c4_errorID_size[1]), false);
    c4_d_y = NULL;
    sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_errorText, 10, 0U, 1U, 0U, 2, 1,
      1024), false);
    sf_mex_call(&c4_st, &c4_v_emlrtMCI, "error", 0U, 2U, 14, c4_y, 14,
                sf_mex_call(&c4_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_st, NULL, "message", 1U, 3U, 14, c4_b_y, 14, c4_c_y, 14, c4_d_y)));
  }
}

static void c4_Stream_wait(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_matlabshared_asyncio_internal_OutputStream *c4_obj,
  char_T c4_status_data[], int32_T c4_status_size[2])
{
  static char_T c4_b_cv1[7] = { 't', 'i', 'm', 'e', 'o', 'u', 't' };

  static char_T c4_b_cv2[5] = { 'p', 'a', 'u', 's', 'e' };

  static char_T c4_b_cv3[5] = { 'p', 'a', 'u', 's', 'e' };

  static char_T c4_b_cv[4] = { 'd', 'o', 'n', 'e' };

  CoderChannel c4_b_chImpl;
  CoderChannel c4_c_chImpl;
  CoderChannel c4_chImpl;
  CoderChannel c4_d_chImpl;
  CoderOutputStream c4_b_streamImpl;
  CoderOutputStream c4_c_streamImpl;
  CoderOutputStream c4_d_streamImpl;
  CoderOutputStream c4_e_streamImpl;
  CoderOutputStream c4_f_streamImpl;
  CoderOutputStream c4_g_streamImpl;
  CoderOutputStream c4_h_streamImpl;
  CoderOutputStream c4_streamImpl;
  c4_matlabshared_asyncio_internal_OutputStream *c4_b_obj;
  c4_matlabshared_asyncio_internal_OutputStream *c4_c_obj;
  c4_matlabshared_asyncio_internal_OutputStream *c4_d_obj;
  c4_matlabshared_asyncio_internal_OutputStream *c4_e_obj;
  c4_matlabshared_asyncio_internal_OutputStream *c4_f_obj;
  c4_matlabshared_asyncio_internal_OutputStream *c4_g_obj;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_e_st;
  emlrtStack c4_st;
  emlrtTimespec c4_startTic;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_y = NULL;
  real_T c4_b_count;
  real_T c4_b_varargin_1;
  real_T c4_count;
  real_T c4_et;
  real_T c4_timeoutInSeconds;
  real_T c4_varargin_1;
  int32_T c4_b_success;
  int32_T c4_c_success;
  int32_T c4_d_success;
  int32_T c4_e_success;
  int32_T c4_f_success;
  int32_T c4_g_success;
  int32_T c4_h_success;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i2;
  int32_T c4_success;
  boolean_T c4_b_done;
  boolean_T c4_b_result;
  boolean_T c4_completed;
  boolean_T c4_done;
  boolean_T c4_result;
  boolean_T c4_timeout;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_e_st.prev = &c4_d_st;
  c4_e_st.tls = c4_d_st.tls;
  c4_timeoutInSeconds = c4_obj->Timeout;
  c4_status_size[0] = 1;
  c4_status_size[1] = 0;
  c4_timeout = false;
  c4_done = false;
  c4_st.site = &c4_ue_emlrtRSI;
  c4_b_obj = c4_obj;
  c4_b_st.site = &c4_ne_emlrtRSI;
  c4_c_obj = c4_b_obj;
  c4_c_st.site = &c4_re_emlrtRSI;
  c4_streamImpl = c4_c_obj->StreamImpl;
  c4_success = coderStreamGetSpaceAvailable(c4_streamImpl, &c4_count);
  c4_d_st.site = &c4_se_emlrtRSI;
  c4_b_streamImpl = c4_streamImpl;
  c4_b_success = c4_success;
  if ((real_T)c4_b_success == 0.0) {
    c4_chImpl = coderStreamGetChannel(c4_b_streamImpl);
    c4_e_st.site = &c4_te_emlrtRSI;
    c4_b_API_channelErrorIfFailed(chartInstance, &c4_e_st, c4_chImpl);
  }

  c4_completed = (c4_count > 0.0);
  c4_st.site = &c4_ve_emlrtRSI;
  c4_startTic = c4_tic(chartInstance, &c4_st);
  while ((!c4_completed) && (!c4_done) && (!c4_timeout)) {
    c4_st.site = &c4_we_emlrtRSI;
    c4_et = c4_toc(chartInstance, &c4_st, c4_startTic);
    if (c4_et < 1.0) {
      c4_st.site = &c4_xe_emlrtRSI;
      c4_b_st.site = &c4_if_emlrtRSI;
      c4_b_varargin_1 = 0.0;
      c4_b_y = NULL;
      sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_b_cv3, 10, 0U, 1U, 0U, 2, 1,
        5), false);
      c4_d_y = NULL;
      sf_mex_assign(&c4_d_y, sf_mex_create("y", &c4_b_varargin_1, 0, 0U, 0U, 0U,
        0), false);
      c4_c_st.site = &c4_jf_emlrtRSI;
      c4_b_feval(chartInstance, &c4_c_st, c4_b_y, c4_d_y);
    } else {
      c4_st.site = &c4_ye_emlrtRSI;
      c4_b_st.site = &c4_if_emlrtRSI;
      c4_varargin_1 = 0.005;
      c4_y = NULL;
      sf_mex_assign(&c4_y, sf_mex_create("y", c4_b_cv2, 10, 0U, 1U, 0U, 2, 1, 5),
                    false);
      c4_c_y = NULL;
      sf_mex_assign(&c4_c_y, sf_mex_create("y", &c4_varargin_1, 0, 0U, 0U, 0U, 0),
                    false);
      c4_c_st.site = &c4_jf_emlrtRSI;
      c4_b_feval(chartInstance, &c4_c_st, c4_y, c4_c_y);
    }

    c4_st.site = &c4_af_emlrtRSI;
    c4_et = c4_toc(chartInstance, &c4_st, c4_startTic);
    c4_timeout = (c4_et > c4_timeoutInSeconds);
    c4_st.site = &c4_bf_emlrtRSI;
    c4_d_obj = c4_obj;
    c4_b_st.site = &c4_kf_emlrtRSI;
    c4_c_streamImpl = c4_d_obj->StreamImpl;
    c4_c_success = coderStreamIsDeviceDone(c4_c_streamImpl, &c4_result);
    c4_c_st.site = &c4_lf_emlrtRSI;
    c4_d_streamImpl = c4_c_streamImpl;
    c4_d_success = c4_c_success;
    if ((real_T)c4_d_success == 0.0) {
      c4_b_chImpl = coderStreamGetChannel(c4_d_streamImpl);
      c4_d_st.site = &c4_te_emlrtRSI;
      c4_b_API_channelErrorIfFailed(chartInstance, &c4_d_st, c4_b_chImpl);
    }

    if (c4_result) {
      c4_b_done = true;
    } else {
      c4_st.site = &c4_bf_emlrtRSI;
      c4_e_obj = c4_obj;
      c4_b_st.site = &c4_mf_emlrtRSI;
      c4_e_streamImpl = c4_e_obj->StreamImpl;
      c4_e_success = coderStreamIsOpen(c4_e_streamImpl, &c4_b_result);
      c4_c_st.site = &c4_nf_emlrtRSI;
      c4_f_streamImpl = c4_e_streamImpl;
      c4_f_success = c4_e_success;
      if ((real_T)c4_f_success == 0.0) {
        c4_c_chImpl = coderStreamGetChannel(c4_f_streamImpl);
        c4_d_st.site = &c4_te_emlrtRSI;
        c4_b_API_channelErrorIfFailed(chartInstance, &c4_d_st, c4_c_chImpl);
      }

      if (!c4_b_result) {
        c4_b_done = true;
      } else {
        c4_b_done = false;
      }
    }

    c4_done = c4_b_done;
    c4_st.site = &c4_cf_emlrtRSI;
    c4_f_obj = c4_obj;
    c4_b_st.site = &c4_ne_emlrtRSI;
    c4_g_obj = c4_f_obj;
    c4_c_st.site = &c4_re_emlrtRSI;
    c4_g_streamImpl = c4_g_obj->StreamImpl;
    c4_g_success = coderStreamGetSpaceAvailable(c4_g_streamImpl, &c4_b_count);
    c4_d_st.site = &c4_se_emlrtRSI;
    c4_h_streamImpl = c4_g_streamImpl;
    c4_h_success = c4_g_success;
    if ((real_T)c4_h_success == 0.0) {
      c4_d_chImpl = coderStreamGetChannel(c4_h_streamImpl);
      c4_e_st.site = &c4_te_emlrtRSI;
      c4_b_API_channelErrorIfFailed(chartInstance, &c4_e_st, c4_d_chImpl);
    }

    c4_completed = (c4_b_count > 0.0);
  }

  if (c4_completed) {
    c4_status_size[0] = 1;
    c4_status_size[1] = 9;
    for (c4_i = 0; c4_i < 9; c4_i++) {
      c4_status_data[c4_i] = c4_cv12[c4_i];
    }
  } else if (c4_done) {
    c4_status_size[0] = 1;
    c4_status_size[1] = 4;
    for (c4_i1 = 0; c4_i1 < 4; c4_i1++) {
      c4_status_data[c4_i1] = c4_b_cv[c4_i1];
    }
  } else if (c4_timeout) {
    c4_status_size[0] = 1;
    c4_status_size[1] = 7;
    for (c4_i2 = 0; c4_i2 < 7; c4_i2++) {
      c4_status_data[c4_i2] = c4_b_cv1[c4_i2];
    }
  }
}

static emlrtTimespec c4_tic(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp)
{
  emlrtStack c4_st;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_st.site = &c4_df_emlrtRSI;
  return c4_getTime(chartInstance, &c4_st);
}

static emlrtTimespec c4_getTime(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp)
{
  static char_T c4_b_cv[33] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'C', 'o', 'd', 'e', 'r', 'T', 'i', 'm', 'e', 'C', 'a',
    'l', 'l', 'F', 'a', 'i', 'l', 'e', 'd' };

  static char_T c4_b_cv1[26] = { 'e', 'm', 'l', 'r', 't', 'C', 'l', 'o', 'c',
    'k', 'G', 'e', 't', 't', 'i', 'm', 'e', 'M', 'o', 'n', 'o', 't', 'o', 'n',
    'i', 'c' };

  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_st;
  emlrtTimespec c4_t;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_y = NULL;
  int32_T c4_b_status;
  int32_T c4_status;
  (void)chartInstance;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_st.site = &c4_ef_emlrtRSI;
  c4_b_st.site = &c4_ff_emlrtRSI;
  c4_status = emlrtClockGettimeMonotonic(&c4_t);
  c4_c_st.site = &c4_gf_emlrtRSI;
  c4_b_status = c4_status;
  if (c4_b_status != 0) {
    c4_y = NULL;
    sf_mex_assign(&c4_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 33),
                  false);
    c4_b_y = NULL;
    sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 33),
                  false);
    c4_c_y = NULL;
    sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2, 1, 26),
                  false);
    c4_d_y = NULL;
    sf_mex_assign(&c4_d_y, sf_mex_create("y", &c4_b_status, 6, 0U, 0U, 0U, 0),
                  false);
    sf_mex_call(&c4_c_st, &c4_hb_emlrtMCI, "error", 0U, 2U, 14, c4_y, 14,
                sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_c_st, NULL, "message", 1U, 3U, 14, c4_b_y, 14, c4_c_y, 14, c4_d_y)));
  }

  return c4_t;
}

static real_T c4_toc(SFc4_wwtp3InstanceStruct *chartInstance, const emlrtStack
                     *c4_sp, emlrtTimespec c4_tstart)
{
  emlrtStack c4_st;
  emlrtTimespec c4_tnow;
  real_T c4_tdiff;
  real_T c4_tdiff_nsec;
  real_T c4_tdiff_sec;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_st.site = &c4_hf_emlrtRSI;
  c4_tnow = c4_getTime(chartInstance, &c4_st);
  c4_tdiff_sec = c4_tnow.tv_sec - c4_tstart.tv_sec;
  c4_tdiff_nsec = c4_tnow.tv_nsec - c4_tstart.tv_nsec;
  c4_tdiff = c4_tdiff_sec + c4_tdiff_nsec / 1.0E+9;
  return c4_tdiff;
}

static boolean_T c4_f_strcmp(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, char_T c4_a_data[], int32_T c4_a_size[2])
{
  c4_emxArray_char_T *c4_x;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_e_st;
  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_f_y = NULL;
  const mxArray *c4_g_y = NULL;
  const mxArray *c4_i_y = NULL;
  const mxArray *c4_j_y = NULL;
  const mxArray *c4_k_y = NULL;
  const mxArray *c4_m_y = NULL;
  const mxArray *c4_n_y = NULL;
  const mxArray *c4_y = NULL;
  int32_T c4_b_kstr;
  int32_T c4_exitg1;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_kstr;
  int32_T c4_loop_ub;
  int32_T c4_remainingDimsA;
  char_T c4_b_s;
  char_T c4_b_x;
  char_T c4_c_s;
  char_T c4_c_x;
  char_T c4_d_s;
  char_T c4_d_x;
  char_T c4_e_s;
  char_T c4_e_x;
  char_T c4_f_s;
  char_T c4_g_s;
  char_T c4_h_s;
  char_T c4_h_y;
  char_T c4_l_y;
  char_T c4_s;
  int8_T c4_b_u;
  int8_T c4_c_u;
  int8_T c4_d_u;
  int8_T c4_u;
  boolean_T c4_b;
  boolean_T c4_b1;
  boolean_T c4_b2;
  boolean_T c4_b3;
  boolean_T c4_b_p;
  boolean_T c4_bool;
  boolean_T c4_c_p;
  boolean_T c4_d_p;
  boolean_T c4_p;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_e_st.prev = &c4_d_st;
  c4_e_st.tls = c4_d_st.tls;
  c4_st.site = &c4_jd_emlrtRSI;
  c4_b_st.site = &c4_kd_emlrtRSI;
  c4_bool = false;
  c4_emxInit_char_T(chartInstance, &c4_b_st, &c4_x, 2, &c4_db_emlrtRTEI);
  c4_i = c4_x->size[0] * c4_x->size[1];
  c4_x->size[0] = 1;
  c4_x->size[1] = c4_a_size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_x, c4_i,
    &c4_db_emlrtRTEI);
  c4_loop_ub = c4_a_size[1] - 1;
  for (c4_i1 = 0; c4_i1 <= c4_loop_ub; c4_i1++) {
    c4_x->data[c4_i1] = c4_a_data[c4_i1];
  }

  c4_remainingDimsA = c4_x->size[1];
  c4_emxFree_char_T(chartInstance, &c4_x);
  if (c4_remainingDimsA != 9) {
  } else {
    c4_kstr = 1;
    do {
      c4_exitg1 = 0;
      if (c4_kstr - 1 < 9) {
        c4_b_kstr = c4_kstr - 1;
        c4_c_st.site = &c4_ld_emlrtRSI;
        c4_s = c4_a_data[c4_b_kstr];
        c4_b_s = c4_s;
        c4_b = ((real_T)(uint8_T)c4_b_s <= 127.0);
        c4_p = c4_b;
        if (!c4_p) {
          c4_y = NULL;
          sf_mex_assign(&c4_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_b_y = NULL;
          sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_u = MAX_int8_T;
          c4_c_y = NULL;
          sf_mex_assign(&c4_c_y, sf_mex_create("y", &c4_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c4_c_st, &c4_fb_emlrtMCI, "error", 0U, 2U, 14, c4_y, 14,
                      sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c4_c_st, NULL, "message", 1U, 2U, 14, c4_b_y, 14,
                        c4_c_y)));
        }

        c4_c_st.site = &c4_md_emlrtRSI;
        c4_c_s = c4_cv12[c4_b_kstr];
        c4_d_s = c4_c_s;
        c4_b1 = ((real_T)(uint8_T)c4_d_s <= 127.0);
        c4_b_p = c4_b1;
        if (!c4_b_p) {
          c4_d_y = NULL;
          sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_e_y = NULL;
          sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_b_u = MAX_int8_T;
          c4_f_y = NULL;
          sf_mex_assign(&c4_f_y, sf_mex_create("y", &c4_b_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c4_c_st, &c4_fb_emlrtMCI, "error", 0U, 2U, 14, c4_d_y, 14,
                      sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c4_c_st, NULL, "message", 1U, 2U, 14, c4_e_y, 14,
                        c4_f_y)));
        }

        c4_c_st.site = &c4_nd_emlrtRSI;
        c4_b_x = c4_a_data[c4_b_kstr];
        c4_d_st.site = &c4_od_emlrtRSI;
        c4_c_x = c4_b_x;
        c4_e_st.site = &c4_pd_emlrtRSI;
        c4_e_s = c4_c_x;
        c4_f_s = c4_e_s;
        c4_b2 = ((real_T)(uint8_T)c4_f_s <= 127.0);
        c4_c_p = c4_b2;
        if (!c4_c_p) {
          c4_g_y = NULL;
          sf_mex_assign(&c4_g_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_i_y = NULL;
          sf_mex_assign(&c4_i_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_c_u = MAX_int8_T;
          c4_j_y = NULL;
          sf_mex_assign(&c4_j_y, sf_mex_create("y", &c4_c_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c4_e_st, &c4_fb_emlrtMCI, "error", 0U, 2U, 14, c4_g_y, 14,
                      sf_mex_call(&c4_e_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c4_e_st, NULL, "message", 1U, 2U, 14, c4_i_y, 14,
                        c4_j_y)));
        }

        c4_h_y = c4_cv1[(uint8_T)c4_c_x & 127];
        c4_c_st.site = &c4_nd_emlrtRSI;
        c4_d_x = c4_cv12[c4_b_kstr];
        c4_d_st.site = &c4_od_emlrtRSI;
        c4_e_x = c4_d_x;
        c4_e_st.site = &c4_pd_emlrtRSI;
        c4_g_s = c4_e_x;
        c4_h_s = c4_g_s;
        c4_b3 = ((real_T)(uint8_T)c4_h_s <= 127.0);
        c4_d_p = c4_b3;
        if (!c4_d_p) {
          c4_k_y = NULL;
          sf_mex_assign(&c4_k_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_m_y = NULL;
          sf_mex_assign(&c4_m_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_d_u = MAX_int8_T;
          c4_n_y = NULL;
          sf_mex_assign(&c4_n_y, sf_mex_create("y", &c4_d_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c4_e_st, &c4_fb_emlrtMCI, "error", 0U, 2U, 14, c4_k_y, 14,
                      sf_mex_call(&c4_e_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c4_e_st, NULL, "message", 1U, 2U, 14, c4_m_y, 14,
                        c4_n_y)));
        }

        c4_l_y = c4_cv1[(uint8_T)c4_e_x & 127];
        if (c4_h_y != c4_l_y) {
          c4_exitg1 = 1;
        } else {
          c4_kstr++;
        }
      } else {
        c4_bool = true;
        c4_exitg1 = 1;
      }
    } while (c4_exitg1 == 0);
  }

  return c4_bool;
}

static boolean_T c4_g_strcmp(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, char_T c4_a_data[], int32_T c4_a_size[2])
{
  static char_T c4_b_cv[4] = { 'd', 'o', 'n', 'e' };

  c4_emxArray_char_T *c4_x;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_e_st;
  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_f_y = NULL;
  const mxArray *c4_g_y = NULL;
  const mxArray *c4_i_y = NULL;
  const mxArray *c4_j_y = NULL;
  const mxArray *c4_k_y = NULL;
  const mxArray *c4_m_y = NULL;
  const mxArray *c4_n_y = NULL;
  const mxArray *c4_y = NULL;
  int32_T c4_b_kstr;
  int32_T c4_exitg1;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_kstr;
  int32_T c4_loop_ub;
  int32_T c4_remainingDimsA;
  char_T c4_b_s;
  char_T c4_b_x;
  char_T c4_c_s;
  char_T c4_c_x;
  char_T c4_d_s;
  char_T c4_d_x;
  char_T c4_e_s;
  char_T c4_e_x;
  char_T c4_f_s;
  char_T c4_g_s;
  char_T c4_h_s;
  char_T c4_h_y;
  char_T c4_l_y;
  char_T c4_s;
  int8_T c4_b_u;
  int8_T c4_c_u;
  int8_T c4_d_u;
  int8_T c4_u;
  boolean_T c4_b;
  boolean_T c4_b1;
  boolean_T c4_b2;
  boolean_T c4_b3;
  boolean_T c4_b_p;
  boolean_T c4_bool;
  boolean_T c4_c_p;
  boolean_T c4_d_p;
  boolean_T c4_p;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_e_st.prev = &c4_d_st;
  c4_e_st.tls = c4_d_st.tls;
  c4_st.site = &c4_jd_emlrtRSI;
  c4_b_st.site = &c4_kd_emlrtRSI;
  c4_bool = false;
  c4_emxInit_char_T(chartInstance, &c4_b_st, &c4_x, 2, &c4_db_emlrtRTEI);
  c4_i = c4_x->size[0] * c4_x->size[1];
  c4_x->size[0] = 1;
  c4_x->size[1] = c4_a_size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_x, c4_i,
    &c4_db_emlrtRTEI);
  c4_loop_ub = c4_a_size[1] - 1;
  for (c4_i1 = 0; c4_i1 <= c4_loop_ub; c4_i1++) {
    c4_x->data[c4_i1] = c4_a_data[c4_i1];
  }

  c4_remainingDimsA = c4_x->size[1];
  c4_emxFree_char_T(chartInstance, &c4_x);
  if (c4_remainingDimsA != 4) {
  } else {
    c4_kstr = 1;
    do {
      c4_exitg1 = 0;
      if (c4_kstr - 1 < 4) {
        c4_b_kstr = c4_kstr - 1;
        c4_c_st.site = &c4_ld_emlrtRSI;
        c4_s = c4_a_data[c4_b_kstr];
        c4_b_s = c4_s;
        c4_b = ((real_T)(uint8_T)c4_b_s <= 127.0);
        c4_p = c4_b;
        if (!c4_p) {
          c4_y = NULL;
          sf_mex_assign(&c4_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_b_y = NULL;
          sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_u = MAX_int8_T;
          c4_c_y = NULL;
          sf_mex_assign(&c4_c_y, sf_mex_create("y", &c4_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c4_c_st, &c4_fb_emlrtMCI, "error", 0U, 2U, 14, c4_y, 14,
                      sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c4_c_st, NULL, "message", 1U, 2U, 14, c4_b_y, 14,
                        c4_c_y)));
        }

        c4_c_st.site = &c4_md_emlrtRSI;
        c4_c_s = c4_b_cv[c4_b_kstr];
        c4_d_s = c4_c_s;
        c4_b1 = ((real_T)(uint8_T)c4_d_s <= 127.0);
        c4_b_p = c4_b1;
        if (!c4_b_p) {
          c4_d_y = NULL;
          sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_e_y = NULL;
          sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_b_u = MAX_int8_T;
          c4_f_y = NULL;
          sf_mex_assign(&c4_f_y, sf_mex_create("y", &c4_b_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c4_c_st, &c4_fb_emlrtMCI, "error", 0U, 2U, 14, c4_d_y, 14,
                      sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c4_c_st, NULL, "message", 1U, 2U, 14, c4_e_y, 14,
                        c4_f_y)));
        }

        c4_c_st.site = &c4_nd_emlrtRSI;
        c4_b_x = c4_a_data[c4_b_kstr];
        c4_d_st.site = &c4_od_emlrtRSI;
        c4_c_x = c4_b_x;
        c4_e_st.site = &c4_pd_emlrtRSI;
        c4_e_s = c4_c_x;
        c4_f_s = c4_e_s;
        c4_b2 = ((real_T)(uint8_T)c4_f_s <= 127.0);
        c4_c_p = c4_b2;
        if (!c4_c_p) {
          c4_g_y = NULL;
          sf_mex_assign(&c4_g_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_i_y = NULL;
          sf_mex_assign(&c4_i_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_c_u = MAX_int8_T;
          c4_j_y = NULL;
          sf_mex_assign(&c4_j_y, sf_mex_create("y", &c4_c_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c4_e_st, &c4_fb_emlrtMCI, "error", 0U, 2U, 14, c4_g_y, 14,
                      sf_mex_call(&c4_e_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c4_e_st, NULL, "message", 1U, 2U, 14, c4_i_y, 14,
                        c4_j_y)));
        }

        c4_h_y = c4_cv1[(uint8_T)c4_c_x & 127];
        c4_c_st.site = &c4_nd_emlrtRSI;
        c4_d_x = c4_b_cv[c4_b_kstr];
        c4_d_st.site = &c4_od_emlrtRSI;
        c4_e_x = c4_d_x;
        c4_e_st.site = &c4_pd_emlrtRSI;
        c4_g_s = c4_e_x;
        c4_h_s = c4_g_s;
        c4_b3 = ((real_T)(uint8_T)c4_h_s <= 127.0);
        c4_d_p = c4_b3;
        if (!c4_d_p) {
          c4_k_y = NULL;
          sf_mex_assign(&c4_k_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_m_y = NULL;
          sf_mex_assign(&c4_m_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_d_u = MAX_int8_T;
          c4_n_y = NULL;
          sf_mex_assign(&c4_n_y, sf_mex_create("y", &c4_d_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c4_e_st, &c4_fb_emlrtMCI, "error", 0U, 2U, 14, c4_k_y, 14,
                      sf_mex_call(&c4_e_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c4_e_st, NULL, "message", 1U, 2U, 14, c4_m_y, 14,
                        c4_n_y)));
        }

        c4_l_y = c4_cv1[(uint8_T)c4_e_x & 127];
        if (c4_h_y != c4_l_y) {
          c4_exitg1 = 1;
        } else {
          c4_kstr++;
        }
      } else {
        c4_bool = true;
        c4_exitg1 = 1;
      }
    } while (c4_exitg1 == 0);
  }

  return c4_bool;
}

static void c4_OutputStream_drain(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_matlabshared_asyncio_internal_OutputStream *c4_obj)
{
  static char_T c4_b_cv3[35] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'O',
    'u', 't', 'p', 'u', 't', 'S', 't', 'r', 'e', 'a', 'm', ':', 't', 'i', 'm',
    'e', 'o', 'u', 't', 'I', 'n', 'D', 'r', 'a', 'i', 'n' };

  static char_T c4_b[7] = { 't', 'i', 'm', 'e', 'o', 'u', 't' };

  static char_T c4_b_cv4[7] = { 't', 'i', 'm', 'e', 'o', 'u', 't' };

  static char_T c4_b_cv1[5] = { 'p', 'a', 'u', 's', 'e' };

  static char_T c4_b_cv2[5] = { 'p', 'a', 'u', 's', 'e' };

  static char_T c4_b_cv[4] = { 'd', 'o', 'n', 'e' };

  CoderChannel c4_b_chImpl;
  CoderChannel c4_c_chImpl;
  CoderChannel c4_chImpl;
  CoderChannel c4_d_chImpl;
  CoderChannel c4_e_chImpl;
  CoderOutputStream c4_b_streamImpl;
  CoderOutputStream c4_c_streamImpl;
  CoderOutputStream c4_d_streamImpl;
  CoderOutputStream c4_e_streamImpl;
  CoderOutputStream c4_f_streamImpl;
  CoderOutputStream c4_g_streamImpl;
  CoderOutputStream c4_h_streamImpl;
  CoderOutputStream c4_i_streamImpl;
  CoderOutputStream c4_j_streamImpl;
  CoderOutputStream c4_streamImpl;
  c4_emxArray_char_T *c4_x;
  c4_matlabshared_asyncio_internal_OutputStream *c4_b_obj;
  c4_matlabshared_asyncio_internal_OutputStream *c4_c_obj;
  c4_matlabshared_asyncio_internal_OutputStream *c4_d_obj;
  c4_matlabshared_asyncio_internal_OutputStream *c4_e_obj;
  c4_matlabshared_asyncio_internal_OutputStream *c4_f_obj;
  c4_matlabshared_asyncio_internal_OutputStream *c4_g_obj;
  c4_matlabshared_asyncio_internal_OutputStream *c4_h_obj;
  c4_matlabshared_asyncio_internal_OutputStream *c4_i_obj;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_e_st;
  emlrtStack c4_f_st;
  emlrtStack c4_st;
  emlrtTimespec c4_startTic;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_f_y = NULL;
  const mxArray *c4_g_y = NULL;
  const mxArray *c4_h_y = NULL;
  const mxArray *c4_i_y = NULL;
  const mxArray *c4_j_y = NULL;
  const mxArray *c4_k_y = NULL;
  const mxArray *c4_l_y = NULL;
  const mxArray *c4_m_y = NULL;
  const mxArray *c4_o_y = NULL;
  const mxArray *c4_p_y = NULL;
  const mxArray *c4_q_y = NULL;
  const mxArray *c4_s_y = NULL;
  const mxArray *c4_t_y = NULL;
  const mxArray *c4_y = NULL;
  real_T c4_b_count;
  real_T c4_b_varargin_1;
  real_T c4_count;
  real_T c4_et;
  real_T c4_timeoutInSeconds;
  real_T c4_varargin_1;
  int32_T c4_status_size[2];
  int32_T c4_b_kstr;
  int32_T c4_b_success;
  int32_T c4_c_success;
  int32_T c4_d_success;
  int32_T c4_e_success;
  int32_T c4_exitg1;
  int32_T c4_f_success;
  int32_T c4_g_success;
  int32_T c4_h_success;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i_success;
  int32_T c4_j_success;
  int32_T c4_kstr;
  int32_T c4_loop_ub;
  int32_T c4_remainingDimsA;
  int32_T c4_success;
  char_T c4_status_data[9];
  char_T c4_b_s;
  char_T c4_b_x;
  char_T c4_c_s;
  char_T c4_c_x;
  char_T c4_d_s;
  char_T c4_d_x;
  char_T c4_e_s;
  char_T c4_e_x;
  char_T c4_f_s;
  char_T c4_g_s;
  char_T c4_h_s;
  char_T c4_n_y;
  char_T c4_r_y;
  char_T c4_s;
  int8_T c4_b_u;
  int8_T c4_c_u;
  int8_T c4_d_u;
  int8_T c4_u;
  boolean_T c4_b1;
  boolean_T c4_b2;
  boolean_T c4_b3;
  boolean_T c4_b_b;
  boolean_T c4_b_done;
  boolean_T c4_b_p;
  boolean_T c4_b_result;
  boolean_T c4_bool;
  boolean_T c4_c_p;
  boolean_T c4_completed;
  boolean_T c4_d_p;
  boolean_T c4_done;
  boolean_T c4_p;
  boolean_T c4_result;
  boolean_T c4_timeout;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_e_st.prev = &c4_d_st;
  c4_e_st.tls = c4_d_st.tls;
  c4_f_st.prev = &c4_e_st;
  c4_f_st.tls = c4_e_st.tls;
  c4_st.site = &c4_sf_emlrtRSI;
  c4_b_obj = c4_obj;
  c4_timeoutInSeconds = c4_b_obj->Timeout;
  c4_status_size[0] = 1;
  c4_status_size[1] = 0;
  c4_timeout = false;
  c4_done = false;
  c4_b_st.site = &c4_ue_emlrtRSI;
  c4_c_obj = c4_b_obj;
  c4_c_st.site = &c4_sf_emlrtRSI;
  c4_d_obj = c4_c_obj;
  c4_d_st.site = &c4_wf_emlrtRSI;
  c4_streamImpl = c4_d_obj->StreamImpl;
  c4_success = coderStreamGetDataAvailable(c4_streamImpl, &c4_count);
  c4_e_st.site = &c4_xf_emlrtRSI;
  c4_b_streamImpl = c4_streamImpl;
  c4_b_success = c4_success;
  if ((real_T)c4_b_success == 0.0) {
    c4_chImpl = coderStreamGetChannel(c4_b_streamImpl);
    c4_f_st.site = &c4_te_emlrtRSI;
    c4_b_API_channelErrorIfFailed(chartInstance, &c4_f_st, c4_chImpl);
  }

  c4_completed = (c4_count == 0.0);
  c4_b_st.site = &c4_ve_emlrtRSI;
  c4_startTic = c4_tic(chartInstance, &c4_b_st);
  while ((!c4_completed) && (!c4_done) && (!c4_timeout)) {
    c4_b_st.site = &c4_we_emlrtRSI;
    c4_et = c4_toc(chartInstance, &c4_b_st, c4_startTic);
    if (c4_et < 1.0) {
      c4_b_st.site = &c4_xe_emlrtRSI;
      c4_c_st.site = &c4_if_emlrtRSI;
      c4_b_varargin_1 = 0.0;
      c4_b_y = NULL;
      sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_b_cv2, 10, 0U, 1U, 0U, 2, 1,
        5), false);
      c4_d_y = NULL;
      sf_mex_assign(&c4_d_y, sf_mex_create("y", &c4_b_varargin_1, 0, 0U, 0U, 0U,
        0), false);
      c4_d_st.site = &c4_jf_emlrtRSI;
      c4_b_feval(chartInstance, &c4_d_st, c4_b_y, c4_d_y);
    } else {
      c4_b_st.site = &c4_ye_emlrtRSI;
      c4_c_st.site = &c4_if_emlrtRSI;
      c4_varargin_1 = 0.005;
      c4_y = NULL;
      sf_mex_assign(&c4_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2, 1, 5),
                    false);
      c4_c_y = NULL;
      sf_mex_assign(&c4_c_y, sf_mex_create("y", &c4_varargin_1, 0, 0U, 0U, 0U, 0),
                    false);
      c4_d_st.site = &c4_jf_emlrtRSI;
      c4_b_feval(chartInstance, &c4_d_st, c4_y, c4_c_y);
    }

    c4_b_st.site = &c4_af_emlrtRSI;
    c4_et = c4_toc(chartInstance, &c4_b_st, c4_startTic);
    c4_timeout = (c4_et > c4_timeoutInSeconds);
    c4_b_st.site = &c4_bf_emlrtRSI;
    c4_e_obj = c4_b_obj;
    c4_c_st.site = &c4_kf_emlrtRSI;
    c4_c_streamImpl = c4_e_obj->StreamImpl;
    c4_c_success = coderStreamIsDeviceDone(c4_c_streamImpl, &c4_result);
    c4_d_st.site = &c4_lf_emlrtRSI;
    c4_d_streamImpl = c4_c_streamImpl;
    c4_d_success = c4_c_success;
    if ((real_T)c4_d_success == 0.0) {
      c4_b_chImpl = coderStreamGetChannel(c4_d_streamImpl);
      c4_e_st.site = &c4_te_emlrtRSI;
      c4_b_API_channelErrorIfFailed(chartInstance, &c4_e_st, c4_b_chImpl);
    }

    if (c4_result) {
      c4_b_done = true;
    } else {
      c4_b_st.site = &c4_bf_emlrtRSI;
      c4_g_obj = c4_b_obj;
      c4_c_st.site = &c4_mf_emlrtRSI;
      c4_f_streamImpl = c4_g_obj->StreamImpl;
      c4_f_success = coderStreamIsOpen(c4_f_streamImpl, &c4_b_result);
      c4_d_st.site = &c4_nf_emlrtRSI;
      c4_h_streamImpl = c4_f_streamImpl;
      c4_h_success = c4_f_success;
      if ((real_T)c4_h_success == 0.0) {
        c4_d_chImpl = coderStreamGetChannel(c4_h_streamImpl);
        c4_e_st.site = &c4_te_emlrtRSI;
        c4_b_API_channelErrorIfFailed(chartInstance, &c4_e_st, c4_d_chImpl);
      }

      if (!c4_b_result) {
        c4_b_done = true;
      } else {
        c4_b_done = false;
      }
    }

    c4_done = c4_b_done;
    c4_b_st.site = &c4_cf_emlrtRSI;
    c4_h_obj = c4_b_obj;
    c4_c_st.site = &c4_sf_emlrtRSI;
    c4_i_obj = c4_h_obj;
    c4_d_st.site = &c4_wf_emlrtRSI;
    c4_i_streamImpl = c4_i_obj->StreamImpl;
    c4_i_success = coderStreamGetDataAvailable(c4_i_streamImpl, &c4_b_count);
    c4_e_st.site = &c4_xf_emlrtRSI;
    c4_j_streamImpl = c4_i_streamImpl;
    c4_j_success = c4_i_success;
    if ((real_T)c4_j_success == 0.0) {
      c4_e_chImpl = coderStreamGetChannel(c4_j_streamImpl);
      c4_f_st.site = &c4_te_emlrtRSI;
      c4_b_API_channelErrorIfFailed(chartInstance, &c4_f_st, c4_e_chImpl);
    }

    c4_completed = (c4_b_count == 0.0);
  }

  if (c4_completed) {
    c4_status_size[0] = 1;
    c4_status_size[1] = 9;
    for (c4_i = 0; c4_i < 9; c4_i++) {
      c4_status_data[c4_i] = c4_cv12[c4_i];
    }
  } else if (c4_done) {
    c4_status_size[0] = 1;
    c4_status_size[1] = 4;
    for (c4_i1 = 0; c4_i1 < 4; c4_i1++) {
      c4_status_data[c4_i1] = c4_b_cv[c4_i1];
    }
  } else if (c4_timeout) {
    c4_status_size[0] = 1;
    c4_status_size[1] = 7;
    for (c4_i2 = 0; c4_i2 < 7; c4_i2++) {
      c4_status_data[c4_i2] = c4_b[c4_i2];
    }
  }

  c4_st.site = &c4_tf_emlrtRSI;
  if (!c4_h_strcmp(chartInstance, &c4_st, c4_status_data, c4_status_size)) {
    c4_st.site = &c4_uf_emlrtRSI;
    c4_b_st.site = &c4_jd_emlrtRSI;
    c4_c_st.site = &c4_kd_emlrtRSI;
    c4_bool = false;
    c4_emxInit_char_T(chartInstance, &c4_c_st, &c4_x, 2, &c4_db_emlrtRTEI);
    c4_i3 = c4_x->size[0] * c4_x->size[1];
    c4_x->size[0] = 1;
    c4_x->size[1] = c4_status_size[1];
    c4_emxEnsureCapacity_char_T(chartInstance, &c4_c_st, c4_x, c4_i3,
      &c4_db_emlrtRTEI);
    c4_loop_ub = c4_status_size[1] - 1;
    for (c4_i4 = 0; c4_i4 <= c4_loop_ub; c4_i4++) {
      c4_x->data[c4_i4] = c4_status_data[c4_i4];
    }

    c4_remainingDimsA = c4_x->size[1];
    c4_emxFree_char_T(chartInstance, &c4_x);
    if (c4_remainingDimsA != 7) {
    } else {
      c4_kstr = 1;
      do {
        c4_exitg1 = 0;
        if (c4_kstr - 1 < 7) {
          c4_b_kstr = c4_kstr - 1;
          c4_d_st.site = &c4_ld_emlrtRSI;
          c4_s = c4_status_data[c4_b_kstr];
          c4_b_s = c4_s;
          c4_b_b = ((real_T)(uint8_T)c4_b_s <= 127.0);
          c4_p = c4_b_b;
          if (!c4_p) {
            c4_g_y = NULL;
            sf_mex_assign(&c4_g_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2,
              1, 31), false);
            c4_h_y = NULL;
            sf_mex_assign(&c4_h_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2,
              1, 31), false);
            c4_u = MAX_int8_T;
            c4_i_y = NULL;
            sf_mex_assign(&c4_i_y, sf_mex_create("y", &c4_u, 2, 0U, 0U, 0U, 0),
                          false);
            sf_mex_call(&c4_d_st, &c4_fb_emlrtMCI, "error", 0U, 2U, 14, c4_g_y,
                        14, sf_mex_call(&c4_d_st, NULL, "getString", 1U, 1U, 14,
              sf_mex_call(&c4_d_st, NULL, "message", 1U, 2U, 14, c4_h_y, 14,
                          c4_i_y)));
          }

          c4_d_st.site = &c4_md_emlrtRSI;
          c4_c_s = c4_b_cv4[c4_b_kstr];
          c4_d_s = c4_c_s;
          c4_b1 = ((real_T)(uint8_T)c4_d_s <= 127.0);
          c4_b_p = c4_b1;
          if (!c4_b_p) {
            c4_j_y = NULL;
            sf_mex_assign(&c4_j_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2,
              1, 31), false);
            c4_k_y = NULL;
            sf_mex_assign(&c4_k_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2,
              1, 31), false);
            c4_b_u = MAX_int8_T;
            c4_l_y = NULL;
            sf_mex_assign(&c4_l_y, sf_mex_create("y", &c4_b_u, 2, 0U, 0U, 0U, 0),
                          false);
            sf_mex_call(&c4_d_st, &c4_fb_emlrtMCI, "error", 0U, 2U, 14, c4_j_y,
                        14, sf_mex_call(&c4_d_st, NULL, "getString", 1U, 1U, 14,
              sf_mex_call(&c4_d_st, NULL, "message", 1U, 2U, 14, c4_k_y, 14,
                          c4_l_y)));
          }

          c4_d_st.site = &c4_nd_emlrtRSI;
          c4_b_x = c4_status_data[c4_b_kstr];
          c4_e_st.site = &c4_od_emlrtRSI;
          c4_c_x = c4_b_x;
          c4_f_st.site = &c4_pd_emlrtRSI;
          c4_e_s = c4_c_x;
          c4_f_s = c4_e_s;
          c4_b2 = ((real_T)(uint8_T)c4_f_s <= 127.0);
          c4_c_p = c4_b2;
          if (!c4_c_p) {
            c4_m_y = NULL;
            sf_mex_assign(&c4_m_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2,
              1, 31), false);
            c4_o_y = NULL;
            sf_mex_assign(&c4_o_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2,
              1, 31), false);
            c4_c_u = MAX_int8_T;
            c4_p_y = NULL;
            sf_mex_assign(&c4_p_y, sf_mex_create("y", &c4_c_u, 2, 0U, 0U, 0U, 0),
                          false);
            sf_mex_call(&c4_f_st, &c4_fb_emlrtMCI, "error", 0U, 2U, 14, c4_m_y,
                        14, sf_mex_call(&c4_f_st, NULL, "getString", 1U, 1U, 14,
              sf_mex_call(&c4_f_st, NULL, "message", 1U, 2U, 14, c4_o_y, 14,
                          c4_p_y)));
          }

          c4_n_y = c4_cv1[(uint8_T)c4_c_x & 127];
          c4_d_st.site = &c4_nd_emlrtRSI;
          c4_d_x = c4_b_cv4[c4_b_kstr];
          c4_e_st.site = &c4_od_emlrtRSI;
          c4_e_x = c4_d_x;
          c4_f_st.site = &c4_pd_emlrtRSI;
          c4_g_s = c4_e_x;
          c4_h_s = c4_g_s;
          c4_b3 = ((real_T)(uint8_T)c4_h_s <= 127.0);
          c4_d_p = c4_b3;
          if (!c4_d_p) {
            c4_q_y = NULL;
            sf_mex_assign(&c4_q_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2,
              1, 31), false);
            c4_s_y = NULL;
            sf_mex_assign(&c4_s_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2,
              1, 31), false);
            c4_d_u = MAX_int8_T;
            c4_t_y = NULL;
            sf_mex_assign(&c4_t_y, sf_mex_create("y", &c4_d_u, 2, 0U, 0U, 0U, 0),
                          false);
            sf_mex_call(&c4_f_st, &c4_fb_emlrtMCI, "error", 0U, 2U, 14, c4_q_y,
                        14, sf_mex_call(&c4_f_st, NULL, "getString", 1U, 1U, 14,
              sf_mex_call(&c4_f_st, NULL, "message", 1U, 2U, 14, c4_s_y, 14,
                          c4_t_y)));
          }

          c4_r_y = c4_cv1[(uint8_T)c4_e_x & 127];
          if (c4_n_y != c4_r_y) {
            c4_exitg1 = 1;
          } else {
            c4_kstr++;
          }
        } else {
          c4_bool = true;
          c4_exitg1 = 1;
        }
      } while (c4_exitg1 == 0);
    }

    if (c4_bool) {
      c4_e_y = NULL;
      sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_b_cv3, 10, 0U, 1U, 0U, 2, 1,
        35), false);
      c4_f_y = NULL;
      sf_mex_assign(&c4_f_y, sf_mex_create("y", c4_b_cv3, 10, 0U, 1U, 0U, 2, 1,
        35), false);
      sf_mex_call(c4_sp, &c4_ib_emlrtMCI, "error", 0U, 2U, 14, c4_e_y, 14,
                  sf_mex_call(c4_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (c4_sp, NULL, "message", 1U, 1U, 14, c4_f_y)));
    }

    c4_st.site = &c4_vf_emlrtRSI;
    c4_f_obj = c4_obj;
    c4_b_st.site = &c4_yf_emlrtRSI;
    c4_e_streamImpl = c4_f_obj->StreamImpl;
    c4_e_success = coderStreamFlush(c4_e_streamImpl);
    c4_c_st.site = &c4_ag_emlrtRSI;
    c4_g_streamImpl = c4_e_streamImpl;
    c4_g_success = c4_e_success;
    if ((real_T)c4_g_success == 0.0) {
      c4_c_chImpl = coderStreamGetChannel(c4_g_streamImpl);
      c4_d_st.site = &c4_te_emlrtRSI;
      c4_b_API_channelErrorIfFailed(chartInstance, &c4_d_st, c4_c_chImpl);
    }
  }
}

static boolean_T c4_h_strcmp(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, char_T c4_a_data[], int32_T c4_a_size[2])
{
  static char_T c4_b_cv[7] = { 'i', 'n', 'v', 'a', 'l', 'i', 'd' };

  c4_emxArray_char_T *c4_x;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_e_st;
  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_f_y = NULL;
  const mxArray *c4_g_y = NULL;
  const mxArray *c4_i_y = NULL;
  const mxArray *c4_j_y = NULL;
  const mxArray *c4_k_y = NULL;
  const mxArray *c4_m_y = NULL;
  const mxArray *c4_n_y = NULL;
  const mxArray *c4_y = NULL;
  int32_T c4_b_kstr;
  int32_T c4_exitg1;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_kstr;
  int32_T c4_loop_ub;
  int32_T c4_remainingDimsA;
  char_T c4_b_s;
  char_T c4_b_x;
  char_T c4_c_s;
  char_T c4_c_x;
  char_T c4_d_s;
  char_T c4_d_x;
  char_T c4_e_s;
  char_T c4_e_x;
  char_T c4_f_s;
  char_T c4_g_s;
  char_T c4_h_s;
  char_T c4_h_y;
  char_T c4_l_y;
  char_T c4_s;
  int8_T c4_b_u;
  int8_T c4_c_u;
  int8_T c4_d_u;
  int8_T c4_u;
  boolean_T c4_b;
  boolean_T c4_b1;
  boolean_T c4_b2;
  boolean_T c4_b3;
  boolean_T c4_b_p;
  boolean_T c4_bool;
  boolean_T c4_c_p;
  boolean_T c4_d_p;
  boolean_T c4_p;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_e_st.prev = &c4_d_st;
  c4_e_st.tls = c4_d_st.tls;
  c4_st.site = &c4_jd_emlrtRSI;
  c4_b_st.site = &c4_kd_emlrtRSI;
  c4_bool = false;
  c4_emxInit_char_T(chartInstance, &c4_b_st, &c4_x, 2, &c4_db_emlrtRTEI);
  c4_i = c4_x->size[0] * c4_x->size[1];
  c4_x->size[0] = 1;
  c4_x->size[1] = c4_a_size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_b_st, c4_x, c4_i,
    &c4_db_emlrtRTEI);
  c4_loop_ub = c4_a_size[1] - 1;
  for (c4_i1 = 0; c4_i1 <= c4_loop_ub; c4_i1++) {
    c4_x->data[c4_i1] = c4_a_data[c4_i1];
  }

  c4_remainingDimsA = c4_x->size[1];
  c4_emxFree_char_T(chartInstance, &c4_x);
  if (c4_remainingDimsA != 7) {
  } else {
    c4_kstr = 1;
    do {
      c4_exitg1 = 0;
      if (c4_kstr - 1 < 7) {
        c4_b_kstr = c4_kstr - 1;
        c4_c_st.site = &c4_ld_emlrtRSI;
        c4_s = c4_a_data[c4_b_kstr];
        c4_b_s = c4_s;
        c4_b = ((real_T)(uint8_T)c4_b_s <= 127.0);
        c4_p = c4_b;
        if (!c4_p) {
          c4_y = NULL;
          sf_mex_assign(&c4_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_b_y = NULL;
          sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_u = MAX_int8_T;
          c4_c_y = NULL;
          sf_mex_assign(&c4_c_y, sf_mex_create("y", &c4_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c4_c_st, &c4_fb_emlrtMCI, "error", 0U, 2U, 14, c4_y, 14,
                      sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c4_c_st, NULL, "message", 1U, 2U, 14, c4_b_y, 14,
                        c4_c_y)));
        }

        c4_c_st.site = &c4_md_emlrtRSI;
        c4_c_s = c4_b_cv[c4_b_kstr];
        c4_d_s = c4_c_s;
        c4_b1 = ((real_T)(uint8_T)c4_d_s <= 127.0);
        c4_b_p = c4_b1;
        if (!c4_b_p) {
          c4_d_y = NULL;
          sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_e_y = NULL;
          sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_b_u = MAX_int8_T;
          c4_f_y = NULL;
          sf_mex_assign(&c4_f_y, sf_mex_create("y", &c4_b_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c4_c_st, &c4_fb_emlrtMCI, "error", 0U, 2U, 14, c4_d_y, 14,
                      sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c4_c_st, NULL, "message", 1U, 2U, 14, c4_e_y, 14,
                        c4_f_y)));
        }

        c4_c_st.site = &c4_nd_emlrtRSI;
        c4_b_x = c4_a_data[c4_b_kstr];
        c4_d_st.site = &c4_od_emlrtRSI;
        c4_c_x = c4_b_x;
        c4_e_st.site = &c4_pd_emlrtRSI;
        c4_e_s = c4_c_x;
        c4_f_s = c4_e_s;
        c4_b2 = ((real_T)(uint8_T)c4_f_s <= 127.0);
        c4_c_p = c4_b2;
        if (!c4_c_p) {
          c4_g_y = NULL;
          sf_mex_assign(&c4_g_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_i_y = NULL;
          sf_mex_assign(&c4_i_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_c_u = MAX_int8_T;
          c4_j_y = NULL;
          sf_mex_assign(&c4_j_y, sf_mex_create("y", &c4_c_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c4_e_st, &c4_fb_emlrtMCI, "error", 0U, 2U, 14, c4_g_y, 14,
                      sf_mex_call(&c4_e_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c4_e_st, NULL, "message", 1U, 2U, 14, c4_i_y, 14,
                        c4_j_y)));
        }

        c4_h_y = c4_cv1[(uint8_T)c4_c_x & 127];
        c4_c_st.site = &c4_nd_emlrtRSI;
        c4_d_x = c4_b_cv[c4_b_kstr];
        c4_d_st.site = &c4_od_emlrtRSI;
        c4_e_x = c4_d_x;
        c4_e_st.site = &c4_pd_emlrtRSI;
        c4_g_s = c4_e_x;
        c4_h_s = c4_g_s;
        c4_b3 = ((real_T)(uint8_T)c4_h_s <= 127.0);
        c4_d_p = c4_b3;
        if (!c4_d_p) {
          c4_k_y = NULL;
          sf_mex_assign(&c4_k_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_m_y = NULL;
          sf_mex_assign(&c4_m_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_d_u = MAX_int8_T;
          c4_n_y = NULL;
          sf_mex_assign(&c4_n_y, sf_mex_create("y", &c4_d_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c4_e_st, &c4_fb_emlrtMCI, "error", 0U, 2U, 14, c4_k_y, 14,
                      sf_mex_call(&c4_e_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c4_e_st, NULL, "message", 1U, 2U, 14, c4_m_y, 14,
                        c4_n_y)));
        }

        c4_l_y = c4_cv1[(uint8_T)c4_e_x & 127];
        if (c4_h_y != c4_l_y) {
          c4_exitg1 = 1;
        } else {
          c4_kstr++;
        }
      } else {
        c4_bool = true;
        c4_exitg1 = 1;
      }
    } while (c4_exitg1 == 0);
  }

  return c4_bool;
}

static boolean_T c4_Modbus_getWriteResponse(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_icomm_interface_modbus_tcpip_Modbus *c4_obj, uint8_T c4_reqPacketID)
{
  static char_T c4_b_cv[40] = { 't', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't', 'l',
    'i', 'b', ':', 't', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't', ':', 'i', 'n',
    'c', 'o', 'r', 'r', 'e', 'c', 't', 'D', 'a', 't', 'a', 'T', 'y', 'p', 'e' };

  static char_T c4_b_cv1[40] = { 'T', 'i', 'm', 'e', 'o', 'u', 't', ' ', 'o',
    'c', 'c', 'u', 'r', 'r', 'e', 'd', ' ', 'w', 'a', 'i', 't', 'i', 'n', 'g',
    ' ', 'f', 'o', 'r', ' ', 'a', ' ', 'r', 'e', 's', 'p', 'o', 'n', 's', 'e',
    '.' };

  static char_T c4_b_cv7[40] = { 't', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't',
    'l', 'i', 'b', ':', 't', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't', ':', 'i',
    'n', 'c', 'o', 'r', 'r', 'e', 'c', 't', 'D', 'a', 't', 'a', 'T', 'y', 'p',
    'e' };

  static char_T c4_b_cv8[40] = { 't', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't',
    'l', 'i', 'b', ':', 't', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't', ':', 'i',
    'n', 'c', 'o', 'r', 'r', 'e', 'c', 't', 'D', 'a', 't', 'a', 'T', 'y', 'p',
    'e' };

  static char_T c4_b_cv2[27] = { 'm', 'o', 'd', 'b', 'u', 's', ':', 'm', 'o',
    'd', 'b', 'u', 's', ':', 'c', 'o', 'm', 'm', 'R', 'e', 'a', 'd', 'E', 'r',
    'r', 'o', 'r' };

  static char_T c4_b_cv3[24] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'b', 'i',
    't', 'g', 'e', 't', ':', 'o', 'u', 't', 'O', 'f', 'R', 'a', 'n', 'g', 'e' };

  static char_T c4_b_cv6[19] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'n', 'o',
    'l', 'o', 'g', 'i', 'c', 'a', 'l', 'n', 'a', 'n' };

  static char_T c4_b_cv10[5] = { 'u', 'i', 'n', 't', '8' };

  static char_T c4_b_cv4[5] = { 'u', 'i', 'n', 't', '8' };

  static char_T c4_b_cv5[5] = { 'p', 'a', 'u', 's', 'e' };

  static char_T c4_b_cv9[5] = { 'u', 'i', 'n', 't', '8' };

  CoderChannel c4_b_chImpl;
  CoderChannel c4_chImpl;
  c4_emxArray_char_T *c4_out;
  c4_emxArray_uint8_T *c4_dataRaw;
  c4_emxArray_uint8_T *c4_rawData;
  c4_emxArray_uint8_T *c4_tempDataArray;
  c4_emxArray_uint8_T *c4_x;
  c4_icomm_interface_modbus_tcpip_Modbus *c4_b_obj;
  c4_icomm_interface_modbus_tcpip_Modbus *c4_c_obj;
  c4_icomm_interface_modbus_tcpip_Modbus *c4_d_obj;
  c4_icomm_interface_modbus_tcpip_Modbus *c4_f_obj;
  c4_icomm_interface_modbus_tcpip_Modbus *c4_g_obj;
  c4_icomm_interface_modbus_tcpip_Modbus *c4_o_obj;
  c4_icomm_interface_modbus_tcpip_Modbus *c4_p_obj;
  c4_icomm_interface_modbus_tcpip_Modbus *c4_s_obj;
  c4_matlabshared_asyncio_internal_Channel *c4_l_obj;
  c4_matlabshared_asyncio_internal_Channel *c4_m_obj;
  c4_matlabshared_network_internal_TCPClient *c4_f_varargin_1;
  c4_matlabshared_network_internal_TCPClient *c4_h_varargin_1;
  c4_matlabshared_network_internal_TCPClient *c4_i_obj;
  c4_matlabshared_network_internal_TCPClient *c4_k_obj;
  c4_matlabshared_network_internal_TCPClient *c4_varargin_1;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_ab_obj;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_bb_obj;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co
    *c4_c_varargin_1;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_cb_obj;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_e_obj;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_eb_obj;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co
    *c4_g_varargin_1;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_h_obj;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co
    *c4_i_varargin_1;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_j_obj;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_n_obj;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_q_obj;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_t_obj;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_u_obj;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_v_obj;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_w_obj;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_x_obj;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_y_obj;
  c4_rtString_13 c4_r;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_e_st;
  emlrtStack c4_f_st;
  emlrtStack c4_g_st;
  emlrtStack c4_h_st;
  emlrtStack c4_st;
  emlrtTimespec c4_startTic;
  const mxArray *c4_propValues[1];
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_f_y = NULL;
  const mxArray *c4_g_y = NULL;
  const mxArray *c4_h_y = NULL;
  const mxArray *c4_i_y = NULL;
  const mxArray *c4_j_y = NULL;
  const mxArray *c4_k_y = NULL;
  const mxArray *c4_l_y = NULL;
  const mxArray *c4_m_y = NULL;
  const mxArray *c4_n_y = NULL;
  const mxArray *c4_o_y = NULL;
  const mxArray *c4_p_y = NULL;
  const mxArray *c4_q_y = NULL;
  const mxArray *c4_r_y = NULL;
  const mxArray *c4_s_y = NULL;
  const mxArray *c4_t_y = NULL;
  const mxArray *c4_u_y = NULL;
  const mxArray *c4_v_y = NULL;
  const mxArray *c4_w_y = NULL;
  const mxArray *c4_y = NULL;
  real_T c4_headerData[8];
  real_T c4_a;
  real_T c4_b_a;
  real_T c4_b_out;
  real_T c4_b_varargin_1;
  real_T c4_b_varargin_2;
  real_T c4_b_x1;
  real_T c4_b_x2;
  real_T c4_c_x;
  real_T c4_d;
  real_T c4_d1;
  real_T c4_d_varargin_1;
  real_T c4_d_x;
  real_T c4_e_varargin_1;
  real_T c4_errCode;
  real_T c4_fcnCode;
  real_T c4_varargin_2;
  real_T c4_x1;
  real_T c4_x2;
  uint64_T c4_a1;
  int32_T c4_b_dataRaw;
  int32_T c4_b_loop_ub;
  int32_T c4_b_nx;
  int32_T c4_b_success;
  int32_T c4_c_dataRaw;
  int32_T c4_c_loop_ub;
  int32_T c4_c_nx;
  int32_T c4_d_loop_ub;
  int32_T c4_e_loop_ub;
  int32_T c4_exitg1;
  int32_T c4_f_loop_ub;
  int32_T c4_g_loop_ub;
  int32_T c4_h_loop_ub;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i15;
  int32_T c4_i16;
  int32_T c4_i17;
  int32_T c4_i18;
  int32_T c4_i19;
  int32_T c4_i2;
  int32_T c4_i20;
  int32_T c4_i21;
  int32_T c4_i22;
  int32_T c4_i23;
  int32_T c4_i24;
  int32_T c4_i25;
  int32_T c4_i26;
  int32_T c4_i27;
  int32_T c4_i28;
  int32_T c4_i29;
  int32_T c4_i3;
  int32_T c4_i30;
  int32_T c4_i31;
  int32_T c4_i32;
  int32_T c4_i33;
  int32_T c4_i34;
  int32_T c4_i35;
  int32_T c4_i36;
  int32_T c4_i37;
  int32_T c4_i38;
  int32_T c4_i39;
  int32_T c4_i4;
  int32_T c4_i40;
  int32_T c4_i41;
  int32_T c4_i42;
  int32_T c4_i43;
  int32_T c4_i44;
  int32_T c4_i45;
  int32_T c4_i46;
  int32_T c4_i47;
  int32_T c4_i48;
  int32_T c4_i49;
  int32_T c4_i5;
  int32_T c4_i50;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_i_loop_ub;
  int32_T c4_j_loop_ub;
  int32_T c4_k_loop_ub;
  int32_T c4_l_loop_ub;
  int32_T c4_loop_ub;
  int32_T c4_m_loop_ub;
  int32_T c4_n_loop_ub;
  int32_T c4_nx;
  int32_T c4_o_loop_ub;
  int32_T c4_success;
  uint16_T c4_d_y;
  uint16_T c4_u;
  const char_T *c4_propClasses[1] = { "coder.internal.string" };

  const char_T *c4_propNames[1] = { "Value" };

  char_T c4_b_u[40];
  char_T c4_db_obj[13];
  char_T c4_fb_obj[13];
  char_T c4_r_obj[13];
  uint8_T c4_b_x[2];
  uint8_T c4_requestID;
  uint8_T c4_transactionID;
  uint8_T c4_u1;
  boolean_T c4_b;
  boolean_T c4_b1;
  boolean_T c4_b2;
  boolean_T c4_b3;
  boolean_T c4_b4;
  boolean_T c4_b5;
  boolean_T c4_b_b;
  boolean_T c4_b_p;
  boolean_T c4_c_p;
  boolean_T c4_guard1;
  boolean_T c4_p;
  boolean_T c4_result;
  boolean_T c4_retry;
  boolean_T c4_timedOut;
  boolean_T c4_valid;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_e_st.prev = &c4_d_st;
  c4_e_st.tls = c4_d_st.tls;
  c4_f_st.prev = &c4_e_st;
  c4_f_st.tls = c4_e_st.tls;
  c4_g_st.prev = &c4_f_st;
  c4_g_st.tls = c4_f_st.tls;
  c4_h_st.prev = &c4_g_st;
  c4_h_st.tls = c4_g_st.tls;
  c4_retry = false;
  c4_st.site = &c4_bg_emlrtRSI;
  c4_b_obj = c4_obj;
  c4_timedOut = false;
  c4_b_st.site = &c4_ng_emlrtRSI;
  c4_startTic = c4_tic(chartInstance, &c4_b_st);
  do {
    c4_exitg1 = 0;
    c4_b_st.site = &c4_og_emlrtRSI;
    if (c4_TCPClient_get_NumBytesAvailable(chartInstance, &c4_b_st,
         c4_b_obj->TcpIpObj) < 8.0) {
      c4_b_st.site = &c4_pg_emlrtRSI;
      if (c4_toc(chartInstance, &c4_b_st, c4_startTic) >
          c4_b_obj->TransactionTimeout) {
        c4_timedOut = true;
        c4_exitg1 = 1;
      }
    } else {
      c4_exitg1 = 1;
    }
  } while (c4_exitg1 == 0);

  c4_emxInit_uint8_T(chartInstance, c4_sp, &c4_dataRaw, 2, &c4_cc_emlrtRTEI);
  c4_emxInit_uint8_T(chartInstance, c4_sp, &c4_rawData, 2, &c4_l_emlrtRTEI);
  c4_emxInit_char_T(chartInstance, c4_sp, &c4_out, 2, &c4_l_emlrtRTEI);
  c4_emxInit_uint8_T(chartInstance, c4_sp, &c4_tempDataArray, 2, &c4_l_emlrtRTEI);
  c4_emxInit_uint8_T(chartInstance, c4_sp, &c4_x, 2, &c4_l_emlrtRTEI);
  c4_guard1 = false;
  if (!c4_timedOut) {
    c4_st.site = &c4_cg_emlrtRSI;
    c4_c_obj = c4_obj;
    c4_b_st.site = &c4_sg_emlrtRSI;
    c4_varargin_1 = c4_c_obj->TcpIpObj;
    c4_c_st.site = &c4_n_emlrtRSI;
    c4_TCPClient_validateConnected(chartInstance, &c4_c_st, c4_varargin_1);
    c4_c_st.site = &c4_n_emlrtRSI;
    c4_c_varargin_1 = c4_varargin_1->TransportChannel;
    c4_d_st.site = &c4_qb_emlrtRSI;
    c4_AsyncIOTransportChannel_get_StructData(chartInstance, &c4_d_st,
      c4_c_varargin_1);
    c4_d_st.site = &c4_qb_emlrtRSI;
    c4_AsyncIOTransportChannel_readRaw(chartInstance, &c4_d_st, c4_c_varargin_1,
      8.0, c4_rawData);
    c4_b = (c4_rawData->size[0] == 0);
    c4_b1 = (c4_rawData->size[1] == 0);
    if (c4_b || c4_b1) {
      c4_dataRaw->size[0] = 0;
      c4_dataRaw->size[1] = 0;
    } else {
      c4_d_st.site = &c4_qb_emlrtRSI;
      c4_e_obj = c4_c_varargin_1;
      c4_i = c4_out->size[0] * c4_out->size[1];
      c4_out->size[0] = 1;
      c4_out->size[1] = c4_e_obj->NativeDataType->size[1];
      c4_emxEnsureCapacity_char_T(chartInstance, &c4_d_st, c4_out, c4_i,
        &c4_l_emlrtRTEI);
      c4_loop_ub = c4_e_obj->NativeDataType->size[1] - 1;
      for (c4_i2 = 0; c4_i2 <= c4_loop_ub; c4_i2++) {
        c4_out->data[c4_i2] = c4_e_obj->NativeDataType->data[c4_i2];
      }

      c4_d_st.site = &c4_qb_emlrtRSI;
      if (!c4_i_strcmp(chartInstance, &c4_d_st, c4_out)) {
        c4_y = NULL;
        sf_mex_assign(&c4_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1,
          40), false);
        c4_c_y = NULL;
        sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1,
          40), false);
        c4_d_st.site = &c4_qb_emlrtRSI;
        c4_j_obj = c4_c_varargin_1;
        c4_i8 = c4_out->size[0] * c4_out->size[1];
        c4_out->size[0] = 1;
        c4_out->size[1] = c4_j_obj->NativeDataType->size[1];
        c4_emxEnsureCapacity_char_T(chartInstance, &c4_d_st, c4_out, c4_i8,
          &c4_l_emlrtRTEI);
        c4_b_loop_ub = c4_j_obj->NativeDataType->size[1] - 1;
        for (c4_i11 = 0; c4_i11 <= c4_b_loop_ub; c4_i11++) {
          c4_out->data[c4_i11] = c4_j_obj->NativeDataType->data[c4_i11];
        }

        c4_h_y = NULL;
        sf_mex_assign(&c4_h_y, sf_mex_create("y", c4_out->data, 10, 0U, 1U, 0U,
          2, 1, c4_out->size[1]), false);
        c4_j_y = NULL;
        sf_mex_assign(&c4_j_y, sf_mex_create("y", c4_b_cv4, 10, 0U, 1U, 0U, 2, 1,
          5), false);
        sf_mex_call(&c4_c_st, &c4_gb_emlrtMCI, "error", 0U, 2U, 14, c4_y, 14,
                    sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c4_c_st, NULL, "message", 1U, 3U, 14, c4_c_y, 14, c4_h_y,
                      14, c4_j_y)));
      }

      c4_d_st.site = &c4_qb_emlrtRSI;
      c4_h_obj = c4_c_varargin_1;
      c4_i6 = c4_rawData->size[0];
      c4_i7 = 1;
      if ((c4_i7 < 1) || (c4_i7 > c4_i6)) {
        emlrtDynamicBoundsCheckR2012b(c4_i7, 1, c4_i6, &c4_k_emlrtBCI, &c4_d_st);
      }

      c4_e_st.site = &c4_qb_emlrtRSI;
      c4_i10 = c4_x->size[0] * c4_x->size[1];
      c4_x->size[0] = 1;
      c4_x->size[1] = c4_rawData->size[1];
      c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_e_st, c4_x, c4_i10,
        &c4_l_emlrtRTEI);
      c4_c_loop_ub = c4_rawData->size[1] - 1;
      for (c4_i12 = 0; c4_i12 <= c4_c_loop_ub; c4_i12++) {
        c4_x->data[c4_i12] = c4_rawData->data[c4_rawData->size[0] * c4_i12];
      }

      c4_nx = c4_x->size[1];
      c4_i13 = c4_tempDataArray->size[0] * c4_tempDataArray->size[1];
      c4_tempDataArray->size[0] = 1;
      c4_tempDataArray->size[1] = c4_nx;
      c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_e_st, c4_tempDataArray,
        c4_i13, &c4_ob_emlrtRTEI);
      memcpy((void *)&c4_tempDataArray->data[0], (void *)&c4_x->data[0], (size_t)
             c4_nx * sizeof(uint8_T));
      c4_e_st.site = &c4_qb_emlrtRSI;
      c4_n_obj = c4_h_obj;
      c4_i14 = c4_out->size[0] * c4_out->size[1];
      c4_out->size[0] = 1;
      c4_out->size[1] = c4_n_obj->ByteOrder->size[1];
      c4_emxEnsureCapacity_char_T(chartInstance, &c4_e_st, c4_out, c4_i14,
        &c4_l_emlrtRTEI);
      c4_d_loop_ub = c4_n_obj->ByteOrder->size[1] - 1;
      for (c4_i15 = 0; c4_i15 <= c4_d_loop_ub; c4_i15++) {
        c4_out->data[c4_i15] = c4_n_obj->ByteOrder->data[c4_i15];
      }

      c4_e_st.site = &c4_qb_emlrtRSI;
      c4_q_obj = c4_h_obj;
      c4_f_st.site = &c4_rb_emlrtRSI;
      for (c4_i16 = 0; c4_i16 < 13; c4_i16++) {
        c4_r_obj[c4_i16] = c4_q_obj->MachineByteOrder[c4_i16];
      }

      c4_e_strcmp(chartInstance, &c4_f_st, c4_out, c4_r_obj);
      c4_i17 = c4_dataRaw->size[0] * c4_dataRaw->size[1];
      c4_dataRaw->size[0] = 1;
      c4_dataRaw->size[1] = c4_tempDataArray->size[1];
      c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_c_st, c4_dataRaw, c4_i17,
        &c4_cc_emlrtRTEI);
      c4_e_loop_ub = c4_tempDataArray->size[1] - 1;
      for (c4_i18 = 0; c4_i18 <= c4_e_loop_ub; c4_i18++) {
        c4_dataRaw->data[c4_i18] = c4_tempDataArray->data[c4_i18];
      }
    }

    c4_b_st.site = &c4_tg_emlrtRSI;
    c4_b_indexShapeCheck(chartInstance, &c4_b_st, c4_dataRaw->size);
    c4_b_dataRaw = c4_dataRaw->size[0] * c4_dataRaw->size[1];
    for (c4_i1 = 0; c4_i1 < 8; c4_i1++) {
      c4_i3 = c4_i1 + 1;
      if ((c4_i3 < 1) || (c4_i3 > c4_b_dataRaw)) {
        emlrtDynamicBoundsCheckR2012b(c4_i3, 1, c4_b_dataRaw, &c4_j_emlrtBCI,
          &c4_st);
      }

      c4_headerData[c4_i1] = (real_T)c4_dataRaw->data[c4_i3 - 1];
    }

    c4_st.site = &c4_dg_emlrtRSI;
    c4_requestID = c4_reqPacketID;
    c4_b_st.site = &c4_wi_emlrtRSI;
    for (c4_i5 = 0; c4_i5 < 2; c4_i5++) {
      c4_d = muDoubleScalarRound(c4_headerData[1 - c4_i5]);
      if (c4_d < 256.0) {
        if (c4_d >= 0.0) {
          c4_u1 = (uint8_T)c4_d;
        } else {
          c4_u1 = 0U;
        }
      } else if (c4_d >= 256.0) {
        c4_u1 = MAX_uint8_T;
      } else {
        c4_u1 = 0U;
      }

      c4_b_x[c4_i5] = c4_u1;
    }

    memcpy((void *)&c4_d_y, (void *)&c4_b_x[0], (size_t)1 * sizeof(uint16_T));
    c4_u = c4_d_y;
    if (c4_u > 255) {
      c4_u = 255U;
    }

    c4_transactionID = (uint8_T)c4_u;
    c4_valid = (c4_transactionID == c4_requestID);
    if (!c4_valid) {
      c4_retry = true;
    } else {
      c4_fcnCode = c4_headerData[7];
      c4_st.site = &c4_eg_emlrtRSI;
      c4_a = c4_fcnCode;
      c4_b_st.site = &c4_xi_emlrtRSI;
      if (!c4_all_in_integer_range(chartInstance, c4_a)) {
        c4_i_y = NULL;
        sf_mex_assign(&c4_i_y, sf_mex_create("y", c4_b_cv3, 10, 0U, 1U, 0U, 2, 1,
          24), false);
        c4_k_y = NULL;
        sf_mex_assign(&c4_k_y, sf_mex_create("y", c4_b_cv3, 10, 0U, 1U, 0U, 2, 1,
          24), false);
        sf_mex_call(&c4_st, &c4_wb_emlrtMCI, "error", 0U, 2U, 14, c4_i_y, 14,
                    sf_mex_call(&c4_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c4_st, NULL, "message", 1U, 1U, 14, c4_k_y)));
      }

      c4_b_a = c4_a;
      c4_a1 = (uint64_T)c4_b_a;
      c4_d1 = (real_T)((c4_a1 & 128ULL) != 0ULL);
      c4_st.site = &c4_eg_emlrtRSI;
      c4_c_x = c4_d1;
      c4_d_x = c4_c_x;
      c4_b_b = muDoubleScalarIsNaN(c4_d_x);
      if (c4_b_b) {
        c4_n_y = NULL;
        sf_mex_assign(&c4_n_y, sf_mex_create("y", c4_b_cv6, 10, 0U, 1U, 0U, 2, 1,
          19), false);
        c4_o_y = NULL;
        sf_mex_assign(&c4_o_y, sf_mex_create("y", c4_b_cv6, 10, 0U, 1U, 0U, 2, 1,
          19), false);
        sf_mex_call(&c4_st, &c4_yb_emlrtMCI, "error", 0U, 2U, 14, c4_n_y, 14,
                    sf_mex_call(&c4_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c4_st, NULL, "message", 1U, 1U, 14, c4_o_y)));
      }

      if (c4_d1 != 0.0) {
        c4_st.site = &c4_fg_emlrtRSI;
        c4_p_obj = c4_obj;
        c4_b_st.site = &c4_sg_emlrtRSI;
        c4_f_varargin_1 = c4_p_obj->TcpIpObj;
        c4_c_st.site = &c4_n_emlrtRSI;
        c4_TCPClient_validateConnected(chartInstance, &c4_c_st, c4_f_varargin_1);
        c4_c_st.site = &c4_n_emlrtRSI;
        c4_g_varargin_1 = c4_f_varargin_1->TransportChannel;
        c4_d_st.site = &c4_qb_emlrtRSI;
        c4_AsyncIOTransportChannel_get_StructData(chartInstance, &c4_d_st,
          c4_g_varargin_1);
        c4_d_st.site = &c4_qb_emlrtRSI;
        c4_AsyncIOTransportChannel_readRaw(chartInstance, &c4_d_st,
          c4_g_varargin_1, 1.0, c4_rawData);
        c4_b2 = (c4_rawData->size[0] == 0);
        c4_b3 = (c4_rawData->size[1] == 0);
        if (c4_b2 || c4_b3) {
          c4_dataRaw->size[0] = 0;
          c4_dataRaw->size[1] = 0;
        } else {
          c4_d_st.site = &c4_qb_emlrtRSI;
          c4_t_obj = c4_g_varargin_1;
          c4_i19 = c4_out->size[0] * c4_out->size[1];
          c4_out->size[0] = 1;
          c4_out->size[1] = c4_t_obj->NativeDataType->size[1];
          c4_emxEnsureCapacity_char_T(chartInstance, &c4_d_st, c4_out, c4_i19,
            &c4_l_emlrtRTEI);
          c4_f_loop_ub = c4_t_obj->NativeDataType->size[1] - 1;
          for (c4_i22 = 0; c4_i22 <= c4_f_loop_ub; c4_i22++) {
            c4_out->data[c4_i22] = c4_t_obj->NativeDataType->data[c4_i22];
          }

          c4_d_st.site = &c4_qb_emlrtRSI;
          if (!c4_i_strcmp(chartInstance, &c4_d_st, c4_out)) {
            c4_p_y = NULL;
            sf_mex_assign(&c4_p_y, sf_mex_create("y", c4_b_cv7, 10, 0U, 1U, 0U,
              2, 1, 40), false);
            c4_q_y = NULL;
            sf_mex_assign(&c4_q_y, sf_mex_create("y", c4_b_cv7, 10, 0U, 1U, 0U,
              2, 1, 40), false);
            c4_d_st.site = &c4_qb_emlrtRSI;
            c4_w_obj = c4_g_varargin_1;
            c4_i26 = c4_out->size[0] * c4_out->size[1];
            c4_out->size[0] = 1;
            c4_out->size[1] = c4_w_obj->NativeDataType->size[1];
            c4_emxEnsureCapacity_char_T(chartInstance, &c4_d_st, c4_out, c4_i26,
              &c4_l_emlrtRTEI);
            c4_h_loop_ub = c4_w_obj->NativeDataType->size[1] - 1;
            for (c4_i31 = 0; c4_i31 <= c4_h_loop_ub; c4_i31++) {
              c4_out->data[c4_i31] = c4_w_obj->NativeDataType->data[c4_i31];
            }

            c4_s_y = NULL;
            sf_mex_assign(&c4_s_y, sf_mex_create("y", c4_out->data, 10, 0U, 1U,
              0U, 2, 1, c4_out->size[1]), false);
            c4_u_y = NULL;
            sf_mex_assign(&c4_u_y, sf_mex_create("y", c4_b_cv9, 10, 0U, 1U, 0U,
              2, 1, 5), false);
            sf_mex_call(&c4_c_st, &c4_gb_emlrtMCI, "error", 0U, 2U, 14, c4_p_y,
                        14, sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14,
              sf_mex_call(&c4_c_st, NULL, "message", 1U, 3U, 14, c4_q_y, 14,
                          c4_s_y, 14, c4_u_y)));
          }

          c4_d_st.site = &c4_qb_emlrtRSI;
          c4_u_obj = c4_g_varargin_1;
          c4_i23 = c4_rawData->size[0];
          c4_i25 = 1;
          if ((c4_i25 < 1) || (c4_i25 > c4_i23)) {
            emlrtDynamicBoundsCheckR2012b(c4_i25, 1, c4_i23, &c4_k_emlrtBCI,
              &c4_d_st);
          }

          c4_e_st.site = &c4_qb_emlrtRSI;
          c4_i28 = c4_x->size[0] * c4_x->size[1];
          c4_x->size[0] = 1;
          c4_x->size[1] = c4_rawData->size[1];
          c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_e_st, c4_x, c4_i28,
            &c4_l_emlrtRTEI);
          c4_i_loop_ub = c4_rawData->size[1] - 1;
          for (c4_i32 = 0; c4_i32 <= c4_i_loop_ub; c4_i32++) {
            c4_x->data[c4_i32] = c4_rawData->data[c4_rawData->size[0] * c4_i32];
          }

          c4_b_nx = c4_x->size[1];
          c4_i34 = c4_tempDataArray->size[0] * c4_tempDataArray->size[1];
          c4_tempDataArray->size[0] = 1;
          c4_tempDataArray->size[1] = c4_b_nx;
          c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_e_st, c4_tempDataArray,
            c4_i34, &c4_ob_emlrtRTEI);
          memcpy((void *)&c4_tempDataArray->data[0], (void *)&c4_x->data[0],
                 (size_t)c4_b_nx * sizeof(uint8_T));
          c4_e_st.site = &c4_qb_emlrtRSI;
          c4_ab_obj = c4_u_obj;
          c4_i38 = c4_out->size[0] * c4_out->size[1];
          c4_out->size[0] = 1;
          c4_out->size[1] = c4_ab_obj->ByteOrder->size[1];
          c4_emxEnsureCapacity_char_T(chartInstance, &c4_e_st, c4_out, c4_i38,
            &c4_l_emlrtRTEI);
          c4_l_loop_ub = c4_ab_obj->ByteOrder->size[1] - 1;
          for (c4_i41 = 0; c4_i41 <= c4_l_loop_ub; c4_i41++) {
            c4_out->data[c4_i41] = c4_ab_obj->ByteOrder->data[c4_i41];
          }

          c4_e_st.site = &c4_qb_emlrtRSI;
          c4_bb_obj = c4_u_obj;
          c4_f_st.site = &c4_rb_emlrtRSI;
          for (c4_i43 = 0; c4_i43 < 13; c4_i43++) {
            c4_db_obj[c4_i43] = c4_bb_obj->MachineByteOrder[c4_i43];
          }

          c4_e_strcmp(chartInstance, &c4_f_st, c4_out, c4_db_obj);
          c4_i45 = c4_dataRaw->size[0] * c4_dataRaw->size[1];
          c4_dataRaw->size[0] = 1;
          c4_dataRaw->size[1] = c4_tempDataArray->size[1];
          c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_c_st, c4_dataRaw,
            c4_i45, &c4_cc_emlrtRTEI);
          c4_n_loop_ub = c4_tempDataArray->size[1] - 1;
          for (c4_i47 = 0; c4_i47 <= c4_n_loop_ub; c4_i47++) {
            c4_dataRaw->data[c4_i47] = c4_tempDataArray->data[c4_i47];
          }
        }

        c4_i20 = c4_dataRaw->size[0] * c4_dataRaw->size[1];
        c4_i21 = 1;
        if ((c4_i21 < 1) || (c4_i21 > c4_i20)) {
          emlrtDynamicBoundsCheckR2012b(c4_i21, 1, c4_i20, &c4_j_emlrtBCI,
            &c4_st);
        }

        c4_errCode = (real_T)c4_dataRaw->data[0];
        c4_st.site = &c4_gg_emlrtRSI;
        c4_Modbus_flushIO(chartInstance, &c4_st, c4_obj);
        c4_st.site = &c4_hg_emlrtRSI;
        c4_Modbus_translateandGenerateServerError(chartInstance, &c4_st,
          c4_errCode, c4_fcnCode);
      } else {
        c4_st.site = &c4_ig_emlrtRSI;
        c4_o_obj = c4_obj;
        c4_timedOut = false;
        c4_b_st.site = &c4_ng_emlrtRSI;
        c4_startTic = c4_tic(chartInstance, &c4_b_st);
        do {
          c4_exitg1 = 0;
          c4_b_st.site = &c4_og_emlrtRSI;
          if (c4_TCPClient_get_NumBytesAvailable(chartInstance, &c4_b_st,
               c4_o_obj->TcpIpObj) < 4.0) {
            c4_b_st.site = &c4_pg_emlrtRSI;
            if (c4_toc(chartInstance, &c4_b_st, c4_startTic) >
                c4_o_obj->TransactionTimeout) {
              c4_timedOut = true;
              c4_exitg1 = 1;
            }
          } else {
            c4_exitg1 = 1;
          }
        } while (c4_exitg1 == 0);

        if (!c4_timedOut) {
          c4_st.site = &c4_jg_emlrtRSI;
          c4_s_obj = c4_obj;
          c4_b_st.site = &c4_sg_emlrtRSI;
          c4_h_varargin_1 = c4_s_obj->TcpIpObj;
          c4_c_st.site = &c4_n_emlrtRSI;
          c4_TCPClient_validateConnected(chartInstance, &c4_c_st,
            c4_h_varargin_1);
          c4_c_st.site = &c4_n_emlrtRSI;
          c4_i_varargin_1 = c4_h_varargin_1->TransportChannel;
          c4_d_st.site = &c4_qb_emlrtRSI;
          c4_AsyncIOTransportChannel_get_StructData(chartInstance, &c4_d_st,
            c4_i_varargin_1);
          c4_d_st.site = &c4_qb_emlrtRSI;
          c4_AsyncIOTransportChannel_readRaw(chartInstance, &c4_d_st,
            c4_i_varargin_1, 4.0, c4_rawData);
          c4_b4 = (c4_rawData->size[0] == 0);
          c4_b5 = (c4_rawData->size[1] == 0);
          if (c4_b4 || c4_b5) {
            c4_dataRaw->size[0] = 0;
            c4_dataRaw->size[1] = 0;
          } else {
            c4_d_st.site = &c4_qb_emlrtRSI;
            c4_v_obj = c4_i_varargin_1;
            c4_i24 = c4_out->size[0] * c4_out->size[1];
            c4_out->size[0] = 1;
            c4_out->size[1] = c4_v_obj->NativeDataType->size[1];
            c4_emxEnsureCapacity_char_T(chartInstance, &c4_d_st, c4_out, c4_i24,
              &c4_l_emlrtRTEI);
            c4_g_loop_ub = c4_v_obj->NativeDataType->size[1] - 1;
            for (c4_i29 = 0; c4_i29 <= c4_g_loop_ub; c4_i29++) {
              c4_out->data[c4_i29] = c4_v_obj->NativeDataType->data[c4_i29];
            }

            c4_d_st.site = &c4_qb_emlrtRSI;
            if (!c4_i_strcmp(chartInstance, &c4_d_st, c4_out)) {
              c4_r_y = NULL;
              sf_mex_assign(&c4_r_y, sf_mex_create("y", c4_b_cv8, 10, 0U, 1U, 0U,
                2, 1, 40), false);
              c4_t_y = NULL;
              sf_mex_assign(&c4_t_y, sf_mex_create("y", c4_b_cv8, 10, 0U, 1U, 0U,
                2, 1, 40), false);
              c4_d_st.site = &c4_qb_emlrtRSI;
              c4_y_obj = c4_i_varargin_1;
              c4_i36 = c4_out->size[0] * c4_out->size[1];
              c4_out->size[0] = 1;
              c4_out->size[1] = c4_y_obj->NativeDataType->size[1];
              c4_emxEnsureCapacity_char_T(chartInstance, &c4_d_st, c4_out,
                c4_i36, &c4_l_emlrtRTEI);
              c4_j_loop_ub = c4_y_obj->NativeDataType->size[1] - 1;
              for (c4_i39 = 0; c4_i39 <= c4_j_loop_ub; c4_i39++) {
                c4_out->data[c4_i39] = c4_y_obj->NativeDataType->data[c4_i39];
              }

              c4_v_y = NULL;
              sf_mex_assign(&c4_v_y, sf_mex_create("y", c4_out->data, 10, 0U, 1U,
                0U, 2, 1, c4_out->size[1]), false);
              c4_w_y = NULL;
              sf_mex_assign(&c4_w_y, sf_mex_create("y", c4_b_cv10, 10, 0U, 1U,
                0U, 2, 1, 5), false);
              sf_mex_call(&c4_c_st, &c4_gb_emlrtMCI, "error", 0U, 2U, 14, c4_r_y,
                          14, sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U,
                14, sf_mex_call(&c4_c_st, NULL, "message", 1U, 3U, 14, c4_t_y,
                                14, c4_v_y, 14, c4_w_y)));
            }

            c4_d_st.site = &c4_qb_emlrtRSI;
            c4_x_obj = c4_i_varargin_1;
            c4_i33 = c4_rawData->size[0];
            c4_i35 = 1;
            if ((c4_i35 < 1) || (c4_i35 > c4_i33)) {
              emlrtDynamicBoundsCheckR2012b(c4_i35, 1, c4_i33, &c4_k_emlrtBCI,
                &c4_d_st);
            }

            c4_e_st.site = &c4_qb_emlrtRSI;
            c4_i37 = c4_x->size[0] * c4_x->size[1];
            c4_x->size[0] = 1;
            c4_x->size[1] = c4_rawData->size[1];
            c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_e_st, c4_x, c4_i37,
              &c4_l_emlrtRTEI);
            c4_k_loop_ub = c4_rawData->size[1] - 1;
            for (c4_i40 = 0; c4_i40 <= c4_k_loop_ub; c4_i40++) {
              c4_x->data[c4_i40] = c4_rawData->data[c4_rawData->size[0] * c4_i40];
            }

            c4_c_nx = c4_x->size[1];
            c4_i42 = c4_tempDataArray->size[0] * c4_tempDataArray->size[1];
            c4_tempDataArray->size[0] = 1;
            c4_tempDataArray->size[1] = c4_c_nx;
            c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_e_st,
              c4_tempDataArray, c4_i42, &c4_ob_emlrtRTEI);
            memcpy((void *)&c4_tempDataArray->data[0], (void *)&c4_x->data[0],
                   (size_t)c4_c_nx * sizeof(uint8_T));
            c4_e_st.site = &c4_qb_emlrtRSI;
            c4_cb_obj = c4_x_obj;
            c4_i44 = c4_out->size[0] * c4_out->size[1];
            c4_out->size[0] = 1;
            c4_out->size[1] = c4_cb_obj->ByteOrder->size[1];
            c4_emxEnsureCapacity_char_T(chartInstance, &c4_e_st, c4_out, c4_i44,
              &c4_l_emlrtRTEI);
            c4_m_loop_ub = c4_cb_obj->ByteOrder->size[1] - 1;
            for (c4_i46 = 0; c4_i46 <= c4_m_loop_ub; c4_i46++) {
              c4_out->data[c4_i46] = c4_cb_obj->ByteOrder->data[c4_i46];
            }

            c4_e_st.site = &c4_qb_emlrtRSI;
            c4_eb_obj = c4_x_obj;
            c4_f_st.site = &c4_rb_emlrtRSI;
            for (c4_i48 = 0; c4_i48 < 13; c4_i48++) {
              c4_fb_obj[c4_i48] = c4_eb_obj->MachineByteOrder[c4_i48];
            }

            c4_e_strcmp(chartInstance, &c4_f_st, c4_out, c4_fb_obj);
            c4_i49 = c4_dataRaw->size[0] * c4_dataRaw->size[1];
            c4_dataRaw->size[0] = 1;
            c4_dataRaw->size[1] = c4_tempDataArray->size[1];
            c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_c_st, c4_dataRaw,
              c4_i49, &c4_cc_emlrtRTEI);
            c4_o_loop_ub = c4_tempDataArray->size[1] - 1;
            for (c4_i50 = 0; c4_i50 <= c4_o_loop_ub; c4_i50++) {
              c4_dataRaw->data[c4_i50] = c4_tempDataArray->data[c4_i50];
            }
          }

          c4_b_st.site = &c4_tg_emlrtRSI;
          c4_b_indexShapeCheck(chartInstance, &c4_b_st, c4_dataRaw->size);
          c4_c_dataRaw = c4_dataRaw->size[0] * c4_dataRaw->size[1];
          for (c4_i27 = 0; c4_i27 < 4; c4_i27++) {
            c4_i30 = c4_i27 + 1;
            if ((c4_i30 < 1) || (c4_i30 > c4_c_dataRaw)) {
              emlrtDynamicBoundsCheckR2012b(c4_i30, 1, c4_c_dataRaw,
                &c4_j_emlrtBCI, &c4_st);
            }
          }
        }
      }

      c4_guard1 = true;
    }
  } else {
    c4_guard1 = true;
  }

  if (c4_guard1) {
    if (!c4_timedOut) {
      c4_obj->RetryCount = 0.0;
    } else {
      c4_st.site = &c4_kg_emlrtRSI;
      c4_d_obj = c4_obj;
      c4_b_out = c4_d_obj->NumRetries;
      c4_b_varargin_1 = c4_obj->RetryCount;
      c4_varargin_2 = c4_b_out;
      c4_d_varargin_1 = c4_b_varargin_1;
      c4_b_varargin_2 = c4_varargin_2;
      c4_p = false;
      c4_x1 = c4_d_varargin_1;
      c4_x2 = c4_b_varargin_2;
      c4_b_p = true;
      c4_b_x1 = c4_x1;
      c4_b_x2 = c4_x2;
      c4_c_p = (c4_b_x1 == c4_b_x2);
      if (!c4_c_p) {
        c4_b_p = false;
      }

      if (c4_b_p) {
        c4_p = true;
      }

      if (c4_p) {
        c4_st.site = &c4_lg_emlrtRSI;
        c4_Modbus_flushIO(chartInstance, &c4_st, c4_obj);
        c4_obj->RetryCount = 0.0;
        for (c4_i4 = 0; c4_i4 < 40; c4_i4++) {
          c4_r.Value[c4_i4] = c4_b_cv1[c4_i4];
        }

        c4_b_y = NULL;
        sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_b_cv2, 10, 0U, 1U, 0U, 2, 1,
          27), false);
        c4_e_y = NULL;
        sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_b_cv2, 10, 0U, 1U, 0U, 2, 1,
          27), false);
        c4_f_y = NULL;
        sf_mex_assign(&c4_f_y, sf_mex_create_class_instance(
          "coder.internal.string"), false);
        for (c4_i9 = 0; c4_i9 < 40; c4_i9++) {
          c4_b_u[c4_i9] = c4_r.Value[c4_i9];
        }

        c4_g_y = NULL;
        sf_mex_assign(&c4_g_y, sf_mex_create("y", c4_b_u, 10, 0U, 1U, 0U, 2, 1,
          40), false);
        c4_propValues[0] = c4_g_y;
        sf_mex_set_all_properties(&c4_f_y, 0, 1, c4_propNames, c4_propClasses,
          c4_propValues);
        sf_mex_assign(&c4_f_y, sf_mex_convert_to_redirect_source(c4_f_y, 0,
          "coder.internal.string"), false);
        sf_mex_call(c4_sp, &c4_jb_emlrtMCI, "error", 0U, 2U, 14, c4_b_y, 14,
                    sf_mex_call(c4_sp, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(c4_sp, NULL, "message", 1U, 2U, 14, c4_e_y, 14, c4_f_y)));
      } else {
        c4_st.site = &c4_mg_emlrtRSI;
        c4_f_obj = c4_obj;
        c4_b_st.site = &c4_xj_emlrtRSI;
        c4_Modbus_flushIO(chartInstance, &c4_b_st, c4_f_obj);
        c4_b_st.site = &c4_yj_emlrtRSI;
        c4_g_obj = c4_f_obj;
        c4_c_st.site = &c4_ak_emlrtRSI;
        c4_i_obj = c4_g_obj->TcpIpObj;
        c4_d_st.site = &c4_n_emlrtRSI;
        c4_k_obj = c4_i_obj;
        c4_e_st.site = &c4_n_emlrtRSI;
        c4_l_obj = c4_k_obj->AsyncIOChannel;
        c4_f_st.site = &c4_dk_emlrtRSI;
        c4_m_obj = c4_l_obj;
        c4_g_st.site = &c4_fc_emlrtRSI;
        c4_chImpl = c4_m_obj->ChannelImpl;
        c4_success = coderChannelIsOpen(c4_chImpl, &c4_result);
        c4_h_st.site = &c4_gc_emlrtRSI;
        c4_API_channelErrorIfFailed(chartInstance, &c4_h_st, c4_chImpl,
          c4_success);
        if (c4_result) {
          c4_f_st.site = &c4_ek_emlrtRSI;
          c4_b_chImpl = c4_l_obj->ChannelImpl;
          c4_b_success = coderChannelClose(c4_b_chImpl);
          c4_g_st.site = &c4_fk_emlrtRSI;
          c4_API_channelErrorIfFailed(chartInstance, &c4_g_st, c4_b_chImpl,
            c4_b_success);
        }

        c4_c_st.site = &c4_bk_emlrtRSI;
        c4_e_varargin_1 = 0.002;
        c4_l_y = NULL;
        sf_mex_assign(&c4_l_y, sf_mex_create("y", c4_b_cv5, 10, 0U, 1U, 0U, 2, 1,
          5), false);
        c4_m_y = NULL;
        sf_mex_assign(&c4_m_y, sf_mex_create("y", &c4_e_varargin_1, 0, 0U, 0U,
          0U, 0), false);
        c4_d_st.site = &c4_jf_emlrtRSI;
        c4_b_feval(chartInstance, &c4_d_st, c4_l_y, c4_m_y);
        c4_c_st.site = &c4_ck_emlrtRSI;
        c4_TCPClient_connect(chartInstance, &c4_c_st, c4_g_obj->TcpIpObj);
        c4_f_obj->RetryCount++;
        c4_retry = true;
      }
    }
  }

  c4_emxFree_uint8_T(chartInstance, &c4_x);
  c4_emxFree_uint8_T(chartInstance, &c4_tempDataArray);
  c4_emxFree_char_T(chartInstance, &c4_out);
  c4_emxFree_uint8_T(chartInstance, &c4_rawData);
  c4_emxFree_uint8_T(chartInstance, &c4_dataRaw);
  return c4_retry;
}

static real_T c4_TCPClient_get_NumBytesAvailable(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_matlabshared_network_internal_TCPClient *c4_obj)
{
  CoderChannel c4_chImpl;
  CoderInputStream c4_b_streamImpl;
  CoderInputStream c4_streamImpl;
  c4_matlabshared_asyncio_internal_InputStream *c4_c_obj;
  c4_matlabshared_asyncio_internal_InputStream *c4_d_obj;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_b_obj;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_e_st;
  emlrtStack c4_f_st;
  emlrtStack c4_st;
  real_T c4_b_count;
  real_T c4_count;
  real_T c4_value;
  int32_T c4_b_success;
  int32_T c4_success;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_st.site = &c4_n_emlrtRSI;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_e_st.prev = &c4_d_st;
  c4_e_st.tls = c4_d_st.tls;
  c4_f_st.prev = &c4_e_st;
  c4_f_st.tls = c4_e_st.tls;
  c4_TCPClient_validateConnected(chartInstance, &c4_st, c4_obj);
  c4_st.site = &c4_n_emlrtRSI;
  c4_b_obj = c4_obj->TransportChannel;
  c4_b_st.site = &c4_qb_emlrtRSI;
  c4_value = c4_BufferChannel_get_NumElementsAvailable(chartInstance, &c4_b_st,
    &c4_b_obj->UnreadDataBuffer);
  c4_b_st.site = &c4_qb_emlrtRSI;
  c4_c_obj = &c4_b_obj->AsyncIOChannel->InputStream;
  c4_c_st.site = &c4_rg_emlrtRSI;
  c4_d_obj = c4_c_obj;
  c4_d_st.site = &c4_wf_emlrtRSI;
  c4_streamImpl = c4_d_obj->StreamImpl;
  c4_success = coderStreamGetDataAvailable(c4_streamImpl, &c4_count);
  c4_e_st.site = &c4_xf_emlrtRSI;
  c4_b_streamImpl = c4_streamImpl;
  c4_b_success = c4_success;
  if ((real_T)c4_b_success == 0.0) {
    c4_chImpl = coderStreamGetChannel(c4_b_streamImpl);
    c4_f_st.site = &c4_te_emlrtRSI;
    c4_b_API_channelErrorIfFailed(chartInstance, &c4_f_st, c4_chImpl);
  }

  c4_b_count = c4_c_obj->PartialPacketCount + c4_count;
  c4_value += c4_b_count;
  return c4_value;
}

static real_T c4_BufferChannel_get_NumElementsAvailable(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_matlabshared_asyncio_buffer_internal_BufferChannel *c4_obj)
{
  CoderChannel c4_chImpl;
  CoderInputStream c4_b_streamImpl;
  CoderInputStream c4_streamImpl;
  c4_matlabshared_asyncio_internal_InputStream *c4_b_obj;
  c4_matlabshared_asyncio_internal_InputStream *c4_c_obj;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_e_st;
  emlrtStack c4_st;
  real_T c4_b_count;
  real_T c4_c_count;
  real_T c4_count;
  int32_T c4_b_success;
  int32_T c4_success;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_st.site = &c4_qg_emlrtRSI;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_e_st.prev = &c4_d_st;
  c4_e_st.tls = c4_d_st.tls;
  c4_b_obj = &c4_obj->InputStream;
  c4_b_st.site = &c4_rg_emlrtRSI;
  c4_c_obj = c4_b_obj;
  c4_c_st.site = &c4_wf_emlrtRSI;
  c4_streamImpl = c4_c_obj->StreamImpl;
  c4_success = coderStreamGetDataAvailable(c4_streamImpl, &c4_b_count);
  c4_d_st.site = &c4_xf_emlrtRSI;
  c4_b_streamImpl = c4_streamImpl;
  c4_b_success = c4_success;
  if ((real_T)c4_b_success == 0.0) {
    c4_chImpl = coderStreamGetChannel(c4_b_streamImpl);
    c4_e_st.site = &c4_te_emlrtRSI;
    c4_b_API_channelErrorIfFailed(chartInstance, &c4_e_st, c4_chImpl);
  }

  c4_c_count = c4_b_obj->PartialPacketCount + c4_b_count;
  c4_count = c4_c_count + c4_obj->PartialPacketCount;
  c4_count /= c4_obj->BytesPerElement;
  return c4_count;
}

static boolean_T c4_AsyncIOTransportChannel_get_StructData
  (SFc4_wwtp3InstanceStruct *chartInstance, const emlrtStack *c4_sp,
   c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_obj)
{
  static char_T c4_b_cv[6] = { 's', 't', 'r', 'u', 'c', 't' };

  c4_emxArray_char_T *c4_b_out;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_b_obj;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_e_st;
  emlrtStack c4_f_st;
  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_f_y = NULL;
  const mxArray *c4_g_y = NULL;
  const mxArray *c4_i_y = NULL;
  const mxArray *c4_j_y = NULL;
  const mxArray *c4_k_y = NULL;
  const mxArray *c4_m_y = NULL;
  const mxArray *c4_n_y = NULL;
  const mxArray *c4_y = NULL;
  int32_T c4_b_kstr;
  int32_T c4_exitg1;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_kstr;
  int32_T c4_loop_ub;
  int32_T c4_remainingDimsA;
  char_T c4_b_s;
  char_T c4_b_x;
  char_T c4_c_s;
  char_T c4_c_x;
  char_T c4_d_s;
  char_T c4_d_x;
  char_T c4_e_s;
  char_T c4_f_s;
  char_T c4_g_s;
  char_T c4_h_s;
  char_T c4_h_y;
  char_T c4_l_y;
  char_T c4_s;
  char_T c4_x;
  int8_T c4_b_u;
  int8_T c4_c_u;
  int8_T c4_d_u;
  int8_T c4_u;
  boolean_T c4_b;
  boolean_T c4_b1;
  boolean_T c4_b2;
  boolean_T c4_b3;
  boolean_T c4_b4;
  boolean_T c4_b_p;
  boolean_T c4_bool;
  boolean_T c4_c_out;
  boolean_T c4_c_p;
  boolean_T c4_d_p;
  boolean_T c4_p;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_e_st.prev = &c4_d_st;
  c4_e_st.tls = c4_d_st.tls;
  c4_f_st.prev = &c4_e_st;
  c4_f_st.tls = c4_e_st.tls;
  c4_emxInit_char_T(chartInstance, c4_sp, &c4_b_out, 2, &c4_l_emlrtRTEI);
  c4_st.site = &c4_qb_emlrtRSI;
  c4_b_obj = c4_obj;
  c4_i = c4_b_out->size[0] * c4_b_out->size[1];
  c4_b_out->size[0] = 1;
  c4_b_out->size[1] = c4_b_obj->NativeDataType->size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, &c4_st, c4_b_out, c4_i,
    &c4_l_emlrtRTEI);
  c4_loop_ub = c4_b_obj->NativeDataType->size[1] - 1;
  for (c4_i1 = 0; c4_i1 <= c4_loop_ub; c4_i1++) {
    c4_b_out->data[c4_i1] = c4_b_obj->NativeDataType->data[c4_i1];
  }

  c4_st.site = &c4_qb_emlrtRSI;
  c4_b_st.site = &c4_jd_emlrtRSI;
  c4_c_st.site = &c4_kd_emlrtRSI;
  c4_bool = false;
  c4_remainingDimsA = c4_b_out->size[1];
  if (c4_remainingDimsA != 6) {
  } else {
    c4_kstr = 1;
    do {
      c4_exitg1 = 0;
      if (c4_kstr - 1 < 6) {
        c4_b_kstr = c4_kstr - 1;
        c4_d_st.site = &c4_ld_emlrtRSI;
        c4_s = c4_b_out->data[c4_b_kstr];
        c4_b_s = c4_s;
        c4_b1 = ((real_T)(uint8_T)c4_b_s <= 127.0);
        c4_p = c4_b1;
        if (!c4_p) {
          c4_y = NULL;
          sf_mex_assign(&c4_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_b_y = NULL;
          sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_u = MAX_int8_T;
          c4_c_y = NULL;
          sf_mex_assign(&c4_c_y, sf_mex_create("y", &c4_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c4_d_st, &c4_fb_emlrtMCI, "error", 0U, 2U, 14, c4_y, 14,
                      sf_mex_call(&c4_d_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c4_d_st, NULL, "message", 1U, 2U, 14, c4_b_y, 14,
                        c4_c_y)));
        }

        c4_d_st.site = &c4_md_emlrtRSI;
        c4_c_s = c4_b_cv[c4_b_kstr];
        c4_d_s = c4_c_s;
        c4_b2 = ((real_T)(uint8_T)c4_d_s <= 127.0);
        c4_b_p = c4_b2;
        if (!c4_b_p) {
          c4_d_y = NULL;
          sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_e_y = NULL;
          sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_b_u = MAX_int8_T;
          c4_f_y = NULL;
          sf_mex_assign(&c4_f_y, sf_mex_create("y", &c4_b_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c4_d_st, &c4_fb_emlrtMCI, "error", 0U, 2U, 14, c4_d_y, 14,
                      sf_mex_call(&c4_d_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c4_d_st, NULL, "message", 1U, 2U, 14, c4_e_y, 14,
                        c4_f_y)));
        }

        c4_d_st.site = &c4_nd_emlrtRSI;
        c4_x = c4_b_out->data[c4_b_kstr];
        c4_e_st.site = &c4_od_emlrtRSI;
        c4_b_x = c4_x;
        c4_f_st.site = &c4_pd_emlrtRSI;
        c4_e_s = c4_b_x;
        c4_f_s = c4_e_s;
        c4_b3 = ((real_T)(uint8_T)c4_f_s <= 127.0);
        c4_c_p = c4_b3;
        if (!c4_c_p) {
          c4_g_y = NULL;
          sf_mex_assign(&c4_g_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_i_y = NULL;
          sf_mex_assign(&c4_i_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_c_u = MAX_int8_T;
          c4_j_y = NULL;
          sf_mex_assign(&c4_j_y, sf_mex_create("y", &c4_c_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c4_f_st, &c4_fb_emlrtMCI, "error", 0U, 2U, 14, c4_g_y, 14,
                      sf_mex_call(&c4_f_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c4_f_st, NULL, "message", 1U, 2U, 14, c4_i_y, 14,
                        c4_j_y)));
        }

        c4_h_y = c4_cv1[(uint8_T)c4_b_x & 127];
        c4_d_st.site = &c4_nd_emlrtRSI;
        c4_c_x = c4_b_cv[c4_b_kstr];
        c4_e_st.site = &c4_od_emlrtRSI;
        c4_d_x = c4_c_x;
        c4_f_st.site = &c4_pd_emlrtRSI;
        c4_g_s = c4_d_x;
        c4_h_s = c4_g_s;
        c4_b4 = ((real_T)(uint8_T)c4_h_s <= 127.0);
        c4_d_p = c4_b4;
        if (!c4_d_p) {
          c4_k_y = NULL;
          sf_mex_assign(&c4_k_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_m_y = NULL;
          sf_mex_assign(&c4_m_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_d_u = MAX_int8_T;
          c4_n_y = NULL;
          sf_mex_assign(&c4_n_y, sf_mex_create("y", &c4_d_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c4_f_st, &c4_fb_emlrtMCI, "error", 0U, 2U, 14, c4_k_y, 14,
                      sf_mex_call(&c4_f_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c4_f_st, NULL, "message", 1U, 2U, 14, c4_m_y, 14,
                        c4_n_y)));
        }

        c4_l_y = c4_cv1[(uint8_T)c4_d_x & 127];
        if (c4_h_y != c4_l_y) {
          c4_exitg1 = 1;
        } else {
          c4_kstr++;
        }
      } else {
        c4_bool = true;
        c4_exitg1 = 1;
      }
    } while (c4_exitg1 == 0);
  }

  c4_emxFree_char_T(chartInstance, &c4_b_out);
  if (c4_bool) {
    c4_b = (c4_obj->DataFieldName->size[1] == 0);
    if (!c4_b) {
      c4_c_out = true;
    } else {
      c4_c_out = false;
    }
  } else {
    c4_c_out = false;
  }

  return c4_c_out;
}

static void c4_AsyncIOTransportChannel_readRaw(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_obj,
  real_T c4_numBytes, c4_emxArray_uint8_T *c4_data)
{
  static char_T c4_b_cv2[39] = { 't', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't',
    'l', 'i', 'b', ':', 't', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't', ':', 't',
    'r', 'a', 'n', 's', 'p', 'o', 'r', 't', 'I', 'n', 'v', 'a', 'l', 'i', 'd' };

  static char_T c4_b_cv[30] = { 't', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't', 'l',
    'i', 'b', ':', 't', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't', ':', 't', 'i',
    'm', 'e', 'o', 'u', 't' };

  static char_T c4_b_cv1[5] = { 'p', 'a', 'u', 's', 'e' };

  CoderChannel c4_b_chImpl;
  CoderChannel c4_c_chImpl;
  CoderChannel c4_chImpl;
  CoderChannel c4_d_chImpl;
  CoderInputStream c4_b_streamImpl;
  CoderInputStream c4_c_streamImpl;
  CoderInputStream c4_d_streamImpl;
  CoderInputStream c4_e_streamImpl;
  CoderInputStream c4_f_streamImpl;
  CoderInputStream c4_g_streamImpl;
  CoderInputStream c4_h_streamImpl;
  CoderInputStream c4_streamImpl;
  c4_emxArray_uint8_T *c4_rawData;
  c4_matlabshared_asyncio_internal_InputStream *c4_d_obj;
  c4_matlabshared_asyncio_internal_InputStream *c4_e_obj;
  c4_matlabshared_asyncio_internal_InputStream *c4_f_obj;
  c4_matlabshared_asyncio_internal_InputStream *c4_g_obj;
  c4_matlabshared_asyncio_internal_InputStream *c4_h_obj;
  c4_matlabshared_asyncio_internal_InputStream *c4_i_obj;
  c4_matlabshared_asyncio_internal_InputStream *c4_j_obj;
  c4_matlabshared_asyncio_internal_InputStream *c4_l_obj;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_b_obj;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_c_obj;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_k_obj;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_m_obj;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_e_st;
  emlrtStack c4_st;
  emlrtTimespec c4_startTic;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_f_y = NULL;
  const mxArray *c4_j_y = NULL;
  const mxArray *c4_k_y = NULL;
  const mxArray *c4_y = NULL;
  real_T c4_a;
  real_T c4_a__1;
  real_T c4_a__2;
  real_T c4_b;
  real_T c4_b_count;
  real_T c4_b_value;
  real_T c4_b_varargin_1;
  real_T c4_b_x;
  real_T c4_c_count;
  real_T c4_c_value;
  real_T c4_c_x;
  real_T c4_count;
  real_T c4_d_count;
  real_T c4_d_x;
  real_T c4_e_count;
  real_T c4_e_x;
  real_T c4_f_count;
  real_T c4_g_count;
  real_T c4_g_y;
  real_T c4_h_count;
  real_T c4_h_y;
  real_T c4_i_y;
  real_T c4_l_y;
  real_T c4_m_y;
  real_T c4_minval;
  real_T c4_numBytesToRead;
  real_T c4_value;
  real_T c4_varargin_1;
  real_T c4_varargin_2;
  real_T c4_x;
  int32_T c4_status_size[2];
  int32_T c4_b_success;
  int32_T c4_c_success;
  int32_T c4_d_success;
  int32_T c4_e_success;
  int32_T c4_exitg1;
  int32_T c4_f_success;
  int32_T c4_g_success;
  int32_T c4_h_success;
  int32_T c4_success;
  char_T c4_status_data[9];
  boolean_T c4_hasEnoughData;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_e_st.prev = &c4_d_st;
  c4_e_st.tls = c4_d_st.tls;
  c4_data->size[0] = 0;
  c4_data->size[1] = 0;
  c4_st.site = &c4_qb_emlrtRSI;
  c4_b_obj = c4_obj;
  c4_b_st.site = &c4_qb_emlrtRSI;
  c4_value = c4_BufferChannel_get_NumElementsAvailable(chartInstance, &c4_b_st,
    &c4_b_obj->UnreadDataBuffer);
  if (c4_value >= c4_numBytes) {
    c4_st.site = &c4_qb_emlrtRSI;
    c4_AsyncIOTransportChannel_getUnreadData(chartInstance, &c4_st, c4_obj,
      c4_numBytes, c4_data);
  } else {
    c4_st.site = &c4_qb_emlrtRSI;
    c4_c_obj = c4_obj;
    c4_b_st.site = &c4_qb_emlrtRSI;
    c4_b_value = c4_BufferChannel_get_NumElementsAvailable(chartInstance,
      &c4_b_st, &c4_c_obj->UnreadDataBuffer);
    c4_numBytesToRead = c4_numBytes - c4_b_value;
    c4_hasEnoughData = false;
    c4_st.site = &c4_qb_emlrtRSI;
    c4_startTic = c4_tic(chartInstance, &c4_st);
    do {
      c4_exitg1 = 0;
      c4_st.site = &c4_qb_emlrtRSI;
      if (c4_toc(chartInstance, &c4_st, c4_startTic) < c4_obj->
          AsyncIOChannel->InputStream.Timeout) {
        c4_st.site = &c4_qb_emlrtRSI;
        c4_d_obj = &c4_obj->AsyncIOChannel->InputStream;
        c4_b_st.site = &c4_rg_emlrtRSI;
        c4_e_obj = c4_d_obj;
        c4_c_st.site = &c4_wf_emlrtRSI;
        c4_streamImpl = c4_e_obj->StreamImpl;
        c4_success = coderStreamGetDataAvailable(c4_streamImpl, &c4_count);
        c4_d_st.site = &c4_xf_emlrtRSI;
        c4_b_streamImpl = c4_streamImpl;
        c4_b_success = c4_success;
        if ((real_T)c4_b_success == 0.0) {
          c4_chImpl = coderStreamGetChannel(c4_b_streamImpl);
          c4_e_st.site = &c4_te_emlrtRSI;
          c4_b_API_channelErrorIfFailed(chartInstance, &c4_e_st, c4_chImpl);
        }

        c4_d_count = c4_d_obj->PartialPacketCount + c4_count;
        if (c4_d_count >= c4_numBytesToRead) {
          c4_hasEnoughData = true;
          c4_exitg1 = 1;
        } else {
          c4_st.site = &c4_qb_emlrtRSI;
          c4_varargin_1 = 0.01;
          c4_c_y = NULL;
          sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2,
            1, 5), false);
          c4_d_y = NULL;
          sf_mex_assign(&c4_d_y, sf_mex_create("y", &c4_varargin_1, 0, 0U, 0U,
            0U, 0), false);
          c4_b_st.site = &c4_jf_emlrtRSI;
          c4_b_feval(chartInstance, &c4_b_st, c4_c_y, c4_d_y);
        }
      } else {
        c4_exitg1 = 1;
      }
    } while (c4_exitg1 == 0);

    c4_emxInit_uint8_T(chartInstance, c4_sp, &c4_rawData, 2, &c4_l_emlrtRTEI);
    if (c4_hasEnoughData) {
      c4_st.site = &c4_qb_emlrtRSI;
      c4_f_obj = &c4_obj->AsyncIOChannel->InputStream;
      c4_b_st.site = &c4_rg_emlrtRSI;
      c4_h_obj = c4_f_obj;
      c4_c_st.site = &c4_wf_emlrtRSI;
      c4_c_streamImpl = c4_h_obj->StreamImpl;
      c4_c_success = coderStreamGetDataAvailable(c4_c_streamImpl, &c4_b_count);
      c4_d_st.site = &c4_xf_emlrtRSI;
      c4_e_streamImpl = c4_c_streamImpl;
      c4_e_success = c4_c_success;
      if ((real_T)c4_e_success == 0.0) {
        c4_b_chImpl = coderStreamGetChannel(c4_e_streamImpl);
        c4_e_st.site = &c4_te_emlrtRSI;
        c4_b_API_channelErrorIfFailed(chartInstance, &c4_e_st, c4_b_chImpl);
      }

      c4_e_count = c4_f_obj->PartialPacketCount + c4_b_count;
      c4_st.site = &c4_qb_emlrtRSI;
      c4_b_InputStream_read(chartInstance, &c4_st, &c4_obj->
                            AsyncIOChannel->InputStream, c4_e_count, c4_rawData,
                            &c4_a__1, c4_status_data, c4_status_size);
      c4_st.site = &c4_qb_emlrtRSI;
      if (c4_h_strcmp(chartInstance, &c4_st, c4_status_data, c4_status_size)) {
        c4_e_y = NULL;
        sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_b_cv2, 10, 0U, 1U, 0U, 2, 1,
          39), false);
        c4_f_y = NULL;
        sf_mex_assign(&c4_f_y, sf_mex_create("y", c4_b_cv2, 10, 0U, 1U, 0U, 2, 1,
          39), false);
        sf_mex_call(c4_sp, &c4_gb_emlrtMCI, "error", 0U, 2U, 14, c4_e_y, 14,
                    sf_mex_call(c4_sp, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(c4_sp, NULL, "message", 1U, 1U, 14, c4_f_y)));
      }

      c4_st.site = &c4_qb_emlrtRSI;
      c4_BufferChannel_write(chartInstance, &c4_st, &c4_obj->UnreadDataBuffer,
        c4_rawData);
      c4_st.site = &c4_qb_emlrtRSI;
      c4_AsyncIOTransportChannel_getUnreadData(chartInstance, &c4_st, c4_obj,
        c4_numBytes, c4_data);
    } else if (c4_obj->AllowPartialReads) {
      c4_st.site = &c4_qb_emlrtRSI;
      c4_g_obj = &c4_obj->AsyncIOChannel->InputStream;
      c4_b_st.site = &c4_rg_emlrtRSI;
      c4_i_obj = c4_g_obj;
      c4_c_st.site = &c4_wf_emlrtRSI;
      c4_d_streamImpl = c4_i_obj->StreamImpl;
      c4_d_success = coderStreamGetDataAvailable(c4_d_streamImpl, &c4_c_count);
      c4_d_st.site = &c4_xf_emlrtRSI;
      c4_f_streamImpl = c4_d_streamImpl;
      c4_f_success = c4_d_success;
      if ((real_T)c4_f_success == 0.0) {
        c4_c_chImpl = coderStreamGetChannel(c4_f_streamImpl);
        c4_e_st.site = &c4_te_emlrtRSI;
        c4_b_API_channelErrorIfFailed(chartInstance, &c4_e_st, c4_c_chImpl);
      }

      c4_f_count = c4_g_obj->PartialPacketCount + c4_c_count;
      if (c4_f_count > 0.0) {
        c4_st.site = &c4_qb_emlrtRSI;
        c4_j_obj = &c4_obj->AsyncIOChannel->InputStream;
        c4_b_st.site = &c4_rg_emlrtRSI;
        c4_l_obj = c4_j_obj;
        c4_c_st.site = &c4_wf_emlrtRSI;
        c4_g_streamImpl = c4_l_obj->StreamImpl;
        c4_g_success = coderStreamGetDataAvailable(c4_g_streamImpl, &c4_g_count);
        c4_d_st.site = &c4_xf_emlrtRSI;
        c4_h_streamImpl = c4_g_streamImpl;
        c4_h_success = c4_g_success;
        if ((real_T)c4_h_success == 0.0) {
          c4_d_chImpl = coderStreamGetChannel(c4_h_streamImpl);
          c4_e_st.site = &c4_te_emlrtRSI;
          c4_b_API_channelErrorIfFailed(chartInstance, &c4_e_st, c4_d_chImpl);
        }

        c4_h_count = c4_j_obj->PartialPacketCount + c4_g_count;
        c4_st.site = &c4_qb_emlrtRSI;
        c4_b_InputStream_read(chartInstance, &c4_st, &c4_obj->
                              AsyncIOChannel->InputStream, c4_h_count,
                              c4_rawData, &c4_a__2, c4_status_data,
                              c4_status_size);
        c4_st.site = &c4_qb_emlrtRSI;
        if (c4_h_strcmp(chartInstance, &c4_st, c4_status_data, c4_status_size))
        {
          c4_j_y = NULL;
          sf_mex_assign(&c4_j_y, sf_mex_create("y", c4_b_cv2, 10, 0U, 1U, 0U, 2,
            1, 39), false);
          c4_k_y = NULL;
          sf_mex_assign(&c4_k_y, sf_mex_create("y", c4_b_cv2, 10, 0U, 1U, 0U, 2,
            1, 39), false);
          sf_mex_call(c4_sp, &c4_gb_emlrtMCI, "error", 0U, 2U, 14, c4_j_y, 14,
                      sf_mex_call(c4_sp, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(c4_sp, NULL, "message", 1U, 1U, 14, c4_k_y)));
        }

        c4_st.site = &c4_qb_emlrtRSI;
        c4_BufferChannel_write(chartInstance, &c4_st, &c4_obj->UnreadDataBuffer,
          c4_rawData);
      }

      c4_st.site = &c4_qb_emlrtRSI;
      c4_k_obj = c4_obj;
      c4_b_st.site = &c4_qb_emlrtRSI;
      c4_c_value = c4_BufferChannel_get_NumElementsAvailable(chartInstance,
        &c4_b_st, &c4_k_obj->UnreadDataBuffer);
      if (c4_c_value > 0.0) {
        c4_b_varargin_1 = c4_numBytes;
        c4_st.site = &c4_qb_emlrtRSI;
        c4_m_obj = c4_obj;
        c4_b_st.site = &c4_qb_emlrtRSI;
        c4_varargin_2 = c4_BufferChannel_get_NumElementsAvailable(chartInstance,
          &c4_b_st, &c4_m_obj->UnreadDataBuffer);
        c4_x = c4_b_varargin_1;
        c4_g_y = c4_varargin_2;
        c4_b_x = c4_x;
        c4_h_y = c4_g_y;
        c4_c_x = c4_b_x;
        c4_i_y = c4_h_y;
        c4_a = c4_c_x;
        c4_b = c4_i_y;
        c4_d_x = c4_a;
        c4_l_y = c4_b;
        c4_e_x = c4_d_x;
        c4_m_y = c4_l_y;
        c4_minval = muDoubleScalarMin(c4_e_x, c4_m_y);
        c4_st.site = &c4_qb_emlrtRSI;
        c4_AsyncIOTransportChannel_getUnreadData(chartInstance, &c4_st, c4_obj,
          c4_minval, c4_data);
      }
    } else {
      c4_y = NULL;
      sf_mex_assign(&c4_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                    false);
      c4_b_y = NULL;
      sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1,
        30), false);
      sf_mex_call(c4_sp, &c4_gb_emlrtMCI, "error", 0U, 2U, 14, c4_y, 14,
                  sf_mex_call(c4_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (c4_sp, NULL, "message", 1U, 1U, 14, c4_b_y)));
    }

    c4_emxFree_uint8_T(chartInstance, &c4_rawData);
  }
}

static void c4_AsyncIOTransportChannel_getUnreadData(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_obj,
  real_T c4_numToRead, c4_emxArray_uint8_T *c4_data)
{
  c4_matlabshared_asyncio_buffer_internal_BufferChannel *c4_c_obj;
  c4_matlabshared_asyncio_buffer_internal_BufferChannel *c4_f_obj;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_b_obj;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_d_obj;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_e_obj;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_st;
  real_T c4_a;
  real_T c4_b;
  real_T c4_b_count;
  real_T c4_b_value;
  real_T c4_b_x;
  real_T c4_b_y;
  real_T c4_c_x;
  real_T c4_c_y;
  real_T c4_count;
  real_T c4_d_x;
  real_T c4_d_y;
  real_T c4_e_x;
  real_T c4_e_y;
  real_T c4_value;
  real_T c4_varargin_1;
  real_T c4_varargin_2;
  real_T c4_x;
  real_T c4_y;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_st.site = &c4_qb_emlrtRSI;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_b_obj = c4_obj;
  c4_b_st.site = &c4_qb_emlrtRSI;
  c4_value = c4_BufferChannel_get_NumElementsAvailable(chartInstance, &c4_b_st,
    &c4_b_obj->UnreadDataBuffer);
  if (c4_numToRead > c4_value) {
    c4_st.site = &c4_qb_emlrtRSI;
    c4_d_obj = c4_obj;
    c4_b_st.site = &c4_qb_emlrtRSI;
    c4_e_obj = c4_d_obj;
    c4_c_st.site = &c4_qb_emlrtRSI;
    c4_b_value = c4_BufferChannel_get_NumElementsAvailable(chartInstance,
      &c4_c_st, &c4_e_obj->UnreadDataBuffer);
    if (c4_b_value != 0.0) {
      c4_b_st.site = &c4_qb_emlrtRSI;
      c4_f_obj = &c4_d_obj->UnreadDataBuffer;
      c4_c_st.site = &c4_ug_emlrtRSI;
      c4_b_count = c4_BufferChannel_get_NumElementsAvailable(chartInstance,
        &c4_c_st, c4_f_obj);
      if (c4_b_count == 0.0) {
        c4_data->size[0] = 0;
        c4_data->size[1] = 0;
      } else {
        c4_c_st.site = &c4_vg_emlrtRSI;
        c4_BufferChannel_readRaw(chartInstance, &c4_c_st, c4_f_obj, c4_b_count *
          c4_f_obj->BytesPerElement, c4_data);
      }
    } else {
      c4_data->size[0] = 0;
      c4_data->size[1] = 0;
    }
  } else {
    c4_st.site = &c4_qb_emlrtRSI;
    c4_c_obj = &c4_obj->UnreadDataBuffer;
    c4_count = c4_numToRead;
    c4_varargin_1 = c4_count;
    c4_b_st.site = &c4_si_emlrtRSI;
    c4_varargin_2 = c4_BufferChannel_get_NumElementsAvailable(chartInstance,
      &c4_b_st, c4_c_obj);
    c4_x = c4_varargin_1;
    c4_y = c4_varargin_2;
    c4_b_x = c4_x;
    c4_b_y = c4_y;
    c4_c_x = c4_b_x;
    c4_c_y = c4_b_y;
    c4_a = c4_c_x;
    c4_b = c4_c_y;
    c4_d_x = c4_a;
    c4_d_y = c4_b;
    c4_e_x = c4_d_x;
    c4_e_y = c4_d_y;
    c4_count = muDoubleScalarMin(c4_e_x, c4_e_y);
    if (c4_count == 0.0) {
      c4_data->size[0] = 0;
      c4_data->size[1] = 0;
    } else {
      c4_b_st.site = &c4_vg_emlrtRSI;
      c4_BufferChannel_readRaw(chartInstance, &c4_b_st, c4_c_obj, c4_count *
        c4_c_obj->BytesPerElement, c4_data);
    }
  }
}

static void c4_BufferChannel_readRaw(SFc4_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_matlabshared_asyncio_buffer_internal_BufferChannel
  *c4_obj, real_T c4_numBytesToRead, c4_emxArray_uint8_T *c4_data)
{
  static char_T c4_b_cv[57] = { 't', 'e', 's', 't', 'm', 'e', 'a', 's', 'l', 'i',
    'b', ':', 'A', 's', 'y', 'n', 'c', 'i', 'o', 'B', 'u', 'f', 'f', 'e', 'r',
    ':', 'C', 'a', 'n', 'n', 'o', 't', 'R', 'e', 'a', 'd', 'M', 'o', 'r', 'e',
    'D', 'a', 't', 'a', 'T', 'h', 'a', 'n', 'A', 'v', 'a', 'i', 'l', 'a', 'b',
    'l', 'e' };

  static char_T c4_b_cv1[39] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'c', 'a',
    't', 'e', 'n', 'a', 't', 'e', ':', 'm', 'a', 't', 'r', 'i', 'x', 'D', 'i',
    'm', 'e', 'n', 's', 'i', 'o', 'n', 'M', 'i', 's', 'm', 'a', 't', 'c', 'h' };

  static char_T c4_b_cv2[39] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'c', 'a',
    't', 'e', 'n', 'a', 't', 'e', ':', 'm', 'a', 't', 'r', 'i', 'x', 'D', 'i',
    'm', 'e', 'n', 's', 'i', 'o', 'n', 'M', 'i', 's', 'm', 'a', 't', 'c', 'h' };

  CoderChannel c4_b_chImpl;
  CoderChannel c4_chImpl;
  CoderInputStream c4_b_streamImpl;
  CoderInputStream c4_c_streamImpl;
  CoderInputStream c4_d_streamImpl;
  CoderInputStream c4_streamImpl;
  c4_cell_wrap_38 c4_reshapes[2];
  c4_emxArray_uint8_T *c4_rawData;
  c4_emxArray_uint8_T *c4_varargin_2;
  c4_matlabshared_asyncio_buffer_internal_BufferChannel *c4_b_obj;
  c4_matlabshared_asyncio_buffer_internal_BufferChannel *c4_c_obj;
  c4_matlabshared_asyncio_buffer_internal_BufferChannel *c4_e_obj;
  c4_matlabshared_asyncio_buffer_internal_BufferChannel *c4_i_obj;
  c4_matlabshared_asyncio_buffer_internal_BufferChannel *c4_j_obj;
  c4_matlabshared_asyncio_buffer_internal_BufferChannel *c4_k_obj;
  c4_matlabshared_asyncio_buffer_internal_BufferChannel *c4_l_obj;
  c4_matlabshared_asyncio_buffer_internal_BufferChannel *c4_m_obj;
  c4_matlabshared_asyncio_internal_InputStream *c4_d_obj;
  c4_matlabshared_asyncio_internal_InputStream *c4_f_obj;
  c4_matlabshared_asyncio_internal_InputStream *c4_g_obj;
  c4_matlabshared_asyncio_internal_InputStream *c4_h_obj;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_e_st;
  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_f_y = NULL;
  const mxArray *c4_g_y = NULL;
  const mxArray *c4_h_y = NULL;
  const mxArray *c4_i_y = NULL;
  const mxArray *c4_j_y = NULL;
  const mxArray *c4_y = NULL;
  real_T c4_b_count;
  real_T c4_b_countRequested;
  real_T c4_b_ppc;
  real_T c4_b_pps;
  real_T c4_c_count;
  real_T c4_count;
  real_T c4_countRead;
  real_T c4_countRequested;
  real_T c4_d_count;
  real_T c4_ppc;
  real_T c4_pps;
  real_T c4_remainingCount;
  int32_T c4_input_sizes[2];
  int32_T c4_sizes[2];
  int32_T c4_arg;
  int32_T c4_b_arg;
  int32_T c4_b_expected;
  int32_T c4_b_loop_ub;
  int32_T c4_b_result;
  int32_T c4_b_success;
  int32_T c4_b_varargin_1;
  int32_T c4_c_loop_ub;
  int32_T c4_c_success;
  int32_T c4_d_loop_ub;
  int32_T c4_d_success;
  int32_T c4_e_loop_ub;
  int32_T c4_expected;
  int32_T c4_f_loop_ub;
  int32_T c4_g_loop_ub;
  int32_T c4_h_loop_ub;
  int32_T c4_h_result;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i15;
  int32_T c4_i16;
  int32_T c4_i17;
  int32_T c4_i18;
  int32_T c4_i19;
  int32_T c4_i2;
  int32_T c4_i20;
  int32_T c4_i21;
  int32_T c4_i22;
  int32_T c4_i23;
  int32_T c4_i24;
  int32_T c4_i25;
  int32_T c4_i26;
  int32_T c4_i27;
  int32_T c4_i28;
  int32_T c4_i29;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_i_loop_ub;
  int32_T c4_j_loop_ub;
  int32_T c4_j_result;
  int32_T c4_k_loop_ub;
  int32_T c4_l_loop_ub;
  int32_T c4_loop_ub;
  int32_T c4_m_loop_ub;
  int32_T c4_n_loop_ub;
  int32_T c4_n_result;
  int32_T c4_o_loop_ub;
  int32_T c4_p_loop_ub;
  int32_T c4_q_loop_ub;
  int32_T c4_q_result;
  int32_T c4_s_result;
  int32_T c4_success;
  int32_T c4_varargin_1;
  boolean_T c4_b;
  boolean_T c4_b1;
  boolean_T c4_b10;
  boolean_T c4_b11;
  boolean_T c4_b12;
  boolean_T c4_b13;
  boolean_T c4_b14;
  boolean_T c4_b15;
  boolean_T c4_b16;
  boolean_T c4_b17;
  boolean_T c4_b18;
  boolean_T c4_b19;
  boolean_T c4_b2;
  boolean_T c4_b20;
  boolean_T c4_b21;
  boolean_T c4_b22;
  boolean_T c4_b23;
  boolean_T c4_b24;
  boolean_T c4_b25;
  boolean_T c4_b3;
  boolean_T c4_b4;
  boolean_T c4_b5;
  boolean_T c4_b6;
  boolean_T c4_b7;
  boolean_T c4_b8;
  boolean_T c4_b9;
  boolean_T c4_b_empty_non_axis_sizes;
  boolean_T c4_c_empty_non_axis_sizes;
  boolean_T c4_c_result;
  boolean_T c4_d_empty_non_axis_sizes;
  boolean_T c4_d_result;
  boolean_T c4_e_empty_non_axis_sizes;
  boolean_T c4_e_result;
  boolean_T c4_empty_non_axis_sizes;
  boolean_T c4_f_empty_non_axis_sizes;
  boolean_T c4_f_result;
  boolean_T c4_g_result;
  boolean_T c4_i_result;
  boolean_T c4_k_result;
  boolean_T c4_l_result;
  boolean_T c4_m_result;
  boolean_T c4_o_result;
  boolean_T c4_p_result;
  boolean_T c4_r_result;
  boolean_T c4_result;
  boolean_T c4_t_result;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_e_st.prev = &c4_d_st;
  c4_e_st.tls = c4_d_st.tls;
  if (c4_numBytesToRead == 0.0) {
    c4_data->size[0] = 0;
    c4_data->size[1] = 0;
  } else {
    c4_st.site = &c4_wg_emlrtRSI;
    c4_b_obj = c4_obj;
    c4_countRequested = c4_numBytesToRead;
    c4_ppc = c4_b_obj->PartialPacketCount;
    if (c4_ppc > 0.0) {
      c4_pps = c4_b_obj->PartialPacketStart;
      if (c4_countRequested < c4_ppc) {
        c4_b_st.site = &c4_eh_emlrtRSI;
        c4_BufferChannel_extractFromPacket(chartInstance, &c4_b_st, c4_b_obj,
          c4_pps, (c4_pps + c4_countRequested) - 1.0, c4_data);
        c4_countRead = c4_countRequested;
        c4_b_obj->PartialPacketStart = c4_pps + c4_countRequested;
        c4_b_obj->PartialPacketCount = c4_ppc - c4_countRequested;
      } else {
        c4_b_st.site = &c4_fh_emlrtRSI;
        c4_BufferChannel_extractFromPacket(chartInstance, &c4_b_st, c4_b_obj,
          c4_pps, (c4_pps + c4_ppc) - 1.0, c4_data);
        c4_countRead = c4_ppc;
        c4_b_st.site = &c4_gh_emlrtRSI;
        c4_c_obj = c4_b_obj;
        c4_c_st.site = &c4_cc_emlrtRSI;
        c4_e_obj = c4_c_obj;
        c4_e_obj->PartialPacket->size[0] = 1;
        c4_e_obj->PartialPacket->size[1] = 0;
        c4_e_obj->PartialPacket->size[0] = 0;
        c4_e_obj->PartialPacket->size[1] = 0;
        c4_c_obj->PartialPacketStart = 0.0;
        c4_c_obj->PartialPacketCount = 0.0;
      }
    } else {
      c4_data->size[0] = 0;
      c4_data->size[1] = 0;
      c4_countRead = 0.0;
    }

    c4_remainingCount = c4_numBytesToRead - c4_countRead;
    if (c4_remainingCount > 0.0) {
      c4_st.site = &c4_xg_emlrtRSI;
      c4_d_obj = &c4_obj->InputStream;
      c4_b_st.site = &c4_rg_emlrtRSI;
      c4_f_obj = c4_d_obj;
      c4_c_st.site = &c4_wf_emlrtRSI;
      c4_streamImpl = c4_f_obj->StreamImpl;
      c4_success = coderStreamGetDataAvailable(c4_streamImpl, &c4_count);
      c4_d_st.site = &c4_xf_emlrtRSI;
      c4_b_streamImpl = c4_streamImpl;
      c4_b_success = c4_success;
      if ((real_T)c4_b_success == 0.0) {
        c4_chImpl = coderStreamGetChannel(c4_b_streamImpl);
        c4_e_st.site = &c4_te_emlrtRSI;
        c4_b_API_channelErrorIfFailed(chartInstance, &c4_e_st, c4_chImpl);
      }

      c4_b_count = c4_d_obj->PartialPacketCount + c4_count;
      if (c4_remainingCount > c4_b_count) {
        c4_y = NULL;
        sf_mex_assign(&c4_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1,
          57), false);
        c4_b_y = NULL;
        sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1,
          57), false);
        sf_mex_call(c4_sp, &c4_kb_emlrtMCI, "error", 0U, 2U, 14, c4_y, 14,
                    sf_mex_call(c4_sp, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(c4_sp, NULL, "message", 1U, 1U, 14, c4_b_y)));
      }

      c4_st.site = &c4_yg_emlrtRSI;
      c4_g_obj = &c4_obj->InputStream;
      c4_b_st.site = &c4_rg_emlrtRSI;
      c4_h_obj = c4_g_obj;
      c4_c_st.site = &c4_wf_emlrtRSI;
      c4_c_streamImpl = c4_h_obj->StreamImpl;
      c4_c_success = coderStreamGetDataAvailable(c4_c_streamImpl, &c4_c_count);
      c4_d_st.site = &c4_xf_emlrtRSI;
      c4_d_streamImpl = c4_c_streamImpl;
      c4_d_success = c4_c_success;
      if ((real_T)c4_d_success == 0.0) {
        c4_b_chImpl = coderStreamGetChannel(c4_d_streamImpl);
        c4_e_st.site = &c4_te_emlrtRSI;
        c4_b_API_channelErrorIfFailed(chartInstance, &c4_e_st, c4_b_chImpl);
      }

      c4_d_count = c4_g_obj->PartialPacketCount + c4_c_count;
      c4_emxInit_uint8_T(chartInstance, c4_sp, &c4_rawData, 2, &c4_ic_emlrtRTEI);
      c4_st.site = &c4_yg_emlrtRSI;
      c4_InputStream_read(chartInstance, &c4_st, &c4_obj->InputStream,
                          c4_d_count, c4_rawData);
      c4_emxInitMatrix_cell_wrap_38(chartInstance, c4_sp, c4_reshapes,
        &c4_jc_emlrtRTEI);
      c4_emxInit_uint8_T(chartInstance, c4_sp, &c4_varargin_2, 2,
                         &c4_fc_emlrtRTEI);
      if (c4_remainingCount < (real_T)c4_rawData->size[1]) {
        c4_st.site = &c4_ah_emlrtRSI;
        c4_i_obj = c4_obj;
        c4_b_st.site = &c4_pi_emlrtRSI;
        c4_j_obj = c4_i_obj;
        c4_j_obj->PartialPacket->size[0] = 1;
        c4_j_obj->PartialPacket->size[1] = 0;
        c4_i = c4_j_obj->PartialPacket->size[0] * c4_j_obj->PartialPacket->size
          [1];
        c4_j_obj->PartialPacket->size[0] = c4_rawData->size[0];
        c4_j_obj->PartialPacket->size[1] = c4_rawData->size[1];
        c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_b_st,
          c4_j_obj->PartialPacket, c4_i, &c4_dc_emlrtRTEI);
        c4_loop_ub = c4_rawData->size[0] * c4_rawData->size[1] - 1;
        for (c4_i1 = 0; c4_i1 <= c4_loop_ub; c4_i1++) {
          c4_j_obj->PartialPacket->data[c4_i1] = c4_rawData->data[c4_i1];
        }

        c4_i_obj->PartialPacketStart = 1.0;
        c4_i_obj->PartialPacketCount = (real_T)c4_rawData->size[1];
        c4_st.site = &c4_bh_emlrtRSI;
        c4_k_obj = c4_obj;
        c4_b_countRequested = c4_remainingCount;
        c4_b_ppc = c4_k_obj->PartialPacketCount;
        if (c4_b_ppc > 0.0) {
          c4_b_pps = c4_k_obj->PartialPacketStart;
          if (c4_b_countRequested < c4_b_ppc) {
            c4_b_st.site = &c4_eh_emlrtRSI;
            c4_BufferChannel_extractFromPacket(chartInstance, &c4_b_st, c4_k_obj,
              c4_b_pps, (c4_b_pps + c4_b_countRequested) - 1.0, c4_rawData);
            c4_k_obj->PartialPacketStart = c4_b_pps + c4_b_countRequested;
            c4_k_obj->PartialPacketCount = c4_b_ppc - c4_b_countRequested;
          } else {
            c4_b_st.site = &c4_fh_emlrtRSI;
            c4_BufferChannel_extractFromPacket(chartInstance, &c4_b_st, c4_k_obj,
              c4_b_pps, (c4_b_pps + c4_b_ppc) - 1.0, c4_rawData);
            c4_b_st.site = &c4_gh_emlrtRSI;
            c4_l_obj = c4_k_obj;
            c4_c_st.site = &c4_cc_emlrtRSI;
            c4_m_obj = c4_l_obj;
            c4_m_obj->PartialPacket->size[0] = 1;
            c4_m_obj->PartialPacket->size[1] = 0;
            c4_m_obj->PartialPacket->size[0] = 0;
            c4_m_obj->PartialPacket->size[1] = 0;
            c4_l_obj->PartialPacketStart = 0.0;
            c4_l_obj->PartialPacketCount = 0.0;
          }
        } else {
          c4_rawData->size[0] = 0;
          c4_rawData->size[1] = 0;
        }

        c4_st.site = &c4_ch_emlrtRSI;
        c4_b_st.site = &c4_qi_emlrtRSI;
        c4_b9 = (c4_data->size[0] == 0);
        c4_b10 = (c4_data->size[1] == 0);
        c4_g_result = (c4_b9 || c4_b10);
        if (!c4_g_result) {
          c4_h_result = c4_data->size[0];
        } else {
          c4_b11 = (c4_rawData->size[0] == 0);
          c4_b12 = (c4_rawData->size[1] == 0);
          c4_i_result = (c4_b11 || c4_b12);
          if (!c4_i_result) {
            c4_h_result = c4_rawData->size[0];
          } else {
            if (c4_data->size[0] > 0) {
              c4_h_result = c4_data->size[0];
            } else {
              c4_h_result = 0;
            }

            if (c4_rawData->size[0] > c4_h_result) {
              c4_h_result = c4_rawData->size[0];
            }
          }
        }

        c4_sizes[0] = c4_h_result;
        c4_sizes[1] = 0;
        c4_c_st.site = &c4_ri_emlrtRSI;
        c4_b_expected = c4_sizes[0];
        if (c4_data->size[0] == c4_b_expected) {
          c4_b16 = true;
        } else {
          c4_b15 = (c4_data->size[0] == 0);
          c4_b17 = (c4_data->size[1] == 0);
          c4_l_result = (c4_b15 || c4_b17);
          if (c4_l_result) {
            c4_b16 = true;
          } else {
            c4_b16 = false;
          }
        }

        if (!c4_b16) {
          c4_g_y = NULL;
          sf_mex_assign(&c4_g_y, sf_mex_create("y", c4_b_cv2, 10, 0U, 1U, 0U, 2,
            1, 39), false);
          c4_h_y = NULL;
          sf_mex_assign(&c4_h_y, sf_mex_create("y", c4_b_cv2, 10, 0U, 1U, 0U, 2,
            1, 39), false);
          sf_mex_call(&c4_c_st, &c4_sb_emlrtMCI, "error", 0U, 2U, 14, c4_g_y, 14,
                      sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c4_c_st, NULL, "message", 1U, 1U, 14, c4_h_y)));
        }

        if (c4_rawData->size[0] == c4_b_expected) {
          c4_b16 = true;
        } else {
          c4_b18 = (c4_rawData->size[0] == 0);
          c4_b19 = (c4_rawData->size[1] == 0);
          c4_m_result = (c4_b18 || c4_b19);
          if (c4_m_result) {
            c4_b16 = true;
          } else {
            c4_b16 = false;
          }
        }

        if (!c4_b16) {
          c4_i_y = NULL;
          sf_mex_assign(&c4_i_y, sf_mex_create("y", c4_b_cv2, 10, 0U, 1U, 0U, 2,
            1, 39), false);
          c4_j_y = NULL;
          sf_mex_assign(&c4_j_y, sf_mex_create("y", c4_b_cv2, 10, 0U, 1U, 0U, 2,
            1, 39), false);
          sf_mex_call(&c4_c_st, &c4_sb_emlrtMCI, "error", 0U, 2U, 14, c4_i_y, 14,
                      sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c4_c_st, NULL, "message", 1U, 1U, 14, c4_j_y)));
        }

        c4_b_varargin_1 = c4_sizes[0];
        c4_b_arg = c4_b_varargin_1;
        c4_p_result = (c4_b_arg == 0);
        if (c4_p_result) {
          c4_d_empty_non_axis_sizes = true;
        } else {
          c4_d_empty_non_axis_sizes = false;
        }

        for (c4_i6 = 0; c4_i6 < 2; c4_i6++) {
          c4_input_sizes[c4_i6] = c4_sizes[c4_i6];
        }

        c4_e_empty_non_axis_sizes = c4_d_empty_non_axis_sizes;
        if (c4_e_empty_non_axis_sizes) {
          c4_q_result = c4_data->size[1];
        } else {
          c4_b22 = (c4_data->size[0] == 0);
          c4_b23 = (c4_data->size[1] == 0);
          c4_r_result = (c4_b22 || c4_b23);
          if (!c4_r_result) {
            c4_q_result = c4_data->size[1];
          } else {
            c4_q_result = 0;
          }
        }

        c4_input_sizes[1] = c4_q_result;
        c4_i9 = c4_reshapes[0].f1->size[0] * c4_reshapes[0].f1->size[1];
        c4_reshapes[0].f1->size[0] = c4_input_sizes[0];
        c4_reshapes[0].f1->size[1] = c4_input_sizes[1];
        c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_b_st, c4_reshapes[0].f1,
          c4_i9, &c4_ec_emlrtRTEI);
        c4_e_loop_ub = c4_input_sizes[0] * c4_input_sizes[1] - 1;
        for (c4_i12 = 0; c4_i12 <= c4_e_loop_ub; c4_i12++) {
          c4_reshapes[0].f1->data[c4_i12] = c4_data->data[c4_i12];
        }

        c4_f_empty_non_axis_sizes = c4_d_empty_non_axis_sizes;
        if (c4_f_empty_non_axis_sizes) {
          c4_s_result = c4_rawData->size[1];
        } else {
          c4_b24 = (c4_rawData->size[0] == 0);
          c4_b25 = (c4_rawData->size[1] == 0);
          c4_t_result = (c4_b24 || c4_b25);
          if (!c4_t_result) {
            c4_s_result = c4_rawData->size[1];
          } else {
            c4_s_result = 0;
          }
        }

        c4_sizes[1] = c4_s_result;
        c4_i15 = c4_reshapes[1].f1->size[0] * c4_reshapes[1].f1->size[1];
        c4_reshapes[1].f1->size[0] = c4_sizes[0];
        c4_reshapes[1].f1->size[1] = c4_sizes[1];
        c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_b_st, c4_reshapes[1].f1,
          c4_i15, &c4_ec_emlrtRTEI);
        c4_h_loop_ub = c4_sizes[0] * c4_sizes[1] - 1;
        for (c4_i17 = 0; c4_i17 <= c4_h_loop_ub; c4_i17++) {
          c4_reshapes[1].f1->data[c4_i17] = c4_rawData->data[c4_i17];
        }

        c4_i20 = c4_rawData->size[0] * c4_rawData->size[1];
        c4_rawData->size[0] = c4_reshapes[0].f1->size[0];
        c4_rawData->size[1] = c4_reshapes[0].f1->size[1];
        c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_b_st, c4_rawData, c4_i20,
          &c4_fc_emlrtRTEI);
        c4_l_loop_ub = c4_reshapes[0].f1->size[0] * c4_reshapes[0].f1->size[1] -
          1;
        for (c4_i22 = 0; c4_i22 <= c4_l_loop_ub; c4_i22++) {
          c4_rawData->data[c4_i22] = c4_reshapes[0].f1->data[c4_i22];
        }

        c4_i23 = c4_varargin_2->size[0] * c4_varargin_2->size[1];
        c4_varargin_2->size[0] = c4_reshapes[1].f1->size[0];
        c4_varargin_2->size[1] = c4_reshapes[1].f1->size[1];
        c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_b_st, c4_varargin_2,
          c4_i23, &c4_fc_emlrtRTEI);
        c4_m_loop_ub = c4_reshapes[1].f1->size[0] * c4_reshapes[1].f1->size[1] -
          1;
        for (c4_i24 = 0; c4_i24 <= c4_m_loop_ub; c4_i24++) {
          c4_varargin_2->data[c4_i24] = c4_reshapes[1].f1->data[c4_i24];
        }

        c4_i25 = c4_data->size[0] * c4_data->size[1];
        c4_data->size[0] = c4_rawData->size[0];
        c4_data->size[1] = c4_rawData->size[1] + c4_varargin_2->size[1];
        c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_b_st, c4_data, c4_i25,
          &c4_hc_emlrtRTEI);
        c4_n_loop_ub = c4_rawData->size[1] - 1;
        for (c4_i26 = 0; c4_i26 <= c4_n_loop_ub; c4_i26++) {
          c4_p_loop_ub = c4_rawData->size[0] - 1;
          for (c4_i28 = 0; c4_i28 <= c4_p_loop_ub; c4_i28++) {
            c4_data->data[c4_i28 + c4_data->size[0] * c4_i26] = c4_rawData->
              data[c4_i28 + c4_rawData->size[0] * c4_i26];
          }
        }

        c4_o_loop_ub = c4_varargin_2->size[1] - 1;
        for (c4_i27 = 0; c4_i27 <= c4_o_loop_ub; c4_i27++) {
          c4_q_loop_ub = c4_varargin_2->size[0] - 1;
          for (c4_i29 = 0; c4_i29 <= c4_q_loop_ub; c4_i29++) {
            c4_data->data[c4_i29 + c4_data->size[0] * (c4_i27 + c4_rawData->
              size[1])] = c4_varargin_2->data[c4_i29 + c4_varargin_2->size[0] *
              c4_i27];
          }
        }
      } else {
        c4_st.site = &c4_dh_emlrtRSI;
        c4_b_st.site = &c4_qi_emlrtRSI;
        c4_b = (c4_data->size[0] == 0);
        c4_b1 = (c4_data->size[1] == 0);
        c4_result = (c4_b || c4_b1);
        if (!c4_result) {
          c4_b_result = c4_data->size[0];
        } else {
          c4_b2 = (c4_rawData->size[0] == 0);
          c4_b3 = (c4_rawData->size[1] == 0);
          c4_c_result = (c4_b2 || c4_b3);
          if (!c4_c_result) {
            c4_b_result = c4_rawData->size[0];
          } else {
            if (c4_data->size[0] > 0) {
              c4_b_result = c4_data->size[0];
            } else {
              c4_b_result = 0;
            }

            if (c4_rawData->size[0] > c4_b_result) {
              c4_b_result = c4_rawData->size[0];
            }
          }
        }

        c4_sizes[0] = c4_b_result;
        c4_sizes[1] = 0;
        c4_c_st.site = &c4_ri_emlrtRSI;
        c4_expected = c4_sizes[0];
        if (c4_data->size[0] == c4_expected) {
          c4_b5 = true;
        } else {
          c4_b4 = (c4_data->size[0] == 0);
          c4_b6 = (c4_data->size[1] == 0);
          c4_d_result = (c4_b4 || c4_b6);
          if (c4_d_result) {
            c4_b5 = true;
          } else {
            c4_b5 = false;
          }
        }

        if (!c4_b5) {
          c4_c_y = NULL;
          sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2,
            1, 39), false);
          c4_d_y = NULL;
          sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2,
            1, 39), false);
          sf_mex_call(&c4_c_st, &c4_sb_emlrtMCI, "error", 0U, 2U, 14, c4_c_y, 14,
                      sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c4_c_st, NULL, "message", 1U, 1U, 14, c4_d_y)));
        }

        if (c4_rawData->size[0] == c4_expected) {
          c4_b5 = true;
        } else {
          c4_b7 = (c4_rawData->size[0] == 0);
          c4_b8 = (c4_rawData->size[1] == 0);
          c4_e_result = (c4_b7 || c4_b8);
          if (c4_e_result) {
            c4_b5 = true;
          } else {
            c4_b5 = false;
          }
        }

        if (!c4_b5) {
          c4_e_y = NULL;
          sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2,
            1, 39), false);
          c4_f_y = NULL;
          sf_mex_assign(&c4_f_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2,
            1, 39), false);
          sf_mex_call(&c4_c_st, &c4_sb_emlrtMCI, "error", 0U, 2U, 14, c4_e_y, 14,
                      sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c4_c_st, NULL, "message", 1U, 1U, 14, c4_f_y)));
        }

        c4_varargin_1 = c4_sizes[0];
        c4_arg = c4_varargin_1;
        c4_f_result = (c4_arg == 0);
        if (c4_f_result) {
          c4_empty_non_axis_sizes = true;
        } else {
          c4_empty_non_axis_sizes = false;
        }

        for (c4_i2 = 0; c4_i2 < 2; c4_i2++) {
          c4_input_sizes[c4_i2] = c4_sizes[c4_i2];
        }

        c4_b_empty_non_axis_sizes = c4_empty_non_axis_sizes;
        if (c4_b_empty_non_axis_sizes) {
          c4_j_result = c4_data->size[1];
        } else {
          c4_b13 = (c4_data->size[0] == 0);
          c4_b14 = (c4_data->size[1] == 0);
          c4_k_result = (c4_b13 || c4_b14);
          if (!c4_k_result) {
            c4_j_result = c4_data->size[1];
          } else {
            c4_j_result = 0;
          }
        }

        c4_input_sizes[1] = c4_j_result;
        c4_i3 = c4_reshapes[0].f1->size[0] * c4_reshapes[0].f1->size[1];
        c4_reshapes[0].f1->size[0] = c4_input_sizes[0];
        c4_reshapes[0].f1->size[1] = c4_input_sizes[1];
        c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_b_st, c4_reshapes[0].f1,
          c4_i3, &c4_ec_emlrtRTEI);
        c4_b_loop_ub = c4_input_sizes[0] * c4_input_sizes[1] - 1;
        for (c4_i4 = 0; c4_i4 <= c4_b_loop_ub; c4_i4++) {
          c4_reshapes[0].f1->data[c4_i4] = c4_data->data[c4_i4];
        }

        c4_c_empty_non_axis_sizes = c4_empty_non_axis_sizes;
        if (c4_c_empty_non_axis_sizes) {
          c4_n_result = c4_rawData->size[1];
        } else {
          c4_b20 = (c4_rawData->size[0] == 0);
          c4_b21 = (c4_rawData->size[1] == 0);
          c4_o_result = (c4_b20 || c4_b21);
          if (!c4_o_result) {
            c4_n_result = c4_rawData->size[1];
          } else {
            c4_n_result = 0;
          }
        }

        c4_sizes[1] = c4_n_result;
        c4_i5 = c4_reshapes[1].f1->size[0] * c4_reshapes[1].f1->size[1];
        c4_reshapes[1].f1->size[0] = c4_sizes[0];
        c4_reshapes[1].f1->size[1] = c4_sizes[1];
        c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_b_st, c4_reshapes[1].f1,
          c4_i5, &c4_ec_emlrtRTEI);
        c4_c_loop_ub = c4_sizes[0] * c4_sizes[1] - 1;
        for (c4_i7 = 0; c4_i7 <= c4_c_loop_ub; c4_i7++) {
          c4_reshapes[1].f1->data[c4_i7] = c4_rawData->data[c4_i7];
        }

        c4_i8 = c4_rawData->size[0] * c4_rawData->size[1];
        c4_rawData->size[0] = c4_reshapes[0].f1->size[0];
        c4_rawData->size[1] = c4_reshapes[0].f1->size[1];
        c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_b_st, c4_rawData, c4_i8,
          &c4_fc_emlrtRTEI);
        c4_d_loop_ub = c4_reshapes[0].f1->size[0] * c4_reshapes[0].f1->size[1] -
          1;
        for (c4_i10 = 0; c4_i10 <= c4_d_loop_ub; c4_i10++) {
          c4_rawData->data[c4_i10] = c4_reshapes[0].f1->data[c4_i10];
        }

        c4_i11 = c4_varargin_2->size[0] * c4_varargin_2->size[1];
        c4_varargin_2->size[0] = c4_reshapes[1].f1->size[0];
        c4_varargin_2->size[1] = c4_reshapes[1].f1->size[1];
        c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_b_st, c4_varargin_2,
          c4_i11, &c4_fc_emlrtRTEI);
        c4_f_loop_ub = c4_reshapes[1].f1->size[0] * c4_reshapes[1].f1->size[1] -
          1;
        for (c4_i13 = 0; c4_i13 <= c4_f_loop_ub; c4_i13++) {
          c4_varargin_2->data[c4_i13] = c4_reshapes[1].f1->data[c4_i13];
        }

        c4_i14 = c4_data->size[0] * c4_data->size[1];
        c4_data->size[0] = c4_rawData->size[0];
        c4_data->size[1] = c4_rawData->size[1] + c4_varargin_2->size[1];
        c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_b_st, c4_data, c4_i14,
          &c4_gc_emlrtRTEI);
        c4_g_loop_ub = c4_rawData->size[1] - 1;
        for (c4_i16 = 0; c4_i16 <= c4_g_loop_ub; c4_i16++) {
          c4_j_loop_ub = c4_rawData->size[0] - 1;
          for (c4_i19 = 0; c4_i19 <= c4_j_loop_ub; c4_i19++) {
            c4_data->data[c4_i19 + c4_data->size[0] * c4_i16] = c4_rawData->
              data[c4_i19 + c4_rawData->size[0] * c4_i16];
          }
        }

        c4_i_loop_ub = c4_varargin_2->size[1] - 1;
        for (c4_i18 = 0; c4_i18 <= c4_i_loop_ub; c4_i18++) {
          c4_k_loop_ub = c4_varargin_2->size[0] - 1;
          for (c4_i21 = 0; c4_i21 <= c4_k_loop_ub; c4_i21++) {
            c4_data->data[c4_i21 + c4_data->size[0] * (c4_i18 + c4_rawData->
              size[1])] = c4_varargin_2->data[c4_i21 + c4_varargin_2->size[0] *
              c4_i18];
          }
        }
      }

      c4_emxFree_uint8_T(chartInstance, &c4_varargin_2);
      c4_emxFreeMatrix_cell_wrap_38(chartInstance, c4_reshapes);
      c4_emxFree_uint8_T(chartInstance, &c4_rawData);
    }
  }
}

static void c4_BufferChannel_extractFromPacket(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_matlabshared_asyncio_buffer_internal_BufferChannel *c4_obj, real_T
  c4_startIndex, real_T c4_endIndex, c4_emxArray_uint8_T *c4_result)
{
  emlrtStack c4_st;
  int32_T c4_b_obj[2];
  int32_T c4_iv[2];
  int32_T c4_b_loop_ub;
  int32_T c4_c_loop_ub;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i15;
  int32_T c4_i16;
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_loop_ub;
  boolean_T c4_b;
  boolean_T c4_b1;
  boolean_T c4_b2;
  boolean_T c4_b3;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b = (c4_obj->PartialPacket->size[0] == 1);
  c4_b1 = (c4_obj->PartialPacket->size[1] == 1);
  if (c4_b || c4_b1) {
    c4_b3 = (c4_startIndex > c4_endIndex);
    if (c4_b3) {
      c4_i2 = 0;
      c4_i4 = 0;
    } else {
      c4_i1 = c4_obj->PartialPacket->size[0] * c4_obj->PartialPacket->size[1];
      if (c4_startIndex != (real_T)(int32_T)muDoubleScalarFloor(c4_startIndex))
      {
        emlrtIntegerCheckR2012b(c4_startIndex, &c4_g_emlrtDCI, (emlrtConstCTX)
          c4_sp);
      }

      c4_i8 = (int32_T)c4_startIndex;
      if ((c4_i8 < 1) || (c4_i8 > c4_i1)) {
        emlrtDynamicBoundsCheckR2012b(c4_i8, 1, c4_i1, &c4_l_emlrtBCI,
          (emlrtConstCTX)c4_sp);
      }

      c4_i2 = c4_i8 - 1;
      if (c4_endIndex != (real_T)(int32_T)muDoubleScalarFloor(c4_endIndex)) {
        emlrtIntegerCheckR2012b(c4_endIndex, &c4_h_emlrtDCI, (emlrtConstCTX)
          c4_sp);
      }

      c4_i12 = (int32_T)c4_endIndex;
      if ((c4_i12 < 1) || (c4_i12 > c4_i1)) {
        emlrtDynamicBoundsCheckR2012b(c4_i12, 1, c4_i1, &c4_m_emlrtBCI,
          (emlrtConstCTX)c4_sp);
      }

      c4_i4 = c4_i12;
    }

    c4_iv[0] = 1;
    c4_iv[1] = c4_i4 - c4_i2;
    c4_st.site = &c4_hh_emlrtRSI;
    for (c4_i9 = 0; c4_i9 < 2; c4_i9++) {
      c4_b_obj[c4_i9] = (*(int32_T (*)[2])c4_obj->PartialPacket->size)[c4_i9];
    }

    c4_indexShapeCheck(chartInstance, &c4_st, c4_b_obj, c4_iv);
    c4_i13 = c4_result->size[0] * c4_result->size[1];
    c4_result->size[0] = 1;
    c4_result->size[1] = c4_i4 - c4_i2;
    c4_st.site = &c4_hh_emlrtRSI;
    c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_st, c4_result, c4_i13,
      &c4_lc_emlrtRTEI);
    c4_c_loop_ub = (c4_i4 - c4_i2) - 1;
    for (c4_i16 = 0; c4_i16 <= c4_c_loop_ub; c4_i16++) {
      c4_result->data[c4_result->size[0] * c4_i16] = c4_obj->PartialPacket->
        data[c4_i2 + c4_i16];
    }
  } else {
    c4_b2 = (c4_startIndex > c4_endIndex);
    if (c4_b2) {
      c4_i = 0;
      c4_i3 = -1;
    } else {
      if (c4_startIndex != (real_T)(int32_T)muDoubleScalarFloor(c4_startIndex))
      {
        emlrtIntegerCheckR2012b(c4_startIndex, &c4_i_emlrtDCI, (emlrtConstCTX)
          c4_sp);
      }

      c4_i5 = c4_obj->PartialPacket->size[1];
      c4_i6 = (int32_T)c4_startIndex;
      if ((c4_i6 < 1) || (c4_i6 > c4_i5)) {
        emlrtDynamicBoundsCheckR2012b(c4_i6, 1, c4_i5, &c4_n_emlrtBCI,
          (emlrtConstCTX)c4_sp);
      }

      c4_i = c4_i6 - 1;
      if (c4_endIndex != (real_T)(int32_T)muDoubleScalarFloor(c4_endIndex)) {
        emlrtIntegerCheckR2012b(c4_endIndex, &c4_j_emlrtDCI, (emlrtConstCTX)
          c4_sp);
      }

      c4_i10 = c4_obj->PartialPacket->size[1];
      c4_i14 = (int32_T)c4_endIndex;
      if ((c4_i14 < 1) || (c4_i14 > c4_i10)) {
        emlrtDynamicBoundsCheckR2012b(c4_i14, 1, c4_i10, &c4_o_emlrtBCI,
          (emlrtConstCTX)c4_sp);
      }

      c4_i3 = c4_i14 - 1;
    }

    c4_i7 = c4_result->size[0] * c4_result->size[1];
    c4_result->size[0] = c4_obj->PartialPacket->size[0];
    c4_result->size[1] = (c4_i3 - c4_i) + 1;
    c4_st.site = &c4_hl_emlrtRSI;
    c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_st, c4_result, c4_i7,
      &c4_kc_emlrtRTEI);
    c4_loop_ub = c4_i3 - c4_i;
    for (c4_i11 = 0; c4_i11 <= c4_loop_ub; c4_i11++) {
      c4_b_loop_ub = c4_obj->PartialPacket->size[0] - 1;
      for (c4_i15 = 0; c4_i15 <= c4_b_loop_ub; c4_i15++) {
        c4_result->data[c4_i15 + c4_result->size[0] * c4_i11] =
          c4_obj->PartialPacket->data[c4_i15 + c4_obj->PartialPacket->size[0] *
          (c4_i + c4_i11)];
      }
    }
  }
}

static void c4_indexShapeCheck(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, int32_T c4_matrixSize[2], int32_T c4_indexSize[2])
{
  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_y = NULL;
  boolean_T c4_b;
  boolean_T c4_b_b;
  boolean_T c4_b_c;
  boolean_T c4_b_nonSingletonDimFound;
  boolean_T c4_c;
  boolean_T c4_c_c;
  boolean_T c4_d_c;
  boolean_T c4_nonSingletonDimFound;
  (void)chartInstance;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_nonSingletonDimFound = false;
  if (c4_matrixSize[0] != 1) {
    c4_nonSingletonDimFound = true;
  }

  if (c4_matrixSize[1] != 1) {
    if (c4_nonSingletonDimFound) {
      c4_b = false;
    } else {
      c4_nonSingletonDimFound = true;
      c4_b = c4_nonSingletonDimFound;
    }
  } else {
    c4_b = c4_nonSingletonDimFound;
  }

  if (c4_b) {
    c4_b_nonSingletonDimFound = false;
    if (c4_indexSize[0] != 1) {
      c4_b_nonSingletonDimFound = true;
    }

    if (c4_indexSize[1] != 1) {
      if (c4_b_nonSingletonDimFound) {
        c4_b_b = false;
      } else {
        c4_b_nonSingletonDimFound = true;
        c4_b_b = c4_b_nonSingletonDimFound;
      }
    } else {
      c4_b_b = c4_b_nonSingletonDimFound;
    }

    if (c4_b_b) {
      if (c4_matrixSize[0] != 1) {
        c4_c_c = true;
      } else {
        c4_c_c = false;
      }

      if (c4_c_c || ((c4_matrixSize[1] == 1) != (c4_indexSize[1] == 1))) {
        c4_c_c = true;
      } else {
        c4_c_c = false;
      }

      c4_d_c = c4_c_c;
      if (c4_d_c) {
        c4_c = true;
      } else {
        c4_c = false;
      }
    } else {
      c4_c = false;
    }
  } else {
    c4_c = false;
  }

  c4_st.site = &c4_ih_emlrtRSI;
  c4_b_c = c4_c;
  if (c4_b_c) {
    c4_y = NULL;
    sf_mex_assign(&c4_y, sf_mex_create("y", c4_cv13, 10, 0U, 1U, 0U, 2, 1, 33),
                  false);
    c4_b_y = NULL;
    sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_cv13, 10, 0U, 1U, 0U, 2, 1, 33),
                  false);
    sf_mex_call(&c4_st, &c4_lb_emlrtMCI, "error", 0U, 2U, 14, c4_y, 14,
                sf_mex_call(&c4_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_st, NULL, "message", 1U, 1U, 14, c4_b_y)));
  }
}

static void c4_InputStream_read(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_matlabshared_asyncio_internal_InputStream *c4_obj,
  real_T c4_countRequested, c4_emxArray_uint8_T *c4_data)
{
  static int32_T c4_iv[2] = { 1, 2 };

  CoderChannel c4_chImpl;
  CoderInputStream c4_b_streamImpl;
  CoderInputStream c4_streamImpl;
  c4_emxArray_cell_wrap_33 *c4_packets;
  c4_emxArray_uint8_T *c4_b_data;
  c4_emxArray_uint8_T *c4_c_data;
  c4_emxArray_uint8_T *c4_excessData;
  c4_matlabshared_asyncio_internal_InputStream *c4_b_obj;
  c4_matlabshared_asyncio_internal_InputStream *c4_c_obj;
  c4_matlabshared_asyncio_internal_InputStream *c4_d_obj;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_y = NULL;
  real_T c4_b_count;
  real_T c4_b_countRead;
  real_T c4_b_ii;
  real_T c4_count;
  real_T c4_countRead;
  real_T c4_countToRead;
  real_T c4_d;
  int32_T c4_err_size[2];
  int32_T c4_status_size[2];
  int32_T c4_b_loop_ub;
  int32_T c4_b_success;
  int32_T c4_c_loop_ub;
  int32_T c4_d_loop_ub;
  int32_T c4_e_loop_ub;
  int32_T c4_exitg1;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_ii;
  int32_T c4_loop_ub;
  int32_T c4_success;
  char_T c4_status_data[9];
  boolean_T c4_x[2];
  boolean_T c4_b;
  boolean_T c4_b1;
  boolean_T c4_b2;
  boolean_T c4_b3;
  boolean_T c4_b_guard1;
  boolean_T c4_c_y;
  boolean_T c4_guard1;
  boolean_T c4_invalidCountRequested;
  boolean_T c4_sizeChangeWhenPartialBufferNonEmpty;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  if (c4_countRequested >= 0.0) {
    c4_b = true;
  } else {
    c4_b = false;
  }

  c4_invalidCountRequested = !c4_b;
  if (c4_invalidCountRequested) {
    c4_y = NULL;
    sf_mex_assign(&c4_y, sf_mex_create("y", c4_cv15, 10, 0U, 1U, 0U, 2, 1, 41),
                  false);
    c4_b_y = NULL;
    sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_cv15, 10, 0U, 1U, 0U, 2, 1, 41),
                  false);
    sf_mex_call(c4_sp, &c4_mb_emlrtMCI, "error", 0U, 2U, 14, c4_y, 14,
                sf_mex_call(c4_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c4_sp, NULL, "message", 1U, 1U, 14, c4_b_y)));
  }

  for (c4_i = 0; c4_i < 2; c4_i++) {
    c4_x[c4_i] = ((real_T)c4_obj->ExampleData->size[c4_i] != 1.0);
  }

  c4_c_y = c4_vectorAny(chartInstance, c4_x, c4_iv);
  if (c4_c_y) {
    c4_b1 = (c4_obj->PartialPacket->size[0] == 0);
    c4_b2 = (c4_obj->PartialPacket->size[1] == 0);
    if ((!c4_b1) && (!c4_b2)) {
      c4_sizeChangeWhenPartialBufferNonEmpty = true;
    } else {
      c4_sizeChangeWhenPartialBufferNonEmpty = false;
    }
  } else {
    c4_sizeChangeWhenPartialBufferNonEmpty = false;
  }

  if (c4_sizeChangeWhenPartialBufferNonEmpty) {
    c4_d_y = NULL;
    sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_cv14, 10, 0U, 1U, 0U, 2, 1, 47),
                  false);
    c4_e_y = NULL;
    sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_cv14, 10, 0U, 1U, 0U, 2, 1, 47),
                  false);
    sf_mex_call(c4_sp, &c4_nb_emlrtMCI, "error", 0U, 2U, 14, c4_d_y, 14,
                sf_mex_call(c4_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c4_sp, NULL, "message", 1U, 1U, 14, c4_e_y)));
  }

  c4_i1 = c4_obj->ExampleData->size[0] * c4_obj->ExampleData->size[1];
  c4_obj->ExampleData->size[0] = 1;
  c4_obj->ExampleData->size[1] = 1;
  c4_st.site = &c4_bl_emlrtRSI;
  c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_st, c4_obj->ExampleData, c4_i1,
    &c4_mc_emlrtRTEI);
  c4_obj->ExampleData->data[0] = 0U;
  c4_err_size[1] = 0;
  c4_st.site = &c4_jh_emlrtRSI;
  c4_InputStream_readPartialPacket(chartInstance, &c4_st, c4_obj,
    c4_countRequested, c4_data, &c4_countRead);
  c4_b_countRead = c4_countRead;
  c4_emxInit_uint8_T(chartInstance, c4_sp, &c4_excessData, 2, &c4_sc_emlrtRTEI);
  c4_emxInit_cell_wrap_33(chartInstance, c4_sp, &c4_packets, 2, &c4_tc_emlrtRTEI);
  c4_emxInit_uint8_T(chartInstance, c4_sp, &c4_b_data, 2, &c4_pc_emlrtRTEI);
  c4_emxInit_uint8_T(chartInstance, c4_sp, &c4_c_data, 2, &c4_rc_emlrtRTEI);
  if (c4_countRead == c4_countRequested) {
    c4_st.site = &c4_kh_emlrtRSI;
    c4_i2 = c4_excessData->size[0] * c4_excessData->size[1];
    c4_excessData->size[0] = c4_data->size[0];
    c4_excessData->size[1] = c4_data->size[1];
    c4_b_st.site = &c4_jh_emlrtRSI;
    c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_b_st, c4_excessData, c4_i2,
      &c4_nc_emlrtRTEI);
    c4_loop_ub = c4_data->size[0] * c4_data->size[1] - 1;
    for (c4_i3 = 0; c4_i3 <= c4_loop_ub; c4_i3++) {
      c4_excessData->data[c4_i3] = c4_data->data[c4_i3];
    }

    c4_b_st.site = &c4_ci_emlrtRSI;
    c4_b_Stream_extractFromPacket(chartInstance, &c4_b_st, c4_excessData,
      (real_T)c4_excessData->size[1], c4_data);
  } else {
    c4_guard1 = false;
    do {
      c4_exitg1 = 0;
      if (c4_b_countRead < c4_countRequested) {
        c4_st.site = &c4_lh_emlrtRSI;
        c4_b_obj = c4_obj;
        c4_b_st.site = &c4_wf_emlrtRSI;
        c4_streamImpl = c4_b_obj->StreamImpl;
        c4_success = coderStreamGetDataAvailable(c4_streamImpl, &c4_count);
        c4_c_st.site = &c4_xf_emlrtRSI;
        c4_b_streamImpl = c4_streamImpl;
        c4_b_success = c4_success;
        if ((real_T)c4_b_success == 0.0) {
          c4_chImpl = coderStreamGetChannel(c4_b_streamImpl);
          c4_d_st.site = &c4_te_emlrtRSI;
          c4_b_API_channelErrorIfFailed(chartInstance, &c4_d_st, c4_chImpl);
        }

        c4_b_guard1 = false;
        if (c4_count == 0.0) {
          c4_st.site = &c4_mh_emlrtRSI;
          c4_b_Stream_wait(chartInstance, &c4_st, c4_obj, c4_status_data,
                           c4_status_size);
          c4_st.site = &c4_nh_emlrtRSI;
          if (!c4_f_strcmp(chartInstance, &c4_st, c4_status_data, c4_status_size))
          {
            c4_err_size[1] = c4_status_size[1];
            c4_st.site = &c4_oh_emlrtRSI;
            if (c4_h_strcmp(chartInstance, &c4_st, c4_status_data,
                            c4_status_size)) {
              c4_data->size[0] = 1;
              c4_data->size[1] = 0;
            } else {
              c4_st.site = &c4_ph_emlrtRSI;
              if (c4_g_strcmp(chartInstance, &c4_st, c4_status_data,
                              c4_status_size)) {
                c4_err_size[1] = 0;
              }

              c4_guard1 = true;
            }

            c4_exitg1 = 1;
          } else {
            c4_b_guard1 = true;
          }
        } else {
          c4_b_guard1 = true;
        }

        if (c4_b_guard1) {
          c4_countToRead = c4_countRequested - c4_b_countRead;
          c4_st.site = &c4_qh_emlrtRSI;
          c4_InputStream_readPackets(chartInstance, &c4_st, c4_obj,
            c4_countToRead, c4_packets, &c4_b_count);
          c4_d = (real_T)c4_packets->size[1];
          c4_i9 = (int32_T)c4_d - 1;
          for (c4_ii = 0; c4_ii <= c4_i9; c4_ii++) {
            c4_b_ii = (real_T)c4_ii + 1.0;
            c4_i10 = c4_c_data->size[0] * c4_c_data->size[1];
            c4_c_data->size[0] = c4_data->size[0];
            c4_c_data->size[1] = c4_data->size[1];
            c4_st.site = &c4_rh_emlrtRSI;
            c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_st, c4_c_data,
              c4_i10, &c4_rc_emlrtRTEI);
            c4_e_loop_ub = c4_data->size[0] * c4_data->size[1] - 1;
            for (c4_i12 = 0; c4_i12 <= c4_e_loop_ub; c4_i12++) {
              c4_c_data->data[c4_i12] = c4_data->data[c4_i12];
            }

            c4_i13 = c4_packets->size[1] - 1;
            c4_i14 = (int32_T)c4_b_ii - 1;
            if ((c4_i14 < 0) || (c4_i14 > c4_i13)) {
              emlrtDynamicBoundsCheckR2012b(c4_i14, 0, c4_i13, &c4_p_emlrtBCI,
                (emlrtConstCTX)c4_sp);
            }

            c4_st.site = &c4_rh_emlrtRSI;
            c4_cat(chartInstance, &c4_st, c4_c_data, c4_packets->data[c4_i14].f1,
                   c4_data);
          }

          c4_b_countRead += c4_b_count;
          c4_guard1 = false;
        }
      } else {
        c4_guard1 = true;
        c4_exitg1 = 1;
      }
    } while (c4_exitg1 == 0);

    if (c4_guard1) {
      if (c4_b_countRead > c4_countRequested) {
        c4_st.site = &c4_sh_emlrtRSI;
        c4_Stream_extractFromPacket(chartInstance, &c4_st, c4_data,
          c4_countRequested + 1.0, c4_b_countRead, c4_excessData);
        c4_st.site = &c4_th_emlrtRSI;
        c4_c_obj = c4_obj;
        c4_i4 = c4_c_obj->PartialPacket->size[0] * c4_c_obj->PartialPacket->
          size[1];
        c4_c_obj->PartialPacket->size[0] = c4_excessData->size[0];
        c4_c_obj->PartialPacket->size[1] = c4_excessData->size[1];
        c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_st,
          c4_c_obj->PartialPacket, c4_i4, &c4_oc_emlrtRTEI);
        c4_b_loop_ub = c4_excessData->size[0] * c4_excessData->size[1] - 1;
        for (c4_i6 = 0; c4_i6 <= c4_b_loop_ub; c4_i6++) {
          c4_c_obj->PartialPacket->data[c4_i6] = c4_excessData->data[c4_i6];
        }

        c4_c_obj->PartialPacketStart = 1.0;
        c4_c_obj->PartialPacketCount = (real_T)c4_excessData->size[1];
        c4_i8 = c4_b_data->size[0] * c4_b_data->size[1];
        c4_b_data->size[0] = c4_data->size[0];
        c4_b_data->size[1] = c4_data->size[1];
        c4_st.site = &c4_uh_emlrtRSI;
        c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_st, c4_b_data, c4_i8,
          &c4_pc_emlrtRTEI);
        c4_d_loop_ub = c4_data->size[0] * c4_data->size[1] - 1;
        for (c4_i11 = 0; c4_i11 <= c4_d_loop_ub; c4_i11++) {
          c4_b_data->data[c4_i11] = c4_data->data[c4_i11];
        }

        c4_st.site = &c4_uh_emlrtRSI;
        c4_b_Stream_extractFromPacket(chartInstance, &c4_st, c4_b_data,
          c4_countRequested, c4_data);
      }

      c4_b3 = (c4_err_size[1] == 0);
      if (!c4_b3) {
        c4_st.site = &c4_vh_emlrtRSI;
        c4_d_obj = c4_obj;
        c4_i5 = c4_d_obj->PartialPacket->size[0] * c4_d_obj->PartialPacket->
          size[1];
        c4_d_obj->PartialPacket->size[0] = c4_data->size[0];
        c4_d_obj->PartialPacket->size[1] = c4_data->size[1];
        c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_st,
          c4_d_obj->PartialPacket, c4_i5, &c4_oc_emlrtRTEI);
        c4_c_loop_ub = c4_data->size[0] * c4_data->size[1] - 1;
        for (c4_i7 = 0; c4_i7 <= c4_c_loop_ub; c4_i7++) {
          c4_d_obj->PartialPacket->data[c4_i7] = c4_data->data[c4_i7];
        }

        c4_d_obj->PartialPacketStart = 1.0;
        c4_d_obj->PartialPacketCount = (real_T)c4_data->size[1];
        c4_data->size[0] = 1;
        c4_data->size[1] = 0;
      }
    }
  }

  c4_emxFree_uint8_T(chartInstance, &c4_c_data);
  c4_emxFree_uint8_T(chartInstance, &c4_b_data);
  c4_emxFree_cell_wrap_33(chartInstance, &c4_packets);
  c4_emxFree_uint8_T(chartInstance, &c4_excessData);
}

static void c4_InputStream_readPartialPacket(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_matlabshared_asyncio_internal_InputStream *c4_obj, real_T c4_countRequested,
  c4_emxArray_uint8_T *c4_dataRead, real_T *c4_countRead)
{
  c4_emxArray_uint8_T *c4_b_obj;
  c4_emxArray_uint8_T *c4_c_obj;
  c4_emxArray_uint8_T *c4_tempDataRead;
  emlrtStack c4_b_st;
  emlrtStack c4_st;
  real_T c4_b_countRead;
  real_T c4_ppc;
  real_T c4_pps;
  int32_T c4_b_loop_ub;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_loop_ub;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_ppc = c4_obj->PartialPacketCount;
  if (c4_ppc > 0.0) {
    c4_pps = c4_obj->PartialPacketStart;
    c4_emxInit_uint8_T(chartInstance, c4_sp, &c4_tempDataRead, 2,
                       &c4_wc_emlrtRTEI);
    if (c4_countRequested < c4_ppc) {
      c4_emxInit_uint8_T(chartInstance, c4_sp, &c4_c_obj, 2, &c4_vc_emlrtRTEI);
      c4_i1 = c4_c_obj->size[0] * c4_c_obj->size[1];
      c4_c_obj->size[0] = c4_obj->PartialPacket->size[0];
      c4_c_obj->size[1] = c4_obj->PartialPacket->size[1];
      c4_st.site = &c4_wh_emlrtRSI;
      c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_st, c4_c_obj, c4_i1,
        &c4_vc_emlrtRTEI);
      c4_b_loop_ub = c4_obj->PartialPacket->size[0] * c4_obj->
        PartialPacket->size[1] - 1;
      for (c4_i3 = 0; c4_i3 <= c4_b_loop_ub; c4_i3++) {
        c4_c_obj->data[c4_i3] = c4_obj->PartialPacket->data[c4_i3];
      }

      c4_st.site = &c4_wh_emlrtRSI;
      c4_Stream_extractFromPacket(chartInstance, &c4_st, c4_c_obj, c4_pps,
        (c4_pps + c4_countRequested) - 1.0, c4_tempDataRead);
      c4_emxFree_uint8_T(chartInstance, &c4_c_obj);
      c4_b_countRead = c4_countRequested;
      c4_obj->PartialPacketStart = c4_pps + c4_countRequested;
      c4_obj->PartialPacketCount = c4_ppc - c4_countRequested;
    } else {
      c4_emxInit_uint8_T(chartInstance, c4_sp, &c4_b_obj, 2, &c4_uc_emlrtRTEI);
      c4_i = c4_b_obj->size[0] * c4_b_obj->size[1];
      c4_b_obj->size[0] = c4_obj->PartialPacket->size[0];
      c4_b_obj->size[1] = c4_obj->PartialPacket->size[1];
      c4_st.site = &c4_xh_emlrtRSI;
      c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_st, c4_b_obj, c4_i,
        &c4_uc_emlrtRTEI);
      c4_loop_ub = c4_obj->PartialPacket->size[0] * c4_obj->PartialPacket->size
        [1] - 1;
      for (c4_i2 = 0; c4_i2 <= c4_loop_ub; c4_i2++) {
        c4_b_obj->data[c4_i2] = c4_obj->PartialPacket->data[c4_i2];
      }

      c4_st.site = &c4_xh_emlrtRSI;
      c4_Stream_extractFromPacket(chartInstance, &c4_st, c4_b_obj, c4_pps,
        (c4_pps + c4_ppc) - 1.0, c4_tempDataRead);
      c4_emxFree_uint8_T(chartInstance, &c4_b_obj);
      c4_b_countRead = c4_ppc;
      c4_st.site = &c4_yh_emlrtRSI;
      c4_InputStream_clearPartialPacket(chartInstance, &c4_st, c4_obj);
    }

    c4_st.site = &c4_ai_emlrtRSI;
    c4_b_st.site = &c4_ci_emlrtRSI;
    c4_b_Stream_extractFromPacket(chartInstance, &c4_b_st, c4_tempDataRead,
      (real_T)c4_tempDataRead->size[1], c4_dataRead);
    c4_emxFree_uint8_T(chartInstance, &c4_tempDataRead);
  } else {
    c4_dataRead->size[0] = 1;
    c4_dataRead->size[1] = 0;
    c4_b_countRead = 0.0;
  }

  *c4_countRead = c4_b_countRead;
}

static void c4_Stream_extractFromPacket(SFc4_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_emxArray_uint8_T *c4_packet, real_T c4_startIndex,
  real_T c4_endIndex, c4_emxArray_uint8_T *c4_result)
{
  emlrtStack c4_st;
  int32_T c4_iv[2];
  int32_T c4_b_loop_ub;
  int32_T c4_c_loop_ub;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i15;
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_loop_ub;
  boolean_T c4_b;
  boolean_T c4_b1;
  boolean_T c4_b2;
  boolean_T c4_b3;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b = (c4_packet->size[0] == 1);
  c4_b1 = (c4_packet->size[1] == 1);
  if (c4_b || c4_b1) {
    c4_b3 = (c4_startIndex > c4_endIndex);
    if (c4_b3) {
      c4_i2 = 0;
      c4_i4 = 0;
    } else {
      c4_i1 = c4_packet->size[0] * c4_packet->size[1];
      if (c4_startIndex != (real_T)(int32_T)muDoubleScalarFloor(c4_startIndex))
      {
        emlrtIntegerCheckR2012b(c4_startIndex, &c4_k_emlrtDCI, (emlrtConstCTX)
          c4_sp);
      }

      c4_i8 = (int32_T)c4_startIndex;
      if ((c4_i8 < 1) || (c4_i8 > c4_i1)) {
        emlrtDynamicBoundsCheckR2012b(c4_i8, 1, c4_i1, &c4_q_emlrtBCI,
          (emlrtConstCTX)c4_sp);
      }

      c4_i2 = c4_i8 - 1;
      if (c4_endIndex != (real_T)(int32_T)muDoubleScalarFloor(c4_endIndex)) {
        emlrtIntegerCheckR2012b(c4_endIndex, &c4_l_emlrtDCI, (emlrtConstCTX)
          c4_sp);
      }

      c4_i12 = (int32_T)c4_endIndex;
      if ((c4_i12 < 1) || (c4_i12 > c4_i1)) {
        emlrtDynamicBoundsCheckR2012b(c4_i12, 1, c4_i1, &c4_r_emlrtBCI,
          (emlrtConstCTX)c4_sp);
      }

      c4_i4 = c4_i12;
    }

    c4_iv[0] = 1;
    c4_iv[1] = c4_i4 - c4_i2;
    c4_st.site = &c4_bi_emlrtRSI;
    c4_indexShapeCheck(chartInstance, &c4_st, c4_packet->size, c4_iv);
    c4_i9 = c4_result->size[0] * c4_result->size[1];
    c4_result->size[0] = 1;
    c4_result->size[1] = c4_i4 - c4_i2;
    c4_st.site = &c4_bi_emlrtRSI;
    c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_st, c4_result, c4_i9,
      &c4_yc_emlrtRTEI);
    c4_c_loop_ub = (c4_i4 - c4_i2) - 1;
    for (c4_i15 = 0; c4_i15 <= c4_c_loop_ub; c4_i15++) {
      c4_result->data[c4_result->size[0] * c4_i15] = c4_packet->data[c4_i2 +
        c4_i15];
    }
  } else {
    c4_b2 = (c4_startIndex > c4_endIndex);
    if (c4_b2) {
      c4_i = 0;
      c4_i3 = -1;
    } else {
      if (c4_startIndex != (real_T)(int32_T)muDoubleScalarFloor(c4_startIndex))
      {
        emlrtIntegerCheckR2012b(c4_startIndex, &c4_m_emlrtDCI, (emlrtConstCTX)
          c4_sp);
      }

      c4_i5 = c4_packet->size[1];
      c4_i6 = (int32_T)c4_startIndex;
      if ((c4_i6 < 1) || (c4_i6 > c4_i5)) {
        emlrtDynamicBoundsCheckR2012b(c4_i6, 1, c4_i5, &c4_s_emlrtBCI,
          (emlrtConstCTX)c4_sp);
      }

      c4_i = c4_i6 - 1;
      if (c4_endIndex != (real_T)(int32_T)muDoubleScalarFloor(c4_endIndex)) {
        emlrtIntegerCheckR2012b(c4_endIndex, &c4_n_emlrtDCI, (emlrtConstCTX)
          c4_sp);
      }

      c4_i10 = c4_packet->size[1];
      c4_i13 = (int32_T)c4_endIndex;
      if ((c4_i13 < 1) || (c4_i13 > c4_i10)) {
        emlrtDynamicBoundsCheckR2012b(c4_i13, 1, c4_i10, &c4_t_emlrtBCI,
          (emlrtConstCTX)c4_sp);
      }

      c4_i3 = c4_i13 - 1;
    }

    c4_i7 = c4_result->size[0] * c4_result->size[1];
    c4_result->size[0] = c4_packet->size[0];
    c4_result->size[1] = (c4_i3 - c4_i) + 1;
    c4_st.site = &c4_gl_emlrtRSI;
    c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_st, c4_result, c4_i7,
      &c4_xc_emlrtRTEI);
    c4_loop_ub = c4_i3 - c4_i;
    for (c4_i11 = 0; c4_i11 <= c4_loop_ub; c4_i11++) {
      c4_b_loop_ub = c4_packet->size[0] - 1;
      for (c4_i14 = 0; c4_i14 <= c4_b_loop_ub; c4_i14++) {
        c4_result->data[c4_i14 + c4_result->size[0] * c4_i11] = c4_packet->
          data[c4_i14 + c4_packet->size[0] * (c4_i + c4_i11)];
      }
    }
  }
}

static void c4_b_Stream_extractFromPacket(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_uint8_T *c4_packet,
  real_T c4_endIndex, c4_emxArray_uint8_T *c4_result)
{
  emlrtStack c4_st;
  int32_T c4_iv[2];
  int32_T c4_b_loop_ub;
  int32_T c4_c_loop_ub;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_loop_ub;
  boolean_T c4_b;
  boolean_T c4_b1;
  boolean_T c4_b2;
  boolean_T c4_b3;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b = (c4_packet->size[0] == 1);
  c4_b1 = (c4_packet->size[1] == 1);
  if (c4_b || c4_b1) {
    c4_b3 = (c4_endIndex < 1.0);
    if (c4_b3) {
      c4_i3 = 0;
    } else {
      c4_i2 = c4_packet->size[0] * c4_packet->size[1];
      c4_i5 = 1;
      if ((c4_i5 < 1) || (c4_i5 > c4_i2)) {
        emlrtDynamicBoundsCheckR2012b(c4_i5, 1, c4_i2, &c4_q_emlrtBCI,
          (emlrtConstCTX)c4_sp);
      }

      if (c4_endIndex != (real_T)(int32_T)muDoubleScalarFloor(c4_endIndex)) {
        emlrtIntegerCheckR2012b(c4_endIndex, &c4_l_emlrtDCI, (emlrtConstCTX)
          c4_sp);
      }

      c4_i8 = (int32_T)c4_endIndex;
      if ((c4_i8 < 1) || (c4_i8 > c4_i2)) {
        emlrtDynamicBoundsCheckR2012b(c4_i8, 1, c4_i2, &c4_r_emlrtBCI,
          (emlrtConstCTX)c4_sp);
      }

      c4_i3 = c4_i8;
    }

    c4_iv[0] = 1;
    c4_iv[1] = c4_i3;
    c4_st.site = &c4_bi_emlrtRSI;
    c4_indexShapeCheck(chartInstance, &c4_st, c4_packet->size, c4_iv);
    c4_i9 = c4_result->size[0] * c4_result->size[1];
    c4_result->size[0] = 1;
    c4_result->size[1] = c4_i3;
    c4_st.site = &c4_bi_emlrtRSI;
    c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_st, c4_result, c4_i9,
      &c4_yc_emlrtRTEI);
    c4_c_loop_ub = c4_i3 - 1;
    for (c4_i13 = 0; c4_i13 <= c4_c_loop_ub; c4_i13++) {
      c4_result->data[c4_result->size[0] * c4_i13] = c4_packet->data[c4_i13];
    }
  } else {
    c4_b2 = (c4_endIndex < 1.0);
    if (c4_b2) {
      c4_i1 = -1;
    } else {
      c4_i = c4_packet->size[1];
      c4_i4 = 1;
      if ((c4_i4 < 1) || (c4_i4 > c4_i)) {
        emlrtDynamicBoundsCheckR2012b(c4_i4, 1, c4_i, &c4_s_emlrtBCI,
          (emlrtConstCTX)c4_sp);
      }

      if (c4_endIndex != (real_T)(int32_T)muDoubleScalarFloor(c4_endIndex)) {
        emlrtIntegerCheckR2012b(c4_endIndex, &c4_n_emlrtDCI, (emlrtConstCTX)
          c4_sp);
      }

      c4_i7 = c4_packet->size[1];
      c4_i10 = (int32_T)c4_endIndex;
      if ((c4_i10 < 1) || (c4_i10 > c4_i7)) {
        emlrtDynamicBoundsCheckR2012b(c4_i10, 1, c4_i7, &c4_t_emlrtBCI,
          (emlrtConstCTX)c4_sp);
      }

      c4_i1 = c4_i10 - 1;
    }

    c4_i6 = c4_result->size[0] * c4_result->size[1];
    c4_result->size[0] = c4_packet->size[0];
    c4_result->size[1] = c4_i1 + 1;
    c4_st.site = &c4_gl_emlrtRSI;
    c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_st, c4_result, c4_i6,
      &c4_xc_emlrtRTEI);
    c4_loop_ub = c4_i1;
    for (c4_i11 = 0; c4_i11 <= c4_loop_ub; c4_i11++) {
      c4_b_loop_ub = c4_packet->size[0] - 1;
      for (c4_i12 = 0; c4_i12 <= c4_b_loop_ub; c4_i12++) {
        c4_result->data[c4_i12 + c4_result->size[0] * c4_i11] = c4_packet->
          data[c4_i12 + c4_packet->size[0] * c4_i11];
      }
    }
  }
}

static void c4_b_Stream_wait(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_matlabshared_asyncio_internal_InputStream *c4_obj,
  char_T c4_status_data[], int32_T c4_status_size[2])
{
  static char_T c4_b_cv1[7] = { 't', 'i', 'm', 'e', 'o', 'u', 't' };

  static char_T c4_b_cv2[5] = { 'p', 'a', 'u', 's', 'e' };

  static char_T c4_b_cv3[5] = { 'p', 'a', 'u', 's', 'e' };

  static char_T c4_b_cv[4] = { 'd', 'o', 'n', 'e' };

  CoderChannel c4_b_chImpl;
  CoderChannel c4_c_chImpl;
  CoderChannel c4_chImpl;
  CoderChannel c4_d_chImpl;
  CoderInputStream c4_b_streamImpl;
  CoderInputStream c4_c_streamImpl;
  CoderInputStream c4_d_streamImpl;
  CoderInputStream c4_e_streamImpl;
  CoderInputStream c4_f_streamImpl;
  CoderInputStream c4_g_streamImpl;
  CoderInputStream c4_h_streamImpl;
  CoderInputStream c4_streamImpl;
  c4_matlabshared_asyncio_internal_InputStream *c4_b_obj;
  c4_matlabshared_asyncio_internal_InputStream *c4_c_obj;
  c4_matlabshared_asyncio_internal_InputStream *c4_d_obj;
  c4_matlabshared_asyncio_internal_InputStream *c4_e_obj;
  c4_matlabshared_asyncio_internal_InputStream *c4_f_obj;
  c4_matlabshared_asyncio_internal_InputStream *c4_g_obj;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_e_st;
  emlrtStack c4_st;
  emlrtTimespec c4_startTic;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_y = NULL;
  real_T c4_b_count;
  real_T c4_b_varargin_1;
  real_T c4_count;
  real_T c4_et;
  real_T c4_timeoutInSeconds;
  real_T c4_varargin_1;
  int32_T c4_b_success;
  int32_T c4_c_success;
  int32_T c4_d_success;
  int32_T c4_e_success;
  int32_T c4_f_success;
  int32_T c4_g_success;
  int32_T c4_h_success;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i2;
  int32_T c4_success;
  boolean_T c4_b_done;
  boolean_T c4_b_result;
  boolean_T c4_completed;
  boolean_T c4_done;
  boolean_T c4_result;
  boolean_T c4_timeout;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_e_st.prev = &c4_d_st;
  c4_e_st.tls = c4_d_st.tls;
  c4_timeoutInSeconds = c4_obj->Timeout;
  c4_status_size[0] = 1;
  c4_status_size[1] = 0;
  c4_timeout = false;
  c4_done = false;
  c4_st.site = &c4_ue_emlrtRSI;
  c4_b_obj = c4_obj;
  c4_b_st.site = &c4_mh_emlrtRSI;
  c4_c_obj = c4_b_obj;
  c4_c_st.site = &c4_wf_emlrtRSI;
  c4_streamImpl = c4_c_obj->StreamImpl;
  c4_success = coderStreamGetDataAvailable(c4_streamImpl, &c4_count);
  c4_d_st.site = &c4_xf_emlrtRSI;
  c4_b_streamImpl = c4_streamImpl;
  c4_b_success = c4_success;
  if ((real_T)c4_b_success == 0.0) {
    c4_chImpl = coderStreamGetChannel(c4_b_streamImpl);
    c4_e_st.site = &c4_te_emlrtRSI;
    c4_b_API_channelErrorIfFailed(chartInstance, &c4_e_st, c4_chImpl);
  }

  c4_completed = (c4_count > 0.0);
  c4_st.site = &c4_ve_emlrtRSI;
  c4_startTic = c4_tic(chartInstance, &c4_st);
  while ((!c4_completed) && (!c4_done) && (!c4_timeout)) {
    c4_st.site = &c4_we_emlrtRSI;
    c4_et = c4_toc(chartInstance, &c4_st, c4_startTic);
    if (c4_et < 1.0) {
      c4_st.site = &c4_xe_emlrtRSI;
      c4_b_st.site = &c4_if_emlrtRSI;
      c4_b_varargin_1 = 0.0;
      c4_b_y = NULL;
      sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_b_cv3, 10, 0U, 1U, 0U, 2, 1,
        5), false);
      c4_d_y = NULL;
      sf_mex_assign(&c4_d_y, sf_mex_create("y", &c4_b_varargin_1, 0, 0U, 0U, 0U,
        0), false);
      c4_c_st.site = &c4_jf_emlrtRSI;
      c4_b_feval(chartInstance, &c4_c_st, c4_b_y, c4_d_y);
    } else {
      c4_st.site = &c4_ye_emlrtRSI;
      c4_b_st.site = &c4_if_emlrtRSI;
      c4_varargin_1 = 0.005;
      c4_y = NULL;
      sf_mex_assign(&c4_y, sf_mex_create("y", c4_b_cv2, 10, 0U, 1U, 0U, 2, 1, 5),
                    false);
      c4_c_y = NULL;
      sf_mex_assign(&c4_c_y, sf_mex_create("y", &c4_varargin_1, 0, 0U, 0U, 0U, 0),
                    false);
      c4_c_st.site = &c4_jf_emlrtRSI;
      c4_b_feval(chartInstance, &c4_c_st, c4_y, c4_c_y);
    }

    c4_st.site = &c4_af_emlrtRSI;
    c4_et = c4_toc(chartInstance, &c4_st, c4_startTic);
    c4_timeout = (c4_et > c4_timeoutInSeconds);
    c4_st.site = &c4_bf_emlrtRSI;
    c4_d_obj = c4_obj;
    c4_b_st.site = &c4_kf_emlrtRSI;
    c4_c_streamImpl = c4_d_obj->StreamImpl;
    c4_c_success = coderStreamIsDeviceDone(c4_c_streamImpl, &c4_result);
    c4_c_st.site = &c4_lf_emlrtRSI;
    c4_d_streamImpl = c4_c_streamImpl;
    c4_d_success = c4_c_success;
    if ((real_T)c4_d_success == 0.0) {
      c4_b_chImpl = coderStreamGetChannel(c4_d_streamImpl);
      c4_d_st.site = &c4_te_emlrtRSI;
      c4_b_API_channelErrorIfFailed(chartInstance, &c4_d_st, c4_b_chImpl);
    }

    if (c4_result) {
      c4_b_done = true;
    } else {
      c4_st.site = &c4_bf_emlrtRSI;
      c4_e_obj = c4_obj;
      c4_b_st.site = &c4_mf_emlrtRSI;
      c4_e_streamImpl = c4_e_obj->StreamImpl;
      c4_e_success = coderStreamIsOpen(c4_e_streamImpl, &c4_b_result);
      c4_c_st.site = &c4_nf_emlrtRSI;
      c4_f_streamImpl = c4_e_streamImpl;
      c4_f_success = c4_e_success;
      if ((real_T)c4_f_success == 0.0) {
        c4_c_chImpl = coderStreamGetChannel(c4_f_streamImpl);
        c4_d_st.site = &c4_te_emlrtRSI;
        c4_b_API_channelErrorIfFailed(chartInstance, &c4_d_st, c4_c_chImpl);
      }

      if (!c4_b_result) {
        c4_b_done = true;
      } else {
        c4_b_done = false;
      }
    }

    c4_done = c4_b_done;
    c4_st.site = &c4_cf_emlrtRSI;
    c4_f_obj = c4_obj;
    c4_b_st.site = &c4_mh_emlrtRSI;
    c4_g_obj = c4_f_obj;
    c4_c_st.site = &c4_wf_emlrtRSI;
    c4_g_streamImpl = c4_g_obj->StreamImpl;
    c4_g_success = coderStreamGetDataAvailable(c4_g_streamImpl, &c4_b_count);
    c4_d_st.site = &c4_xf_emlrtRSI;
    c4_h_streamImpl = c4_g_streamImpl;
    c4_h_success = c4_g_success;
    if ((real_T)c4_h_success == 0.0) {
      c4_d_chImpl = coderStreamGetChannel(c4_h_streamImpl);
      c4_e_st.site = &c4_te_emlrtRSI;
      c4_b_API_channelErrorIfFailed(chartInstance, &c4_e_st, c4_d_chImpl);
    }

    c4_completed = (c4_b_count > 0.0);
  }

  if (c4_completed) {
    c4_status_size[0] = 1;
    c4_status_size[1] = 9;
    for (c4_i = 0; c4_i < 9; c4_i++) {
      c4_status_data[c4_i] = c4_cv12[c4_i];
    }
  } else if (c4_done) {
    c4_status_size[0] = 1;
    c4_status_size[1] = 4;
    for (c4_i1 = 0; c4_i1 < 4; c4_i1++) {
      c4_status_data[c4_i1] = c4_b_cv[c4_i1];
    }
  } else if (c4_timeout) {
    c4_status_size[0] = 1;
    c4_status_size[1] = 7;
    for (c4_i2 = 0; c4_i2 < 7; c4_i2++) {
      c4_status_data[c4_i2] = c4_b_cv1[c4_i2];
    }
  }
}

static void c4_InputStream_readPackets(SFc4_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_matlabshared_asyncio_internal_InputStream *c4_obj,
  real_T c4_countRequested, c4_emxArray_cell_wrap_33 *c4_packets, real_T
  *c4_countRead)
{
  static char_T c4_b_cv[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I', 'n',
    'p', 'u', 't' };

  static char_T c4_b_cv1[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  CoderChannel c4_b_chImpl;
  CoderChannel c4_c_chImpl;
  CoderChannel c4_chImpl;
  CoderInputStream c4_b_streamImpl;
  CoderInputStream c4_c_streamImpl;
  CoderInputStream c4_d_streamImpl;
  CoderInputStream c4_e_streamImpl;
  CoderInputStream c4_f_streamImpl;
  CoderInputStream c4_g_streamImpl;
  CoderInputStream c4_streamImpl;
  c4_emxArray_boolean_T *c4_tile;
  c4_emxArray_uint8_T *c4_packet;
  c4_matlabshared_asyncio_internal_InputStream *c4_b_obj;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_f_y = NULL;
  const mxArray *c4_g_y = NULL;
  const mxArray *c4_y = NULL;
  real_T c4_bufferCounts[80];
  real_T c4_repmatTiling[2];
  real_T c4_arg;
  real_T c4_b_arg;
  real_T c4_b_bufferIndex;
  real_T c4_b_countRead;
  real_T c4_b_countRequested;
  real_T c4_b_countToRead;
  real_T c4_b_numBuffers;
  real_T c4_b_varargin_2;
  real_T c4_c_varargin_2;
  real_T c4_countToRead;
  real_T c4_d;
  real_T c4_d_bufferIndex;
  real_T c4_e_bufferIndex;
  real_T c4_f_bufferIndex;
  real_T c4_n;
  real_T c4_numBuffers;
  real_T c4_varargin_2;
  real_T c4_x;
  int32_T c4_iv[2];
  int32_T c4_outsize[2];
  int32_T c4_b_loop_ub;
  int32_T c4_b_success;
  int32_T c4_b_u;
  int32_T c4_bufferIndex;
  int32_T c4_c_bufferIndex;
  int32_T c4_c_loop_ub;
  int32_T c4_c_success;
  int32_T c4_d_loop_ub;
  int32_T c4_d_success;
  int32_T c4_e_success;
  int32_T c4_f_success;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i15;
  int32_T c4_i16;
  int32_T c4_i17;
  int32_T c4_i18;
  int32_T c4_i19;
  int32_T c4_i2;
  int32_T c4_i20;
  int32_T c4_i21;
  int32_T c4_i22;
  int32_T c4_i23;
  int32_T c4_i24;
  int32_T c4_i25;
  int32_T c4_i26;
  int32_T c4_i27;
  int32_T c4_i28;
  int32_T c4_i29;
  int32_T c4_i3;
  int32_T c4_i30;
  int32_T c4_i31;
  int32_T c4_i32;
  int32_T c4_i33;
  int32_T c4_i34;
  int32_T c4_i35;
  int32_T c4_i36;
  int32_T c4_i37;
  int32_T c4_i38;
  int32_T c4_i39;
  int32_T c4_i4;
  int32_T c4_i40;
  int32_T c4_i41;
  int32_T c4_i42;
  int32_T c4_i43;
  int32_T c4_i44;
  int32_T c4_i45;
  int32_T c4_i46;
  int32_T c4_i47;
  int32_T c4_i48;
  int32_T c4_i49;
  int32_T c4_i5;
  int32_T c4_i50;
  int32_T c4_i51;
  int32_T c4_i52;
  int32_T c4_i53;
  int32_T c4_i54;
  int32_T c4_i55;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_loop_ub;
  int32_T c4_success;
  int32_T c4_u;
  boolean_T c4_b;
  boolean_T c4_b_b;
  boolean_T c4_b_p;
  boolean_T c4_p;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_st.site = &c4_di_emlrtRSI;
  c4_streamImpl = c4_obj->StreamImpl;
  c4_b_countRequested = c4_countRequested;
  c4_countToRead = 0.0;
  for (c4_i = 0; c4_i < 80; c4_i++) {
    c4_bufferCounts[c4_i] = 0.0;
  }

  c4_numBuffers = 80.0;
  c4_success = coderInputStreamPeek(c4_streamImpl, c4_b_countRequested,
    &c4_countToRead, &c4_bufferCounts[0], &c4_numBuffers);
  c4_b_st.site = &c4_ii_emlrtRSI;
  c4_b_streamImpl = c4_streamImpl;
  c4_b_success = c4_success;
  if ((real_T)c4_b_success == 0.0) {
    c4_chImpl = coderStreamGetChannel(c4_b_streamImpl);
    c4_c_st.site = &c4_te_emlrtRSI;
    c4_b_API_channelErrorIfFailed(chartInstance, &c4_c_st, c4_chImpl);
  }

  c4_iv[0] = 1;
  if (!(c4_numBuffers >= 0.0)) {
    emlrtNonNegativeCheckR2012b(c4_numBuffers, &c4_q_emlrtDCI, (emlrtConstCTX)
      c4_sp);
  }

  c4_d = c4_numBuffers;
  if (c4_d != (real_T)(int32_T)muDoubleScalarFloor(c4_d)) {
    emlrtIntegerCheckR2012b(c4_d, &c4_p_emlrtDCI, (emlrtConstCTX)c4_sp);
  }

  c4_iv[1] = (int32_T)c4_d;
  c4_i1 = c4_packets->size[0] * c4_packets->size[1];
  c4_packets->size[0] = c4_iv[0];
  c4_packets->size[1] = c4_iv[1];
  c4_emxEnsureCapacity_cell_wrap_332(chartInstance, c4_sp, c4_packets, c4_i1,
    &c4_ad_emlrtRTEI);
  for (c4_i2 = 0; c4_i2 < c4_iv[1]; c4_i2++) {
    c4_i4 = c4_packets->size[1] - 1;
    if ((c4_i2 < 0) || (c4_i2 > c4_i4)) {
      emlrtDynamicBoundsCheckR2012b(c4_i2, 0, c4_i4, &c4_x_emlrtBCI,
        (emlrtConstCTX)c4_sp);
    }

    c4_i6 = c4_i2;
    c4_packets->data[c4_i6].f1->size[0] = 1;
    c4_i7 = c4_packets->size[1] - 1;
    if ((c4_i2 < 0) || (c4_i2 > c4_i7)) {
      emlrtDynamicBoundsCheckR2012b(c4_i2, 0, c4_i7, &c4_x_emlrtBCI,
        (emlrtConstCTX)c4_sp);
    }

    c4_i8 = c4_i2;
    c4_packets->data[c4_i8].f1->size[1] = 0;
  }

  c4_i3 = (int32_T)c4_numBuffers;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, c4_numBuffers, mxDOUBLE_CLASS, c4_i3,
    &c4_ld_emlrtRTEI, (emlrtConstCTX)c4_sp);
  c4_i5 = c4_packets->size[0] * c4_packets->size[1];
  c4_packets->size[0] = c4_iv[0];
  c4_packets->size[1] = c4_iv[1];
  c4_st.site = &c4_jl_emlrtRSI;
  c4_emxEnsureCapacity_cell_wrap_332(chartInstance, &c4_st, c4_packets, c4_i5,
    &c4_bd_emlrtRTEI);
  c4_emxInit_boolean_T(chartInstance, c4_sp, &c4_tile, 2, &c4_dd_emlrtRTEI);
  for (c4_bufferIndex = 0; c4_bufferIndex < c4_i3; c4_bufferIndex++) {
    c4_b_bufferIndex = (real_T)c4_bufferIndex + 1.0;
    c4_i9 = (int32_T)c4_b_bufferIndex;
    if ((c4_i9 < 1) || (c4_i9 > 80)) {
      emlrtDynamicBoundsCheckR2012b(c4_i9, 1, 80, &c4_y_emlrtBCI, (emlrtConstCTX)
        c4_sp);
    }

    c4_repmatTiling[1] = c4_bufferCounts[c4_i9 - 1];
    c4_st.site = &c4_ei_emlrtRSI;
    c4_varargin_2 = c4_repmatTiling[1];
    c4_b_st.site = &c4_ji_emlrtRSI;
    c4_b_varargin_2 = c4_varargin_2;
    c4_arg = c4_b_varargin_2;
    if (c4_arg != muDoubleScalarFloor(c4_arg)) {
      c4_p = false;
    } else {
      c4_x = c4_arg;
      c4_b = muDoubleScalarIsInf(c4_x);
      if (c4_b) {
        c4_p = false;
      } else {
        c4_p = true;
      }
    }

    if (c4_p) {
      c4_b_arg = c4_b_varargin_2;
      if ((c4_b_arg < -2.147483648E+9) || (c4_b_arg > 2.147483647E+9)) {
        c4_b_p = false;
      } else {
        c4_b_p = true;
      }

      if (c4_b_p) {
        c4_b_b = true;
      } else {
        c4_b_b = false;
      }
    } else {
      c4_b_b = false;
    }

    if (!c4_b_b) {
      c4_y = NULL;
      sf_mex_assign(&c4_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 28),
                    false);
      c4_b_y = NULL;
      sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1,
        28), false);
      c4_u = MIN_int32_T;
      c4_c_y = NULL;
      sf_mex_assign(&c4_c_y, sf_mex_create("y", &c4_u, 6, 0U, 0U, 0U, 0), false);
      c4_b_u = MAX_int32_T;
      c4_f_y = NULL;
      sf_mex_assign(&c4_f_y, sf_mex_create("y", &c4_b_u, 6, 0U, 0U, 0U, 0),
                    false);
      sf_mex_call(&c4_b_st, &c4_ob_emlrtMCI, "error", 0U, 2U, 14, c4_y, 14,
                  sf_mex_call(&c4_b_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c4_b_st, NULL, "message", 1U, 3U, 14, c4_b_y, 14, c4_c_y,
                    14, c4_f_y)));
    }

    c4_c_varargin_2 = c4_b_varargin_2;
    if (c4_c_varargin_2 <= 0.0) {
      c4_n = 0.0;
    } else {
      c4_n = c4_c_varargin_2;
    }

    if (!(c4_n <= 2.147483647E+9)) {
      c4_d_y = NULL;
      sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2, 1,
        21), false);
      c4_e_y = NULL;
      sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2, 1,
        21), false);
      sf_mex_call(&c4_b_st, &c4_pb_emlrtMCI, "error", 0U, 2U, 14, c4_d_y, 14,
                  sf_mex_call(&c4_b_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c4_b_st, NULL, "message", 1U, 1U, 14, c4_e_y)));
    }

    c4_i15 = c4_tile->size[0] * c4_tile->size[1];
    c4_tile->size[0] = 1;
    if (!(c4_varargin_2 >= 0.0)) {
      emlrtNonNegativeCheckR2012b(c4_varargin_2, &c4_o_emlrtDCI, &c4_st);
    }

    c4_tile->size[1] = (int32_T)c4_varargin_2;
    c4_emxEnsureCapacity_boolean_T(chartInstance, &c4_st, c4_tile, c4_i15,
      &c4_dd_emlrtRTEI);
    if (!(c4_varargin_2 >= 0.0)) {
      emlrtNonNegativeCheckR2012b(c4_varargin_2, &c4_r_emlrtDCI, &c4_st);
    }

    c4_loop_ub = (int32_T)c4_varargin_2 - 1;
    for (c4_i20 = 0; c4_i20 <= c4_loop_ub; c4_i20++) {
      c4_tile->data[c4_i20] = false;
    }

    c4_outsize[1] = c4_tile->size[1];
    if (!((real_T)c4_outsize[1] == (real_T)c4_tile->size[1])) {
      c4_g_y = NULL;
      sf_mex_assign(&c4_g_y, sf_mex_create("y", c4_cv11, 10, 0U, 1U, 0U, 2, 1,
        15), false);
      sf_mex_call(&c4_st, &c4_x_emlrtMCI, "error", 0U, 1U, 14, c4_g_y);
    }

    c4_i23 = c4_packets->size[1] - 1;
    c4_i24 = (int32_T)c4_b_bufferIndex - 1;
    if ((c4_i24 < 0) || (c4_i24 > c4_i23)) {
      emlrtDynamicBoundsCheckR2012b(c4_i24, 0, c4_i23, &c4_v_emlrtBCI, &c4_st);
    }

    c4_i27 = c4_i24;
    c4_i28 = c4_packets->data[c4_i27].f1->size[0] * c4_packets->data[c4_i27].
      f1->size[1];
    c4_packets->data[c4_i27].f1->size[0] = 1;
    c4_b_st.site = &c4_ei_emlrtRSI;
    c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_b_st, c4_packets->
      data[c4_i27].f1, c4_i28, &c4_ed_emlrtRTEI);
    c4_i29 = c4_packets->size[1] - 1;
    c4_i30 = (int32_T)c4_b_bufferIndex - 1;
    if ((c4_i30 < 0) || (c4_i30 > c4_i29)) {
      emlrtDynamicBoundsCheckR2012b(c4_i30, 0, c4_i29, &c4_v_emlrtBCI, &c4_st);
    }

    c4_i31 = c4_i30;
    c4_i32 = c4_packets->data[c4_i31].f1->size[0] * c4_packets->data[c4_i31].
      f1->size[1];
    c4_packets->data[c4_i31].f1->size[1] = c4_outsize[1];
    c4_b_st.site = &c4_ei_emlrtRSI;
    c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_b_st, c4_packets->
      data[c4_i31].f1, c4_i32, &c4_ed_emlrtRTEI);
    c4_i34 = c4_packets->size[1] - 1;
    c4_i36 = (int32_T)c4_b_bufferIndex - 1;
    if ((c4_i36 < 0) || (c4_i36 > c4_i34)) {
      emlrtDynamicBoundsCheckR2012b(c4_i36, 0, c4_i34, &c4_v_emlrtBCI, &c4_st);
    }

    c4_i38 = c4_packets->size[1] - 1;
    c4_i40 = (int32_T)c4_b_bufferIndex - 1;
    if ((c4_i40 < 0) || (c4_i40 > c4_i38)) {
      emlrtDynamicBoundsCheckR2012b(c4_i40, 0, c4_i38, &c4_v_emlrtBCI, &c4_st);
    }

    c4_c_loop_ub = c4_outsize[1] - 1;
    for (c4_i42 = 0; c4_i42 <= c4_c_loop_ub; c4_i42++) {
      c4_i44 = c4_packets->size[1] - 1;
      c4_i45 = (int32_T)c4_b_bufferIndex - 1;
      if ((c4_i45 < 0) || (c4_i45 > c4_i44)) {
        emlrtDynamicBoundsCheckR2012b(c4_i45, 0, c4_i44, &c4_cb_emlrtBCI, &c4_st);
      }

      c4_packets->data[c4_i45].f1->data[c4_i42] = 0U;
    }
  }

  c4_emxFree_boolean_T(chartInstance, &c4_tile);
  c4_st.site = &c4_fi_emlrtRSI;
  c4_c_streamImpl = c4_obj->StreamImpl;
  c4_b_countToRead = c4_countToRead;
  c4_b_numBuffers = c4_numBuffers;
  c4_c_success = coderInputStreamReadBuffers(c4_c_streamImpl, c4_b_countToRead,
    c4_b_numBuffers);
  c4_b_st.site = &c4_ki_emlrtRSI;
  c4_d_streamImpl = c4_c_streamImpl;
  c4_d_success = c4_c_success;
  if ((real_T)c4_d_success == 0.0) {
    c4_b_chImpl = coderStreamGetChannel(c4_d_streamImpl);
    c4_c_st.site = &c4_te_emlrtRSI;
    c4_b_API_channelErrorIfFailed(chartInstance, &c4_c_st, c4_b_chImpl);
  }

  c4_b_countRead = 0.0;
  c4_i10 = (int32_T)c4_numBuffers;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, c4_numBuffers, mxDOUBLE_CLASS, c4_i10,
    &c4_md_emlrtRTEI, (emlrtConstCTX)c4_sp);
  c4_emxInit_uint8_T(chartInstance, c4_sp, &c4_packet, 2, &c4_cd_emlrtRTEI);
  for (c4_c_bufferIndex = 0; c4_c_bufferIndex < c4_i10; c4_c_bufferIndex++) {
    c4_b_bufferIndex = (real_T)c4_c_bufferIndex + 1.0;
    c4_i11 = c4_packet->size[0] * c4_packet->size[1];
    c4_packet->size[0] = 1;
    c4_i12 = c4_packets->size[1] - 1;
    c4_i13 = (int32_T)c4_b_bufferIndex - 1;
    if ((c4_i13 < 0) || (c4_i13 > c4_i12)) {
      emlrtDynamicBoundsCheckR2012b(c4_i13, 0, c4_i12, &c4_u_emlrtBCI,
        (emlrtConstCTX)c4_sp);
    }

    c4_i14 = c4_i13;
    c4_packet->size[1] = c4_packets->data[c4_i14].f1->size[1];
    c4_st.site = &c4_fl_emlrtRSI;
    c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_st, c4_packet, c4_i11,
      &c4_cd_emlrtRTEI);
    c4_i16 = c4_packets->size[1] - 1;
    c4_i17 = (int32_T)c4_b_bufferIndex - 1;
    if ((c4_i17 < 0) || (c4_i17 > c4_i16)) {
      emlrtDynamicBoundsCheckR2012b(c4_i17, 0, c4_i16, &c4_u_emlrtBCI,
        (emlrtConstCTX)c4_sp);
    }

    c4_i18 = c4_packets->size[1] - 1;
    c4_i19 = (int32_T)c4_b_bufferIndex - 1;
    if ((c4_i19 < 0) || (c4_i19 > c4_i18)) {
      emlrtDynamicBoundsCheckR2012b(c4_i19, 0, c4_i18, &c4_u_emlrtBCI,
        (emlrtConstCTX)c4_sp);
    }

    c4_i21 = c4_i19;
    c4_b_loop_ub = c4_packets->data[c4_i21].f1->size[1] - 1;
    for (c4_i22 = 0; c4_i22 <= c4_b_loop_ub; c4_i22++) {
      c4_i25 = c4_packets->size[1] - 1;
      c4_i26 = (int32_T)c4_b_bufferIndex - 1;
      if ((c4_i26 < 0) || (c4_i26 > c4_i25)) {
        emlrtDynamicBoundsCheckR2012b(c4_i26, 0, c4_i25, &c4_bb_emlrtBCI,
          (emlrtConstCTX)c4_sp);
      }

      c4_packet->data[c4_i22] = c4_packets->data[c4_i26].f1->data[c4_i22];
    }

    c4_st.site = &c4_gi_emlrtRSI;
    c4_b_obj = c4_obj;
    c4_d_bufferIndex = c4_b_bufferIndex;
    c4_b_st.site = &c4_li_emlrtRSI;
    c4_e_streamImpl = c4_b_obj->StreamImpl;
    c4_e_bufferIndex = c4_d_bufferIndex;
    c4_e_success = coderInputStreamReadBufferData(c4_e_streamImpl, (int32_T)
      c4_e_bufferIndex, 1, "", "uint8", c4_packet->size[1], &c4_packet->data[0]);
    c4_c_st.site = &c4_mi_emlrtRSI;
    c4_f_streamImpl = c4_e_streamImpl;
    c4_f_success = c4_e_success;
    if ((real_T)c4_f_success == 0.0) {
      c4_c_chImpl = coderStreamGetChannel(c4_f_streamImpl);
      c4_d_st.site = &c4_te_emlrtRSI;
      c4_b_API_channelErrorIfFailed(chartInstance, &c4_d_st, c4_c_chImpl);
    }

    c4_st.site = &c4_hi_emlrtRSI;
    c4_g_streamImpl = c4_obj->StreamImpl;
    c4_f_bufferIndex = c4_b_bufferIndex;
    coderInputStreamFreeBuffer(c4_g_streamImpl, (int32_T)c4_f_bufferIndex);
    c4_i33 = c4_packets->size[1] - 1;
    c4_i35 = (int32_T)c4_b_bufferIndex - 1;
    if ((c4_i35 < 0) || (c4_i35 > c4_i33)) {
      emlrtDynamicBoundsCheckR2012b(c4_i35, 0, c4_i33, &c4_w_emlrtBCI,
        (emlrtConstCTX)c4_sp);
    }

    c4_i37 = c4_i35;
    c4_i39 = c4_packets->data[c4_i37].f1->size[0] * c4_packets->data[c4_i37].
      f1->size[1];
    c4_packets->data[c4_i37].f1->size[0] = 1;
    c4_st.site = &c4_el_emlrtRSI;
    c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_st, c4_packets->data[c4_i37]
      .f1, c4_i39, &c4_fd_emlrtRTEI);
    c4_i41 = c4_packets->size[1] - 1;
    c4_i43 = (int32_T)c4_b_bufferIndex - 1;
    if ((c4_i43 < 0) || (c4_i43 > c4_i41)) {
      emlrtDynamicBoundsCheckR2012b(c4_i43, 0, c4_i41, &c4_w_emlrtBCI,
        (emlrtConstCTX)c4_sp);
    }

    c4_i46 = c4_i43;
    c4_i47 = c4_packets->data[c4_i46].f1->size[0] * c4_packets->data[c4_i46].
      f1->size[1];
    c4_packets->data[c4_i46].f1->size[1] = c4_packet->size[1];
    c4_st.site = &c4_el_emlrtRSI;
    c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_st, c4_packets->data[c4_i46]
      .f1, c4_i47, &c4_fd_emlrtRTEI);
    c4_i48 = c4_packets->size[1] - 1;
    c4_i49 = (int32_T)c4_b_bufferIndex - 1;
    if ((c4_i49 < 0) || (c4_i49 > c4_i48)) {
      emlrtDynamicBoundsCheckR2012b(c4_i49, 0, c4_i48, &c4_w_emlrtBCI,
        (emlrtConstCTX)c4_sp);
    }

    c4_i50 = c4_packets->size[1] - 1;
    c4_i51 = (int32_T)c4_b_bufferIndex - 1;
    if ((c4_i51 < 0) || (c4_i51 > c4_i50)) {
      emlrtDynamicBoundsCheckR2012b(c4_i51, 0, c4_i50, &c4_w_emlrtBCI,
        (emlrtConstCTX)c4_sp);
    }

    c4_d_loop_ub = c4_packet->size[1] - 1;
    for (c4_i52 = 0; c4_i52 <= c4_d_loop_ub; c4_i52++) {
      c4_i54 = c4_packets->size[1] - 1;
      c4_i55 = (int32_T)c4_b_bufferIndex - 1;
      if ((c4_i55 < 0) || (c4_i55 > c4_i54)) {
        emlrtDynamicBoundsCheckR2012b(c4_i55, 0, c4_i54, &c4_db_emlrtBCI,
          (emlrtConstCTX)c4_sp);
      }

      c4_packets->data[c4_i55].f1->data[c4_i52] = c4_packet->data[c4_i52];
    }

    c4_i53 = (int32_T)c4_b_bufferIndex;
    if ((c4_i53 < 1) || (c4_i53 > 80)) {
      emlrtDynamicBoundsCheckR2012b(c4_i53, 1, 80, &c4_ab_emlrtBCI,
        (emlrtConstCTX)c4_sp);
    }

    c4_b_countRead += c4_bufferCounts[c4_i53 - 1];
  }

  c4_emxFree_uint8_T(chartInstance, &c4_packet);
  *c4_countRead = c4_b_countRead;
}

static void c4_cat(SFc4_wwtp3InstanceStruct *chartInstance, const emlrtStack
                   *c4_sp, c4_emxArray_uint8_T *c4_varargin_1,
                   c4_emxArray_uint8_T *c4_varargin_2, c4_emxArray_uint8_T *c4_y)
{
  static char_T c4_b_cv[39] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'c', 'a', 't', 'e', 'n', 'a', 't', 'e', '_', 'd', 'i', 'm',
    'e', 'n', 's', 'i', 'o', 'n', 'M', 'i', 's', 'm', 'a', 't', 'c', 'h' };

  emlrtStack c4_b_st;
  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_e_y = NULL;
  real_T c4_b_j;
  real_T c4_d;
  real_T c4_d_j;
  int32_T c4_ysize[2];
  int32_T c4_b;
  int32_T c4_b_b;
  int32_T c4_c_j;
  int32_T c4_e_j;
  int32_T c4_exitg1;
  int32_T c4_f_j;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_iy;
  int32_T c4_j;
  int32_T c4_loop_ub;
  int32_T c4_ysize_dim;
  boolean_T c4_b_p;
  boolean_T c4_overflow;
  boolean_T c4_p;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_ysize_dim = c4_varargin_1->size[1];
  c4_ysize_dim += c4_varargin_2->size[1];
  c4_ysize[0] = c4_varargin_1->size[0];
  c4_ysize[1] = c4_ysize_dim;
  c4_j = 0;
  do {
    c4_exitg1 = 0;
    if (c4_j < 2) {
      c4_b_j = (real_T)c4_j + 1.0;
      if (c4_b_j != 2.0) {
        c4_d = (real_T)c4_varargin_1->size[0];
        if ((real_T)c4_ysize[0] != c4_d) {
          c4_p = false;
          c4_exitg1 = 1;
        } else {
          c4_j++;
        }
      } else {
        c4_j++;
      }
    } else {
      c4_p = true;
      c4_exitg1 = 1;
    }
  } while (c4_exitg1 == 0);

  if (!c4_p) {
    c4_b_y = NULL;
    sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c4_c_y = NULL;
    sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    sf_mex_call(c4_sp, &c4_qb_emlrtMCI, "error", 0U, 2U, 14, c4_b_y, 14,
                sf_mex_call(c4_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c4_sp, NULL, "message", 1U, 1U, 14, c4_c_y)));
  }

  c4_c_j = 0;
  do {
    c4_exitg1 = 0;
    if (c4_c_j < 2) {
      c4_d_j = (real_T)c4_c_j + 1.0;
      if ((c4_d_j != 2.0) && ((real_T)c4_ysize[0] != 1.0)) {
        c4_b_p = false;
        c4_exitg1 = 1;
      } else {
        c4_c_j++;
      }
    } else {
      c4_b_p = true;
      c4_exitg1 = 1;
    }
  } while (c4_exitg1 == 0);

  if (!c4_b_p) {
    c4_d_y = NULL;
    sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c4_e_y = NULL;
    sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    sf_mex_call(c4_sp, &c4_qb_emlrtMCI, "error", 0U, 2U, 14, c4_d_y, 14,
                sf_mex_call(c4_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c4_sp, NULL, "message", 1U, 1U, 14, c4_e_y)));
  }

  c4_i = c4_y->size[0] * c4_y->size[1];
  c4_y->size[0] = c4_varargin_1->size[0];
  c4_y->size[1] = c4_varargin_1->size[1];
  c4_st.site = &c4_dl_emlrtRSI;
  c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_st, c4_y, c4_i,
    &c4_gd_emlrtRTEI);
  c4_loop_ub = c4_varargin_1->size[0] * c4_varargin_1->size[1] - 1;
  for (c4_i1 = 0; c4_i1 <= c4_loop_ub; c4_i1++) {
    c4_y->data[c4_i1] = c4_varargin_1->data[c4_i1];
  }

  c4_i2 = c4_y->size[0] * c4_y->size[1];
  c4_y->size[0] = c4_ysize[0];
  c4_y->size[1] = c4_ysize[1];
  c4_st.site = &c4_cl_emlrtRSI;
  c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_st, c4_y, c4_i2,
    &c4_hd_emlrtRTEI);
  c4_iy = c4_varargin_1->size[0] * c4_varargin_1->size[1] - 1;
  c4_i3 = c4_varargin_2->size[1];
  c4_st.site = &c4_ni_emlrtRSI;
  c4_b = c4_i3;
  c4_b_b = c4_b;
  if (c4_b_b < 1) {
    c4_overflow = false;
  } else {
    c4_overflow = (c4_b_b > 2147483646);
  }

  if (c4_overflow) {
    c4_b_st.site = &c4_oi_emlrtRSI;
    c4_check_forloop_overflow_error(chartInstance, &c4_b_st);
  }

  for (c4_e_j = 0; c4_e_j < c4_i3; c4_e_j++) {
    c4_f_j = c4_e_j;
    c4_iy++;
    c4_y->data[c4_iy] = c4_varargin_2->data[c4_f_j];
  }
}

static void c4_check_forloop_overflow_error(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp)
{
  static char_T c4_b_cv[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o', 'p',
    '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  static char_T c4_b_cv1[5] = { 'i', 'n', 't', '3', '2' };

  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_y = NULL;
  (void)chartInstance;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                false);
  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                false);
  c4_c_y = NULL;
  sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2, 1, 5),
                false);
  sf_mex_call(c4_sp, &c4_rb_emlrtMCI, "error", 0U, 2U, 14, c4_y, 14, sf_mex_call
              (c4_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call(c4_sp, NULL,
    "message", 1U, 2U, 14, c4_b_y, 14, c4_c_y)));
}

static void c4_b_InputStream_read(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_matlabshared_asyncio_internal_InputStream *c4_obj,
  real_T c4_countRequested, c4_emxArray_uint8_T *c4_data, real_T *c4_countRead,
  char_T c4_err_data[], int32_T c4_err_size[2])
{
  static int32_T c4_iv[2] = { 1, 2 };

  CoderChannel c4_chImpl;
  CoderInputStream c4_b_streamImpl;
  CoderInputStream c4_streamImpl;
  c4_emxArray_cell_wrap_33 *c4_packets;
  c4_emxArray_uint8_T *c4_b_data;
  c4_emxArray_uint8_T *c4_c_data;
  c4_emxArray_uint8_T *c4_excessData;
  c4_matlabshared_asyncio_internal_InputStream *c4_b_obj;
  c4_matlabshared_asyncio_internal_InputStream *c4_c_obj;
  c4_matlabshared_asyncio_internal_InputStream *c4_d_obj;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_y = NULL;
  real_T c4_b_count;
  real_T c4_b_countRead;
  real_T c4_b_ii;
  real_T c4_c_countRead;
  real_T c4_count;
  real_T c4_countToRead;
  real_T c4_d;
  int32_T c4_status_size[2];
  int32_T c4_b_loop_ub;
  int32_T c4_b_success;
  int32_T c4_c_loop_ub;
  int32_T c4_d_loop_ub;
  int32_T c4_e_loop_ub;
  int32_T c4_exitg1;
  int32_T c4_f_loop_ub;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i15;
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_ii;
  int32_T c4_loop_ub;
  int32_T c4_success;
  char_T c4_status_data[9];
  boolean_T c4_x[2];
  boolean_T c4_b;
  boolean_T c4_b1;
  boolean_T c4_b2;
  boolean_T c4_b3;
  boolean_T c4_b_guard1;
  boolean_T c4_c_y;
  boolean_T c4_guard1;
  boolean_T c4_invalidCountRequested;
  boolean_T c4_sizeChangeWhenPartialBufferNonEmpty;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  if (c4_countRequested >= 0.0) {
    c4_b = true;
  } else {
    c4_b = false;
  }

  c4_invalidCountRequested = !c4_b;
  if (c4_invalidCountRequested) {
    c4_y = NULL;
    sf_mex_assign(&c4_y, sf_mex_create("y", c4_cv15, 10, 0U, 1U, 0U, 2, 1, 41),
                  false);
    c4_b_y = NULL;
    sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_cv15, 10, 0U, 1U, 0U, 2, 1, 41),
                  false);
    sf_mex_call(c4_sp, &c4_mb_emlrtMCI, "error", 0U, 2U, 14, c4_y, 14,
                sf_mex_call(c4_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c4_sp, NULL, "message", 1U, 1U, 14, c4_b_y)));
  }

  for (c4_i = 0; c4_i < 2; c4_i++) {
    c4_x[c4_i] = ((real_T)c4_obj->ExampleData->size[c4_i] != 1.0);
  }

  c4_c_y = c4_vectorAny(chartInstance, c4_x, c4_iv);
  if (c4_c_y) {
    c4_b1 = (c4_obj->PartialPacket->size[0] == 0);
    c4_b2 = (c4_obj->PartialPacket->size[1] == 0);
    if ((!c4_b1) && (!c4_b2)) {
      c4_sizeChangeWhenPartialBufferNonEmpty = true;
    } else {
      c4_sizeChangeWhenPartialBufferNonEmpty = false;
    }
  } else {
    c4_sizeChangeWhenPartialBufferNonEmpty = false;
  }

  if (c4_sizeChangeWhenPartialBufferNonEmpty) {
    c4_d_y = NULL;
    sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_cv14, 10, 0U, 1U, 0U, 2, 1, 47),
                  false);
    c4_e_y = NULL;
    sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_cv14, 10, 0U, 1U, 0U, 2, 1, 47),
                  false);
    sf_mex_call(c4_sp, &c4_nb_emlrtMCI, "error", 0U, 2U, 14, c4_d_y, 14,
                sf_mex_call(c4_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c4_sp, NULL, "message", 1U, 1U, 14, c4_e_y)));
  }

  c4_i1 = c4_obj->ExampleData->size[0] * c4_obj->ExampleData->size[1];
  c4_obj->ExampleData->size[0] = 1;
  c4_obj->ExampleData->size[1] = 1;
  c4_st.site = &c4_bl_emlrtRSI;
  c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_st, c4_obj->ExampleData, c4_i1,
    &c4_mc_emlrtRTEI);
  c4_obj->ExampleData->data[0] = 0U;
  c4_err_size[0] = 1;
  c4_err_size[1] = 0;
  c4_st.site = &c4_jh_emlrtRSI;
  c4_InputStream_readPartialPacket(chartInstance, &c4_st, c4_obj,
    c4_countRequested, c4_data, &c4_b_countRead);
  c4_c_countRead = c4_b_countRead;
  c4_emxInit_uint8_T(chartInstance, c4_sp, &c4_excessData, 2, &c4_sc_emlrtRTEI);
  c4_emxInit_cell_wrap_33(chartInstance, c4_sp, &c4_packets, 2, &c4_tc_emlrtRTEI);
  c4_emxInit_uint8_T(chartInstance, c4_sp, &c4_b_data, 2, &c4_pc_emlrtRTEI);
  c4_emxInit_uint8_T(chartInstance, c4_sp, &c4_c_data, 2, &c4_rc_emlrtRTEI);
  if (c4_b_countRead == c4_countRequested) {
    c4_st.site = &c4_kh_emlrtRSI;
    c4_i2 = c4_excessData->size[0] * c4_excessData->size[1];
    c4_excessData->size[0] = c4_data->size[0];
    c4_excessData->size[1] = c4_data->size[1];
    c4_b_st.site = &c4_jh_emlrtRSI;
    c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_b_st, c4_excessData, c4_i2,
      &c4_nc_emlrtRTEI);
    c4_loop_ub = c4_data->size[0] * c4_data->size[1] - 1;
    for (c4_i3 = 0; c4_i3 <= c4_loop_ub; c4_i3++) {
      c4_excessData->data[c4_i3] = c4_data->data[c4_i3];
    }

    c4_b_st.site = &c4_ci_emlrtRSI;
    c4_b_Stream_extractFromPacket(chartInstance, &c4_b_st, c4_excessData,
      (real_T)c4_excessData->size[1], c4_data);
  } else {
    c4_guard1 = false;
    do {
      c4_exitg1 = 0;
      if (c4_c_countRead < c4_countRequested) {
        c4_st.site = &c4_lh_emlrtRSI;
        c4_b_obj = c4_obj;
        c4_b_st.site = &c4_wf_emlrtRSI;
        c4_streamImpl = c4_b_obj->StreamImpl;
        c4_success = coderStreamGetDataAvailable(c4_streamImpl, &c4_count);
        c4_c_st.site = &c4_xf_emlrtRSI;
        c4_b_streamImpl = c4_streamImpl;
        c4_b_success = c4_success;
        if ((real_T)c4_b_success == 0.0) {
          c4_chImpl = coderStreamGetChannel(c4_b_streamImpl);
          c4_d_st.site = &c4_te_emlrtRSI;
          c4_b_API_channelErrorIfFailed(chartInstance, &c4_d_st, c4_chImpl);
        }

        c4_b_guard1 = false;
        if (c4_count == 0.0) {
          c4_st.site = &c4_mh_emlrtRSI;
          c4_b_Stream_wait(chartInstance, &c4_st, c4_obj, c4_status_data,
                           c4_status_size);
          c4_st.site = &c4_nh_emlrtRSI;
          if (!c4_f_strcmp(chartInstance, &c4_st, c4_status_data, c4_status_size))
          {
            c4_err_size[0] = 1;
            c4_err_size[1] = c4_status_size[1];
            c4_d_loop_ub = c4_status_size[1] - 1;
            for (c4_i10 = 0; c4_i10 <= c4_d_loop_ub; c4_i10++) {
              c4_err_data[c4_i10] = c4_status_data[c4_i10];
            }

            c4_st.site = &c4_oh_emlrtRSI;
            if (c4_h_strcmp(chartInstance, &c4_st, c4_status_data,
                            c4_status_size)) {
              c4_data->size[0] = 1;
              c4_data->size[1] = 0;
            } else {
              c4_st.site = &c4_ph_emlrtRSI;
              if (c4_g_strcmp(chartInstance, &c4_st, c4_status_data,
                              c4_status_size)) {
                c4_err_size[0] = 1;
                c4_err_size[1] = 0;
              }

              c4_guard1 = true;
            }

            c4_exitg1 = 1;
          } else {
            c4_b_guard1 = true;
          }
        } else {
          c4_b_guard1 = true;
        }

        if (c4_b_guard1) {
          c4_countToRead = c4_countRequested - c4_c_countRead;
          c4_st.site = &c4_qh_emlrtRSI;
          c4_InputStream_readPackets(chartInstance, &c4_st, c4_obj,
            c4_countToRead, c4_packets, &c4_b_count);
          c4_d = (real_T)c4_packets->size[1];
          c4_i9 = (int32_T)c4_d - 1;
          for (c4_ii = 0; c4_ii <= c4_i9; c4_ii++) {
            c4_b_ii = (real_T)c4_ii + 1.0;
            c4_i11 = c4_c_data->size[0] * c4_c_data->size[1];
            c4_c_data->size[0] = c4_data->size[0];
            c4_c_data->size[1] = c4_data->size[1];
            c4_st.site = &c4_rh_emlrtRSI;
            c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_st, c4_c_data,
              c4_i11, &c4_rc_emlrtRTEI);
            c4_f_loop_ub = c4_data->size[0] * c4_data->size[1] - 1;
            for (c4_i13 = 0; c4_i13 <= c4_f_loop_ub; c4_i13++) {
              c4_c_data->data[c4_i13] = c4_data->data[c4_i13];
            }

            c4_i14 = c4_packets->size[1] - 1;
            c4_i15 = (int32_T)c4_b_ii - 1;
            if ((c4_i15 < 0) || (c4_i15 > c4_i14)) {
              emlrtDynamicBoundsCheckR2012b(c4_i15, 0, c4_i14, &c4_p_emlrtBCI,
                (emlrtConstCTX)c4_sp);
            }

            c4_st.site = &c4_rh_emlrtRSI;
            c4_cat(chartInstance, &c4_st, c4_c_data, c4_packets->data[c4_i15].f1,
                   c4_data);
          }

          c4_c_countRead += c4_b_count;
          c4_guard1 = false;
        }
      } else {
        c4_guard1 = true;
        c4_exitg1 = 1;
      }
    } while (c4_exitg1 == 0);

    if (c4_guard1) {
      if (c4_c_countRead > c4_countRequested) {
        c4_st.site = &c4_sh_emlrtRSI;
        c4_Stream_extractFromPacket(chartInstance, &c4_st, c4_data,
          c4_countRequested + 1.0, c4_c_countRead, c4_excessData);
        c4_st.site = &c4_th_emlrtRSI;
        c4_c_obj = c4_obj;
        c4_i4 = c4_c_obj->PartialPacket->size[0] * c4_c_obj->PartialPacket->
          size[1];
        c4_c_obj->PartialPacket->size[0] = c4_excessData->size[0];
        c4_c_obj->PartialPacket->size[1] = c4_excessData->size[1];
        c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_st,
          c4_c_obj->PartialPacket, c4_i4, &c4_oc_emlrtRTEI);
        c4_b_loop_ub = c4_excessData->size[0] * c4_excessData->size[1] - 1;
        for (c4_i6 = 0; c4_i6 <= c4_b_loop_ub; c4_i6++) {
          c4_c_obj->PartialPacket->data[c4_i6] = c4_excessData->data[c4_i6];
        }

        c4_c_obj->PartialPacketStart = 1.0;
        c4_c_obj->PartialPacketCount = (real_T)c4_excessData->size[1];
        c4_i8 = c4_b_data->size[0] * c4_b_data->size[1];
        c4_b_data->size[0] = c4_data->size[0];
        c4_b_data->size[1] = c4_data->size[1];
        c4_st.site = &c4_uh_emlrtRSI;
        c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_st, c4_b_data, c4_i8,
          &c4_pc_emlrtRTEI);
        c4_e_loop_ub = c4_data->size[0] * c4_data->size[1] - 1;
        for (c4_i12 = 0; c4_i12 <= c4_e_loop_ub; c4_i12++) {
          c4_b_data->data[c4_i12] = c4_data->data[c4_i12];
        }

        c4_st.site = &c4_uh_emlrtRSI;
        c4_b_Stream_extractFromPacket(chartInstance, &c4_st, c4_b_data,
          c4_countRequested, c4_data);
        c4_c_countRead = c4_countRequested;
      }

      c4_b3 = (c4_err_size[1] == 0);
      if (!c4_b3) {
        c4_st.site = &c4_vh_emlrtRSI;
        c4_d_obj = c4_obj;
        c4_i5 = c4_d_obj->PartialPacket->size[0] * c4_d_obj->PartialPacket->
          size[1];
        c4_d_obj->PartialPacket->size[0] = c4_data->size[0];
        c4_d_obj->PartialPacket->size[1] = c4_data->size[1];
        c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_st,
          c4_d_obj->PartialPacket, c4_i5, &c4_oc_emlrtRTEI);
        c4_c_loop_ub = c4_data->size[0] * c4_data->size[1] - 1;
        for (c4_i7 = 0; c4_i7 <= c4_c_loop_ub; c4_i7++) {
          c4_d_obj->PartialPacket->data[c4_i7] = c4_data->data[c4_i7];
        }

        c4_d_obj->PartialPacketStart = 1.0;
        c4_d_obj->PartialPacketCount = (real_T)c4_data->size[1];
        c4_data->size[0] = 1;
        c4_data->size[1] = 0;
        c4_c_countRead = 0.0;
      }
    }
  }

  c4_emxFree_uint8_T(chartInstance, &c4_c_data);
  c4_emxFree_uint8_T(chartInstance, &c4_b_data);
  c4_emxFree_cell_wrap_33(chartInstance, &c4_packets);
  c4_emxFree_uint8_T(chartInstance, &c4_excessData);
  *c4_countRead = c4_c_countRead;
}

static void c4_BufferChannel_write(SFc4_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_matlabshared_asyncio_buffer_internal_BufferChannel
  *c4_obj, c4_emxArray_uint8_T *c4_data)
{
  static char_T c4_b_cv1[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't',
    't', 'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T c4_b_cv4[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't',
    't', 'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'V', 'e', 'c', 't', 'o', 'r' };

  static char_T c4_b_cv[37] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'B', 'u', 'f',
    'f', 'e', 'r', 'C', 'h', 'a', 'n', 'n', 'e', 'l', ':', 'e', 'x', 'p', 'e',
    'c', 't', 'e', 'd', 'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T c4_b_cv3[35] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'B', 'u',
    'f', 'f', 'e', 'r', 'C', 'h', 'a', 'n', 'n', 'e', 'l', ':', 'e', 'x', 'p',
    'e', 'c', 't', 'e', 'd', 'V', 'e', 'c', 't', 'o', 'r' };

  static char_T c4_b_cv6[35] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'a',
    'l', 'i', 'd', 'a', 't', 'o', 'r', 's', ':', 'm', 'u', 's', 't', 'B', 'e',
    'N', 'o', 'n', 'n', 'e', 'g', 'a', 't', 'i', 'v', 'e' };

  static char_T c4_b_cv2[4] = { 'd', 'a', 't', 'a' };

  static char_T c4_b_cv5[4] = { 'd', 'a', 't', 'a' };

  CoderChannel c4_b_chImpl;
  CoderChannel c4_chImpl;
  CoderOutputStream c4_b_streamImpl;
  CoderOutputStream c4_c_streamImpl;
  CoderOutputStream c4_d_streamImpl;
  CoderOutputStream c4_streamImpl;
  c4_cell_wrap_38 c4_r;
  c4_emxArray_cell_wrap_38_1 c4_r1;
  c4_emxArray_cell_wrap_38_1x1 c4_packets;
  c4_emxArray_uint8_T *c4_packet;
  c4_matlabshared_asyncio_buffer_internal_BufferChannel *c4_d_obj;
  c4_matlabshared_asyncio_internal_OutputStream *c4_b_obj;
  c4_matlabshared_asyncio_internal_OutputStream *c4_c_obj;
  c4_matlabshared_asyncio_internal_OutputStream *c4_e_obj;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_e_st;
  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_f_y = NULL;
  const mxArray *c4_g_y = NULL;
  const mxArray *c4_h_y = NULL;
  const mxArray *c4_y = NULL;
  real_T c4_A;
  real_T c4__in;
  real_T c4_a;
  real_T c4_b__in;
  real_T c4_b_count;
  real_T c4_b_packetStartIndex;
  real_T c4_count;
  real_T c4_countToWrite;
  real_T c4_countWritten;
  real_T c4_countWrittenThisIteration;
  real_T c4_in;
  real_T c4_packetEndIndex;
  real_T c4_packetStartIndex;
  real_T c4_val;
  real_T c4_x;
  int32_T c4_b_packets[2];
  int32_T c4_status_size[2];
  int32_T c4_iv[1];
  int32_T c4_b_loop_ub;
  int32_T c4_b_success;
  int32_T c4_c_success;
  int32_T c4_d_success;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_ii;
  int32_T c4_loop_ub;
  int32_T c4_success;
  char_T c4_status_data[9];
  boolean_T c4_b;
  boolean_T c4_b1;
  boolean_T c4_b2;
  boolean_T c4_b3;
  boolean_T c4_b_p;
  boolean_T c4_exitg1;
  boolean_T c4_exitg2;
  boolean_T c4_guard1;
  boolean_T c4_out;
  boolean_T c4_p;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_e_st.prev = &c4_d_st;
  c4_e_st.tls = c4_d_st.tls;
  c4_st.site = &c4_ti_emlrtRSI;
  c4_b_st.site = &c4_o_emlrtRSI;
  c4_b = (c4_data->size[0] == 0);
  c4_b1 = (c4_data->size[1] == 0);
  if (!((!c4_b) && (!c4_b1))) {
    c4_y = NULL;
    sf_mex_assign(&c4_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 37),
                  false);
    c4_b_y = NULL;
    sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2, 1, 48),
                  false);
    c4_c_y = NULL;
    sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_b_cv2, 10, 0U, 1U, 0U, 2, 1, 4),
                  false);
    sf_mex_call(&c4_b_st, &c4_tb_emlrtMCI, "error", 0U, 2U, 14, c4_y, 14,
                sf_mex_call(&c4_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_b_st, NULL, "message", 1U, 2U, 14, c4_b_y, 14, c4_c_y)));
  }

  c4_b_st.site = &c4_o_emlrtRSI;
  c4_b2 = (c4_data->size[0] == 1);
  c4_b3 = (c4_data->size[1] == 1);
  if (!(c4_b2 || c4_b3)) {
    c4_d_y = NULL;
    sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_b_cv3, 10, 0U, 1U, 0U, 2, 1, 35),
                  false);
    c4_e_y = NULL;
    sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_b_cv4, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c4_f_y = NULL;
    sf_mex_assign(&c4_f_y, sf_mex_create("y", c4_b_cv5, 10, 0U, 1U, 0U, 2, 1, 4),
                  false);
    sf_mex_call(&c4_b_st, &c4_ub_emlrtMCI, "error", 0U, 2U, 14, c4_d_y, 14,
                sf_mex_call(&c4_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_b_st, NULL, "message", 1U, 2U, 14, c4_e_y, 14, c4_f_y)));
  }

  c4_obj->BytesPerElement = 1.0;
  c4_st.site = &c4_ui_emlrtRSI;
  c4_b_obj = &c4_obj->OutputStream;
  c4_countWritten = 0.0;
  c4_countToWrite = (real_T)c4_data->size[1];
  c4_emxInitStruct_cell_wrap_38(chartInstance, &c4_st, &c4_r, &c4_jd_emlrtRTEI);
  c4_i = c4_r.f1->size[0] * c4_r.f1->size[1];
  c4_r.f1->size[0] = c4_data->size[0];
  c4_r.f1->size[1] = c4_data->size[1];
  c4_b_st.site = &c4_ui_emlrtRSI;
  c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_b_st, c4_r.f1, c4_i,
    &c4_id_emlrtRTEI);
  c4_loop_ub = c4_data->size[0] * c4_data->size[1] - 1;
  for (c4_i1 = 0; c4_i1 <= c4_loop_ub; c4_i1++) {
    c4_r.f1->data[c4_i1] = c4_data->data[c4_i1];
  }

  c4_emxInit_cell_wrap_38_1x1(chartInstance, &c4_packets);
  c4_i2 = c4_packets.size[0] * c4_packets.size[1];
  c4_packets.size[0] = 1;
  c4_packets.size[1] = 1;
  for (c4_i3 = 0; c4_i3 < 2; c4_i3++) {
    c4_b_packets[c4_i3] = c4_packets.size[c4_i3];
  }

  c4_emxEnsureCapacity_cell_wrap_38(chartInstance, &c4_st, c4_packets.data,
    c4_b_packets, c4_i2, &c4_pb_emlrtRTEI);
  c4_emxCopyStruct_cell_wrap_38(chartInstance, &c4_st, &c4_packets.data[0],
    &c4_r, &c4_pb_emlrtRTEI);
  c4_emxFreeStruct_cell_wrap_38(chartInstance, &c4_r);
  c4_packetStartIndex = 1.0;
  c4_emxInit_uint8_T(chartInstance, &c4_st, &c4_packet, 2, &c4_ub_emlrtRTEI);
  c4_emxInit_cell_wrap_38_1(chartInstance, &c4_r1);
  c4_exitg1 = false;
  while ((!c4_exitg1) && (c4_countWritten < c4_countToWrite)) {
    c4_b_st.site = &c4_me_emlrtRSI;
    c4_c_obj = c4_b_obj;
    c4_c_st.site = &c4_re_emlrtRSI;
    c4_streamImpl = c4_c_obj->StreamImpl;
    c4_success = coderStreamGetSpaceAvailable(c4_streamImpl, &c4_count);
    c4_d_st.site = &c4_se_emlrtRSI;
    c4_b_streamImpl = c4_streamImpl;
    c4_b_success = c4_success;
    if ((real_T)c4_b_success == 0.0) {
      c4_chImpl = coderStreamGetChannel(c4_b_streamImpl);
      c4_e_st.site = &c4_te_emlrtRSI;
      c4_b_API_channelErrorIfFailed(chartInstance, &c4_e_st, c4_chImpl);
    }

    c4_guard1 = false;
    if (c4_count == 0.0) {
      c4_b_st.site = &c4_ne_emlrtRSI;
      c4_Stream_wait(chartInstance, &c4_b_st, c4_b_obj, c4_status_data,
                     c4_status_size);
      c4_b_st.site = &c4_oe_emlrtRSI;
      if (!c4_f_strcmp(chartInstance, &c4_b_st, c4_status_data, c4_status_size))
      {
        c4_b_st.site = &c4_pe_emlrtRSI;
        c4_g_strcmp(chartInstance, &c4_b_st, c4_status_data, c4_status_size);
        c4_exitg1 = true;
      } else {
        c4_guard1 = true;
      }
    } else {
      c4_guard1 = true;
    }

    if (c4_guard1) {
      c4_b_st.site = &c4_qe_emlrtRSI;
      c4_e_obj = c4_b_obj;
      c4_b_packetStartIndex = c4_packetStartIndex;
      c4_b_count = 0.0;
      c4_packetEndIndex = c4_b_packetStartIndex;
      c4_i4 = (int32_T)(1.0 + (1.0 - c4_b_packetStartIndex));
      emlrtForLoopVectorCheckR2021a(c4_b_packetStartIndex, 1.0, 1.0,
        mxDOUBLE_CLASS, c4_i4, &c4_kd_emlrtRTEI, &c4_b_st);
      c4_ii = 0;
      c4_exitg2 = false;
      while ((!c4_exitg2) && (c4_ii <= c4_i4 - 1)) {
        c4_i5 = c4_r1.size[0];
        c4_r1.size[0] = 1;
        c4_iv[0] = c4_r1.size[0];
        c4_emxEnsureCapacity_cell_wrap_381(chartInstance, &c4_b_st, c4_r1.data,
          c4_iv, c4_i5, &c4_tb_emlrtRTEI);
        c4_emxCopyStruct_cell_wrap_38(chartInstance, &c4_b_st, &c4_r1.data[0],
          &c4_packets.data[0], &c4_tb_emlrtRTEI);
        if (c4_b_packetStartIndex != (real_T)(int32_T)muDoubleScalarFloor
            (c4_b_packetStartIndex)) {
          emlrtIntegerCheckR2012b(c4_b_packetStartIndex, &c4_f_emlrtDCI,
            &c4_b_st);
        }

        c4_i6 = (int32_T)c4_b_packetStartIndex - 1;
        if ((c4_i6 < 0) || (c4_i6 > 0)) {
          emlrtDynamicBoundsCheckR2012b(c4_i6, 0, 0, &c4_i_emlrtBCI, &c4_b_st);
        }

        c4_i7 = c4_packet->size[0] * c4_packet->size[1];
        c4_packet->size[0] = c4_r1.data[0].f1->size[0];
        c4_packet->size[1] = c4_r1.data[0].f1->size[1];
        c4_emxEnsureCapacity_uint8_T(chartInstance, &c4_b_st, c4_packet, c4_i7,
          &c4_ub_emlrtRTEI);
        c4_b_loop_ub = c4_r1.data[0].f1->size[0] * c4_r1.data[0].f1->size[1] - 1;
        for (c4_i8 = 0; c4_i8 <= c4_b_loop_ub; c4_i8++) {
          c4_packet->data[c4_i8] = c4_r1.data[0].f1->data[c4_i8];
        }

        c4_c_st.site = &c4_of_emlrtRSI;
        c4_c_streamImpl = c4_e_obj->StreamImpl;
        c4_c_success = coderOutputStreamWriteTypedDataOld(c4_c_streamImpl,
          &c4_countWrittenThisIteration, 1, "uint8", c4_packet->size[0] *
          c4_packet->size[1], &c4_packet->data[0]);
        c4_d_st.site = &c4_pf_emlrtRSI;
        c4_d_streamImpl = c4_c_streamImpl;
        c4_d_success = c4_c_success;
        if ((real_T)c4_d_success == 0.0) {
          c4_b_chImpl = coderStreamGetChannel(c4_d_streamImpl);
          c4_e_st.site = &c4_te_emlrtRSI;
          c4_b_API_channelErrorIfFailed(chartInstance, &c4_e_st, c4_b_chImpl);
        }

        if (c4_countWrittenThisIteration == 0.0) {
          c4_exitg2 = true;
        } else {
          c4_b_count += c4_countWrittenThisIteration;
          c4_packetEndIndex++;
          c4_ii++;
        }
      }

      c4_countWritten += c4_b_count;
      c4_packetStartIndex = c4_packetEndIndex;
    }
  }

  c4_emxFree_cell_wrap_38_1(chartInstance, &c4_r1);
  c4_emxFree_uint8_T(chartInstance, &c4_packet);
  c4_emxFree_cell_wrap_38_1x1(chartInstance, &c4_packets);
  c4_d_obj = c4_obj;
  c4_val = c4_obj->TotalElementsWritten + (real_T)c4_data->size[0];
  c4_st.site = NULL;
  c4__in = c4_val;
  c4_in = c4__in;
  c4_b__in = c4_in;
  c4_b_st.site = &c4_vi_emlrtRSI;
  c4_A = c4_b__in;
  c4_x = c4_A;
  c4_a = c4_x;
  c4_out = (c4_a >= 0.0);
  if (c4_out) {
    c4_p = true;
  } else {
    c4_p = false;
  }

  c4_b_p = c4_p;
  if (!c4_b_p) {
    c4_g_y = NULL;
    sf_mex_assign(&c4_g_y, sf_mex_create("y", c4_b_cv6, 10, 0U, 1U, 0U, 2, 1, 35),
                  false);
    c4_h_y = NULL;
    sf_mex_assign(&c4_h_y, sf_mex_create("y", c4_b_cv6, 10, 0U, 1U, 0U, 2, 1, 35),
                  false);
    sf_mex_call(&c4_b_st, &c4_vb_emlrtMCI, "error", 0U, 2U, 14, c4_g_y, 14,
                sf_mex_call(&c4_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_b_st, NULL, "message", 1U, 1U, 14, c4_h_y)));
  }

  c4_d_obj->TotalElementsWritten = c4_val;
}

static boolean_T c4_i_strcmp(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_emxArray_char_T *c4_b)
{
  static char_T c4_b_cv[5] = { 'u', 'i', 'n', 't', '8' };

  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_e_st;
  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_f_y = NULL;
  const mxArray *c4_g_y = NULL;
  const mxArray *c4_i_y = NULL;
  const mxArray *c4_j_y = NULL;
  const mxArray *c4_k_y = NULL;
  const mxArray *c4_m_y = NULL;
  const mxArray *c4_n_y = NULL;
  const mxArray *c4_y = NULL;
  int32_T c4_b_kstr;
  int32_T c4_exitg1;
  int32_T c4_kstr;
  int32_T c4_remainingDimsB;
  char_T c4_b_s;
  char_T c4_b_x;
  char_T c4_c_s;
  char_T c4_c_x;
  char_T c4_d_s;
  char_T c4_d_x;
  char_T c4_e_s;
  char_T c4_f_s;
  char_T c4_g_s;
  char_T c4_h_s;
  char_T c4_h_y;
  char_T c4_l_y;
  char_T c4_s;
  char_T c4_x;
  int8_T c4_b_u;
  int8_T c4_c_u;
  int8_T c4_d_u;
  int8_T c4_u;
  boolean_T c4_b1;
  boolean_T c4_b2;
  boolean_T c4_b3;
  boolean_T c4_b_b;
  boolean_T c4_b_p;
  boolean_T c4_bool;
  boolean_T c4_c_p;
  boolean_T c4_d_p;
  boolean_T c4_p;
  (void)chartInstance;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_e_st.prev = &c4_d_st;
  c4_e_st.tls = c4_d_st.tls;
  c4_st.site = &c4_jd_emlrtRSI;
  c4_b_st.site = &c4_kd_emlrtRSI;
  c4_bool = false;
  c4_remainingDimsB = c4_b->size[1];
  if (c4_remainingDimsB != 5) {
  } else {
    c4_kstr = 1;
    do {
      c4_exitg1 = 0;
      if (c4_kstr - 1 < 5) {
        c4_b_kstr = c4_kstr - 1;
        c4_c_st.site = &c4_ld_emlrtRSI;
        c4_s = c4_b_cv[c4_b_kstr];
        c4_b_s = c4_s;
        c4_b_b = ((real_T)(uint8_T)c4_b_s <= 127.0);
        c4_p = c4_b_b;
        if (!c4_p) {
          c4_y = NULL;
          sf_mex_assign(&c4_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_b_y = NULL;
          sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_u = MAX_int8_T;
          c4_c_y = NULL;
          sf_mex_assign(&c4_c_y, sf_mex_create("y", &c4_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c4_c_st, &c4_fb_emlrtMCI, "error", 0U, 2U, 14, c4_y, 14,
                      sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c4_c_st, NULL, "message", 1U, 2U, 14, c4_b_y, 14,
                        c4_c_y)));
        }

        c4_c_st.site = &c4_md_emlrtRSI;
        c4_c_s = c4_b->data[c4_b_kstr];
        c4_d_s = c4_c_s;
        c4_b1 = ((real_T)(uint8_T)c4_d_s <= 127.0);
        c4_b_p = c4_b1;
        if (!c4_b_p) {
          c4_d_y = NULL;
          sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_e_y = NULL;
          sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_b_u = MAX_int8_T;
          c4_f_y = NULL;
          sf_mex_assign(&c4_f_y, sf_mex_create("y", &c4_b_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c4_c_st, &c4_fb_emlrtMCI, "error", 0U, 2U, 14, c4_d_y, 14,
                      sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c4_c_st, NULL, "message", 1U, 2U, 14, c4_e_y, 14,
                        c4_f_y)));
        }

        c4_c_st.site = &c4_nd_emlrtRSI;
        c4_x = c4_b_cv[c4_b_kstr];
        c4_d_st.site = &c4_od_emlrtRSI;
        c4_b_x = c4_x;
        c4_e_st.site = &c4_pd_emlrtRSI;
        c4_e_s = c4_b_x;
        c4_f_s = c4_e_s;
        c4_b2 = ((real_T)(uint8_T)c4_f_s <= 127.0);
        c4_c_p = c4_b2;
        if (!c4_c_p) {
          c4_g_y = NULL;
          sf_mex_assign(&c4_g_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_i_y = NULL;
          sf_mex_assign(&c4_i_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_c_u = MAX_int8_T;
          c4_j_y = NULL;
          sf_mex_assign(&c4_j_y, sf_mex_create("y", &c4_c_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c4_e_st, &c4_fb_emlrtMCI, "error", 0U, 2U, 14, c4_g_y, 14,
                      sf_mex_call(&c4_e_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c4_e_st, NULL, "message", 1U, 2U, 14, c4_i_y, 14,
                        c4_j_y)));
        }

        c4_h_y = c4_cv1[(uint8_T)c4_b_x & 127];
        c4_c_st.site = &c4_nd_emlrtRSI;
        c4_c_x = c4_b->data[c4_b_kstr];
        c4_d_st.site = &c4_od_emlrtRSI;
        c4_d_x = c4_c_x;
        c4_e_st.site = &c4_pd_emlrtRSI;
        c4_g_s = c4_d_x;
        c4_h_s = c4_g_s;
        c4_b3 = ((real_T)(uint8_T)c4_h_s <= 127.0);
        c4_d_p = c4_b3;
        if (!c4_d_p) {
          c4_k_y = NULL;
          sf_mex_assign(&c4_k_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_m_y = NULL;
          sf_mex_assign(&c4_m_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
            31), false);
          c4_d_u = MAX_int8_T;
          c4_n_y = NULL;
          sf_mex_assign(&c4_n_y, sf_mex_create("y", &c4_d_u, 2, 0U, 0U, 0U, 0),
                        false);
          sf_mex_call(&c4_e_st, &c4_fb_emlrtMCI, "error", 0U, 2U, 14, c4_k_y, 14,
                      sf_mex_call(&c4_e_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c4_e_st, NULL, "message", 1U, 2U, 14, c4_m_y, 14,
                        c4_n_y)));
        }

        c4_l_y = c4_cv1[(uint8_T)c4_d_x & 127];
        if (c4_h_y != c4_l_y) {
          c4_exitg1 = 1;
        } else {
          c4_kstr++;
        }
      } else {
        c4_bool = true;
        c4_exitg1 = 1;
      }
    } while (c4_exitg1 == 0);
  }

  return c4_bool;
}

static void c4_b_indexShapeCheck(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, int32_T c4_matrixSize[2])
{
  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_y = NULL;
  boolean_T c4_b;
  boolean_T c4_b_c;
  boolean_T c4_c;
  boolean_T c4_c_c;
  boolean_T c4_d_c;
  boolean_T c4_nonSingletonDimFound;
  (void)chartInstance;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_nonSingletonDimFound = false;
  if (c4_matrixSize[0] != 1) {
    c4_nonSingletonDimFound = true;
  }

  if (c4_matrixSize[1] != 1) {
    if (c4_nonSingletonDimFound) {
      c4_b = false;
    } else {
      c4_nonSingletonDimFound = true;
      c4_b = c4_nonSingletonDimFound;
    }
  } else {
    c4_b = c4_nonSingletonDimFound;
  }

  if (c4_b) {
    if (c4_matrixSize[0] != 1) {
      c4_b_c = true;
    } else {
      c4_b_c = false;
    }

    if (c4_b_c || (c4_matrixSize[1] == 1)) {
      c4_b_c = true;
    } else {
      c4_b_c = false;
    }

    c4_d_c = c4_b_c;
    if (c4_d_c) {
      c4_c = true;
    } else {
      c4_c = false;
    }
  } else {
    c4_c = false;
  }

  c4_st.site = &c4_ih_emlrtRSI;
  c4_c_c = c4_c;
  if (c4_c_c) {
    c4_y = NULL;
    sf_mex_assign(&c4_y, sf_mex_create("y", c4_cv13, 10, 0U, 1U, 0U, 2, 1, 33),
                  false);
    c4_b_y = NULL;
    sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_cv13, 10, 0U, 1U, 0U, 2, 1, 33),
                  false);
    sf_mex_call(&c4_st, &c4_lb_emlrtMCI, "error", 0U, 2U, 14, c4_y, 14,
                sf_mex_call(&c4_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_st, NULL, "message", 1U, 1U, 14, c4_b_y)));
  }
}

static boolean_T c4_all_in_integer_range(SFc4_wwtp3InstanceStruct *chartInstance,
  real_T c4_x)
{
  real_T c4_a;
  real_T c4_b;
  real_T c4_b_a;
  real_T c4_b_x;
  real_T c4_c_x;
  real_T c4_d_x;
  real_T c4_y;
  boolean_T c4_b_b;
  boolean_T c4_b_p;
  boolean_T c4_p;
  (void)chartInstance;
  c4_p = true;
  c4_a = c4_x;
  c4_b_a = c4_a;
  c4_b_x = c4_b_a;
  c4_b = c4_b_x;
  c4_b_p = (c4_b >= 0.0);
  if (c4_b_p) {
    c4_c_x = c4_x;
    c4_d_x = c4_c_x;
    c4_y = c4_d_x;
    if (c4_x == c4_y) {
      c4_b_b = true;
    } else {
      c4_b_b = false;
    }
  } else {
    c4_b_b = false;
  }

  if (!c4_b_b) {
    c4_p = false;
  }

  return c4_p;
}

static void c4_Modbus_flushIO(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_icomm_interface_modbus_tcpip_Modbus *c4_obj)
{
  CoderChannel c4_b_chImpl;
  CoderChannel c4_chImpl;
  CoderInputStream c4_b_streamImpl;
  CoderInputStream c4_streamImpl;
  CoderOutputStream c4_c_streamImpl;
  CoderOutputStream c4_d_streamImpl;
  c4_matlabshared_asyncio_internal_InputStream *c4_c_obj;
  c4_matlabshared_asyncio_internal_InputStream *c4_d_obj;
  c4_matlabshared_asyncio_internal_OutputStream *c4_g_obj;
  c4_matlabshared_network_internal_TCPClient *c4_b_obj;
  c4_matlabshared_network_internal_TCPClient *c4_f_obj;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_e_obj;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_e_st;
  emlrtStack c4_f_st;
  emlrtStack c4_st;
  int32_T c4_b_success;
  int32_T c4_c_success;
  int32_T c4_d_success;
  int32_T c4_success;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_st.site = &c4_kj_emlrtRSI;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_e_st.prev = &c4_d_st;
  c4_e_st.tls = c4_d_st.tls;
  c4_f_st.prev = &c4_e_st;
  c4_f_st.tls = c4_e_st.tls;
  c4_b_obj = c4_obj->TcpIpObj;
  c4_b_st.site = &c4_n_emlrtRSI;
  c4_TCPClient_validateConnected(chartInstance, &c4_b_st, c4_b_obj);
  c4_b_st.site = &c4_n_emlrtRSI;
  c4_c_obj = &c4_b_obj->AsyncIOChannel->InputStream;
  c4_c_st.site = &c4_mj_emlrtRSI;
  c4_InputStream_clearPartialPacket(chartInstance, &c4_c_st, c4_c_obj);
  c4_c_st.site = &c4_nj_emlrtRSI;
  c4_d_obj = c4_c_obj;
  c4_d_st.site = &c4_yf_emlrtRSI;
  c4_streamImpl = c4_d_obj->StreamImpl;
  c4_success = coderStreamFlush(c4_streamImpl);
  c4_e_st.site = &c4_ag_emlrtRSI;
  c4_b_streamImpl = c4_streamImpl;
  c4_b_success = c4_success;
  if ((real_T)c4_b_success == 0.0) {
    c4_chImpl = coderStreamGetChannel(c4_b_streamImpl);
    c4_f_st.site = &c4_te_emlrtRSI;
    c4_b_API_channelErrorIfFailed(chartInstance, &c4_f_st, c4_chImpl);
  }

  c4_b_st.site = &c4_n_emlrtRSI;
  c4_e_obj = c4_b_obj->TransportChannel;
  c4_c_st.site = &c4_qb_emlrtRSI;
  c4_BufferChannel_flush(chartInstance, &c4_c_st, &c4_e_obj->UnreadDataBuffer);
  c4_st.site = &c4_lj_emlrtRSI;
  c4_f_obj = c4_obj->TcpIpObj;
  c4_b_st.site = &c4_n_emlrtRSI;
  c4_TCPClient_validateConnected(chartInstance, &c4_b_st, c4_f_obj);
  c4_b_st.site = &c4_n_emlrtRSI;
  c4_g_obj = &c4_f_obj->AsyncIOChannel->OutputStream;
  c4_c_st.site = &c4_yf_emlrtRSI;
  c4_c_streamImpl = c4_g_obj->StreamImpl;
  c4_c_success = coderStreamFlush(c4_c_streamImpl);
  c4_d_st.site = &c4_ag_emlrtRSI;
  c4_d_streamImpl = c4_c_streamImpl;
  c4_d_success = c4_c_success;
  if ((real_T)c4_d_success == 0.0) {
    c4_b_chImpl = coderStreamGetChannel(c4_d_streamImpl);
    c4_e_st.site = &c4_te_emlrtRSI;
    c4_b_API_channelErrorIfFailed(chartInstance, &c4_e_st, c4_b_chImpl);
  }
}

static void c4_BufferChannel_flush(SFc4_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_matlabshared_asyncio_buffer_internal_BufferChannel
  *c4_obj)
{
  CoderChannel c4_b_chImpl;
  CoderChannel c4_chImpl;
  CoderInputStream c4_b_streamImpl;
  CoderInputStream c4_streamImpl;
  CoderOutputStream c4_c_streamImpl;
  CoderOutputStream c4_d_streamImpl;
  c4_matlabshared_asyncio_buffer_internal_BufferChannel *c4_d_obj;
  c4_matlabshared_asyncio_buffer_internal_BufferChannel *c4_e_obj;
  c4_matlabshared_asyncio_internal_InputStream *c4_b_obj;
  c4_matlabshared_asyncio_internal_InputStream *c4_c_obj;
  c4_matlabshared_asyncio_internal_OutputStream *c4_f_obj;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_e_st;
  emlrtStack c4_st;
  int32_T c4_b_success;
  int32_T c4_c_success;
  int32_T c4_d_success;
  int32_T c4_success;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_st.site = &c4_oj_emlrtRSI;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_e_st.prev = &c4_d_st;
  c4_e_st.tls = c4_d_st.tls;
  c4_b_obj = &c4_obj->InputStream;
  c4_b_st.site = &c4_mj_emlrtRSI;
  c4_InputStream_clearPartialPacket(chartInstance, &c4_b_st, c4_b_obj);
  c4_b_st.site = &c4_nj_emlrtRSI;
  c4_c_obj = c4_b_obj;
  c4_c_st.site = &c4_yf_emlrtRSI;
  c4_streamImpl = c4_c_obj->StreamImpl;
  c4_success = coderStreamFlush(c4_streamImpl);
  c4_d_st.site = &c4_ag_emlrtRSI;
  c4_b_streamImpl = c4_streamImpl;
  c4_b_success = c4_success;
  if ((real_T)c4_b_success == 0.0) {
    c4_chImpl = coderStreamGetChannel(c4_b_streamImpl);
    c4_e_st.site = &c4_te_emlrtRSI;
    c4_b_API_channelErrorIfFailed(chartInstance, &c4_e_st, c4_chImpl);
  }

  c4_st.site = &c4_pj_emlrtRSI;
  c4_d_obj = c4_obj;
  c4_b_st.site = &c4_cc_emlrtRSI;
  c4_e_obj = c4_d_obj;
  c4_e_obj->PartialPacket->size[0] = 1;
  c4_e_obj->PartialPacket->size[1] = 0;
  c4_e_obj->PartialPacket->size[0] = 0;
  c4_e_obj->PartialPacket->size[1] = 0;
  c4_d_obj->PartialPacketStart = 0.0;
  c4_d_obj->PartialPacketCount = 0.0;
  c4_st.site = &c4_qj_emlrtRSI;
  c4_f_obj = &c4_obj->OutputStream;
  c4_b_st.site = &c4_yf_emlrtRSI;
  c4_c_streamImpl = c4_f_obj->StreamImpl;
  c4_c_success = coderStreamFlush(c4_c_streamImpl);
  c4_c_st.site = &c4_ag_emlrtRSI;
  c4_d_streamImpl = c4_c_streamImpl;
  c4_d_success = c4_c_success;
  if ((real_T)c4_d_success == 0.0) {
    c4_b_chImpl = coderStreamGetChannel(c4_d_streamImpl);
    c4_d_st.site = &c4_te_emlrtRSI;
    c4_b_API_channelErrorIfFailed(chartInstance, &c4_d_st, c4_b_chImpl);
  }
}

static void c4_Modbus_translateandGenerateServerError(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, real_T c4_errCode, real_T c4_fcnCode)
{
  static char_T c4_b_cv3[38] = { 'm', 'o', 'd', 'b', 'u', 's', ':', 'm', 'o',
    'd', 'b', 'u', 's', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'W', 'r', 'i',
    't', 'e', 'A', 'd', 'd', 'r', 'e', 's', 's', 'R', 'a', 'n', 'g', 'e' };

  static char_T c4_b_cv4[37] = { 'm', 'o', 'd', 'b', 'u', 's', ':', 'm', 'o',
    'd', 'b', 'u', 's', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'R', 'e', 'a',
    'd', 'A', 'd', 'd', 'r', 'e', 's', 's', 'R', 'a', 'n', 'g', 'e' };

  static char_T c4_b_cv7[34] = { 'm', 'o', 'd', 'b', 'u', 's', ':', 'm', 'o',
    'd', 'b', 'u', 's', ':', 'f', 'u', 'n', 'c', 't', 'i', 'o', 'n', 'N', 'o',
    't', 'S', 'u', 'p', 'p', 'o', 'r', 't', 'e', 'd' };

  static char_T c4_b_cv[32] = { 'm', 'o', 'd', 'b', 'u', 's', ':', 'm', 'o', 'd',
    'b', 'u', 's', ':', 'u', 'n', 'k', 'n', 'o', 'w', 'n', 'S', 'e', 'r', 'v',
    'e', 'r', 'E', 'r', 'r', 'o', 'r' };

  static char_T c4_b_cv5[31] = { 'm', 'o', 'd', 'b', 'u', 's', ':', 'm', 'o',
    'd', 'b', 'u', 's', ':', 's', 'e', 'r', 'v', 'e', 'r', 'W', 'r', 'i', 't',
    'e', 'F', 'a', 'i', 'l', 'e', 'd' };

  static char_T c4_b_cv1[30] = { 'm', 'o', 'd', 'b', 'u', 's', ':', 'm', 'o',
    'd', 'b', 'u', 's', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'D', 'a', 't',
    'a', 'V', 'a', 'l', 'u', 'e' };

  static char_T c4_b_cv2[30] = { 'm', 'o', 'd', 'b', 'u', 's', ':', 'm', 'o',
    'd', 'b', 'u', 's', ':', 's', 'e', 'r', 'v', 'e', 'r', 'D', 'e', 'v', 'i',
    'c', 'e', 'B', 'u', 's', 'y' };

  static char_T c4_b_cv6[30] = { 'm', 'o', 'd', 'b', 'u', 's', ':', 'm', 'o',
    'd', 'b', 'u', 's', ':', 's', 'e', 'r', 'v', 'e', 'r', 'R', 'e', 'a', 'd',
    'F', 'a', 'i', 'l', 'e', 'd' };

  emlrtStack c4_b_st;
  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_f_y = NULL;
  const mxArray *c4_g_y = NULL;
  const mxArray *c4_h_y = NULL;
  const mxArray *c4_i_y = NULL;
  const mxArray *c4_j_y = NULL;
  const mxArray *c4_k_y = NULL;
  const mxArray *c4_l_y = NULL;
  const mxArray *c4_m_y = NULL;
  const mxArray *c4_n_y = NULL;
  const mxArray *c4_o_y = NULL;
  const mxArray *c4_p_y = NULL;
  const mxArray *c4_q_y = NULL;
  const mxArray *c4_r_y = NULL;
  const mxArray *c4_s_y = NULL;
  const mxArray *c4_t_y = NULL;
  const mxArray *c4_y = NULL;
  real_T c4_a;
  real_T c4_b_a;
  real_T c4_varargin_1;
  uint64_T c4_a1;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  switch ((int32_T)c4_errCode) {
   case 1:
    c4_st.site = &c4_rj_emlrtRSI;
    c4_varargin_1 = c4_fcnCode;
    c4_b_st.site = &c4_uj_emlrtRSI;
    c4_a = c4_varargin_1;
    if (!c4_all_in_integer_range(chartInstance, c4_a)) {
      c4_p_y = NULL;
      sf_mex_assign(&c4_p_y, sf_mex_create("y", c4_cv16, 10, 0U, 1U, 0U, 2, 1,
        29), false);
      c4_q_y = NULL;
      sf_mex_assign(&c4_q_y, sf_mex_create("y", c4_cv16, 10, 0U, 1U, 0U, 2, 1,
        29), false);
      sf_mex_call(&c4_b_st, &c4_ic_emlrtMCI, "error", 0U, 2U, 14, c4_p_y, 14,
                  sf_mex_call(&c4_b_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c4_b_st, NULL, "message", 1U, 1U, 14, c4_q_y)));
    }

    c4_b_a = c4_a;
    c4_a1 = (uint64_T)c4_b_a;
    c4_fcnCode = (real_T)(c4_a1 & 127ULL);
    c4_r_y = NULL;
    sf_mex_assign(&c4_r_y, sf_mex_create("y", c4_b_cv7, 10, 0U, 1U, 0U, 2, 1, 34),
                  false);
    c4_s_y = NULL;
    sf_mex_assign(&c4_s_y, sf_mex_create("y", c4_b_cv7, 10, 0U, 1U, 0U, 2, 1, 34),
                  false);
    c4_t_y = NULL;
    sf_mex_assign(&c4_t_y, sf_mex_create("y", &c4_fcnCode, 0, 0U, 0U, 0U, 0),
                  false);
    sf_mex_call(c4_sp, &c4_gc_emlrtMCI, "error", 0U, 2U, 14, c4_r_y, 14,
                sf_mex_call(c4_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c4_sp, NULL, "message", 1U, 2U, 14, c4_s_y, 14, c4_t_y)));
    break;

   case 2:
    c4_st.site = &c4_sj_emlrtRSI;
    if (c4_Modbus_isReadFunction(chartInstance, &c4_st, c4_fcnCode)) {
      c4_f_y = NULL;
      sf_mex_assign(&c4_f_y, sf_mex_create("y", c4_b_cv4, 10, 0U, 1U, 0U, 2, 1,
        37), false);
      c4_m_y = NULL;
      sf_mex_assign(&c4_m_y, sf_mex_create("y", c4_b_cv4, 10, 0U, 1U, 0U, 2, 1,
        37), false);
      sf_mex_call(c4_sp, &c4_ec_emlrtMCI, "error", 0U, 2U, 14, c4_f_y, 14,
                  sf_mex_call(c4_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (c4_sp, NULL, "message", 1U, 1U, 14, c4_m_y)));
    } else {
      c4_e_y = NULL;
      sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_b_cv3, 10, 0U, 1U, 0U, 2, 1,
        38), false);
      c4_l_y = NULL;
      sf_mex_assign(&c4_l_y, sf_mex_create("y", c4_b_cv3, 10, 0U, 1U, 0U, 2, 1,
        38), false);
      sf_mex_call(c4_sp, &c4_fc_emlrtMCI, "error", 0U, 2U, 14, c4_e_y, 14,
                  sf_mex_call(c4_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (c4_sp, NULL, "message", 1U, 1U, 14, c4_l_y)));
    }
    break;

   case 3:
    c4_b_y = NULL;
    sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c4_g_y = NULL;
    sf_mex_assign(&c4_g_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    sf_mex_call(c4_sp, &c4_dc_emlrtMCI, "error", 0U, 2U, 14, c4_b_y, 14,
                sf_mex_call(c4_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c4_sp, NULL, "message", 1U, 1U, 14, c4_g_y)));
    break;

   case 4:
    c4_st.site = &c4_tj_emlrtRSI;
    if (c4_Modbus_isReadFunction(chartInstance, &c4_st, c4_fcnCode)) {
      c4_i_y = NULL;
      sf_mex_assign(&c4_i_y, sf_mex_create("y", c4_b_cv6, 10, 0U, 1U, 0U, 2, 1,
        30), false);
      c4_o_y = NULL;
      sf_mex_assign(&c4_o_y, sf_mex_create("y", c4_b_cv6, 10, 0U, 1U, 0U, 2, 1,
        30), false);
      sf_mex_call(c4_sp, &c4_bc_emlrtMCI, "error", 0U, 2U, 14, c4_i_y, 14,
                  sf_mex_call(c4_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (c4_sp, NULL, "message", 1U, 1U, 14, c4_o_y)));
    } else {
      c4_h_y = NULL;
      sf_mex_assign(&c4_h_y, sf_mex_create("y", c4_b_cv5, 10, 0U, 1U, 0U, 2, 1,
        31), false);
      c4_n_y = NULL;
      sf_mex_assign(&c4_n_y, sf_mex_create("y", c4_b_cv5, 10, 0U, 1U, 0U, 2, 1,
        31), false);
      sf_mex_call(c4_sp, &c4_cc_emlrtMCI, "error", 0U, 2U, 14, c4_h_y, 14,
                  sf_mex_call(c4_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (c4_sp, NULL, "message", 1U, 1U, 14, c4_n_y)));
    }
    break;

   case 6:
    c4_c_y = NULL;
    sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_b_cv2, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c4_j_y = NULL;
    sf_mex_assign(&c4_j_y, sf_mex_create("y", c4_b_cv2, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    sf_mex_call(c4_sp, &c4_ac_emlrtMCI, "error", 0U, 2U, 14, c4_c_y, 14,
                sf_mex_call(c4_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c4_sp, NULL, "message", 1U, 1U, 14, c4_j_y)));
    break;

   default:
    c4_y = NULL;
    sf_mex_assign(&c4_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 32),
                  false);
    c4_d_y = NULL;
    sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 32),
                  false);
    c4_k_y = NULL;
    sf_mex_assign(&c4_k_y, sf_mex_create("y", &c4_fcnCode, 0, 0U, 0U, 0U, 0),
                  false);
    sf_mex_call(c4_sp, &c4_hc_emlrtMCI, "error", 0U, 2U, 14, c4_y, 14,
                sf_mex_call(c4_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c4_sp, NULL, "message", 1U, 2U, 14, c4_d_y, 14, c4_k_y)));
    break;
  }
}

static boolean_T c4_Modbus_isReadFunction(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, real_T c4_fcnCode)
{
  static int32_T c4_iv[2] = { 1, 4 };

  emlrtStack c4_b_st;
  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_y = NULL;
  real_T c4_a;
  real_T c4_b_a;
  real_T c4_varargin_1;
  uint64_T c4_a1;
  int32_T c4_i;
  boolean_T c4_x[4];
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_st.site = &c4_wj_emlrtRSI;
  c4_varargin_1 = c4_fcnCode;
  c4_b_st.site = &c4_uj_emlrtRSI;
  c4_a = c4_varargin_1;
  if (!c4_all_in_integer_range(chartInstance, c4_a)) {
    c4_y = NULL;
    sf_mex_assign(&c4_y, sf_mex_create("y", c4_cv16, 10, 0U, 1U, 0U, 2, 1, 29),
                  false);
    c4_b_y = NULL;
    sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_cv16, 10, 0U, 1U, 0U, 2, 1, 29),
                  false);
    sf_mex_call(&c4_b_st, &c4_ic_emlrtMCI, "error", 0U, 2U, 14, c4_y, 14,
                sf_mex_call(&c4_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_b_st, NULL, "message", 1U, 1U, 14, c4_b_y)));
  }

  c4_b_a = c4_a;
  c4_a1 = (uint64_T)c4_b_a;
  c4_fcnCode = (real_T)(c4_a1 & 127ULL);
  for (c4_i = 0; c4_i < 4; c4_i++) {
    c4_x[c4_i] = (c4_fcnCode == 1.0 + (real_T)c4_i);
  }

  return c4_vectorAny(chartInstance, c4_x, c4_iv);
}

static void c4_handle_matlabCodegenDestructor(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_icomm_interface_modbus_tcpip_Modbus *c4_obj)
{
  CoderChannel c4_b_chImpl;
  CoderChannel c4_c_chImpl;
  CoderChannel c4_chImpl;
  c4_icomm_interface_modbus_tcpip_Modbus *c4_b_obj;
  c4_icomm_interface_modbus_tcpip_Modbus *c4_c_obj;
  c4_matlabshared_asyncio_internal_Channel *c4_f_obj;
  c4_matlabshared_asyncio_internal_Channel *c4_i_obj;
  c4_matlabshared_asyncio_internal_Channel *c4_j_obj;
  c4_matlabshared_network_internal_TCPClient *c4_d_obj;
  c4_matlabshared_network_internal_TCPClient *c4_g_obj;
  c4_matlabshared_network_internal_TCPClient *c4_h_obj;
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_e_obj;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_e_st;
  emlrtStack c4_f_st;
  emlrtStack c4_g_st;
  emlrtStack c4_h_st;
  emlrtStack c4_st;
  int32_T c4_b_success;
  int32_T c4_c_success;
  int32_T c4_success;
  boolean_T c4_b_value;
  boolean_T c4_out;
  boolean_T c4_result;
  boolean_T c4_value;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_e_st.prev = &c4_d_st;
  c4_e_st.tls = c4_d_st.tls;
  c4_f_st.prev = &c4_e_st;
  c4_f_st.tls = c4_e_st.tls;
  c4_g_st.prev = &c4_f_st;
  c4_g_st.tls = c4_f_st.tls;
  c4_h_st.prev = &c4_g_st;
  c4_h_st.tls = c4_g_st.tls;
  if (!c4_obj->matlabCodegenIsDeleted) {
    c4_obj->matlabCodegenIsDeleted = true;
    c4_st.site = &c4_gk_emlrtRSI;
    c4_b_obj = c4_obj;
    c4_b_st.site = &c4_hk_emlrtRSI;
    c4_c_obj = c4_b_obj;
    c4_c_st.site = &c4_ik_emlrtRSI;
    c4_d_obj = c4_c_obj->TcpIpObj;
    c4_d_st.site = &c4_n_emlrtRSI;
    c4_e_obj = c4_d_obj->TransportChannel;
    c4_e_st.site = &c4_qb_emlrtRSI;
    c4_f_obj = c4_e_obj->AsyncIOChannel;
    c4_f_st.site = &c4_fc_emlrtRSI;
    c4_chImpl = c4_f_obj->ChannelImpl;
    c4_success = coderChannelIsOpen(c4_chImpl, &c4_out);
    c4_g_st.site = &c4_gc_emlrtRSI;
    c4_API_channelErrorIfFailed(chartInstance, &c4_g_st, c4_chImpl, c4_success);
    if (c4_out) {
      c4_value = true;
    } else {
      c4_value = false;
    }

    c4_b_value = c4_value;
    if (c4_b_value && (!c4_c_obj->TransportInjected)) {
      c4_c_st.site = &c4_jk_emlrtRSI;
      c4_g_obj = c4_c_obj->TcpIpObj;
      c4_d_st.site = &c4_n_emlrtRSI;
      c4_h_obj = c4_g_obj;
      c4_e_st.site = &c4_n_emlrtRSI;
      c4_i_obj = c4_h_obj->AsyncIOChannel;
      c4_f_st.site = &c4_dk_emlrtRSI;
      c4_j_obj = c4_i_obj;
      c4_g_st.site = &c4_fc_emlrtRSI;
      c4_b_chImpl = c4_j_obj->ChannelImpl;
      c4_b_success = coderChannelIsOpen(c4_b_chImpl, &c4_result);
      c4_h_st.site = &c4_gc_emlrtRSI;
      c4_API_channelErrorIfFailed(chartInstance, &c4_h_st, c4_b_chImpl,
        c4_b_success);
      if (c4_result) {
        c4_f_st.site = &c4_ek_emlrtRSI;
        c4_c_chImpl = c4_i_obj->ChannelImpl;
        c4_c_success = coderChannelClose(c4_c_chImpl);
        c4_g_st.site = &c4_fk_emlrtRSI;
        c4_API_channelErrorIfFailed(chartInstance, &c4_g_st, c4_c_chImpl,
          c4_c_success);
      }
    }
  }
}

static void c4_b_handle_matlabCodegenDestructor(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_matlabshared_network_internal_TCPClient *c4_obj)
{
  CoderChannel c4_b_chImpl;
  CoderChannel c4_chImpl;
  c4_matlabshared_asyncio_internal_Channel *c4_d_obj;
  c4_matlabshared_asyncio_internal_Channel *c4_e_obj;
  c4_matlabshared_network_internal_TCPClient *c4_b_obj;
  c4_matlabshared_network_internal_TCPClient *c4_c_obj;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_e_st;
  emlrtStack c4_f_st;
  emlrtStack c4_st;
  int32_T c4_b_success;
  int32_T c4_success;
  boolean_T c4_result;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_e_st.prev = &c4_d_st;
  c4_e_st.tls = c4_d_st.tls;
  c4_f_st.prev = &c4_e_st;
  c4_f_st.tls = c4_e_st.tls;
  if (!c4_obj->matlabCodegenIsDeleted) {
    c4_obj->matlabCodegenIsDeleted = true;
    c4_st.site = &c4_gk_emlrtRSI;
    c4_b_obj = c4_obj;
    c4_b_st.site = &c4_n_emlrtRSI;
    c4_c_obj = c4_b_obj;
    c4_c_st.site = &c4_n_emlrtRSI;
    c4_d_obj = c4_c_obj->AsyncIOChannel;
    c4_d_st.site = &c4_dk_emlrtRSI;
    c4_e_obj = c4_d_obj;
    c4_e_st.site = &c4_fc_emlrtRSI;
    c4_chImpl = c4_e_obj->ChannelImpl;
    c4_success = coderChannelIsOpen(c4_chImpl, &c4_result);
    c4_f_st.site = &c4_gc_emlrtRSI;
    c4_API_channelErrorIfFailed(chartInstance, &c4_f_st, c4_chImpl, c4_success);
    if (c4_result) {
      c4_d_st.site = &c4_ek_emlrtRSI;
      c4_b_chImpl = c4_d_obj->ChannelImpl;
      c4_b_success = coderChannelClose(c4_b_chImpl);
      c4_e_st.site = &c4_fk_emlrtRSI;
      c4_API_channelErrorIfFailed(chartInstance, &c4_e_st, c4_b_chImpl,
        c4_b_success);
    }
  }
}

static void c4_c_handle_matlabCodegenDestructor(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_matlabshared_asyncio_internal_Channel *c4_obj)
{
  CoderChannel c4_b_chImpl;
  CoderChannel c4_c_chImpl;
  CoderChannel c4_chImpl;
  CoderChannel c4_d_chImpl;
  CoderChannel c4_e_chImpl;
  c4_matlabshared_asyncio_internal_Channel *c4_b_obj;
  c4_matlabshared_asyncio_internal_Channel *c4_c_obj;
  c4_matlabshared_asyncio_internal_Channel *c4_d_obj;
  c4_matlabshared_asyncio_internal_Channel *c4_e_obj;
  c4_matlabshared_asyncio_internal_Channel *c4_f_obj;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_e_st;
  emlrtStack c4_f_st;
  emlrtStack c4_st;
  int32_T c4_b_success;
  int32_T c4_c_success;
  int32_T c4_d_success;
  int32_T c4_success;
  boolean_T c4_b_result;
  boolean_T c4_result;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_e_st.prev = &c4_d_st;
  c4_e_st.tls = c4_d_st.tls;
  c4_f_st.prev = &c4_e_st;
  c4_f_st.tls = c4_e_st.tls;
  if (!c4_obj->matlabCodegenIsDeleted) {
    c4_obj->matlabCodegenIsDeleted = true;
    c4_st.site = &c4_gk_emlrtRSI;
    c4_b_obj = c4_obj;
    c4_b_st.site = &c4_kk_emlrtRSI;
    c4_c_obj = c4_b_obj;
    if (!(c4_c_obj->ChannelImpl == 0)) {
      c4_c_st.site = &c4_lk_emlrtRSI;
      c4_d_obj = c4_c_obj;
      c4_d_st.site = &c4_fc_emlrtRSI;
      c4_chImpl = c4_d_obj->ChannelImpl;
      c4_success = coderChannelIsOpen(c4_chImpl, &c4_result);
      c4_e_st.site = &c4_gc_emlrtRSI;
      c4_API_channelErrorIfFailed(chartInstance, &c4_e_st, c4_chImpl, c4_success);
      if (c4_result) {
        c4_c_st.site = &c4_mk_emlrtRSI;
        c4_warning(chartInstance, &c4_c_st);
        c4_c_st.site = &c4_nk_emlrtRSI;
        c4_e_obj = c4_c_obj;
        c4_d_st.site = &c4_dk_emlrtRSI;
        c4_f_obj = c4_e_obj;
        c4_e_st.site = &c4_fc_emlrtRSI;
        c4_d_chImpl = c4_f_obj->ChannelImpl;
        c4_c_success = coderChannelIsOpen(c4_d_chImpl, &c4_b_result);
        c4_f_st.site = &c4_gc_emlrtRSI;
        c4_API_channelErrorIfFailed(chartInstance, &c4_f_st, c4_d_chImpl,
          c4_c_success);
        if (c4_b_result) {
          c4_d_st.site = &c4_ek_emlrtRSI;
          c4_e_chImpl = c4_e_obj->ChannelImpl;
          c4_d_success = coderChannelClose(c4_e_chImpl);
          c4_e_st.site = &c4_fk_emlrtRSI;
          c4_API_channelErrorIfFailed(chartInstance, &c4_e_st, c4_e_chImpl,
            c4_d_success);
        }
      }

      c4_c_st.site = &c4_ok_emlrtRSI;
      c4_b_chImpl = c4_c_obj->ChannelImpl;
      c4_b_success = coderChannelTerm(c4_b_chImpl);
      c4_d_st.site = &c4_rk_emlrtRSI;
      c4_API_channelErrorIfFailed(chartInstance, &c4_d_st, c4_b_chImpl,
        c4_b_success);
      c4_c_st.site = &c4_pk_emlrtRSI;
      c4_c_chImpl = c4_c_obj->ChannelImpl;
      coderChannelDestroy(c4_c_chImpl);
      c4_c_obj->ChannelImpl = 0;
    }
  }
}

static void c4_warning(SFc4_wwtp3InstanceStruct *chartInstance, const emlrtStack
  *c4_sp)
{
  static char_T c4_msgID[37] = { 'a', 's', 'y', 'n', 'c', 'i', 'o', ':', 'C',
    'h', 'a', 'n', 'n', 'e', 'l', ':', 's', 't', 'i', 'l', 'l', 'O', 'p', 'e',
    'n', 'D', 'u', 'r', 'i', 'n', 'g', 'D', 'e', 'l', 'e', 't', 'e' };

  static char_T c4_b_cv[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T c4_b_cv1[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_y = NULL;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c4_c_y = NULL;
  sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_msgID, 10, 0U, 1U, 0U, 2, 1, 37),
                false);
  c4_st.site = &c4_qk_emlrtRSI;
  c4_d_feval(chartInstance, &c4_st, c4_y, c4_c_feval(chartInstance, &c4_st,
              c4_b_y, c4_c_y));
}

static void c4_d_handle_matlabCodegenDestructor(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_obj)
{
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_b_obj;
  emlrtStack c4_b_st;
  emlrtStack c4_st;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  if (!c4_obj->matlabCodegenIsDeleted) {
    c4_obj->matlabCodegenIsDeleted = true;
    c4_st.site = &c4_gk_emlrtRSI;
    c4_b_obj = c4_obj;
    c4_b_st.site = &c4_qb_emlrtRSI;
    c4_Channel_close(chartInstance, &c4_b_st, &c4_b_obj->UnreadDataBuffer);
  }
}

static void c4_e_handle_matlabCodegenDestructor(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_matlabshared_asyncio_buffer_internal_BufferChannel *c4_obj)
{
  CoderChannel c4_b_chImpl;
  CoderChannel c4_c_chImpl;
  CoderChannel c4_chImpl;
  CoderChannel c4_d_chImpl;
  c4_matlabshared_asyncio_buffer_internal_BufferChannel *c4_b_obj;
  c4_matlabshared_asyncio_buffer_internal_BufferChannel *c4_c_obj;
  c4_matlabshared_asyncio_buffer_internal_BufferChannel *c4_d_obj;
  c4_matlabshared_asyncio_buffer_internal_BufferChannel *c4_e_obj;
  c4_matlabshared_asyncio_buffer_internal_BufferChannel *c4_f_obj;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_e_st;
  emlrtStack c4_st;
  int32_T c4_b_success;
  int32_T c4_c_success;
  int32_T c4_success;
  boolean_T c4_b_result;
  boolean_T c4_result;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_e_st.prev = &c4_d_st;
  c4_e_st.tls = c4_d_st.tls;
  if (!c4_obj->matlabCodegenIsDeleted) {
    c4_obj->matlabCodegenIsDeleted = true;
    c4_st.site = &c4_gk_emlrtRSI;
    c4_b_obj = c4_obj;
    c4_b_st.site = &c4_vk_emlrtRSI;
    c4_c_obj = c4_b_obj;
    c4_c_st.site = &c4_fc_emlrtRSI;
    c4_chImpl = c4_c_obj->ChannelImpl;
    c4_success = coderChannelIsOpen(c4_chImpl, &c4_result);
    c4_d_st.site = &c4_gc_emlrtRSI;
    c4_API_channelErrorIfFailed(chartInstance, &c4_d_st, c4_chImpl, c4_success);
    if (c4_result) {
      c4_b_st.site = &c4_wk_emlrtRSI;
      c4_Channel_close(chartInstance, &c4_b_st, c4_b_obj);
    }

    c4_st.site = &c4_gk_emlrtRSI;
    c4_d_obj = c4_obj;
    c4_b_st.site = &c4_kk_emlrtRSI;
    c4_e_obj = c4_d_obj;
    if (!(c4_e_obj->ChannelImpl == 0)) {
      c4_c_st.site = &c4_lk_emlrtRSI;
      c4_f_obj = c4_e_obj;
      c4_d_st.site = &c4_fc_emlrtRSI;
      c4_b_chImpl = c4_f_obj->ChannelImpl;
      c4_b_success = coderChannelIsOpen(c4_b_chImpl, &c4_b_result);
      c4_e_st.site = &c4_gc_emlrtRSI;
      c4_API_channelErrorIfFailed(chartInstance, &c4_e_st, c4_b_chImpl,
        c4_b_success);
      if (c4_b_result) {
        c4_c_st.site = &c4_mk_emlrtRSI;
        c4_warning(chartInstance, &c4_c_st);
        c4_c_st.site = &c4_nk_emlrtRSI;
        c4_Channel_close(chartInstance, &c4_c_st, c4_e_obj);
      }

      c4_c_st.site = &c4_ok_emlrtRSI;
      c4_c_chImpl = c4_e_obj->ChannelImpl;
      c4_c_success = coderChannelTerm(c4_c_chImpl);
      c4_d_st.site = &c4_rk_emlrtRSI;
      c4_API_channelErrorIfFailed(chartInstance, &c4_d_st, c4_c_chImpl,
        c4_c_success);
      c4_c_st.site = &c4_pk_emlrtRSI;
      c4_d_chImpl = c4_e_obj->ChannelImpl;
      coderChannelDestroy(c4_d_chImpl);
      c4_e_obj->ChannelImpl = 0;
    }
  }
}

static void c4_Channel_close(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_matlabshared_asyncio_buffer_internal_BufferChannel
  *c4_obj)
{
  CoderChannel c4_b_chImpl;
  CoderChannel c4_chImpl;
  c4_matlabshared_asyncio_buffer_internal_BufferChannel *c4_b_obj;
  c4_matlabshared_asyncio_buffer_internal_BufferChannel *c4_c_obj;
  c4_matlabshared_asyncio_buffer_internal_BufferChannel *c4_d_obj;
  c4_matlabshared_asyncio_buffer_internal_BufferChannel *c4_e_obj;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_st;
  int32_T c4_b_success;
  int32_T c4_success;
  boolean_T c4_result;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_st.site = &c4_dk_emlrtRSI;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_b_obj = c4_obj;
  c4_b_st.site = &c4_fc_emlrtRSI;
  c4_chImpl = c4_b_obj->ChannelImpl;
  c4_success = coderChannelIsOpen(c4_chImpl, &c4_result);
  c4_c_st.site = &c4_gc_emlrtRSI;
  c4_API_channelErrorIfFailed(chartInstance, &c4_c_st, c4_chImpl, c4_success);
  if (c4_result) {
    c4_st.site = &c4_ek_emlrtRSI;
    c4_b_chImpl = c4_obj->ChannelImpl;
    c4_b_success = coderChannelClose(c4_b_chImpl);
    c4_b_st.site = &c4_fk_emlrtRSI;
    c4_API_channelErrorIfFailed(chartInstance, &c4_b_st, c4_b_chImpl,
      c4_b_success);
    c4_st.site = &c4_sk_emlrtRSI;
    c4_c_obj = c4_obj;
    c4_b_st.site = &c4_tk_emlrtRSI;
    c4_d_obj = c4_c_obj;
    c4_e_obj = c4_d_obj;
    c4_e_obj->TotalElementsWritten = 0.0;
    c4_c_st.site = &c4_uk_emlrtRSI;
    c4_BufferChannel_flush(chartInstance, &c4_c_st, c4_d_obj);
  }
}

static void c4_f_handle_matlabCodegenDestructor(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_matlabshared_asyncio_internal_InputStream *c4_obj)
{
  (void)chartInstance;
  if (!c4_obj->matlabCodegenIsDeleted) {
    c4_obj->matlabCodegenIsDeleted = true;
  }
}

static void c4_g_handle_matlabCodegenDestructor(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_matlabshared_asyncio_internal_OutputStream *c4_obj)
{
  (void)chartInstance;
  if (!c4_obj->matlabCodegenIsDeleted) {
    c4_obj->matlabCodegenIsDeleted = true;
  }
}

const mxArray *sf_c4_wwtp3_get_eml_resolved_functions_info(void)
{
  const mxArray *c4_nameCaptureInfo = NULL;
  c4_nameCaptureInfo = NULL;
  sf_mex_assign(&c4_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c4_nameCaptureInfo;
}

static real_T c4_emlrt_marshallIn(SFc4_wwtp3InstanceStruct *chartInstance, const
  mxArray *c4_a__output_of_length_, const char_T *c4_identifier)
{
  emlrtMsgIdentifier c4_thisId;
  real_T c4_y;
  c4_thisId.fIdentifier = (const char_T *)c4_identifier;
  c4_thisId.fParent = NULL;
  c4_thisId.bParentIsCell = false;
  c4_y = c4_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_a__output_of_length_),
    &c4_thisId);
  sf_mex_destroy(&c4_a__output_of_length_);
  return c4_y;
}

static real_T c4_b_emlrt_marshallIn(SFc4_wwtp3InstanceStruct *chartInstance,
  const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId)
{
  real_T c4_d;
  real_T c4_y;
  (void)chartInstance;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), &c4_d, 1, 0, 0U, 0, 0U, 0);
  c4_y = c4_d;
  sf_mex_destroy(&c4_u);
  return c4_y;
}

static void c4_c_emlrt_marshallIn(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, const mxArray *c4_tmpStr, const char_T *c4_identifier,
  c4_emxArray_char_T *c4_y)
{
  emlrtMsgIdentifier c4_thisId;
  c4_thisId.fIdentifier = (const char_T *)c4_identifier;
  c4_thisId.fParent = NULL;
  c4_thisId.bParentIsCell = false;
  c4_d_emlrt_marshallIn(chartInstance, c4_sp, sf_mex_dup(c4_tmpStr), &c4_thisId,
                        c4_y);
  sf_mex_destroy(&c4_tmpStr);
}

static void c4_d_emlrt_marshallIn(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId,
  c4_emxArray_char_T *c4_y)
{
  static boolean_T c4_bv1[2] = { false, true };

  c4_emxArray_char_T *c4_r;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_loop_ub;
  uint32_T c4_uv[2];
  boolean_T c4_bv[2];
  c4_emxInit_char_T(chartInstance, c4_sp, &c4_r, 2, (emlrtRTEInfo *)NULL);
  for (c4_i = 0; c4_i < 2; c4_i++) {
    c4_uv[c4_i] = 1U + 4294967294U * (uint32_T)c4_i;
  }

  c4_i1 = c4_r->size[0] * c4_r->size[1];
  c4_r->size[0] = sf_mex_get_dimension(c4_u, 0);
  c4_r->size[1] = sf_mex_get_dimension(c4_u, 1);
  c4_emxEnsureCapacity_char_T(chartInstance, c4_sp, c4_r, c4_i1, (emlrtRTEInfo *)
    NULL);
  for (c4_i2 = 0; c4_i2 < 2; c4_i2++) {
    c4_bv[c4_i2] = c4_bv1[c4_i2];
  }

  sf_mex_import_vs(c4_parentId, sf_mex_dup(c4_u), c4_r->data, 0, 10, 0U, 1, 0U,
                   2, c4_bv, c4_uv, c4_r->size);
  c4_i3 = c4_y->size[0] * c4_y->size[1];
  c4_y->size[0] = 1;
  c4_y->size[1] = c4_r->size[1];
  c4_emxEnsureCapacity_char_T(chartInstance, c4_sp, c4_y, c4_i3, (emlrtRTEInfo *)
    NULL);
  c4_loop_ub = c4_r->size[1] - 1;
  for (c4_i4 = 0; c4_i4 <= c4_loop_ub; c4_i4++) {
    c4_y->data[c4_i4] = c4_r->data[c4_i4];
  }

  sf_mex_destroy(&c4_u);
  c4_emxFree_char_T(chartInstance, &c4_r);
}

static void c4_e_emlrt_marshallIn(SFc4_wwtp3InstanceStruct *chartInstance, const
  mxArray *c4_a__output_of_matlabroot_, const char_T *c4_identifier, char_T
  c4_y_data[], int32_T c4_y_size[2])
{
  emlrtMsgIdentifier c4_thisId;
  c4_thisId.fIdentifier = (const char_T *)c4_identifier;
  c4_thisId.fParent = NULL;
  c4_thisId.bParentIsCell = false;
  c4_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_a__output_of_matlabroot_),
                        &c4_thisId, c4_y_data, c4_y_size);
  sf_mex_destroy(&c4_a__output_of_matlabroot_);
}

static void c4_f_emlrt_marshallIn(SFc4_wwtp3InstanceStruct *chartInstance, const
  mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId, char_T c4_y_data[],
  int32_T c4_y_size[2])
{
  static boolean_T c4_bv1[2] = { false, true };

  int32_T c4_tmp_size[2];
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i2;
  int32_T c4_loop_ub;
  uint32_T c4_uv[2];
  char_T c4_tmp_data[512];
  boolean_T c4_bv[2];
  (void)chartInstance;
  for (c4_i = 0; c4_i < 2; c4_i++) {
    c4_uv[c4_i] = 1U + 511U * (uint32_T)c4_i;
  }

  c4_tmp_size[0] = sf_mex_get_dimension(c4_u, 0);
  c4_tmp_size[1] = sf_mex_get_dimension(c4_u, 1);
  for (c4_i1 = 0; c4_i1 < 2; c4_i1++) {
    c4_bv[c4_i1] = c4_bv1[c4_i1];
  }

  sf_mex_import_vs(c4_parentId, sf_mex_dup(c4_u), &c4_tmp_data, 0, 10, 0U, 1, 0U,
                   2, c4_bv, c4_uv, c4_tmp_size);
  c4_y_size[0] = 1;
  c4_y_size[1] = c4_tmp_size[1];
  c4_loop_ub = c4_tmp_size[1] - 1;
  for (c4_i2 = 0; c4_i2 <= c4_loop_ub; c4_i2++) {
    c4_y_data[c4_i2] = c4_tmp_data[c4_i2];
  }

  sf_mex_destroy(&c4_u);
}

static boolean_T c4_g_emlrt_marshallIn(SFc4_wwtp3InstanceStruct *chartInstance,
  const mxArray *c4_a__output_of_coder_internal_ifWhileCondExtrinsic_, const
  char_T *c4_identifier)
{
  emlrtMsgIdentifier c4_thisId;
  boolean_T c4_y;
  c4_thisId.fIdentifier = (const char_T *)c4_identifier;
  c4_thisId.fParent = NULL;
  c4_thisId.bParentIsCell = false;
  c4_y = c4_h_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c4_a__output_of_coder_internal_ifWhileCondExtrinsic_), &c4_thisId);
  sf_mex_destroy(&c4_a__output_of_coder_internal_ifWhileCondExtrinsic_);
  return c4_y;
}

static boolean_T c4_h_emlrt_marshallIn(SFc4_wwtp3InstanceStruct *chartInstance,
  const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId)
{
  boolean_T c4_b;
  boolean_T c4_y;
  (void)chartInstance;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), &c4_b, 1, 11, 0U, 0, 0U, 0);
  c4_y = c4_b;
  sf_mex_destroy(&c4_u);
  return c4_y;
}

static uint8_T c4_i_emlrt_marshallIn(SFc4_wwtp3InstanceStruct *chartInstance,
  const mxArray *c4_b_is_active_c4_wwtp3, const char_T *c4_identifier)
{
  emlrtMsgIdentifier c4_thisId;
  uint8_T c4_y;
  c4_thisId.fIdentifier = (const char_T *)c4_identifier;
  c4_thisId.fParent = NULL;
  c4_thisId.bParentIsCell = false;
  c4_y = c4_j_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_b_is_active_c4_wwtp3),
    &c4_thisId);
  sf_mex_destroy(&c4_b_is_active_c4_wwtp3);
  return c4_y;
}

static uint8_T c4_j_emlrt_marshallIn(SFc4_wwtp3InstanceStruct *chartInstance,
  const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId)
{
  uint8_T c4_b_u;
  uint8_T c4_y;
  (void)chartInstance;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), &c4_b_u, 1, 3, 0U, 0, 0U, 0);
  c4_y = c4_b_u;
  sf_mex_destroy(&c4_u);
  return c4_y;
}

static void c4_slStringInitializeDynamicBuffers(SFc4_wwtp3InstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c4_chart_data_browse_helper(SFc4_wwtp3InstanceStruct *chartInstance,
  int32_T c4_ssIdNumber, const mxArray **c4_mxData, uint8_T *c4_isValueTooBig)
{
  real_T c4_d;
  real_T c4_d1;
  real_T c4_d2;
  real_T c4_d3;
  *c4_mxData = NULL;
  *c4_mxData = NULL;
  *c4_isValueTooBig = 0U;
  switch (c4_ssIdNumber) {
   case 4U:
    c4_d = *chartInstance->c4_oxygen;
    sf_mex_assign(c4_mxData, sf_mex_create("mxData", &c4_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 6U:
    c4_d1 = *chartInstance->c4_nitrates;
    sf_mex_assign(c4_mxData, sf_mex_create("mxData", &c4_d1, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 7U:
    c4_d2 = *chartInstance->c4_ammonium;
    sf_mex_assign(c4_mxData, sf_mex_create("mxData", &c4_d2, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 8U:
    c4_d3 = *chartInstance->c4_temperature;
    sf_mex_assign(c4_mxData, sf_mex_create("mxData", &c4_d3, 0, 0U, 0U, 0U, 0),
                  false);
    break;
  }
}

static const mxArray *c4_feval(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, const mxArray *c4_input0, const mxArray *c4_input1, const
  mxArray *c4_input2)
{
  const mxArray *c4_m = NULL;
  (void)chartInstance;
  c4_m = NULL;
  sf_mex_assign(&c4_m, sf_mex_call(c4_sp, NULL, "feval", 1U, 3U, 14, sf_mex_dup
    (c4_input0), 14, sf_mex_dup(c4_input1), 14, sf_mex_dup(c4_input2)), false);
  sf_mex_destroy(&c4_input0);
  sf_mex_destroy(&c4_input1);
  sf_mex_destroy(&c4_input2);
  return c4_m;
}

static const mxArray *c4_length(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, const mxArray *c4_input0)
{
  const mxArray *c4_m = NULL;
  (void)chartInstance;
  c4_m = NULL;
  sf_mex_assign(&c4_m, sf_mex_call(c4_sp, NULL, "length", 1U, 1U, 14, sf_mex_dup
    (c4_input0)), false);
  sf_mex_destroy(&c4_input0);
  return c4_m;
}

static const mxArray *c4_ver(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, const mxArray *c4_input0)
{
  const mxArray *c4_m = NULL;
  (void)chartInstance;
  c4_m = NULL;
  sf_mex_assign(&c4_m, sf_mex_call(c4_sp, NULL, "ver", 1U, 1U, 14, sf_mex_dup
    (c4_input0)), false);
  sf_mex_destroy(&c4_input0);
  return c4_m;
}

static const mxArray *c4_getfield(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, const mxArray *c4_input0, const mxArray *c4_input1)
{
  const mxArray *c4_m = NULL;
  (void)chartInstance;
  c4_m = NULL;
  sf_mex_assign(&c4_m, sf_mex_call(c4_sp, NULL, "getfield", 1U, 2U, 14,
    sf_mex_dup(c4_input0), 14, sf_mex_dup(c4_input1)), false);
  sf_mex_destroy(&c4_input0);
  sf_mex_destroy(&c4_input1);
  return c4_m;
}

static const mxArray *c4_matlabroot(SFc4_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c4_sp)
{
  const mxArray *c4_m = NULL;
  (void)chartInstance;
  c4_m = NULL;
  sf_mex_assign(&c4_m, sf_mex_call(c4_sp, NULL, "matlabroot", 1U, 0U), false);
  return c4_m;
}

static const mxArray *c4_j_strcmp(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, const mxArray *c4_input0, const mxArray *c4_input1)
{
  const mxArray *c4_m = NULL;
  (void)chartInstance;
  c4_m = NULL;
  sf_mex_assign(&c4_m, sf_mex_call(c4_sp, NULL, "strcmp", 1U, 2U, 14, sf_mex_dup
    (c4_input0), 14, sf_mex_dup(c4_input1)), false);
  sf_mex_destroy(&c4_input0);
  sf_mex_destroy(&c4_input1);
  return c4_m;
}

static const mxArray *c4_coder_internal_ifWhileCondExtrinsic
  (SFc4_wwtp3InstanceStruct *chartInstance, const emlrtStack *c4_sp, const
   mxArray *c4_input0)
{
  const mxArray *c4_m = NULL;
  (void)chartInstance;
  c4_m = NULL;
  sf_mex_assign(&c4_m, sf_mex_call(c4_sp, NULL,
    "coder.internal.ifWhileCondExtrinsic", 1U, 1U, 14, sf_mex_dup(c4_input0)),
                false);
  sf_mex_destroy(&c4_input0);
  return c4_m;
}

static const mxArray *c4_exist(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, const mxArray *c4_input0, const mxArray *c4_input1)
{
  const mxArray *c4_m = NULL;
  (void)chartInstance;
  c4_m = NULL;
  sf_mex_assign(&c4_m, sf_mex_call(c4_sp, NULL, "exist", 1U, 2U, 14, sf_mex_dup
    (c4_input0), 14, sf_mex_dup(c4_input1)), false);
  sf_mex_destroy(&c4_input0);
  sf_mex_destroy(&c4_input1);
  return c4_m;
}

static const mxArray *c4_b_coder_internal_ifWhileCondExtrinsic
  (SFc4_wwtp3InstanceStruct *chartInstance, const emlrtStack *c4_sp, const
   mxArray *c4_input0)
{
  const mxArray *c4_m = NULL;
  (void)chartInstance;
  c4_m = NULL;
  sf_mex_assign(&c4_m, sf_mex_call(c4_sp, NULL,
    "coder.internal.ifWhileCondExtrinsic", 1U, 1U, 14, sf_mex_dup(c4_input0)),
                false);
  sf_mex_destroy(&c4_input0);
  return c4_m;
}

static const mxArray *c4_b_exist(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, const mxArray *c4_input0, const mxArray *c4_input1)
{
  const mxArray *c4_m = NULL;
  (void)chartInstance;
  c4_m = NULL;
  sf_mex_assign(&c4_m, sf_mex_call(c4_sp, NULL, "exist", 1U, 2U, 14, sf_mex_dup
    (c4_input0), 14, sf_mex_dup(c4_input1)), false);
  sf_mex_destroy(&c4_input0);
  sf_mex_destroy(&c4_input1);
  return c4_m;
}

static const mxArray *c4_c_coder_internal_ifWhileCondExtrinsic
  (SFc4_wwtp3InstanceStruct *chartInstance, const emlrtStack *c4_sp, const
   mxArray *c4_input0)
{
  const mxArray *c4_m = NULL;
  (void)chartInstance;
  c4_m = NULL;
  sf_mex_assign(&c4_m, sf_mex_call(c4_sp, NULL,
    "coder.internal.ifWhileCondExtrinsic", 1U, 1U, 14, sf_mex_dup(c4_input0)),
                false);
  sf_mex_destroy(&c4_input0);
  return c4_m;
}

static const mxArray *c4_b_ver(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, const mxArray *c4_input0)
{
  const mxArray *c4_m = NULL;
  (void)chartInstance;
  c4_m = NULL;
  sf_mex_assign(&c4_m, sf_mex_call(c4_sp, NULL, "ver", 1U, 1U, 14, sf_mex_dup
    (c4_input0)), false);
  sf_mex_destroy(&c4_input0);
  return c4_m;
}

static const mxArray *c4_b_getfield(SFc4_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c4_sp, const mxArray *c4_input0, const mxArray *c4_input1)
{
  const mxArray *c4_m = NULL;
  (void)chartInstance;
  c4_m = NULL;
  sf_mex_assign(&c4_m, sf_mex_call(c4_sp, NULL, "getfield", 1U, 2U, 14,
    sf_mex_dup(c4_input0), 14, sf_mex_dup(c4_input1)), false);
  sf_mex_destroy(&c4_input0);
  sf_mex_destroy(&c4_input1);
  return c4_m;
}

static const mxArray *c4_b_matlabroot(SFc4_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c4_sp)
{
  const mxArray *c4_m = NULL;
  (void)chartInstance;
  c4_m = NULL;
  sf_mex_assign(&c4_m, sf_mex_call(c4_sp, NULL, "matlabroot", 1U, 0U), false);
  return c4_m;
}

static const mxArray *c4_k_strcmp(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, const mxArray *c4_input0, const mxArray *c4_input1)
{
  const mxArray *c4_m = NULL;
  (void)chartInstance;
  c4_m = NULL;
  sf_mex_assign(&c4_m, sf_mex_call(c4_sp, NULL, "strcmp", 1U, 2U, 14, sf_mex_dup
    (c4_input0), 14, sf_mex_dup(c4_input1)), false);
  sf_mex_destroy(&c4_input0);
  sf_mex_destroy(&c4_input1);
  return c4_m;
}

static const mxArray *c4_d_coder_internal_ifWhileCondExtrinsic
  (SFc4_wwtp3InstanceStruct *chartInstance, const emlrtStack *c4_sp, const
   mxArray *c4_input0)
{
  const mxArray *c4_m = NULL;
  (void)chartInstance;
  c4_m = NULL;
  sf_mex_assign(&c4_m, sf_mex_call(c4_sp, NULL,
    "coder.internal.ifWhileCondExtrinsic", 1U, 1U, 14, sf_mex_dup(c4_input0)),
                false);
  sf_mex_destroy(&c4_input0);
  return c4_m;
}

static const mxArray *c4_c_exist(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, const mxArray *c4_input0, const mxArray *c4_input1)
{
  const mxArray *c4_m = NULL;
  (void)chartInstance;
  c4_m = NULL;
  sf_mex_assign(&c4_m, sf_mex_call(c4_sp, NULL, "exist", 1U, 2U, 14, sf_mex_dup
    (c4_input0), 14, sf_mex_dup(c4_input1)), false);
  sf_mex_destroy(&c4_input0);
  sf_mex_destroy(&c4_input1);
  return c4_m;
}

static const mxArray *c4_e_coder_internal_ifWhileCondExtrinsic
  (SFc4_wwtp3InstanceStruct *chartInstance, const emlrtStack *c4_sp, const
   mxArray *c4_input0)
{
  const mxArray *c4_m = NULL;
  (void)chartInstance;
  c4_m = NULL;
  sf_mex_assign(&c4_m, sf_mex_call(c4_sp, NULL,
    "coder.internal.ifWhileCondExtrinsic", 1U, 1U, 14, sf_mex_dup(c4_input0)),
                false);
  sf_mex_destroy(&c4_input0);
  return c4_m;
}

static const mxArray *c4_d_exist(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, const mxArray *c4_input0, const mxArray *c4_input1)
{
  const mxArray *c4_m = NULL;
  (void)chartInstance;
  c4_m = NULL;
  sf_mex_assign(&c4_m, sf_mex_call(c4_sp, NULL, "exist", 1U, 2U, 14, sf_mex_dup
    (c4_input0), 14, sf_mex_dup(c4_input1)), false);
  sf_mex_destroy(&c4_input0);
  sf_mex_destroy(&c4_input1);
  return c4_m;
}

static const mxArray *c4_f_coder_internal_ifWhileCondExtrinsic
  (SFc4_wwtp3InstanceStruct *chartInstance, const emlrtStack *c4_sp, const
   mxArray *c4_input0)
{
  const mxArray *c4_m = NULL;
  (void)chartInstance;
  c4_m = NULL;
  sf_mex_assign(&c4_m, sf_mex_call(c4_sp, NULL,
    "coder.internal.ifWhileCondExtrinsic", 1U, 1U, 14, sf_mex_dup(c4_input0)),
                false);
  sf_mex_destroy(&c4_input0);
  return c4_m;
}

static const mxArray *c4_matlab_internal_language_TimerSuspender
  (SFc4_wwtp3InstanceStruct *chartInstance, const emlrtStack *c4_sp)
{
  const mxArray *c4_m = NULL;
  (void)chartInstance;
  c4_m = NULL;
  sf_mex_assign(&c4_m, sf_mex_call(c4_sp, NULL,
    "matlab.internal.language.TimerSuspender", 0U, 0U), false);
  return c4_m;
}

static void c4_b_feval(SFc4_wwtp3InstanceStruct *chartInstance, const emlrtStack
  *c4_sp, const mxArray *c4_input0, const mxArray *c4_input1)
{
  (void)chartInstance;
  sf_mex_call(c4_sp, NULL, "feval", 0U, 2U, 14, sf_mex_dup(c4_input0), 14,
              sf_mex_dup(c4_input1));
  sf_mex_destroy(&c4_input0);
  sf_mex_destroy(&c4_input1);
}

static const mxArray *c4_c_feval(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, const mxArray *c4_input0, const mxArray *c4_input1)
{
  const mxArray *c4_m = NULL;
  (void)chartInstance;
  c4_m = NULL;
  sf_mex_assign(&c4_m, sf_mex_call(c4_sp, NULL, "feval", 1U, 2U, 14, sf_mex_dup
    (c4_input0), 14, sf_mex_dup(c4_input1)), false);
  sf_mex_destroy(&c4_input0);
  sf_mex_destroy(&c4_input1);
  return c4_m;
}

static void c4_d_feval(SFc4_wwtp3InstanceStruct *chartInstance, const emlrtStack
  *c4_sp, const mxArray *c4_input0, const mxArray *c4_input1)
{
  (void)chartInstance;
  sf_mex_call(c4_sp, NULL, "feval", 0U, 2U, 14, sf_mex_dup(c4_input0), 14,
              sf_mex_dup(c4_input1));
  sf_mex_destroy(&c4_input0);
  sf_mex_destroy(&c4_input1);
}

static void c4_emxEnsureCapacity_uint8_T(SFc4_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_emxArray_uint8_T *c4_emxArray, int32_T c4_oldNumel,
  const emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_i;
  int32_T c4_newCapacity;
  int32_T c4_newNumel;
  void *c4_newData;
  (void)chartInstance;
  if (c4_oldNumel < 0) {
    c4_oldNumel = 0;
  }

  c4_newNumel = 1;
  for (c4_i = 0; c4_i < c4_emxArray->numDimensions; c4_i++) {
    c4_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c4_newNumel,
      (size_t)(uint32_T)c4_emxArray->size[c4_i], c4_srcLocation, (void *)c4_sp);
  }

  if (c4_newNumel > c4_emxArray->allocatedSize) {
    c4_newCapacity = c4_emxArray->allocatedSize;
    if (c4_newCapacity < 16) {
      c4_newCapacity = 16;
    }

    while (c4_newCapacity < c4_newNumel) {
      if (c4_newCapacity > 1073741823) {
        c4_newCapacity = MAX_int32_T;
      } else {
        c4_newCapacity <<= 1;
      }
    }

    c4_newData = emlrtCallocMex((uint32_T)c4_newCapacity, sizeof(uint8_T));
    if (c4_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
    }

    if (c4_emxArray->data != NULL) {
      memcpy(c4_newData, c4_emxArray->data, sizeof(uint8_T) * (uint32_T)
             c4_oldNumel);
      if (c4_emxArray->canFreeData) {
        emlrtFreeMex(c4_emxArray->data);
      }
    }

    c4_emxArray->data = (uint8_T *)c4_newData;
    c4_emxArray->allocatedSize = c4_newCapacity;
    c4_emxArray->canFreeData = true;
  }
}

static void c4_emxEnsureCapacity_char_T(SFc4_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_emxArray_char_T *c4_emxArray, int32_T c4_oldNumel,
  const emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_i;
  int32_T c4_newCapacity;
  int32_T c4_newNumel;
  void *c4_newData;
  (void)chartInstance;
  if (c4_oldNumel < 0) {
    c4_oldNumel = 0;
  }

  c4_newNumel = 1;
  for (c4_i = 0; c4_i < c4_emxArray->numDimensions; c4_i++) {
    c4_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c4_newNumel,
      (size_t)(uint32_T)c4_emxArray->size[c4_i], c4_srcLocation, (void *)c4_sp);
  }

  if (c4_newNumel > c4_emxArray->allocatedSize) {
    c4_newCapacity = c4_emxArray->allocatedSize;
    if (c4_newCapacity < 16) {
      c4_newCapacity = 16;
    }

    while (c4_newCapacity < c4_newNumel) {
      if (c4_newCapacity > 1073741823) {
        c4_newCapacity = MAX_int32_T;
      } else {
        c4_newCapacity <<= 1;
      }
    }

    c4_newData = emlrtCallocMex((uint32_T)c4_newCapacity, sizeof(char_T));
    if (c4_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
    }

    if (c4_emxArray->data != NULL) {
      memcpy(c4_newData, c4_emxArray->data, sizeof(char_T) * (uint32_T)
             c4_oldNumel);
      if (c4_emxArray->canFreeData) {
        emlrtFreeMex(c4_emxArray->data);
      }
    }

    c4_emxArray->data = (char_T *)c4_newData;
    c4_emxArray->allocatedSize = c4_newCapacity;
    c4_emxArray->canFreeData = true;
  }
}

static void c4_emxInitStruct_icomm_interface_m(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_icomm_interface_modbus_tcpip_Modbus *c4_pStruct, const emlrtRTEInfo
  *c4_srcLocation)
{
  c4_emxInitStruct_icomm_interface_c(chartInstance, c4_sp,
    &c4_pStruct->Converter, c4_srcLocation);
  c4_emxInitStruct_matlabshared_netw(chartInstance, c4_sp, &c4_pStruct->_pobj0,
    c4_srcLocation);
}

static void c4_emxInitStruct_icomm_interface_c(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_icomm_interface_coder_modbus_DataConverter *c4_pStruct, const emlrtRTEInfo *
  c4_srcLocation)
{
  c4_emxInit_char_T(chartInstance, c4_sp, &c4_pStruct->ByteOrder, 2,
                    c4_srcLocation);
  c4_emxInit_char_T(chartInstance, c4_sp, &c4_pStruct->WordOrder, 2,
                    c4_srcLocation);
}

static void c4_emxInit_char_T(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_emxArray_char_T **c4_pEmxArray, int32_T c4_numDimensions,
  const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxArray_char_T *c4_emxArray;
  int32_T c4_i;
  (void)chartInstance;
  *c4_pEmxArray = (c4_emxArray_char_T *)emlrtMallocMex(sizeof(c4_emxArray_char_T));
  if ((void *)*c4_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
  }

  c4_emxArray = *c4_pEmxArray;
  c4_emxArray->data = (char_T *)NULL;
  c4_emxArray->numDimensions = c4_numDimensions;
  c4_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c4_numDimensions);
  if ((void *)c4_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
  }

  c4_emxArray->allocatedSize = 0;
  c4_emxArray->canFreeData = true;
  for (c4_i = 0; c4_i < c4_numDimensions; c4_i++) {
    c4_emxArray->size[c4_i] = 0;
  }
}

static void c4_emxInitStruct_matlabshared_netw(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_matlabshared_network_internal_TCPClient *c4_pStruct, const emlrtRTEInfo
  *c4_srcLocation)
{
  c4_emxInit_char_T(chartInstance, c4_sp, &c4_pStruct->ByteOrder, 2,
                    c4_srcLocation);
  c4_emxInit_char_T(chartInstance, c4_sp, &c4_pStruct->NativeDataType, 2,
                    c4_srcLocation);
  c4_emxInit_char_T(chartInstance, c4_sp, &c4_pStruct->DataFieldName, 2,
                    c4_srcLocation);
  c4_emxInitStruct_matlabshared_tran(chartInstance, c4_sp, &c4_pStruct->_pobj0,
    c4_srcLocation);
  c4_c_emxInitStruct_matlabshared_asyn(chartInstance, c4_sp, &c4_pStruct->_pobj1,
    c4_srcLocation);
}

static void c4_emxInitStruct_matlabshared_tran(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_pStruct,
  const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxInitStruct_matlabshared_asyn(chartInstance, c4_sp,
    &c4_pStruct->UnreadDataBuffer, c4_srcLocation);
  c4_emxInit_char_T(chartInstance, c4_sp, &c4_pStruct->ByteOrder, 2,
                    c4_srcLocation);
  c4_emxInit_char_T(chartInstance, c4_sp, &c4_pStruct->NativeDataType, 2,
                    c4_srcLocation);
  c4_emxInit_char_T(chartInstance, c4_sp, &c4_pStruct->DataFieldName, 2,
                    c4_srcLocation);
}

static void c4_emxInitStruct_matlabshared_asyn(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_matlabshared_asyncio_buffer_internal_BufferChannel *c4_pStruct, const
  emlrtRTEInfo *c4_srcLocation)
{
  c4_b_emxInitStruct_matlabshared_asyn(chartInstance, c4_sp,
    &c4_pStruct->InputStream, c4_srcLocation);
  c4_emxInit_uint8_T(chartInstance, c4_sp, &c4_pStruct->PartialPacket, 2,
                     c4_srcLocation);
}

static void c4_b_emxInitStruct_matlabshared_asyn(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_matlabshared_asyncio_internal_InputStream *c4_pStruct, const emlrtRTEInfo
  *c4_srcLocation)
{
  c4_emxInit_uint8_T(chartInstance, c4_sp, &c4_pStruct->PartialPacket, 2,
                     c4_srcLocation);
  c4_emxInit_uint8_T(chartInstance, c4_sp, &c4_pStruct->ExampleData, 2,
                     c4_srcLocation);
}

static void c4_emxInit_uint8_T(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_emxArray_uint8_T **c4_pEmxArray, int32_T
  c4_numDimensions, const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxArray_uint8_T *c4_emxArray;
  int32_T c4_i;
  (void)chartInstance;
  *c4_pEmxArray = (c4_emxArray_uint8_T *)emlrtMallocMex(sizeof
    (c4_emxArray_uint8_T));
  if ((void *)*c4_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
  }

  c4_emxArray = *c4_pEmxArray;
  c4_emxArray->data = (uint8_T *)NULL;
  c4_emxArray->numDimensions = c4_numDimensions;
  c4_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c4_numDimensions);
  if ((void *)c4_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
  }

  c4_emxArray->allocatedSize = 0;
  c4_emxArray->canFreeData = true;
  for (c4_i = 0; c4_i < c4_numDimensions; c4_i++) {
    c4_emxArray->size[c4_i] = 0;
  }
}

static void c4_c_emxInitStruct_matlabshared_asyn(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp,
  c4_matlabshared_asyncio_internal_Channel *c4_pStruct, const emlrtRTEInfo
  *c4_srcLocation)
{
  c4_b_emxInitStruct_matlabshared_asyn(chartInstance, c4_sp,
    &c4_pStruct->InputStream, c4_srcLocation);
}

static void c4_emxFree_char_T(SFc4_wwtp3InstanceStruct *chartInstance,
  c4_emxArray_char_T **c4_pEmxArray)
{
  (void)chartInstance;
  if (*c4_pEmxArray != (c4_emxArray_char_T *)NULL) {
    if (((*c4_pEmxArray)->data != (char_T *)NULL) && (*c4_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c4_pEmxArray)->data);
    }

    emlrtFreeMex((*c4_pEmxArray)->size);
    emlrtFreeMex(*c4_pEmxArray);
    *c4_pEmxArray = (c4_emxArray_char_T *)NULL;
  }
}

static void c4_emxFreeStruct_icomm_interface_c(SFc4_wwtp3InstanceStruct
  *chartInstance, c4_icomm_interface_coder_modbus_DataConverter *c4_pStruct)
{
  c4_emxFree_char_T(chartInstance, &c4_pStruct->ByteOrder);
  c4_emxFree_char_T(chartInstance, &c4_pStruct->WordOrder);
}

static void c4_emxFreeStruct_icomm_interface_m(SFc4_wwtp3InstanceStruct
  *chartInstance, c4_icomm_interface_modbus_tcpip_Modbus *c4_pStruct)
{
  c4_emxFreeStruct_icomm_interface_c(chartInstance, &c4_pStruct->Converter);
  c4_emxFreeStruct_matlabshared_netw(chartInstance, &c4_pStruct->_pobj0);
}

static void c4_emxFreeStruct_matlabshared_netw(SFc4_wwtp3InstanceStruct
  *chartInstance, c4_matlabshared_network_internal_TCPClient *c4_pStruct)
{
  c4_emxFree_char_T(chartInstance, &c4_pStruct->ByteOrder);
  c4_emxFree_char_T(chartInstance, &c4_pStruct->NativeDataType);
  c4_emxFree_char_T(chartInstance, &c4_pStruct->DataFieldName);
  c4_emxFreeStruct_matlabshared_tran(chartInstance, &c4_pStruct->_pobj0);
  c4_c_emxFreeStruct_matlabshared_asyn(chartInstance, &c4_pStruct->_pobj1);
}

static void c4_emxFree_uint8_T(SFc4_wwtp3InstanceStruct *chartInstance,
  c4_emxArray_uint8_T **c4_pEmxArray)
{
  (void)chartInstance;
  if (*c4_pEmxArray != (c4_emxArray_uint8_T *)NULL) {
    if (((*c4_pEmxArray)->data != (uint8_T *)NULL) && (*c4_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c4_pEmxArray)->data);
    }

    emlrtFreeMex((*c4_pEmxArray)->size);
    emlrtFreeMex(*c4_pEmxArray);
    *c4_pEmxArray = (c4_emxArray_uint8_T *)NULL;
  }
}

static void c4_emxFreeStruct_matlabshared_asyn(SFc4_wwtp3InstanceStruct
  *chartInstance, c4_matlabshared_asyncio_internal_InputStream *c4_pStruct)
{
  c4_emxFree_uint8_T(chartInstance, &c4_pStruct->PartialPacket);
  c4_emxFree_uint8_T(chartInstance, &c4_pStruct->ExampleData);
}

static void c4_b_emxFreeStruct_matlabshared_asyn(SFc4_wwtp3InstanceStruct
  *chartInstance, c4_matlabshared_asyncio_buffer_internal_BufferChannel
  *c4_pStruct)
{
  c4_emxFreeStruct_matlabshared_asyn(chartInstance, &c4_pStruct->InputStream);
  c4_emxFree_uint8_T(chartInstance, &c4_pStruct->PartialPacket);
}

static void c4_emxFreeStruct_matlabshared_tran(SFc4_wwtp3InstanceStruct
  *chartInstance,
  c4_matlabshared_transportlib_internal_asyncIOTransportChannel_co *c4_pStruct)
{
  c4_b_emxFreeStruct_matlabshared_asyn(chartInstance,
    &c4_pStruct->UnreadDataBuffer);
  c4_emxFree_char_T(chartInstance, &c4_pStruct->ByteOrder);
  c4_emxFree_char_T(chartInstance, &c4_pStruct->NativeDataType);
  c4_emxFree_char_T(chartInstance, &c4_pStruct->DataFieldName);
}

static void c4_c_emxFreeStruct_matlabshared_asyn(SFc4_wwtp3InstanceStruct
  *chartInstance, c4_matlabshared_asyncio_internal_Channel *c4_pStruct)
{
  c4_emxFreeStruct_matlabshared_asyn(chartInstance, &c4_pStruct->InputStream);
}

static void c4_emxInitStruct_s_puOqsSoDdBk28aK(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_s_puOqsSoDdBk28aK0dkajGG
  *c4_pStruct, const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxInit_char_T(chartInstance, c4_sp, &c4_pStruct->ServiceName, 2,
                    c4_srcLocation);
}

static void c4_emxInitStruct_cell_11(SFc4_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_cell_11 *c4_pStruct, const emlrtRTEInfo
  *c4_srcLocation)
{
  c4_emxInit_char_T(chartInstance, c4_sp, &c4_pStruct->f8, 2, c4_srcLocation);
}

static void c4_emxFreeStruct_s_puOqsSoDdBk28aK(SFc4_wwtp3InstanceStruct
  *chartInstance, c4_s_puOqsSoDdBk28aK0dkajGG *c4_pStruct)
{
  c4_emxFree_char_T(chartInstance, &c4_pStruct->ServiceName);
}

static void c4_emxFreeStruct_cell_11(SFc4_wwtp3InstanceStruct *chartInstance,
  c4_cell_11 *c4_pStruct)
{
  c4_emxFree_char_T(chartInstance, &c4_pStruct->f8);
}

static void c4_emxInitStruct_s_IiVysWyVj7T2O9P(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_s_IiVysWyVj7T2O9POL8hpXH
  *c4_pStruct, const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxInit_char_T(chartInstance, c4_sp, &c4_pStruct->ServiceName, 2,
                    c4_srcLocation);
}

static void c4_emxInitStruct_cell_17(SFc4_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_cell_17 *c4_pStruct, const emlrtRTEInfo
  *c4_srcLocation)
{
  c4_emxInit_char_T(chartInstance, c4_sp, &c4_pStruct->f8, 2, c4_srcLocation);
}

static void c4_emxFreeStruct_s_IiVysWyVj7T2O9P(SFc4_wwtp3InstanceStruct
  *chartInstance, c4_s_IiVysWyVj7T2O9POL8hpXH *c4_pStruct)
{
  c4_emxFree_char_T(chartInstance, &c4_pStruct->ServiceName);
}

static void c4_emxFreeStruct_cell_17(SFc4_wwtp3InstanceStruct *chartInstance,
  c4_cell_17 *c4_pStruct)
{
  c4_emxFree_char_T(chartInstance, &c4_pStruct->f8);
}

static void c4_emxFreeStruct_cell_wrap_33(SFc4_wwtp3InstanceStruct
  *chartInstance, c4_cell_wrap_33 *c4_pStruct)
{
  c4_emxFree_uint8_T(chartInstance, &c4_pStruct->f1);
}

static void c4_emxTrim_cell_wrap_33_1x1(SFc4_wwtp3InstanceStruct *chartInstance,
  c4_cell_wrap_33 c4_data[1], int32_T c4_fromIndex, int32_T c4_toIndex)
{
  int32_T c4_i;
  for (c4_i = c4_fromIndex; c4_i < c4_toIndex; c4_i++) {
    c4_emxFreeStruct_cell_wrap_33(chartInstance, &c4_data[c4_i]);
  }
}

static void c4_emxInitStruct_cell_wrap_33(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_cell_wrap_33 *c4_pStruct, const
  emlrtRTEInfo *c4_srcLocation)
{
  c4_emxInit_uint8_T(chartInstance, c4_sp, &c4_pStruct->f1, 2, c4_srcLocation);
}

static void c4_emxExpand_cell_wrap_33_1x1(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_cell_wrap_33 c4_data[1], int32_T
  c4_fromIndex, int32_T c4_toIndex, const emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_i;
  for (c4_i = c4_fromIndex; c4_i < c4_toIndex; c4_i++) {
    c4_emxInitStruct_cell_wrap_33(chartInstance, c4_sp, &c4_data[c4_i],
      c4_srcLocation);
  }
}

static void c4_emxEnsureCapacity_cell_wrap_33(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_cell_wrap_33 c4_data[1], int32_T
  c4_size[2], int32_T c4_oldNumel, const emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_newNumel;
  if (c4_oldNumel < 0) {
    c4_oldNumel = 0;
  }

  c4_newNumel = c4_size[0] * c4_size[1];
  if (c4_oldNumel > c4_newNumel) {
    c4_emxTrim_cell_wrap_33_1x1(chartInstance, c4_data, c4_newNumel, c4_oldNumel);
  } else if (c4_oldNumel < c4_newNumel) {
    c4_emxExpand_cell_wrap_33_1x1(chartInstance, c4_sp, c4_data, c4_oldNumel,
      c4_newNumel, c4_srcLocation);
  }
}

static void c4_emxCopyStruct_cell_wrap_33(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_cell_wrap_33 *c4_dst, const
  c4_cell_wrap_33 *c4_src, const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxCopy_uint8_T(chartInstance, c4_sp, &c4_dst->f1, &c4_src->f1,
                     c4_srcLocation);
}

static void c4_emxCopy_uint8_T(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_emxArray_uint8_T **c4_dst, c4_emxArray_uint8_T * const
  *c4_src, const emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_i;
  int32_T c4_numElDst;
  int32_T c4_numElSrc;
  c4_numElDst = 1;
  c4_numElSrc = 1;
  for (c4_i = 0; c4_i < (*c4_dst)->numDimensions; c4_i++) {
    c4_numElDst *= (*c4_dst)->size[c4_i];
    c4_numElSrc *= (*c4_src)->size[c4_i];
  }

  for (c4_i = 0; c4_i < (*c4_dst)->numDimensions; c4_i++) {
    (*c4_dst)->size[c4_i] = (*c4_src)->size[c4_i];
  }

  c4_emxEnsureCapacity_uint8_T(chartInstance, c4_sp, *c4_dst, c4_numElDst,
    c4_srcLocation);
  for (c4_i = 0; c4_i < c4_numElSrc; c4_i++) {
    (*c4_dst)->data[c4_i] = (*c4_src)->data[c4_i];
  }
}

static void c4_emxTrim_cell_wrap_33_1(SFc4_wwtp3InstanceStruct *chartInstance,
  c4_cell_wrap_33 c4_data[1], int32_T c4_fromIndex, int32_T c4_toIndex)
{
  int32_T c4_i;
  for (c4_i = c4_fromIndex; c4_i < c4_toIndex; c4_i++) {
    c4_emxFreeStruct_cell_wrap_33(chartInstance, &c4_data[c4_i]);
  }
}

static void c4_emxExpand_cell_wrap_33_1(SFc4_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_cell_wrap_33 c4_data[1], int32_T c4_fromIndex,
  int32_T c4_toIndex, const emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_i;
  for (c4_i = c4_fromIndex; c4_i < c4_toIndex; c4_i++) {
    c4_emxInitStruct_cell_wrap_33(chartInstance, c4_sp, &c4_data[c4_i],
      c4_srcLocation);
  }
}

static void c4_emxEnsureCapacity_cell_wrap_331(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_cell_wrap_33 c4_data[1], int32_T
  c4_size[1], int32_T c4_oldNumel, const emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_newNumel;
  if (c4_oldNumel < 0) {
    c4_oldNumel = 0;
  }

  c4_newNumel = c4_size[0];
  if (c4_oldNumel > c4_newNumel) {
    c4_emxTrim_cell_wrap_33_1(chartInstance, c4_data, c4_newNumel, c4_oldNumel);
  } else if (c4_oldNumel < c4_newNumel) {
    c4_emxExpand_cell_wrap_33_1(chartInstance, c4_sp, c4_data, c4_oldNumel,
      c4_newNumel, c4_srcLocation);
  }
}

static void c4_emxInitStruct_s_n2xUWXvqAPN0Osm(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_s_n2xUWXvqAPN0OsmrtE3c5D
  *c4_pStruct, const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxInit_uint8_T(chartInstance, c4_sp, &c4_pStruct->Data, 2, c4_srcLocation);
}

static void c4_emxInitStruct_cell_35(SFc4_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_cell_35 *c4_pStruct, const emlrtRTEInfo
  *c4_srcLocation)
{
  c4_emxInit_uint8_T(chartInstance, c4_sp, &c4_pStruct->f4, 2, c4_srcLocation);
}

static void c4_emxInit_cell_wrap_33_1x1(SFc4_wwtp3InstanceStruct *chartInstance,
  c4_emxArray_cell_wrap_33_1x1 *c4_pEmxArray)
{
  int32_T c4_i;
  (void)chartInstance;
  for (c4_i = 0; c4_i < 2; c4_i++) {
    c4_pEmxArray->size[c4_i] = 0;
  }
}

static void c4_emxFree_cell_wrap_33_1x1(SFc4_wwtp3InstanceStruct *chartInstance,
  c4_emxArray_cell_wrap_33_1x1 *c4_pEmxArray)
{
  int32_T c4_b_i;
  int32_T c4_i;
  int32_T c4_numEl;
  c4_numEl = 1;
  for (c4_i = 0; c4_i < 2; c4_i++) {
    c4_numEl *= c4_pEmxArray->size[c4_i];
  }

  for (c4_b_i = 0; c4_b_i < c4_numEl; c4_b_i++) {
    c4_emxFreeStruct_cell_wrap_33(chartInstance, &c4_pEmxArray->data[c4_b_i]);
  }
}

static void c4_emxInit_cell_wrap_33_1(SFc4_wwtp3InstanceStruct *chartInstance,
  c4_emxArray_cell_wrap_33_1 *c4_pEmxArray)
{
  int32_T c4_i;
  (void)chartInstance;
  for (c4_i = 0; c4_i < 1; c4_i++) {
    c4_pEmxArray->size[c4_i] = 0;
  }
}

static void c4_emxFree_cell_wrap_33_1(SFc4_wwtp3InstanceStruct *chartInstance,
  c4_emxArray_cell_wrap_33_1 *c4_pEmxArray)
{
  int32_T c4_b_i;
  int32_T c4_i;
  int32_T c4_numEl;
  c4_numEl = 1;
  for (c4_i = 0; c4_i < 1; c4_i++) {
    c4_numEl *= c4_pEmxArray->size[c4_i];
  }

  for (c4_b_i = 0; c4_b_i < c4_numEl; c4_b_i++) {
    c4_emxFreeStruct_cell_wrap_33(chartInstance, &c4_pEmxArray->data[c4_b_i]);
  }
}

static void c4_emxFreeStruct_s_n2xUWXvqAPN0Osm(SFc4_wwtp3InstanceStruct
  *chartInstance, c4_s_n2xUWXvqAPN0OsmrtE3c5D *c4_pStruct)
{
  c4_emxFree_uint8_T(chartInstance, &c4_pStruct->Data);
}

static void c4_emxFreeStruct_cell_35(SFc4_wwtp3InstanceStruct *chartInstance,
  c4_cell_35 *c4_pStruct)
{
  c4_emxFree_uint8_T(chartInstance, &c4_pStruct->f4);
}

static void c4_emxInitMatrix_cell_wrap_38(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_cell_wrap_38 c4_pMatrix[2], const
  emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_i;
  for (c4_i = 0; c4_i < 2; c4_i++) {
    c4_emxInitStruct_cell_wrap_38(chartInstance, c4_sp, &c4_pMatrix[c4_i],
      c4_srcLocation);
  }
}

static void c4_emxInitStruct_cell_wrap_38(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_cell_wrap_38 *c4_pStruct, const
  emlrtRTEInfo *c4_srcLocation)
{
  c4_emxInit_uint8_T(chartInstance, c4_sp, &c4_pStruct->f1, 2, c4_srcLocation);
}

static void c4_emxFreeMatrix_cell_wrap_38(SFc4_wwtp3InstanceStruct
  *chartInstance, c4_cell_wrap_38 c4_pMatrix[2])
{
  int32_T c4_i;
  for (c4_i = 0; c4_i < 2; c4_i++) {
    c4_emxFreeStruct_cell_wrap_38(chartInstance, &c4_pMatrix[c4_i]);
  }
}

static void c4_emxFreeStruct_cell_wrap_38(SFc4_wwtp3InstanceStruct
  *chartInstance, c4_cell_wrap_38 *c4_pStruct)
{
  c4_emxFree_uint8_T(chartInstance, &c4_pStruct->f1);
}

static void c4_emxInit_cell_wrap_33(SFc4_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_emxArray_cell_wrap_33 **c4_pEmxArray, int32_T
  c4_numDimensions, const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxArray_cell_wrap_33 *c4_emxArray;
  int32_T c4_i;
  (void)chartInstance;
  *c4_pEmxArray = (c4_emxArray_cell_wrap_33 *)emlrtMallocMex(sizeof
    (c4_emxArray_cell_wrap_33));
  if ((void *)*c4_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
  }

  c4_emxArray = *c4_pEmxArray;
  c4_emxArray->data = (c4_cell_wrap_33 *)NULL;
  c4_emxArray->numDimensions = c4_numDimensions;
  c4_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c4_numDimensions);
  if ((void *)c4_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
  }

  c4_emxArray->allocatedSize = 0;
  c4_emxArray->canFreeData = true;
  for (c4_i = 0; c4_i < c4_numDimensions; c4_i++) {
    c4_emxArray->size[c4_i] = 0;
  }
}

static void c4_emxFree_cell_wrap_33(SFc4_wwtp3InstanceStruct *chartInstance,
  c4_emxArray_cell_wrap_33 **c4_pEmxArray)
{
  int32_T c4_b_i;
  int32_T c4_i;
  int32_T c4_numEl;
  if (*c4_pEmxArray != (c4_emxArray_cell_wrap_33 *)NULL) {
    if ((*c4_pEmxArray)->data != (c4_cell_wrap_33 *)NULL) {
      c4_numEl = 1;
      for (c4_i = 0; c4_i < (*c4_pEmxArray)->numDimensions; c4_i++) {
        c4_numEl *= (*c4_pEmxArray)->size[c4_i];
      }

      for (c4_b_i = 0; c4_b_i < c4_numEl; c4_b_i++) {
        c4_emxFreeStruct_cell_wrap_33(chartInstance, &(*c4_pEmxArray)->
          data[c4_b_i]);
      }

      if ((*c4_pEmxArray)->canFreeData) {
        emlrtFreeMex((*c4_pEmxArray)->data);
      }
    }

    emlrtFreeMex((*c4_pEmxArray)->size);
    emlrtFreeMex(*c4_pEmxArray);
    *c4_pEmxArray = (c4_emxArray_cell_wrap_33 *)NULL;
  }
}

static void c4_emxTrim_cell_wrap_33(SFc4_wwtp3InstanceStruct *chartInstance,
  c4_emxArray_cell_wrap_33 *c4_emxArray, int32_T c4_fromIndex, int32_T
  c4_toIndex)
{
  int32_T c4_i;
  for (c4_i = c4_fromIndex; c4_i < c4_toIndex; c4_i++) {
    c4_emxFreeStruct_cell_wrap_33(chartInstance, &c4_emxArray->data[c4_i]);
  }
}

static void c4_emxExpand_cell_wrap_33(SFc4_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_emxArray_cell_wrap_33 *c4_emxArray, int32_T
  c4_fromIndex, int32_T c4_toIndex, const emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_i;
  for (c4_i = c4_fromIndex; c4_i < c4_toIndex; c4_i++) {
    c4_emxInitStruct_cell_wrap_33(chartInstance, c4_sp, &c4_emxArray->data[c4_i],
      c4_srcLocation);
  }
}

static void c4_emxEnsureCapacity_cell_wrap_332(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_cell_wrap_33 *c4_emxArray,
  int32_T c4_oldNumel, const emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_i;
  int32_T c4_newCapacity;
  int32_T c4_newNumel;
  void *c4_newData;
  if (c4_oldNumel < 0) {
    c4_oldNumel = 0;
  }

  c4_newNumel = 1;
  for (c4_i = 0; c4_i < c4_emxArray->numDimensions; c4_i++) {
    c4_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c4_newNumel,
      (size_t)(uint32_T)c4_emxArray->size[c4_i], c4_srcLocation, (void *)c4_sp);
  }

  if (c4_newNumel > c4_emxArray->allocatedSize) {
    c4_newCapacity = c4_emxArray->allocatedSize;
    if (c4_newCapacity < 16) {
      c4_newCapacity = 16;
    }

    while (c4_newCapacity < c4_newNumel) {
      if (c4_newCapacity > 1073741823) {
        c4_newCapacity = MAX_int32_T;
      } else {
        c4_newCapacity <<= 1;
      }
    }

    c4_newData = emlrtCallocMex((uint32_T)c4_newCapacity, sizeof(c4_cell_wrap_33));
    if (c4_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
    }

    if (c4_emxArray->data != NULL) {
      memcpy(c4_newData, c4_emxArray->data, sizeof(c4_cell_wrap_33) * (uint32_T)
             c4_oldNumel);
      if (c4_emxArray->canFreeData) {
        emlrtFreeMex(c4_emxArray->data);
      }
    }

    c4_emxArray->data = (c4_cell_wrap_33 *)c4_newData;
    c4_emxArray->allocatedSize = c4_newCapacity;
    c4_emxArray->canFreeData = true;
  }

  if (c4_oldNumel > c4_newNumel) {
    c4_emxTrim_cell_wrap_33(chartInstance, c4_emxArray, c4_newNumel, c4_oldNumel);
  } else if (c4_oldNumel < c4_newNumel) {
    c4_emxExpand_cell_wrap_33(chartInstance, c4_sp, c4_emxArray, c4_oldNumel,
      c4_newNumel, c4_srcLocation);
  }
}

static void c4_emxEnsureCapacity_boolean_T(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_boolean_T *c4_emxArray,
  int32_T c4_oldNumel, const emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_i;
  int32_T c4_newCapacity;
  int32_T c4_newNumel;
  void *c4_newData;
  (void)chartInstance;
  if (c4_oldNumel < 0) {
    c4_oldNumel = 0;
  }

  c4_newNumel = 1;
  for (c4_i = 0; c4_i < c4_emxArray->numDimensions; c4_i++) {
    c4_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c4_newNumel,
      (size_t)(uint32_T)c4_emxArray->size[c4_i], c4_srcLocation, (void *)c4_sp);
  }

  if (c4_newNumel > c4_emxArray->allocatedSize) {
    c4_newCapacity = c4_emxArray->allocatedSize;
    if (c4_newCapacity < 16) {
      c4_newCapacity = 16;
    }

    while (c4_newCapacity < c4_newNumel) {
      if (c4_newCapacity > 1073741823) {
        c4_newCapacity = MAX_int32_T;
      } else {
        c4_newCapacity <<= 1;
      }
    }

    c4_newData = emlrtCallocMex((uint32_T)c4_newCapacity, sizeof(boolean_T));
    if (c4_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
    }

    if (c4_emxArray->data != NULL) {
      memcpy(c4_newData, c4_emxArray->data, sizeof(boolean_T) * (uint32_T)
             c4_oldNumel);
      if (c4_emxArray->canFreeData) {
        emlrtFreeMex(c4_emxArray->data);
      }
    }

    c4_emxArray->data = (boolean_T *)c4_newData;
    c4_emxArray->allocatedSize = c4_newCapacity;
    c4_emxArray->canFreeData = true;
  }
}

static void c4_emxInit_boolean_T(SFc4_wwtp3InstanceStruct *chartInstance, const
  emlrtStack *c4_sp, c4_emxArray_boolean_T **c4_pEmxArray, int32_T
  c4_numDimensions, const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxArray_boolean_T *c4_emxArray;
  int32_T c4_i;
  (void)chartInstance;
  *c4_pEmxArray = (c4_emxArray_boolean_T *)emlrtMallocMex(sizeof
    (c4_emxArray_boolean_T));
  if ((void *)*c4_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
  }

  c4_emxArray = *c4_pEmxArray;
  c4_emxArray->data = (boolean_T *)NULL;
  c4_emxArray->numDimensions = c4_numDimensions;
  c4_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c4_numDimensions);
  if ((void *)c4_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
  }

  c4_emxArray->allocatedSize = 0;
  c4_emxArray->canFreeData = true;
  for (c4_i = 0; c4_i < c4_numDimensions; c4_i++) {
    c4_emxArray->size[c4_i] = 0;
  }
}

static void c4_emxFree_boolean_T(SFc4_wwtp3InstanceStruct *chartInstance,
  c4_emxArray_boolean_T **c4_pEmxArray)
{
  (void)chartInstance;
  if (*c4_pEmxArray != (c4_emxArray_boolean_T *)NULL) {
    if (((*c4_pEmxArray)->data != (boolean_T *)NULL) && (*c4_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c4_pEmxArray)->data);
    }

    emlrtFreeMex((*c4_pEmxArray)->size);
    emlrtFreeMex(*c4_pEmxArray);
    *c4_pEmxArray = (c4_emxArray_boolean_T *)NULL;
  }
}

static void c4_emxTrim_cell_wrap_38_1x1(SFc4_wwtp3InstanceStruct *chartInstance,
  c4_cell_wrap_38 c4_data[1], int32_T c4_fromIndex, int32_T c4_toIndex)
{
  int32_T c4_i;
  for (c4_i = c4_fromIndex; c4_i < c4_toIndex; c4_i++) {
    c4_emxFreeStruct_cell_wrap_38(chartInstance, &c4_data[c4_i]);
  }
}

static void c4_emxExpand_cell_wrap_38_1x1(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_cell_wrap_38 c4_data[1], int32_T
  c4_fromIndex, int32_T c4_toIndex, const emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_i;
  for (c4_i = c4_fromIndex; c4_i < c4_toIndex; c4_i++) {
    c4_emxInitStruct_cell_wrap_38(chartInstance, c4_sp, &c4_data[c4_i],
      c4_srcLocation);
  }
}

static void c4_emxEnsureCapacity_cell_wrap_38(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_cell_wrap_38 c4_data[1], int32_T
  c4_size[2], int32_T c4_oldNumel, const emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_newNumel;
  if (c4_oldNumel < 0) {
    c4_oldNumel = 0;
  }

  c4_newNumel = c4_size[0] * c4_size[1];
  if (c4_oldNumel > c4_newNumel) {
    c4_emxTrim_cell_wrap_38_1x1(chartInstance, c4_data, c4_newNumel, c4_oldNumel);
  } else if (c4_oldNumel < c4_newNumel) {
    c4_emxExpand_cell_wrap_38_1x1(chartInstance, c4_sp, c4_data, c4_oldNumel,
      c4_newNumel, c4_srcLocation);
  }
}

static void c4_emxCopyStruct_cell_wrap_38(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_cell_wrap_38 *c4_dst, const
  c4_cell_wrap_38 *c4_src, const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxCopy_uint8_T(chartInstance, c4_sp, &c4_dst->f1, &c4_src->f1,
                     c4_srcLocation);
}

static void c4_emxTrim_cell_wrap_38_1(SFc4_wwtp3InstanceStruct *chartInstance,
  c4_cell_wrap_38 c4_data[1], int32_T c4_fromIndex, int32_T c4_toIndex)
{
  int32_T c4_i;
  for (c4_i = c4_fromIndex; c4_i < c4_toIndex; c4_i++) {
    c4_emxFreeStruct_cell_wrap_38(chartInstance, &c4_data[c4_i]);
  }
}

static void c4_emxExpand_cell_wrap_38_1(SFc4_wwtp3InstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_cell_wrap_38 c4_data[1], int32_T c4_fromIndex,
  int32_T c4_toIndex, const emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_i;
  for (c4_i = c4_fromIndex; c4_i < c4_toIndex; c4_i++) {
    c4_emxInitStruct_cell_wrap_38(chartInstance, c4_sp, &c4_data[c4_i],
      c4_srcLocation);
  }
}

static void c4_emxEnsureCapacity_cell_wrap_381(SFc4_wwtp3InstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_cell_wrap_38 c4_data[1], int32_T
  c4_size[1], int32_T c4_oldNumel, const emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_newNumel;
  if (c4_oldNumel < 0) {
    c4_oldNumel = 0;
  }

  c4_newNumel = c4_size[0];
  if (c4_oldNumel > c4_newNumel) {
    c4_emxTrim_cell_wrap_38_1(chartInstance, c4_data, c4_newNumel, c4_oldNumel);
  } else if (c4_oldNumel < c4_newNumel) {
    c4_emxExpand_cell_wrap_38_1(chartInstance, c4_sp, c4_data, c4_oldNumel,
      c4_newNumel, c4_srcLocation);
  }
}

static void c4_emxInit_cell_wrap_38_1x1(SFc4_wwtp3InstanceStruct *chartInstance,
  c4_emxArray_cell_wrap_38_1x1 *c4_pEmxArray)
{
  int32_T c4_i;
  (void)chartInstance;
  for (c4_i = 0; c4_i < 2; c4_i++) {
    c4_pEmxArray->size[c4_i] = 0;
  }
}

static void c4_emxFree_cell_wrap_38_1x1(SFc4_wwtp3InstanceStruct *chartInstance,
  c4_emxArray_cell_wrap_38_1x1 *c4_pEmxArray)
{
  int32_T c4_b_i;
  int32_T c4_i;
  int32_T c4_numEl;
  c4_numEl = 1;
  for (c4_i = 0; c4_i < 2; c4_i++) {
    c4_numEl *= c4_pEmxArray->size[c4_i];
  }

  for (c4_b_i = 0; c4_b_i < c4_numEl; c4_b_i++) {
    c4_emxFreeStruct_cell_wrap_38(chartInstance, &c4_pEmxArray->data[c4_b_i]);
  }
}

static void c4_emxInit_cell_wrap_38_1(SFc4_wwtp3InstanceStruct *chartInstance,
  c4_emxArray_cell_wrap_38_1 *c4_pEmxArray)
{
  int32_T c4_i;
  (void)chartInstance;
  for (c4_i = 0; c4_i < 1; c4_i++) {
    c4_pEmxArray->size[c4_i] = 0;
  }
}

static void c4_emxFree_cell_wrap_38_1(SFc4_wwtp3InstanceStruct *chartInstance,
  c4_emxArray_cell_wrap_38_1 *c4_pEmxArray)
{
  int32_T c4_b_i;
  int32_T c4_i;
  int32_T c4_numEl;
  c4_numEl = 1;
  for (c4_i = 0; c4_i < 1; c4_i++) {
    c4_numEl *= c4_pEmxArray->size[c4_i];
  }

  for (c4_b_i = 0; c4_b_i < c4_numEl; c4_b_i++) {
    c4_emxFreeStruct_cell_wrap_38(chartInstance, &c4_pEmxArray->data[c4_b_i]);
  }
}

static void init_dsm_address_info(SFc4_wwtp3InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc4_wwtp3InstanceStruct *chartInstance)
{
  chartInstance->c4_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c4_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c4_oxygen = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c4_nitrates = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c4_ammonium = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c4_temperature = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 3);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c4_wwtp3_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1731092105U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1545149064U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1813412938U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(963938515U);
}

mxArray *sf_c4_wwtp3_third_party_uses_info(void)
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

mxArray *sf_c4_wwtp3_jit_fallback_info(void)
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

mxArray *sf_c4_wwtp3_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c4_wwtp3(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiA2YGRgYAPSHEDMxAABrFA+IxKGiLPAxRWAuKSyIBUkXlyU7JkCpPMSc8H8xNI"
    "Kz7y0fLD5FgwI89kImM8JFYcABQfK9EP854GknwWLfiEk/QJQfmZxfGJySWZZanyySXx5eUmBMc"
    "I8EAAAgzESew=="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c4_wwtp3_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "slhf7JNkqip9MYwuAVi1YN";
}

static void sf_opaque_initialize_c4_wwtp3(void *chartInstanceVar)
{
  initialize_params_c4_wwtp3((SFc4_wwtp3InstanceStruct*) chartInstanceVar);
  initialize_c4_wwtp3((SFc4_wwtp3InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c4_wwtp3(void *chartInstanceVar)
{
  enable_c4_wwtp3((SFc4_wwtp3InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c4_wwtp3(void *chartInstanceVar)
{
  disable_c4_wwtp3((SFc4_wwtp3InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c4_wwtp3(void *chartInstanceVar)
{
  sf_gateway_c4_wwtp3((SFc4_wwtp3InstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c4_wwtp3(SimStruct* S)
{
  return get_sim_state_c4_wwtp3((SFc4_wwtp3InstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c4_wwtp3(SimStruct* S, const mxArray *st)
{
  set_sim_state_c4_wwtp3((SFc4_wwtp3InstanceStruct*)sf_get_chart_instance_ptr(S),
    st);
}

static void sf_opaque_cleanup_runtime_resources_c4_wwtp3(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc4_wwtp3InstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_wwtp3_optimization_info();
    }

    mdl_cleanup_runtime_resources_c4_wwtp3((SFc4_wwtp3InstanceStruct*)
      chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c4_wwtp3(void *chartInstanceVar)
{
  mdl_start_c4_wwtp3((SFc4_wwtp3InstanceStruct*) chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc4_wwtp3InstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c4_wwtp3(void *chartInstanceVar)
{
  mdl_terminate_c4_wwtp3((SFc4_wwtp3InstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c4_wwtp3(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c4_wwtp3((SFc4_wwtp3InstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc4_wwtp3((SFc4_wwtp3InstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c4_wwtp3_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [21] = {
    "eNrtWE1v40QYnlSl2hXLatUDcFhpQeLABWk/QICEUNt8LEFNW+G0aLlUU/t1PMp4xp2PuEH8AX4",
    "Hf4Ib/wCuHLnBmQPiyDu2kw1JSDypgC3CkuuO7WeeeZ95vxzS6PYIHnfx/PZ1QnbwegvPLVIeL1",
    "XjxsxZ3t8mH1Xjr14mJJQRDEAENo7ZFfE7hE1PqKKpJv6HoCl8Blpya5gUXRHL+lgmYlAgQpwgk",
    "8p48WqWWs7EsGNF6Jj15wkLkyCRlkcHOCGNjgUf/xVvZs0JMraYgtB0ACKTKGkHSYfTwWoVlMmb",
    "CYRDbVNvrTSYwGbOVN2z3LCMQ/sKwq7QhqIKeo29gaEGmubKT2Rnrw4maJlmnFFRX+uE6gAy9A4",
    "Dp1mEf4+tQfVqYcOEKnMACR2BPmTDgl0KqMXONL59wQQ1UjHK2ylvutlq2nvC0cYehgT33SO090",
    "ABHWaSCeMZEEEHdW4LesGhBRd24MkbwKV10XDGIAflt79xU45A0QEcC781F3vUviqcchpLNbGGp",
    "XBG1X6Ivqsh8ssbGHQ6oOiO0MdpvLBQSNzVfcVG6Bu+ua7rwn+jXGfT0vv1RtiCtz0Cb7+a8nZC",
    "0aScaz9sX2aHMAJe8LeooRtgS34PsNYs6kv0DpdtPDOWFQwjocI2pYhYfa8czaGKwnaERaoGnKU",
    "uDCBCmadLn060Lo6sNjJtYsppHR7W5FvEdoUBFdMQatcYRZkGXHDhV568EdMukBCNKpnCytozlD",
    "G4EZTo2IpWLtUQNfYtZs+1cpHgh4ZogInZQJHk2ujdZ5TbmmtO9QDjB93jVGOW9eNFrIufjcAhD",
    "ROIXOVkHHqYZ3GCulusXcnfR2tHzIxboEPFsrqRZDGhY9F1KvXHGZyKoZC56CiZBlXntcKvADBr",
    "UCWYGBxgCVfjDi6+3qoVXPaL7O7b5DidqeH0wvnGUxBYDZ2trmugIUZVW2CLjAu6DjZgX2ITIzT",
    "TBgv1uCz1Zd1z/fsH5Hn/vr2kf78107/fq8bhu+d5brInDv9wBn+nRv8/4V2FIws4MsVNrm/P4B",
    "tLeMnMdZ7v9taf39+e49vCOw08HG5vBvcKWY3bqTT67k3y9Q9P+S/ffP/z5W+/7r61jr+xwN8o/",
    "ne4nxp+31d3q/H9SZ80zcqjhcTl3v1kzf6/Orf/bqx5Er//6dHwkmUf9p7ldv+MPXp2VOnsud7J",
    "/Tdcb4ZBW+QAFXaj6jvNjaktvx/m/XVnzfy3Z/wJGfauh6+n1+6cXrtFr3tOXUaD80nkLPrzpv7",
    "hiyP/MO6mrPN/Xf5+++rUh+0NceSG4K5rn2/du+nvP1yRb8nc+/deYDtW5Xuf/udFs+tH4lfvH1",
    "Tjj6ff282E8WhJx189xqY8Xvb0P+Lfv3vq91o1bjv9qh9mv3iyLygfY4tffkJVt0+U+31t+kgB1",
    "cu/o/6NejK57q3pp+7Mxbcb50xEMtfvPHr83uPr1Kc/AKX7D9c=",
    ""
  };

  static char newstr [1477] = "";
  newstr[0] = '\0';
  for (i = 0; i < 21; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c4_wwtp3(SimStruct *S)
{
  const char* newstr = sf_c4_wwtp3_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(2298487231U));
  ssSetChecksum1(S,(3899410383U));
  ssSetChecksum2(S,(1911017123U));
  ssSetChecksum3(S,(605221622U));
}

static void mdlRTW_c4_wwtp3(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c4_wwtp3(SimStruct *S)
{
  SFc4_wwtp3InstanceStruct *chartInstance;
  chartInstance = (SFc4_wwtp3InstanceStruct *)utMalloc(sizeof
    (SFc4_wwtp3InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc4_wwtp3InstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c4_wwtp3;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c4_wwtp3;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c4_wwtp3;
  chartInstance->chartInfo.mdlTerminate = sf_opaque_mdl_terminate_c4_wwtp3;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c4_wwtp3;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c4_wwtp3;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c4_wwtp3;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c4_wwtp3;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c4_wwtp3;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c4_wwtp3;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c4_wwtp3;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c4_wwtp3;
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
    chartInstance->c4_JITStateAnimation,
    chartInstance->c4_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c4_wwtp3(chartInstance);
}

void c4_wwtp3_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c4_wwtp3(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c4_wwtp3(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c4_wwtp3(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c4_wwtp3_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
