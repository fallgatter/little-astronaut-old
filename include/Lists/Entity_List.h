#pragma once
#include"List.h"
#include"../Entities/Entity.h"

namespace Lists{
    class Entity_List{
        public:
            List<Entity> LEs;
            Entity_List() : LEs(){}
};

} using namespace Lists;
