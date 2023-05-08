#pragma once

//Bibliotecas Próprias:
#include"../Enemy.h"

namespace Entities{
    namespace Characters{
        class Crab: public Enemy{
            private:

            public:
                Crab();
                ~Crab();
        };
    }using namespace Characters;
}using namespace Entities;