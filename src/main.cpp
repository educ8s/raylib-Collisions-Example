#include <raylib.h>
#include "dino.hpp"

int main()
{
    InitWindow(1200, 800, "Raylib Collisions");
    SetTargetFPS(60);

    Dino dino;
    Rectangle obstacle = Rectangle{800, 200, 200, 175};

    while(WindowShouldClose() == false)
    {
        dino.Update();
        bool isColliding = CheckCollisionRecs(dino.GetRect(), obstacle);
        BeginDrawing();
        ClearBackground(WHITE);
        DrawRectangleLinesEx(obstacle, 5, BLACK);
        dino.Draw();
        dino.DrawHitbox(isColliding);
        EndDrawing();
    }
    CloseWindow();
}