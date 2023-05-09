//Bibliotecas Padrões:
#include<Vector2.hpp>
using namespace sf;

//Bibliotecas Próprias:
#include"../../include/Entities/Entity.h"
#include "Entity.h"

namespace Entities{
    Entity::Entity(int X, int Y, Vector2f SIZE, Vector2f POS, int ID);: Being(id), x(X), y(Y), size(SIZE), pos(POS){
    }

    Entity::~Entity(){
    }

    void Entity::run(){
    }

    void Entity::setSize(Vector2f SIZE)
    {
        size=SIZE;
    }

    void Entity::setPosition(Vector2f POS){
        pos=POS;
        pos=POS;
    }

    Vector2f Entity::getSize() const{
        return size;
    }

    Vector2f Entity::getPosition() const{
        return pos;
    }

    void Entity::collide(Entity *other){
    }
}