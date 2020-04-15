#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

extern SEXP Chello();

static const R_CallMethodDef CallEntries[] = {
    {"Chello", (DL_FUNC) &Chello, 0},
    {NULL, NULL, 0}
};

void R_init_r_gitlab_ci(DllInfo *dll)
{
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
