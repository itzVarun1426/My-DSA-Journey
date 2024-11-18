#include <graphics.h>
#include <cmath>
#include <iostream>

using namespace std;

float yOffset = 0.0f;
float xOffset = 300.0f;
bool turnRight = false;
bool stopRocket = false; 

// circle
void drawEllipse(int cx, int cy, int rx, int ry) {
    ellipse(cx, cy, 0, 360, rx, ry);
}

// rocket 
void drawRocket() {
    float rocketCenterY = 500 - yOffset;
    
    // recangle
    float x1 = xOffset - 35, y1 = rocketCenterY + 150;  // Body's top corner at y1
    float x2 = xOffset + 35, y2 = rocketCenterY;        // Body's bottom corner at y2

    // coloring
    setcolor(LIGHTBLUE);
    setfillstyle(SOLID_FILL, LIGHTBLUE);
    rectangle((int)x1, (int)y1, (int)x2, (int)y2);
    floodfill((int)xOffset, (int)((y1 + y2) / 2), LIGHTBLUE);  // Fill the body with color

    // gol
    setcolor(LIGHTGRAY);
    drawEllipse((int)xOffset, (int)(rocketCenterY + 150), 35, 10); // Top ellipse
    drawEllipse((int)xOffset, (int)(rocketCenterY), 35, 10); // Bottom ellipse

    // (triangle)
    int rocketHead[] = {(int)(xOffset - 35), (int)(rocketCenterY),
                        (int)(xOffset + 35), (int)(rocketCenterY),
                        (int)xOffset, (int)(rocketCenterY - 50)};
    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    fillpoly(3, rocketHead);

    // Left Fin
    int leftFin[] = {(int)(xOffset - 35), (int)(rocketCenterY + 150),
                     (int)(xOffset - 65), (int)(rocketCenterY + 200),
                     (int)(xOffset + 35), (int)(rocketCenterY + 150)};
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    fillpoly(3, leftFin);

    // Right Fin
    int rightFin[] = {(int)(xOffset + 35), (int)(rocketCenterY + 150),
                      (int)(xOffset + 65), (int)(rocketCenterY + 200),
                      (int)(xOffset - 35), (int)(rocketCenterY + 150)};
    setcolor(GREEN);
    setfillstyle(SOLID_FILL, GREEN);
    fillpoly(3, rightFin);

    // flame
    int flame[] = {(int)(xOffset - 15), (int)(rocketCenterY + 210),
                   (int)(xOffset + 15), (int)(rocketCenterY + 210),
                   (int)xOffset, (int)(rocketCenterY + 250)};
    setcolor(LIGHTRED);
    setfillstyle(SOLID_FILL, LIGHTRED);
    fillpoly(3, flame);
}

// animation
void updateRocketPosition() {
    if (!turnRight) {
        yOffset += 1.0f;
        if (yOffset > 350.0f) turnRight = true;
    } else {
        xOffset += 1.0f;

        if (xOffset >= 300 + 350) {
            stopRocket = true; 
            
        }
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    
    setbkcolor(BLACK);
    cleardevice();
    
    while (true) {
        cleardevice();
        drawRocket();
        updateRocketPosition();
        delay(16);


    }
    
    closegraph();
    return 0;
}