#include"../../include/Managers/Graphic_Manager.h"


#define WIDTH 1280
#define HEIGHT 920

namespace Managers{

    Graphic_Managers::Graphic_Managers() : (new sf::RenderWindow(sf::VideoMode(WIDTH, HEIGHT), "Little_Astronaut", sf::Style::Titlebar | sf::Style::Close)),
    view(sf::Vector2f(WIDTH / 2, HEIGHT / 2), sf::Vector2f(WIDTH, HEIGHT)), texturas(){}

    void Graphic_Managers::loadTexture(){
        
    }
    void Graphic_Managers::display(){
        if(window->isOpen()){
            window->display();
        }
    }


    void Graphic_Managers::clear(){
        if(window->isOpen()){
            window->clear();
        }
    }

    void Graphic_Managers::closeWindow(){
        if(window->isOpen()){
            window->close();
        }
    }

    View Graphic_Managers::getView() const{
        return view;
    }

} using namespace Managers;

