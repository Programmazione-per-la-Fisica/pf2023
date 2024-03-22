#ifndef MANDELBROT_HPP
#define MANDELBROT_HPP

#include <complex>

namespace pf {

using Complex = std::complex<double>;

inline bool is_in_mandelbrot_set(Complex const& c)
{
  int i{0};
  Complex z{0., 0.};
  while (i < 256 && std::norm(z) < 2.) {
    ++i;
    z = z * z + c;
  }

  return i == 256;
}

} // namespace pf

#endif
