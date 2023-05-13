#pragma once

//Game Libraries:
#include"Character.h"

namespace Entities{
    namespace Characters{
        class Player: public Character{
            private:

            public:
                Player();
                ~Player();
                void run();
                void collide();
        };
    }using namespace Characters;
}using namespace Entities;