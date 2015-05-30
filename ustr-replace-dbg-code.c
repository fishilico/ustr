#define USTR_CONF_INCLUDE_CODEONLY_HEADERS 0
#define USTR_CONF_INCLUDE_INTERNAL_HEADERS 1
#include "ustr-conf-debug.h"
#define USTR_CONF_USE_DYNAMIC_CONF USTR_CONF_HAVE_DYNAMIC_CONF
#define USTR_CONF_e_PROTO  extern
#define USTR_CONF_i_PROTO  static inline
#define USTR_CONF_E_PROTO  extern
#define USTR_CONF_I_PROTO  static inline
#define USTR_CONF_EI_PROTO static
#define USTR_CONF_II_PROTO static inline
#include "ustr-main.h"
#include "ustr-set.h"
#include "ustr-srch.h"
#include "ustr-sub.h"
#undef  USTR_CONF_INCLUDE_CODEONLY_HEADERS
#define USTR_CONF_INCLUDE_CODEONLY_HEADERS 1
#undef  USTR_CONF_i_PROTO
#define USTR_CONF_i_PROTO  
#undef  USTR_CONF_I_PROTO
#define USTR_CONF_I_PROTO
#undef  USTR_CONF_II_PROTO
#define USTR_CONF_II_PROTO inline
#include "ustr-replace.h"
