#include "raylib.h"

int main ()
{
    int screenWidth = 350; 
    int screenHieght = 350; 
    InitWindow(screenWidth,200,"New Window");
    //new
    
    while(!WindowShouldClose()){

        BeginDrawing();
        ClearBackground(RED);
        EndDrawing();

    }
}