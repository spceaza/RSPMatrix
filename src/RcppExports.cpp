// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcpp_hello_world
List rcpp_hello_world();
RcppExport SEXP _RSPMatrix_rcpp_hello_world() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_hello_world());
    return rcpp_result_gen;
END_RCPP
}
// SetSequential
void SetSequential();
RcppExport SEXP _RSPMatrix_SetSequential() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    SetSequential();
    return R_NilValue;
END_RCPP
}
// SetMulticore
void SetMulticore();
RcppExport SEXP _RSPMatrix_SetMulticore() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    SetMulticore();
    return R_NilValue;
END_RCPP
}
// SetGPU
void SetGPU();
RcppExport SEXP _RSPMatrix_SetGPU() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    SetGPU();
    return R_NilValue;
END_RCPP
}
// SPMatrix
SEXP SPMatrix(double rows, double columns);
RcppExport SEXP _RSPMatrix_SPMatrix(SEXP rowsSEXP, SEXP columnsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type rows(rowsSEXP);
    Rcpp::traits::input_parameter< double >::type columns(columnsSEXP);
    rcpp_result_gen = Rcpp::wrap(SPMatrix(rows, columns));
    return rcpp_result_gen;
END_RCPP
}
// FillSPMatrix
void FillSPMatrix(SEXP m);
RcppExport SEXP _RSPMatrix_FillSPMatrix(SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type m(mSEXP);
    FillSPMatrix(m);
    return R_NilValue;
END_RCPP
}
// SPMultiplication
void SPMultiplication(SEXP a, SEXP b);
RcppExport SEXP _RSPMatrix_SPMultiplication(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type a(aSEXP);
    Rcpp::traits::input_parameter< SEXP >::type b(bSEXP);
    SPMultiplication(a, b);
    return R_NilValue;
END_RCPP
}
// SPAddition
void SPAddition(SEXP a, SEXP b);
RcppExport SEXP _RSPMatrix_SPAddition(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type a(aSEXP);
    Rcpp::traits::input_parameter< SEXP >::type b(bSEXP);
    SPAddition(a, b);
    return R_NilValue;
END_RCPP
}
// PrintSPMatrix
void PrintSPMatrix(SEXP m);
RcppExport SEXP _RSPMatrix_PrintSPMatrix(SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type m(mSEXP);
    PrintSPMatrix(m);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_RSPMatrix_rcpp_hello_world", (DL_FUNC) &_RSPMatrix_rcpp_hello_world, 0},
    {"_RSPMatrix_SetSequential", (DL_FUNC) &_RSPMatrix_SetSequential, 0},
    {"_RSPMatrix_SetMulticore", (DL_FUNC) &_RSPMatrix_SetMulticore, 0},
    {"_RSPMatrix_SetGPU", (DL_FUNC) &_RSPMatrix_SetGPU, 0},
    {"_RSPMatrix_SPMatrix", (DL_FUNC) &_RSPMatrix_SPMatrix, 2},
    {"_RSPMatrix_FillSPMatrix", (DL_FUNC) &_RSPMatrix_FillSPMatrix, 1},
    {"_RSPMatrix_SPMultiplication", (DL_FUNC) &_RSPMatrix_SPMultiplication, 2},
    {"_RSPMatrix_SPAddition", (DL_FUNC) &_RSPMatrix_SPAddition, 2},
    {"_RSPMatrix_PrintSPMatrix", (DL_FUNC) &_RSPMatrix_PrintSPMatrix, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_RSPMatrix(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
