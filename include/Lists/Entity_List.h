#pragma once

//Standard Libraries:
#include"List.h"

//Game Libraries:
#include"../Entities/Entity.h"

namespace Lists{
    class Entity_List{
        public:
            List<Entity> EL;
            Entity_List() : EL(){}
};

} using namespace Lists;
