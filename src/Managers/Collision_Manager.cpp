//Standard Libraries:
#include<math.h>

//Game Libraries:
#include"../../include/Managers/Collision_Manager.h"

namespace Managers{
    Collision_Manager::Collision_Manager(){
        EL=NULL;
    }
    Collision_Manager::~Collision_Manager(){
        EL=NULL;
    }
    void Collision_Manager::setList(Entity_List* el){
        EL=el;
    }
    void Collision_Manager::manage(){
        float x_dist=0.0, y_dist=0.0, x_hitbox=0.0, y_hitbox=0.0;
        int i=0, j=0;

        for(i=0; i<EL->getSize(); i++)
            for(j=i+1; j<EL->getSize(); j++){
                x_dist=fabs((*EL)[i]->getPosition().x-(*EL)[j]->getPosition().x);
                y_dist=fabs((*EL)[i]->getPosition().y-(*EL)[j]->getPosition().y);
                x_hitbox=(*EL)[i]->getSize().x/2+(*EL)[j]->getSize().x/2;
                y_hitbox=(*EL)[i]->getSize().y/2+(*EL)[j]->getSize().y/2;

                if(x_dist<x_hitbox && y_dist<y_hitbox){
                    (*EL)[i]->collide((*EL)[j]);
                    (*EL)[j]->collide((*EL)[i]);
                }
        }
    }
}