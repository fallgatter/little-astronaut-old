#pragma once

//Game Libraries:
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