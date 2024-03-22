#include "image.hpp"

namespace pf {

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

} // namespace pf