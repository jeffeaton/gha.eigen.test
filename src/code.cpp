#include <Rcpp.h>
#include <RcppEigen.h>

#include "code.h"

using namespace Rcpp;

//' Add 1
//'
//' @param x a number
//'
//' @examples
//' add_one(3.5)
//' 
//' @export
//' 
// [[Rcpp::export]]

double add_one(const double x) {
  double v = x;
  add_one_t(&v);
  return(v);
}
