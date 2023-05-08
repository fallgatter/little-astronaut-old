#pragma once

//Own Libraries:
#include"../Lists/EntityList.h"

namespace Managers{
    class Collision_Manager{
        private:
            EntityList* EL;
        public:
            Collision_Manager();
            ~Collision_Manager();
            void setList(EntityList* el);
            void manage();
    };
}using namespace Managers;