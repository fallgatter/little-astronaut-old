#pragma once

//Bibliotecas Padrões:
#include<SFML\System\Vector2.hpp>
using namespace sf;

//Bibliotecas Próprias:
#include"../Being.h"

namespace Entities{
    class Entity: public Being{
        protected:
            int x, y;
            Vector2f size, pos;
        public:
            Entity(int X=0, int Y=0, Vector2f SIZE=Vector2f(0.f, 0.f), Vector2f POS=Vector2f(0.f, 0.f), int ID=0);
            virtual ~Entity();
            virtual void run() = 0;
            void setSize(Vector2f SIZE=Vector2f(0.f, 0.f));
            void setPosition(Vector2f POS=Vector2f(0.f, 0.f));
            Vector2f getSize() const;
            Vector2f getPosition() const;
            virtual void collide() = 0;
    };
}using namespace Entities;