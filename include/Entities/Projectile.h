#pragma once

//Game Libraries:
#include"Entity.h"

namespace Entities{
    class Projectile: public Entity{
        private:
        
        public:
            Projectile();
            virtual ~Projectile();
    };
}using namespace Entities;