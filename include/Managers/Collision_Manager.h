#pragma once

//Own Libraries:
#include"../Lists/Entity_List.h"

namespace Managers{
    class Collision_Manager{
        private:
            Entity_List* EL;
        public:
            Collision_Manager();
            ~Collision_Manager();
            void setList(Entity_List* el);
            void manage();
    };
}using namespace Managers;