#include <SFML/Graphics.hpp>
#include <cassert>
#include <complex>

using Complex = std::complex<double>;

class Image
{
  sf::Image data_;

 public:
  Image(int w, int h)
  {
    assert(w > 0 && h > 0);
    data_.create(w, h, sf::Color::White);
  }
  void set(int r, int c)
  {
    assert(r >= 0 && r < static_cast<int>(data_.getSize().y));
    assert(c >= 0 && c < static_cast<int>(data_.getSize().x));
    data_.setPixel(c, r, sf::Color::Red);
  }
  void show() const;
};

bool is_in_mandelbrot_set(Complex const& c);

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

void Image::show() const
{
  sf::RenderWindow window(sf::VideoMode(data_.getSize().x, data_.getSize().y),
                          "Mandelbrot Set");
  window.setFramerateLimit(60);
  sf::Texture texture;
  texture.loadFromImage(data_);
  sf::Sprite sprite;
  sprite.setTexture(texture);

  while (window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed) {
        window.close();
      }
    }

    window.clear();

    window.draw(sprite);

    window.display();
  }
}

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
