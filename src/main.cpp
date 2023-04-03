#include <iostream>
#include <SFML/Graphics.hpp>
#define GL_SILENCE_DEPRECATION
#include <GL/gl.h>


// Windows:
// g++
// Linux:
// g++ ./src/main.cpp -lsfml-graphics -lsfml-window -lsfml-system -l GL -std=c++11 -I./headers -o main


#define WINDOW_WIDTH    800
#define WINDOW_HEIGHT   600


class Core
{
    private:

    public:
        Core();
        void run(sf::RenderWindow window);
        void draw();
};


Core::Core()
{

}


/**
 * @brief Method to handle the gameclock of the program
 * 
 * @param window
 **/
void Core::run(sf::RenderWindow window)
{
    // Clock clock;

    // if (clock.getElapsedTime().asSeconds()) {
        
    // } else {

    // }
}


/**
 * @brief Method to draw a window to the screen
 * 
 * 
 **/
void Core::draw()
{
    sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Solar System Simulation");

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        // window.draw(shape);
        window.display();
    }
}


int main()
{
    Core core;

    core.draw();

    return 0;
}
