#pragma once
#include <raylib.h>

class Dino
{
    public:
        Dino();
        ~Dino();
        void Draw();
        void Update();
        Rectangle GetRect();
        void DrawHitbox(bool isColliding);
    private:
        Texture2D image;
        Vector2 position;
        int speed;
};