#include "ROAuth.h"

static const R_CallMethodDef R_CallDef[] = {
  {"ROAuth_POST", (DL_FUNC)&ROAuth_POST, 5},
  {"ROAuth_GET", (DL_FUNC)&ROAuth_GET, 5},
  {NULL, NULL, 0}
};

void R_init_ROAuth(DllInfo *info) {
  R_registerRoutines(info, NULL, R_CallDef, NULL, NULL);
}