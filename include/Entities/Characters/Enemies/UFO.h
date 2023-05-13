#pragma once

//Game Libraries:
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