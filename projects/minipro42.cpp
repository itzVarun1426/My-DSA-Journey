#include <graphics.h>
#include <cmath>
#include <iostream>

using namespace std;

float yOffset = 0.0f;
float xOffset = 300.0f;
bool turnRight = false;
bool stopRocket = false;

void multiplyMatrix(float mat[3][3], float point[3], float result[3]) {
    for (int i = 0; i < 3; i++) {
        result[i] = 0;
        for (int j = 0; j < 3; j++) {
            result[i] += mat[i][j] * point[j];
        }
    }
}

void applyTranslation(float& x, float& y, float tx, float ty) {
    float translationMatrix[3][3] = {
        {1, 0, tx},
        {0, 1, ty},
        {0, 0, 1}
    };

    float point[3] = {x, y, 1};
    float result[3] = {0, 0, 0};
    
    multiplyMatrix(translationMatrix, point, result);
    
    x = result[0];
    y = result[1];
}

void drawEllipse(int cx, int cy, int rx, int ry) {
    ellipse(cx, cy, 0, 360, rx, ry);
}


void drawRocket() {
    float rocketCenterY = 500 - yOffset;
    
    // Rocket body
    float x1 = xOffset - 35, y1 = rocketCenterY + 150;
    float x2 = xOffset + 35, y2 = rocketCenterY;
    
    applyTranslation(x1, y1, xOffset - 300, -yOffset);
    applyTranslation(x2, y2, xOffset - 300, -yOffset);

    setcolor(LIGHTBLUE);
    setfillstyle(SOLID_FILL, LIGHTBLUE);
    rectangle((int)x1, (int)y1, (int)x2, (int)y2);
    floodfill((int)xOffset, (int)((y1 + y2) / 2), LIGHTBLUE);

    // Draw rocket ellipses for top and bottom of rocket
    float ellipseTopX = xOffset, ellipseTopY = rocketCenterY + 150;
    float ellipseBottomX = xOffset, ellipseBottomY = rocketCenterY;

    applyTranslation(ellipseTopX, ellipseTopY, xOffset - 300, -yOffset);
    applyTranslation(ellipseBottomX, ellipseBottomY, xOffset - 300, -yOffset);

    setcolor(LIGHTGRAY);
    drawEllipse((int)ellipseTopX, (int)ellipseTopY, 35, 10); // Top ellipse
    drawEllipse((int)ellipseBottomX, (int)ellipseBottomY, 35, 10); // Bottom ellipse

    // Rocket head
    float rocketHead[] = {xOffset - 35.0f, rocketCenterY, xOffset + 35.0f, rocketCenterY, xOffset, rocketCenterY - 50.0f};
    
    for (int i = 0; i < 6; i += 2) {
        applyTranslation(rocketHead[i], rocketHead[i + 1], xOffset - 300, -yOffset);
    }

    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    fillpoly(3, reinterpret_cast<int*>(rocketHead));

    // Left Fin
    float leftFin[] = {xOffset - 35.0f, rocketCenterY + 150.0f, xOffset - 65.0f, rocketCenterY + 200.0f, xOffset + 35.0f, rocketCenterY + 150.0f};
    
    for (int i = 0; i < 6; i += 2) {
        applyTranslation(leftFin[i], leftFin[i + 1], xOffset - 300, -yOffset);
    }

    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    fillpoly(3, reinterpret_cast<int*>(leftFin));

    // Right Fin
    float rightFin[] = {xOffset + 35.0f, rocketCenterY + 150.0f, xOffset + 65.0f, rocketCenterY + 200.0f, xOffset - 35.0f, rocketCenterY + 150.0f};
    
    for (int i = 0; i < 6; i += 2) {
        applyTranslation(rightFin[i], rightFin[i + 1], xOffset - 300, -yOffset);
    }

    setcolor(GREEN);
    setfillstyle(SOLID_FILL, GREEN);
    fillpoly(3, reinterpret_cast<int*>(rightFin));

    // Rocket flame
    float flame[] = {xOffset - 15.0f, rocketCenterY + 210.0f, xOffset + 15.0f, rocketCenterY + 210.0f, xOffset, rocketCenterY + 250.0f};
    
    for (int i = 0; i < 6; i += 2) {
        applyTranslation(flame[i], flame[i + 1], xOffset - 300, -yOffset);
    }

    setcolor(LIGHTRED);
    setfillstyle(SOLID_FILL, LIGHTRED);
    fillpoly(3, reinterpret_cast<int*>(flame));
}

// Timer callback for animation
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
    
    setbkcolor(COLOR(15, 15, 85));
    cleardevice();
    
    while (true) {
        cleardevice();
        drawRocket();
        updateRocketPosition();
        delay(16);

        if (stopRocket) {
            break;
        }
    }
    
    closegraph();
    return 0;
}