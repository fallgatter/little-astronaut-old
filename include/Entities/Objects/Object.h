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
                virtual void run() = 0;
                virtual void colide() = 0;
        };
    }using namespace Objects;
}using namespace Entities;