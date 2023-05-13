#pragma once

//Game Libraries:
#include"Character.h"

namespace Entities{
    namespace Characters{
        class Enemy: public Character{
            private:

            public:
                Enemy();
                ~Enemy();
        };
    }using namespace Characters;
}using namespace Entities;