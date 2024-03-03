#include <cassert>
#include <complex>
#include <iostream>
#include <string>

using Complex = std::complex<double>;

bool is_in_mandelbrot_set(Complex const& c)
{
  int i{0};
  Complex z{0., 0.};
  while (i < 256 && std::norm(z) < 2.) {
    ++i;
    z = z * z + c;
  }

  return i == 256;
}

class Image
{
  int width_;
  int height_;
  std::string data_;

 public:
  Image(int w, int h) : width_{w}, height_{h}
  {
    assert(w > 0 && h > 0);
    for (int r{0}; r != h; ++r) {
      data_ += std::string(w, ' ') + '\n';
    }
  }
  void set(int r, int c)
  {
    assert(r >= 0 && r < height_);
    assert(c >= 0 && c < width_);
    auto index = r * (width_ + 1) + c;
    assert(index >= 0 && index < static_cast<int>(data_.size()));
    data_[index] = '*';
  }
  void show() const
  {
    std::cout << data_;
  }
};

int main()
{
  auto const x_min = -2.;
  auto const x_max = 1.;
  auto const y_min = -1.;
  auto const y_max = 1.;
  auto const width = 60;
  auto const height = 40;
  auto const dx = (x_max - x_min) / width;
  auto const dy = (y_max - y_min) / height;

  Image image{width, height};
  for (int row{0}; row != height; ++row) {
    for (int col{0}; col != width; ++col) {
      if (is_in_mandelbrot_set({x_min + col * dx, y_min + row * dy})) {
        image.set(row, col);
      }
    }
  }

  image.show();
}