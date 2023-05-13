//Game Libraries:
#include"../include/Being.h"

Being::Being(){
    id = 0;
}

Being::Being(int type){
    id = type;
}

Being::~Being(){
}

 //void Being::run(){
//}

void Being::self_print(){
}

int Being::get_Id() const {
    return id;
}