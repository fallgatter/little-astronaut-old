//Bibliotecas Próprias:
#include"../../include/Entities/Entity.h"

namespace Entities{
    Entity::Entity(X, Y, SIZE, POS, ID);: Being(id), x(X), y(Y), size(SIZE), pos(POS){
    }

    Entity::~Entity(){
    }

    void Entity::run(){
    }

    void Entity::setSize(SIZE){
        size=SIZE;
    }
    void Entity::setPosition(POS){
        pos=POS;
        pos=POS;
    }
    Vector2f Entity::getSize() const{
        return size;
    }
    Vector2f Entity::getPosition() const{
        return pos;
    }
}