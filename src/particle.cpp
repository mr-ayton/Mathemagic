#include "particle.hpp"

Particle::Particle()
{
    shape.setRadius(5.f);
    shape.setFillColor(sf::Color::Cyan);
    shape.setOrigin(5.f, 5.f);
}

void Particle::setPosition(float x, float y)
{
    shape.setPosition({x, y});
}

void Particle::draw(sf::RenderWindow& window)
{
    window.draw(shape);
}

