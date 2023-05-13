#pragma once

//Game Libraries:
#include"../Entity.h"

namespace Entities{
    namespace Characters{
        class Character: public Entity{
            protected:
                int lifes;
            public:
                Character();
                virtual ~Character();
                virtual void run() = 0;
                virtual void collide() = 0;
        };
    }using namespace Characters;
}using namespace Entities;