#pragma once

//Bibliotecas Próprias:
#include"Character.h"

namespace Entities{
    namespace Characters{
        class Player: public Character{
            private:

            public:
                Player();
                ~Player();
        };
    }using namespace Characters;
}using namespace Entities;