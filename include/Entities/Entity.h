#pragma once

//Bibliotecas Padrões:
#include<Vector2.hpp>
using namespace sf;

//Bibliotecas Próprias:
#include"../Being.h"

namespace Entities{
    class Entity: public Being{
        protected:
            int x, y;
            Vector2f size, pos;
        public:
            Entity(int X=0, int Y=0, Vector2f SIZE=(0.0,0.0), Vector2f POS=(0.0,0.0), int ID);
            virtual ~Entity();
            virtual void run();
            void setSize(Vector2f SIZE=(0.0,0.0)) const;
            void setPosition(Vector2f POS=(0.0,0.0)) const;
            Vector2f getSize();
            Vector2f getPosition();
    };
}using namespace Entities;