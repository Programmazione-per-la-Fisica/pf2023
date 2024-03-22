#include "image.hpp"
#include "mandelbrot.hpp"

int main()
{
  auto const x_min = -2.;
  auto const x_max = 1.;
  auto const y_min = -1.;
  auto const y_max = 1.;
  auto const width = 600;
  auto const height = 400;
  auto const dx = (x_max - x_min) / width;
  auto const dy = (y_max - y_min) / height;

  pf::Image image{width, height};
  for (int row{0}; row != height; ++row) {
    for (int col{0}; col != width; ++col) {
      if (pf::is_in_mandelbrot_set({x_min + col * dx, y_min + row * dy})) {
        image.set(row, col);
      }
    }
  }

  image.show();
}
