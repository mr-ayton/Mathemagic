#include "particle.hpp"

Particle::Particle()
{
    shape.setRadius(1.f);
    shape.setFillColor(sf::Color::Magenta);
    shape.setOrigin(1.f, 1.f);
}

void Particle::setPosition(float x, float y)
{
    shape.setPosition({x, y});
}

void Particle::draw(sf::RenderWindow& window)
{
    window.draw(shape);
}

