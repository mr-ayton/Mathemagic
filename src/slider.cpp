#include "slider.hpp"
#include <algorithm>

SliderX::SliderX(float x,
               float y,
               float width,
               float minValue,
               float maxValue)
{
    positionX = x;
    positionY = y;
    this -> width = width;
    this -> minValue = minValue;
    this -> maxValue = maxValue;

    value = (minValue + maxValue) / 2;

    bar.setSize({width, 5});
    bar.setPosition({x, y});

    bar.setFillColor(sf::Color::White);

    knob.setRadius(10);
    knob.setFillColor(sf::Color::Cyan);

    knob.setOrigin({10, 10});

    float percent = (value - minValue) / (maxValue - minValue);
    float knobX = x + percent * width;

    knob.setPosition({knobX, y + 2.5f});
}

SliderY::SliderY(float x,
               float y,
               float width,
               float minValue,
               float maxValue)
{
    positionX = x;
    positionY = y;
    this -> width = width;
    this -> minValue = minValue;
    this -> maxValue = maxValue;

    value = (minValue + maxValue) / 2;

    bar.setSize({width, 5});
    bar.setPosition({x, y});

    bar.setFillColor(sf::Color::White);

    knob.setRadius(10);
    knob.setFillColor(sf::Color::Cyan);

    knob.setOrigin({10, 10});

    float percent = (value - minValue) / (maxValue - minValue);
    float knobX = x + percent * width;

    knob.setPosition({knobX, y + 2.5f});
}

void SliderX::update(sf::Vector2f mousePosition, bool mousePressed)
{
    if(mousePressed)
    {
        if(mousePosition.x >= positionX &&
           mousePosition.x <= positionX + width &&
           mousePosition.y >= positionY - 15 &&
           mousePosition.y <= positionY + 15)
           {
            float percent = (mousePosition.x - positionX) / width;
            value = minValue + percent * (maxValue - minValue);
            float knobX = positionX + percent * width;

            knob.setPosition({knobX, positionY + 2.5f});
           }
    }
}

void SliderY::update(sf::Vector2f mousePosition, bool mousePressed)
{
    if(mousePressed)
    {
        if(mousePosition.x >= positionX &&
           mousePosition.x <= positionX + width &&
           mousePosition.y >= positionY - 15 &&
           mousePosition.y <= positionY + 15)
           {
            float percent = (mousePosition.x - positionX) / width;
            value = minValue + percent * (maxValue - minValue);
            float knobX = positionX + percent * width;

            knob.setPosition({knobX, positionY + 2.5f});
           }
    }
}

void SliderX::draw(sf::RenderWindow& window)
{
    window.draw(bar);
    window.draw(knob);
}

void SliderY::draw(sf::RenderWindow& window)
{
    window.draw(bar);
    window.draw(knob);
}

float SliderX::getValue() const
{
    return value;
}

float SliderY::getValue() const
{
    return value;
}