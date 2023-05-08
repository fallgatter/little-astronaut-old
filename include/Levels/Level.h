#pragma once

//Bibliotecas Próprias:
#include"../Being.h"

namespace Levels{
    class Level: public Being{
        protected:
        public:
            Level();
            virtual ~Level();
            virtual void run();
            void manage_collisions();
    };
}using namespace Levels;