#include "SFML/Window/VideoMode.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>


int main(int argv , char* argc[]) {
  sf::RenderWindow window(sf::VideoMode(640 , 640) , "First_Window");
  sf::RectangleShape rectangle(sf::Vector2f(120.0f, 120.0f));
  rectangle.setFillColor(sf::Color(46,52,64));
  rectangle.setPosition(320 , 320);
  rectangle.setOrigin(rectangle.getSize().x / 2 , rectangle.getSize().y / 2); // this set the origin of the object to center or at any place you want


  sf::Texture wallpaper;
  if(!wallpaper.loadFromFile("/media/hardisk/wallpaper/2njap1xtwmw91(1).png")){
    std::cerr << "Error loading texture!" << std::endl;
  }



  sf::Vector2f target_size(200.0f , 200.0f);
  sf::Sprite sprite;
  sprite.setTexture(wallpaper);

  sf::Vector2u texture_size = wallpaper.getSize();
  sprite.setScale(
		  target_size.x / texture_size.x ,
		  target_size.y / texture_size.y
		  );
  
  while(window.isOpen()){
    sf::Event event;
    while(window.pollEvent(event)){
      if(event.type == sf::Event::Closed){
	window.close();
      }
    }

    window.clear(sf::Color(129,161,193));
    window.draw(rectangle);
    window.draw(sprite);
    window.display();
  }
  return EXIT_SUCCESS;
}
