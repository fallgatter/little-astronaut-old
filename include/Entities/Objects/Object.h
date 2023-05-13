#pragma once

//Game Libraries:
#include"../Entity.h"

namespace Entities{
    namespace Objects{
        class Object: public Entity{
            protected:

            public:
                Object();
                virtual ~Object();
        };
    }using namespace Objects;
}using namespace Entities;