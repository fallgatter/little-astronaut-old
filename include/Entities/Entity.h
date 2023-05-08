#pragma once

//Bibliotecas Próprias:
#include"../Being.h"

namespace Entities{
    class Entity: public Being{
        protected:
            int x, y;
        public:
            Entity();
            virtual ~Entity();
            virtual void run();
    };
}using namespace Entities;