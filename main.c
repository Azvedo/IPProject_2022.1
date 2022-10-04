#include "raylib.h"
#include <math.h>
#include "car.h"
#include "player.h"

#define HEADING_LEFT 1
#define HEADING_RIGHT 2
#define AIMING 10
#define RUNNING 20

int main()
{
   
    const int screenWidth = 800;
    const int screenHeight = 450;

   

    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");
    SetTargetFPS(60);               
    
    
    


    while (!WindowShouldClose()){    
        
        

        BeginDrawing();

            

           

        EndDrawing();
        
    }
    
    CloseWindow();       
    return 0;
}