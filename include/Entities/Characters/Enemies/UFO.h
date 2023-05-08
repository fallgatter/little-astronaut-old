#pragma once

//Bibliotecas Próprias:
#include"../Enemy.h"

namespace Entities{
    namespace Characters{
        class UFO: public Enemy{
            private:

            public:
                UFO();
                ~UFO();
        };
    }using namespace Characters;
}using namespace Entities;