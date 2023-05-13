#pragma once

//Standard Libraries:
#include<SFML/Graphics.hpp>
#include<list>
using namespace sf;
using namespace std;

namespace Managers{
    class Graphic_Managers{
        private:
            RenderWindow* window;
            View view;
            list <Texture*> texturas;
            Clock clock;
            static float dt;
        public:
            Graphic_Managers();
            ~Graphic_Managers();
            RenderWindow* getWindow() const;
            View getView() const;
            void loadTexture();
            void display();
            void clear();
            void closeWindow();
            //void show();
            void updateTime();
            float getDt();
            void render(Sprite* body);
    };
} using namespace Managers;
