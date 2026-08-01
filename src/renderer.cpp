#include <iostream>
#include "renderer.hpp"

Renderer::Renderer()
    :
    sliderX(50, 50, 300, 0, 800),
    sliderY(50, 100, 300, 0, 600)
    {
        window.create(
            sf::VideoMode({800, 600}),
            "Mathemagic"
        );

        particle.setPosition(400, 300);
    }

    void Renderer::run()
    {
        while(window.isOpen()){
            processEvents();
            update();
            draw();
        }
    }

    void Renderer::processEvents()
    {
        sf::Event event;
        while(window.pollEvent(event)){
            if(event.type == sf::Event::Closed){
                window.close();
            }
        }
    }

    void Renderer::update()
    {
        sf::Vector2i mousePosition = sf::Mouse::getPosition(window);

        bool mousePressed = sf::Mouse::isButtonPressed(sf::Mouse::Left);

        sliderX.update(
            sf::Vector2f(mousePosition),
            mousePressed
        );

        sliderY.update(
            sf::Vector2f(mousePosition),
            mousePressed            
        );

        particle.setPosition(
            sliderX.getValue(),
            sliderY.getValue()
        );
    }

    void Renderer::draw()
    {
        window.clear();
        particle.draw(window);

        sliderX.draw(window);
        sliderY.draw(window);
        
        window.display();
    }
