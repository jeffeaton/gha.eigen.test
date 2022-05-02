#include <Rcpp.h>
using namespace Rcpp;

//' Add 1
//'
//' @param x a number
//'
//' @export
//' 
// [[Rcpp::export]]

double add_one(const double x) {
  return(x + 1.0);
}
