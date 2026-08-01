#pragma once
#include <SFML/Graphics.hpp>

class Particle
{
    public:
        Particle();
        void setPosition(float x, float y);
        void draw(sf::RenderWindow& window);

    private:
        sf::CircleShape shape;
};