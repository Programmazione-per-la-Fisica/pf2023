#ifndef IMAGE_HPP
#define IMAGE_HPP

#include <SFML/Graphics.hpp>
#include <cassert>

namespace pf {

class Image
{
  sf::Image data_;

 public:
  Image(int w, int h)
  {
    assert(w > 0 && h > 0);
    data_.create(static_cast<unsigned>(w), static_cast<unsigned>(h), sf::Color::White);
  }
  void set(int r, int c)
  {
    assert(r >= 0 && r < static_cast<int>(data_.getSize().y));
    assert(c >= 0 && c < static_cast<int>(data_.getSize().x));
    data_.setPixel(static_cast<unsigned>(c), static_cast<unsigned>(r), sf::Color::Red);
  }
  void show() const;
};

} // namespace pf

#endif
