#include "raylib.h"

int main ()
{
    // window dimentions
    int screenWidth {800} , screenHeight {450}; 
    InitWindow(screenWidth,screenHeight,"New Window");

    // circle coordinates
    int circle_x{screenWidth/2}, circle_y{screenHeight/2};
    int circle_radius = 25;
    // Circle edges
    int l_circle_x{ circle_x - circle_radius};
    int r_circle_x{ circle_x + circle_radius};
    int u_circle_x{ circle_y - circle_radius};
    int b_circle_x{ circle_y + circle_radius};


    // axe coordinate
    int axe_x= 400, axe_y= 0;
    int axe_length= 50;
    int l_axe_x{axe_x};
    int r_axe_x{axe_x + axe_length};
    int u_axe_y{axe_y};
    int b_axe_y{axe_y + axe_length};

    int direction{10};
    bool collision_with_axe{false};

    SetTargetFPS(60);    
    while(!WindowShouldClose()){

        BeginDrawing();
        ClearBackground(WHITE);

        if(collision_with_axe){ 
            DrawText("Game Over", 400,200, 20, RED);

        } else {

            // Game logic begins
            DrawCircle(circle_x, circle_y, circle_radius, BLUE);
            DrawRectangle(axe_x, axe_y, axe_length, axe_length, RED);

            // move axe
            axe_y += direction; /*>>*/ if(axe_y > screenHeight || axe_y < 0) {direction = -direction;}
            // Circle movement
            if(IsKeyDown(KEY_D) && circle_x < screenWidth) { circle_x += 10; } 
            if(IsKeyDown(KEY_A) && circle_x > 0) { circle_x -= 10; } 
            if(IsKeyDown(KEY_S) && circle_y < screenHeight) { circle_y += 10; }
            if(IsKeyDown(KEY_W) && circle_y > 0) { circle_y -= 10; } 
            // Game logic ends 
        }
        EndDrawing();
    }
}