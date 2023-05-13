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
        };
    }using namespace Characters;
}using namespace Entities;