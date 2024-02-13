#include "raylib.h"

int main ()
{
    //windows dimentions
    int screenWidth {350} , screenHeight {200}; 
    InitWindow(screenWidth,screenHeight,"New Window");

    // cirecle corrdinates
    int cirecle_x{screenWidth/2}, cirecle_y {screenHeight/2};

    SetTargetFPS(60);    
    while(!WindowShouldClose()){

        BeginDrawing();
        ClearBackground(WHITE);

        // Game logic begins
        DrawCircle(cirecle_x, cirecle_y, 24, BLUE);
        if(IsKeyDown(KEY_D) && cirecle_x < screenWidth) { cirecle_x += 10; } 
        if(IsKeyDown(KEY_A) && cirecle_x > 0) { cirecle_x -= 10; } 
        if(IsKeyDown(KEY_S) && cirecle_y < screenHeight) { cirecle_y += 10; }
        if(IsKeyDown(KEY_W) && cirecle_y > 0) { cirecle_y -= 10; } 
 

        // Game logic ends
        EndDrawing();
    }
}