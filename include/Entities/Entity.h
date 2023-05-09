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
<<<<<<< HEAD
            void setSize(Vector2f SIZE=(0.0,0.0)) const;
            void setPosition(Vector2f POS=(0.0,0.0)) const;
            Vector2f getSize();
            Vector2f getPosition();
=======
    
>>>>>>> bdc5bae1b1a30d74ee64dd0bc935b29e544fe0c7
    };
}using namespace Entities;