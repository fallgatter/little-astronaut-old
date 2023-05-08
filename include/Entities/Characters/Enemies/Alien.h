#pragma once

//Bibliotecas Próprias:
#include"../Enemy.h"

namespace Entities{
    namespace Characters{
        class Alien: public Enemy{
            private:

            public:
                Alien();
                ~Alien();
        };
    }using namespace Characters;
}using namespace Entities;