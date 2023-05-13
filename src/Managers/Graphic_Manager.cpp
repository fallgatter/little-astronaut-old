//Game Libraries:
#include"../../include/Managers/Graphic_Manager.h"

#define WIDTH 1280
#define HEIGHT 920

namespace Managers{
    //dar um jeito pra implementar o padrão singletom no projeto, video 2 do grafico
    Graphic_Managers::Graphic_Managers() : window(new sf::RenderWindow(sf::VideoMode(WIDTH, HEIGHT), "Little_Astronaut", sf::Style::Titlebar | sf::Style::Close)),
    view(sf::Vector2f(WIDTH / 2, HEIGHT / 2), sf::Vector2f(WIDTH, HEIGHT)), texturas(){}

    Graphic_Managers::~Graphic_Managers(){
        list<Texture*>::iterator it;
        it = texturas.begin();
        int i, tam = texturas.size();
        for(i=0;i<tam;i++){
            if(*it){
                texturas.erase(it);
                if(*it)
                    delete *it;
            }
            it++;
        }
        texturas.clear();
    }
    
    void Graphic_Managers::loadTexture(){
        Texture* auxtxt = NULL;
        auxtxt = new (Texture);
        auxtxt->loadFromFile("textures/Player/default.png");
        texturas.push_back(auxtxt);
        auxtxt = new (Texture);
        auxtxt->loadFromFile("textures/Player/green_alien.png");
        texturas.push_back(auxtxt);
        auxtxt = new (Texture);
        auxtxt->loadFromFile("textures/Player/grey_alien.png");
        texturas.push_back(auxtxt);
        auxtxt = new (Texture);
        auxtxt->loadFromFile("textures/Player/ufo.png");
        texturas.push_back(auxtxt);
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

    void Graphic_Managers::updateTime(){
        dt = clock.getElapsedTime().asSeconds();  //chamar a update time toda vez que rodar um ciclo no jogo
        clock.restart();
    }

    void Graphic_Managers::render(Sprite* thing){
        window->draw(*thing);
    }

    float Graphic_Managers::getDt(){
        return dt;
    }
} using namespace Managers;

