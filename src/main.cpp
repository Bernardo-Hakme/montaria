#include <raylib.h>

int main()
{
    SetTargetFPS(30);
    InitWindow(800, 450, "Montaria");

    int posX = 30;
    int posY = 30;
    int size = 100;

    while(!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawRectangle(50, 50, 100, 100, {255, 0, 0, 127});
        DrawRectangle(100, 100, 100, 100, {0, 255, 0, 127});
        
        EndDrawing();
    }

    CloseWindow();
    
    return 0;
}
