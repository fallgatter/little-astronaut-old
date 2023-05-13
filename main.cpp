//Bibliotecas Próprias:
//#include"include/Game.h"
#include"include/Managers/Graphic_Manager.h"


int main()
{
   Graphic_Managers g1;
   while(g1.isopen())
      g1.display();
   
   return 0;
}
