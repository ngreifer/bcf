// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// bcfoverparRcppClean
List bcfoverparRcppClean(NumericVector y_, NumericVector z_, NumericVector w_, NumericVector x_con_, NumericVector x_mod_, List x_con_info_list, List x_mod_info_list, arma::mat random_des, arma::mat random_var, arma::mat random_var_ix, double random_var_df, int burn, int nd, int thin, int ntree_mod, int ntree_con, double lambda, double nu, double con_sd, double mod_sd, double con_alpha, double con_beta, double mod_alpha, double mod_beta, CharacterVector treef_con_name_, CharacterVector treef_mod_name_, int status_interval, bool RJ, bool use_mscale, bool use_bscale, bool b_half_normal, bool prior_sample, double trt_init, bool verbose_sigma);
RcppExport SEXP _bcf2_bcfoverparRcppClean(SEXP y_SEXP, SEXP z_SEXP, SEXP w_SEXP, SEXP x_con_SEXP, SEXP x_mod_SEXP, SEXP x_con_info_listSEXP, SEXP x_mod_info_listSEXP, SEXP random_desSEXP, SEXP random_varSEXP, SEXP random_var_ixSEXP, SEXP random_var_dfSEXP, SEXP burnSEXP, SEXP ndSEXP, SEXP thinSEXP, SEXP ntree_modSEXP, SEXP ntree_conSEXP, SEXP lambdaSEXP, SEXP nuSEXP, SEXP con_sdSEXP, SEXP mod_sdSEXP, SEXP con_alphaSEXP, SEXP con_betaSEXP, SEXP mod_alphaSEXP, SEXP mod_betaSEXP, SEXP treef_con_name_SEXP, SEXP treef_mod_name_SEXP, SEXP status_intervalSEXP, SEXP RJSEXP, SEXP use_mscaleSEXP, SEXP use_bscaleSEXP, SEXP b_half_normalSEXP, SEXP prior_sampleSEXP, SEXP trt_initSEXP, SEXP verbose_sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type y_(y_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type z_(z_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type w_(w_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x_con_(x_con_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x_mod_(x_mod_SEXP);
    Rcpp::traits::input_parameter< List >::type x_con_info_list(x_con_info_listSEXP);
    Rcpp::traits::input_parameter< List >::type x_mod_info_list(x_mod_info_listSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type random_des(random_desSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type random_var(random_varSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type random_var_ix(random_var_ixSEXP);
    Rcpp::traits::input_parameter< double >::type random_var_df(random_var_dfSEXP);
    Rcpp::traits::input_parameter< int >::type burn(burnSEXP);
    Rcpp::traits::input_parameter< int >::type nd(ndSEXP);
    Rcpp::traits::input_parameter< int >::type thin(thinSEXP);
    Rcpp::traits::input_parameter< int >::type ntree_mod(ntree_modSEXP);
    Rcpp::traits::input_parameter< int >::type ntree_con(ntree_conSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< double >::type con_sd(con_sdSEXP);
    Rcpp::traits::input_parameter< double >::type mod_sd(mod_sdSEXP);
    Rcpp::traits::input_parameter< double >::type con_alpha(con_alphaSEXP);
    Rcpp::traits::input_parameter< double >::type con_beta(con_betaSEXP);
    Rcpp::traits::input_parameter< double >::type mod_alpha(mod_alphaSEXP);
    Rcpp::traits::input_parameter< double >::type mod_beta(mod_betaSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type treef_con_name_(treef_con_name_SEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type treef_mod_name_(treef_mod_name_SEXP);
    Rcpp::traits::input_parameter< int >::type status_interval(status_intervalSEXP);
    Rcpp::traits::input_parameter< bool >::type RJ(RJSEXP);
    Rcpp::traits::input_parameter< bool >::type use_mscale(use_mscaleSEXP);
    Rcpp::traits::input_parameter< bool >::type use_bscale(use_bscaleSEXP);
    Rcpp::traits::input_parameter< bool >::type b_half_normal(b_half_normalSEXP);
    Rcpp::traits::input_parameter< bool >::type prior_sample(prior_sampleSEXP);
    Rcpp::traits::input_parameter< double >::type trt_init(trt_initSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose_sigma(verbose_sigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(bcfoverparRcppClean(y_, z_, w_, x_con_, x_mod_, x_con_info_list, x_mod_info_list, random_des, random_var, random_var_ix, random_var_df, burn, nd, thin, ntree_mod, ntree_con, lambda, nu, con_sd, mod_sd, con_alpha, con_beta, mod_alpha, mod_beta, treef_con_name_, treef_mod_name_, status_interval, RJ, use_mscale, use_bscale, b_half_normal, prior_sample, trt_init, verbose_sigma));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP _rcpp_module_boot_TreeSamples();

static const R_CallMethodDef CallEntries[] = {
    {"_bcf2_bcfoverparRcppClean", (DL_FUNC) &_bcf2_bcfoverparRcppClean, 34},
    {"_rcpp_module_boot_TreeSamples", (DL_FUNC) &_rcpp_module_boot_TreeSamples, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_bcf2(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
