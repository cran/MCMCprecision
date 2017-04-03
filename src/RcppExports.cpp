// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/MCMCprecision.h"
#include <RcppArmadillo.h>
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// inv_digamma
NumericVector inv_digamma(NumericVector y, int iter);
RcppExport SEXP MCMCprecision_inv_digamma(SEXP ySEXP, SEXP iterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type iter(iterSEXP);
    rcpp_result_gen = Rcpp::wrap(inv_digamma(y, iter));
    return rcpp_result_gen;
END_RCPP
}
// dirichlet_fp
NumericVector dirichlet_fp(NumericVector alpha, NumericVector logx_mean, int maxit, double abstol);
RcppExport SEXP MCMCprecision_dirichlet_fp(SEXP alphaSEXP, SEXP logx_meanSEXP, SEXP maxitSEXP, SEXP abstolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type logx_mean(logx_meanSEXP);
    Rcpp::traits::input_parameter< int >::type maxit(maxitSEXP);
    Rcpp::traits::input_parameter< double >::type abstol(abstolSEXP);
    rcpp_result_gen = Rcpp::wrap(dirichlet_fp(alpha, logx_mean, maxit, abstol));
    return rcpp_result_gen;
END_RCPP
}
// sim_mc
arma::vec sim_mc(int n, arma::mat P, int start);
RcppExport SEXP MCMCprecision_sim_mc(SEXP nSEXP, SEXP PSEXP, SEXP startSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type P(PSEXP);
    Rcpp::traits::input_parameter< int >::type start(startSEXP);
    rcpp_result_gen = Rcpp::wrap(sim_mc(n, P, start));
    return rcpp_result_gen;
END_RCPP
}
// stationaryArma
arma::mat stationaryArma(arma::mat N, double epsilon, int sample, bool display_progress, double digits);
RcppExport SEXP MCMCprecision_stationaryArma(SEXP NSEXP, SEXP epsilonSEXP, SEXP sampleSEXP, SEXP display_progressSEXP, SEXP digitsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type N(NSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< int >::type sample(sampleSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    Rcpp::traits::input_parameter< double >::type digits(digitsSEXP);
    rcpp_result_gen = Rcpp::wrap(stationaryArma(N, epsilon, sample, display_progress, digits));
    return rcpp_result_gen;
END_RCPP
}
// stationaryArmaSparse
arma::mat stationaryArmaSparse(arma::sp_mat N, int sample, bool display_progress, double digits);
RcppExport SEXP MCMCprecision_stationaryArmaSparse(SEXP NSEXP, SEXP sampleSEXP, SEXP display_progressSEXP, SEXP digitsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::sp_mat >::type N(NSEXP);
    Rcpp::traits::input_parameter< int >::type sample(sampleSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    Rcpp::traits::input_parameter< double >::type digits(digitsSEXP);
    rcpp_result_gen = Rcpp::wrap(stationaryArmaSparse(N, sample, display_progress, digits));
    return rcpp_result_gen;
END_RCPP
}
// stationaryEigen
Eigen::MatrixXd stationaryEigen(Eigen::MatrixXd N, double epsilon, int sample, bool display_progress, double digits);
RcppExport SEXP MCMCprecision_stationaryEigen(SEXP NSEXP, SEXP epsilonSEXP, SEXP sampleSEXP, SEXP display_progressSEXP, SEXP digitsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type N(NSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< int >::type sample(sampleSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    Rcpp::traits::input_parameter< double >::type digits(digitsSEXP);
    rcpp_result_gen = Rcpp::wrap(stationaryEigen(N, epsilon, sample, display_progress, digits));
    return rcpp_result_gen;
END_RCPP
}
// stationary_mle
NumericVector stationary_mle(NumericVector pi, NumericMatrix N, double abstol, int maxit);
RcppExport SEXP MCMCprecision_stationary_mle(SEXP piSEXP, SEXP NSEXP, SEXP abstolSEXP, SEXP maxitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type pi(piSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type N(NSEXP);
    Rcpp::traits::input_parameter< double >::type abstol(abstolSEXP);
    Rcpp::traits::input_parameter< int >::type maxit(maxitSEXP);
    rcpp_result_gen = Rcpp::wrap(stationary_mle(pi, N, abstol, maxit));
    return rcpp_result_gen;
END_RCPP
}