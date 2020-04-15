#include <Rinternals.h>

SEXP Chello() {
  Rprintf("Hello World\n");
  return R_NilValue;
}
