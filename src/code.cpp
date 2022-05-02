#include <Rcpp.h>
#include <RcppEigen.h>

#include <unsupported/Eigen/CXX11/Tensor>

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
  
  Eigen::TensorMap<Eigen::Tensor<double, 1>> v_t(&v, 1);
  v_t(0) = v_t(0) + 1.0;
    
  return(v);
}
