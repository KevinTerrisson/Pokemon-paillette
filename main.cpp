#include "Playground.h"
#include "macro.h"

#include <iostream>
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(WINDOW_SIZE_X, WINDOW_SIZE_Y), "SFML works!");
    Playground pg;

    pg.load();
        
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        for (int i = 0; i < WINDOW_SIZE_Y / SIZE_TILE; i++) {
            for (int j = 0; j < WINDOW_SIZE_X / SIZE_TILE; j++) {
                window.draw(pg.GetSprite(i, j));
            }
        }
        window.display();
    }

    return 0;
}