#include "SFML/Window/VideoMode.hpp"
#include <SFML/Graphics.hpp>



int main(int argv , char* argc[]) {
  sf::RenderWindow window(sf::VideoMode(640 , 640) , "First_Window");
  sf::RectangleShape rectangle(sf::Vector2f(120.0f, 120.0f));
  rectangle.setFillColor(sf::Color(46,52,64));
  rectangle.setPosition(260,260);


  while(window.isOpen()){
    sf::Event event;
    while(window.pollEvent(event)){
      if(event.type == sf::Event::Closed){
	window.close();
      }
    }

    window.clear(sf::Color(129,161,193));
    window.draw(rectangle);
    window.display();
  }
  return EXIT_SUCCESS;
}
