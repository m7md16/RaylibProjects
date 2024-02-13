#include "raylib.h"

int main ()
{
    //windows dimentions
    int screenWidth {800} , screenHeight {450}; 
    InitWindow(screenWidth,screenHeight,"New Window");

    // circle coordinates
    int circle_x{screenWidth/2}, circle_y{screenHeight/2};

    // axe coordinate
    int axe_x{400}, axe_y{0};

    SetTargetFPS(60);    
    while(!WindowShouldClose()){

        BeginDrawing();
        ClearBackground(WHITE);

        // Game logic begins
        DrawCircle(circle_x, circle_y, 24, BLUE);
        DrawRectangle(axe_x, axe_y, 50, 50, RED);

        // move axe
        axe_y += 5;
        if(axe_y == screenHeight) {axe_y = 0;}
        // Circle movement
        if(IsKeyDown(KEY_D) && circle_x < screenWidth) { circle_x += 10; } 
        if(IsKeyDown(KEY_A) && circle_x > 0) { circle_x -= 10; } 
        if(IsKeyDown(KEY_S) && circle_y < screenHeight) { circle_y += 10; }
        if(IsKeyDown(KEY_W) && circle_y > 0) { circle_y -= 10; } 
 

        // Game logic ends
        EndDrawing();
    }
}