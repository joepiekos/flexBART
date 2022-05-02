// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// flexBART_fit
Rcpp::List flexBART_fit(Rcpp::NumericVector Y_train, Rcpp::NumericMatrix tX_cont_train, Rcpp::IntegerMatrix tX_cat_train, Rcpp::NumericMatrix tX_cont_test, Rcpp::IntegerMatrix tX_cat_test, Rcpp::LogicalVector unif_cuts, Rcpp::Nullable<Rcpp::List> cutpoints_list, Rcpp::Nullable<Rcpp::List> cat_levels_list, Rcpp::LogicalVector graph_split, int graph_cut_type, Rcpp::Nullable<Rcpp::List> adj_support_list, bool rc_split, double prob_rc, double a_rc, double b_rc, bool sparse, double a_u, double b_u, double mu0, double tau, double lambda, double nu, int M, int nd, int burn, int thin, bool save_trees, bool verbose, int print_every, bool check_ss_map);
RcppExport SEXP _flexBART_flexBART_fit(SEXP Y_trainSEXP, SEXP tX_cont_trainSEXP, SEXP tX_cat_trainSEXP, SEXP tX_cont_testSEXP, SEXP tX_cat_testSEXP, SEXP unif_cutsSEXP, SEXP cutpoints_listSEXP, SEXP cat_levels_listSEXP, SEXP graph_splitSEXP, SEXP graph_cut_typeSEXP, SEXP adj_support_listSEXP, SEXP rc_splitSEXP, SEXP prob_rcSEXP, SEXP a_rcSEXP, SEXP b_rcSEXP, SEXP sparseSEXP, SEXP a_uSEXP, SEXP b_uSEXP, SEXP mu0SEXP, SEXP tauSEXP, SEXP lambdaSEXP, SEXP nuSEXP, SEXP MSEXP, SEXP ndSEXP, SEXP burnSEXP, SEXP thinSEXP, SEXP save_treesSEXP, SEXP verboseSEXP, SEXP print_everySEXP, SEXP check_ss_mapSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type Y_train(Y_trainSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type tX_cont_train(tX_cont_trainSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerMatrix >::type tX_cat_train(tX_cat_trainSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type tX_cont_test(tX_cont_testSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerMatrix >::type tX_cat_test(tX_cat_testSEXP);
    Rcpp::traits::input_parameter< Rcpp::LogicalVector >::type unif_cuts(unif_cutsSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::List> >::type cutpoints_list(cutpoints_listSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::List> >::type cat_levels_list(cat_levels_listSEXP);
    Rcpp::traits::input_parameter< Rcpp::LogicalVector >::type graph_split(graph_splitSEXP);
    Rcpp::traits::input_parameter< int >::type graph_cut_type(graph_cut_typeSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::List> >::type adj_support_list(adj_support_listSEXP);
    Rcpp::traits::input_parameter< bool >::type rc_split(rc_splitSEXP);
    Rcpp::traits::input_parameter< double >::type prob_rc(prob_rcSEXP);
    Rcpp::traits::input_parameter< double >::type a_rc(a_rcSEXP);
    Rcpp::traits::input_parameter< double >::type b_rc(b_rcSEXP);
    Rcpp::traits::input_parameter< bool >::type sparse(sparseSEXP);
    Rcpp::traits::input_parameter< double >::type a_u(a_uSEXP);
    Rcpp::traits::input_parameter< double >::type b_u(b_uSEXP);
    Rcpp::traits::input_parameter< double >::type mu0(mu0SEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< int >::type M(MSEXP);
    Rcpp::traits::input_parameter< int >::type nd(ndSEXP);
    Rcpp::traits::input_parameter< int >::type burn(burnSEXP);
    Rcpp::traits::input_parameter< int >::type thin(thinSEXP);
    Rcpp::traits::input_parameter< bool >::type save_trees(save_treesSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type print_every(print_everySEXP);
    Rcpp::traits::input_parameter< bool >::type check_ss_map(check_ss_mapSEXP);
    rcpp_result_gen = Rcpp::wrap(flexBART_fit(Y_train, tX_cont_train, tX_cat_train, tX_cont_test, tX_cat_test, unif_cuts, cutpoints_list, cat_levels_list, graph_split, graph_cut_type, adj_support_list, rc_split, prob_rc, a_rc, b_rc, sparse, a_u, b_u, mu0, tau, lambda, nu, M, nd, burn, thin, save_trees, verbose, print_every, check_ss_map));
    return rcpp_result_gen;
END_RCPP
}
// flexBARTfast_fit
Rcpp::List flexBARTfast_fit(Rcpp::NumericVector Y_train, Rcpp::NumericMatrix tX_cont_train, Rcpp::IntegerMatrix tX_cat_train, Rcpp::NumericMatrix tX_cont_test, Rcpp::IntegerMatrix tX_cat_test, Rcpp::LogicalVector unif_cuts, Rcpp::Nullable<Rcpp::List> cutpoints_list, Rcpp::Nullable<Rcpp::List> cat_levels_list, Rcpp::LogicalVector graph_split, int graph_cut_type, Rcpp::Nullable<Rcpp::List> adj_support_list, bool rc_split, double prob_rc, double a_rc, double b_rc, bool sparse, double a_u, double b_u, double mu0, double tau, double lambda, double nu, int M, int nd, int burn, int thin, bool save_trees, bool verbose, int print_every, bool check_ss_map);
RcppExport SEXP _flexBART_flexBARTfast_fit(SEXP Y_trainSEXP, SEXP tX_cont_trainSEXP, SEXP tX_cat_trainSEXP, SEXP tX_cont_testSEXP, SEXP tX_cat_testSEXP, SEXP unif_cutsSEXP, SEXP cutpoints_listSEXP, SEXP cat_levels_listSEXP, SEXP graph_splitSEXP, SEXP graph_cut_typeSEXP, SEXP adj_support_listSEXP, SEXP rc_splitSEXP, SEXP prob_rcSEXP, SEXP a_rcSEXP, SEXP b_rcSEXP, SEXP sparseSEXP, SEXP a_uSEXP, SEXP b_uSEXP, SEXP mu0SEXP, SEXP tauSEXP, SEXP lambdaSEXP, SEXP nuSEXP, SEXP MSEXP, SEXP ndSEXP, SEXP burnSEXP, SEXP thinSEXP, SEXP save_treesSEXP, SEXP verboseSEXP, SEXP print_everySEXP, SEXP check_ss_mapSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type Y_train(Y_trainSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type tX_cont_train(tX_cont_trainSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerMatrix >::type tX_cat_train(tX_cat_trainSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type tX_cont_test(tX_cont_testSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerMatrix >::type tX_cat_test(tX_cat_testSEXP);
    Rcpp::traits::input_parameter< Rcpp::LogicalVector >::type unif_cuts(unif_cutsSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::List> >::type cutpoints_list(cutpoints_listSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::List> >::type cat_levels_list(cat_levels_listSEXP);
    Rcpp::traits::input_parameter< Rcpp::LogicalVector >::type graph_split(graph_splitSEXP);
    Rcpp::traits::input_parameter< int >::type graph_cut_type(graph_cut_typeSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::List> >::type adj_support_list(adj_support_listSEXP);
    Rcpp::traits::input_parameter< bool >::type rc_split(rc_splitSEXP);
    Rcpp::traits::input_parameter< double >::type prob_rc(prob_rcSEXP);
    Rcpp::traits::input_parameter< double >::type a_rc(a_rcSEXP);
    Rcpp::traits::input_parameter< double >::type b_rc(b_rcSEXP);
    Rcpp::traits::input_parameter< bool >::type sparse(sparseSEXP);
    Rcpp::traits::input_parameter< double >::type a_u(a_uSEXP);
    Rcpp::traits::input_parameter< double >::type b_u(b_uSEXP);
    Rcpp::traits::input_parameter< double >::type mu0(mu0SEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< int >::type M(MSEXP);
    Rcpp::traits::input_parameter< int >::type nd(ndSEXP);
    Rcpp::traits::input_parameter< int >::type burn(burnSEXP);
    Rcpp::traits::input_parameter< int >::type thin(thinSEXP);
    Rcpp::traits::input_parameter< bool >::type save_trees(save_treesSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type print_every(print_everySEXP);
    Rcpp::traits::input_parameter< bool >::type check_ss_map(check_ss_mapSEXP);
    rcpp_result_gen = Rcpp::wrap(flexBARTfast_fit(Y_train, tX_cont_train, tX_cat_train, tX_cont_test, tX_cat_test, unif_cuts, cutpoints_list, cat_levels_list, graph_split, graph_cut_type, adj_support_list, rc_split, prob_rc, a_rc, b_rc, sparse, a_u, b_u, mu0, tau, lambda, nu, M, nd, burn, thin, save_trees, verbose, print_every, check_ss_map));
    return rcpp_result_gen;
END_RCPP
}
// predict_flexBART
arma::mat predict_flexBART(Rcpp::List tree_draws, Rcpp::NumericMatrix tX_cont, Rcpp::IntegerMatrix tX_cat, Rcpp::Nullable<Rcpp::List> cat_levels_list, Rcpp::Nullable<Rcpp::List> adj_support_list, Rcpp::LogicalVector graph_split, bool verbose, int print_every);
RcppExport SEXP _flexBART_predict_flexBART(SEXP tree_drawsSEXP, SEXP tX_contSEXP, SEXP tX_catSEXP, SEXP cat_levels_listSEXP, SEXP adj_support_listSEXP, SEXP graph_splitSEXP, SEXP verboseSEXP, SEXP print_everySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type tree_draws(tree_drawsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type tX_cont(tX_contSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerMatrix >::type tX_cat(tX_catSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::List> >::type cat_levels_list(cat_levels_listSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::List> >::type adj_support_list(adj_support_listSEXP);
    Rcpp::traits::input_parameter< Rcpp::LogicalVector >::type graph_split(graph_splitSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type print_every(print_everySEXP);
    rcpp_result_gen = Rcpp::wrap(predict_flexBART(tree_draws, tX_cont, tX_cat, cat_levels_list, adj_support_list, graph_split, verbose, print_every));
    return rcpp_result_gen;
END_RCPP
}
// drawTree
Rcpp::List drawTree(Rcpp::NumericMatrix tX_cont, Rcpp::IntegerMatrix tX_cat, Rcpp::LogicalVector unif_cuts, Rcpp::Nullable<Rcpp::List> cutpoints_list, Rcpp::Nullable<Rcpp::List> cat_levels_list, Rcpp::LogicalVector graph_split, int graph_cut_type, Rcpp::Nullable<Rcpp::List> adj_support_list, bool rc_split, double prob_rc, double alpha, double beta, double mu0, double tau);
RcppExport SEXP _flexBART_drawTree(SEXP tX_contSEXP, SEXP tX_catSEXP, SEXP unif_cutsSEXP, SEXP cutpoints_listSEXP, SEXP cat_levels_listSEXP, SEXP graph_splitSEXP, SEXP graph_cut_typeSEXP, SEXP adj_support_listSEXP, SEXP rc_splitSEXP, SEXP prob_rcSEXP, SEXP alphaSEXP, SEXP betaSEXP, SEXP mu0SEXP, SEXP tauSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type tX_cont(tX_contSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerMatrix >::type tX_cat(tX_catSEXP);
    Rcpp::traits::input_parameter< Rcpp::LogicalVector >::type unif_cuts(unif_cutsSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::List> >::type cutpoints_list(cutpoints_listSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::List> >::type cat_levels_list(cat_levels_listSEXP);
    Rcpp::traits::input_parameter< Rcpp::LogicalVector >::type graph_split(graph_splitSEXP);
    Rcpp::traits::input_parameter< int >::type graph_cut_type(graph_cut_typeSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::List> >::type adj_support_list(adj_support_listSEXP);
    Rcpp::traits::input_parameter< bool >::type rc_split(rc_splitSEXP);
    Rcpp::traits::input_parameter< double >::type prob_rc(prob_rcSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< double >::type mu0(mu0SEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    rcpp_result_gen = Rcpp::wrap(drawTree(tX_cont, tX_cat, unif_cuts, cutpoints_list, cat_levels_list, graph_split, graph_cut_type, adj_support_list, rc_split, prob_rc, alpha, beta, mu0, tau));
    return rcpp_result_gen;
END_RCPP
}
// drawEnsemble
Rcpp::List drawEnsemble(Rcpp::NumericMatrix tX_cont, Rcpp::IntegerMatrix tX_cat, Rcpp::LogicalVector unif_cuts, Rcpp::Nullable<Rcpp::List> cutpoints_list, Rcpp::Nullable<Rcpp::List> cat_levels_list, Rcpp::LogicalVector graph_split, int graph_cut_type, Rcpp::Nullable<Rcpp::List> adj_support_list, bool rc_split, double prob_rc, double alpha, double beta, double mu0, double tau, int M, bool verbose, int print_every);
RcppExport SEXP _flexBART_drawEnsemble(SEXP tX_contSEXP, SEXP tX_catSEXP, SEXP unif_cutsSEXP, SEXP cutpoints_listSEXP, SEXP cat_levels_listSEXP, SEXP graph_splitSEXP, SEXP graph_cut_typeSEXP, SEXP adj_support_listSEXP, SEXP rc_splitSEXP, SEXP prob_rcSEXP, SEXP alphaSEXP, SEXP betaSEXP, SEXP mu0SEXP, SEXP tauSEXP, SEXP MSEXP, SEXP verboseSEXP, SEXP print_everySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type tX_cont(tX_contSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerMatrix >::type tX_cat(tX_catSEXP);
    Rcpp::traits::input_parameter< Rcpp::LogicalVector >::type unif_cuts(unif_cutsSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::List> >::type cutpoints_list(cutpoints_listSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::List> >::type cat_levels_list(cat_levels_listSEXP);
    Rcpp::traits::input_parameter< Rcpp::LogicalVector >::type graph_split(graph_splitSEXP);
    Rcpp::traits::input_parameter< int >::type graph_cut_type(graph_cut_typeSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::List> >::type adj_support_list(adj_support_listSEXP);
    Rcpp::traits::input_parameter< bool >::type rc_split(rc_splitSEXP);
    Rcpp::traits::input_parameter< double >::type prob_rc(prob_rcSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< double >::type mu0(mu0SEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< int >::type M(MSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type print_every(print_everySEXP);
    rcpp_result_gen = Rcpp::wrap(drawEnsemble(tX_cont, tX_cat, unif_cuts, cutpoints_list, cat_levels_list, graph_split, graph_cut_type, adj_support_list, rc_split, prob_rc, alpha, beta, mu0, tau, M, verbose, print_every));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_flexBART_flexBART_fit", (DL_FUNC) &_flexBART_flexBART_fit, 30},
    {"_flexBART_flexBARTfast_fit", (DL_FUNC) &_flexBART_flexBARTfast_fit, 30},
    {"_flexBART_predict_flexBART", (DL_FUNC) &_flexBART_predict_flexBART, 8},
    {"_flexBART_drawTree", (DL_FUNC) &_flexBART_drawTree, 14},
    {"_flexBART_drawEnsemble", (DL_FUNC) &_flexBART_drawEnsemble, 17},
    {NULL, NULL, 0}
};

RcppExport void R_init_flexBART(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
