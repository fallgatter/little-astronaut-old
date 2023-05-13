#pragma once

//Game Libraries:
#include"Object.h"

namespace Entities{
    namespace Objects{
        class Ground: public Object{
            private:

            public:
                Ground();
                ~Ground();
        };
    }using namespace Objects;
}using namespace Entities;