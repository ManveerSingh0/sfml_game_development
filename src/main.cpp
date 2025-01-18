#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>


int main(int argc , char* argv[]){
//   auto window = sf::RenderWindow(sf::VideoMode({1920u, 1080u}), "CMake SFML Project");
    sf::RenderWindow window(sf::VideoMode({800u, 800u}) , "First Project");


    //Creating our player 
    sf::RectangleShape player({120.0f, 120.0f});
    player.setFillColor(sf::Color::Red);
    player.setOrigin({60.0f, 60.0f});
    sf::Vector2<float>player_position({400.0f, 400.0f});
    player.setPosition(player_position);

    while (window.isOpen()){
        while (const std::optional event = window.pollEvent()){
            if (event->is<sf::Event::Closed>()){
                window.close();
            }
        }

        // window.clear(sf::Color::Yellow);
        window.clear(sf::Color(200,150,200,200));
        window.draw(player);
        window.display();
    }
}