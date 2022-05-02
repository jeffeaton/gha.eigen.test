#ifndef CODE_H
#define CODE_H

#include <unsupported/Eigen/CXX11/Tensor>

template <typename T>
void add_one_t(T *v) {

  Eigen::TensorMap<Eigen::Tensor<T, 1>> v_t(v, 1);
  v_t(0) = v_t(0) + 1.0;

  return;
}

#endif // CODE_H
