#pragma once

//Game Libraries:
#include"../Enemy.h"

namespace Entities{
    namespace Characters{
        class Alien: public Enemy{
            private:

            public:
                Alien();
                ~Alien();
                void run();
                void collide();
        };
    }using namespace Characters;
}using namespace Entities;