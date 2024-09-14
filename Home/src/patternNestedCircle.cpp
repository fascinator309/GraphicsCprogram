#include<graphics.h>
#include<conio.h>

int main() {
    

    int gd = DETECT, gm;
    initgraph(&gd, &gm, ""); // Initialize graphics mode
    
    int x = 300,y=200,r=150;
    circle(x,y,r);
    circle(x,y,r-50);
    circle(x,y,r-100);
    circle(x,y,r-140);
    floodfill(x,y,WHITE);


    getch(); // Wait for user input
    closegraph(); // Close the graphics mode
    return 0;
}