#include <SFML/Graphics.hpp>
#include "particle.hpp"
#include "slider.hpp"

class Renderer{
    public:
        Renderer();
        void run();

    private:
        void processEvents();
        void update();
        void draw();

        sf::RenderWindow window;

        Particle particle;
        SliderX sliderX;
        SliderY sliderY;
};