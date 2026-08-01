#pragma once
#include <SFML/Graphics.hpp>

class Slider
{
    public:
        Slider(float x,
               float y,
               float width,
               float minValue,
               float maxValue);
        void update(sf::Vector2f mousePosition, bool mousePressed);
        void draw(sf::RenderWindow& window);
        float getValue() const;

    private:
        sf::RectangleShape bar;
        sf::CircleShape knob;

        float value;

        float minValue;
        float maxValue;

        float positionX;
        float positionY;
        float width;
};