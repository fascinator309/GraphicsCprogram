#include<graphics.h>
#include<conio.h>

int main() {
    

    int gd = DETECT, gm;
    initgraph(&gd, &gm, ""); // Initialize graphics mode
    
    int x = getmaxx()/2,y=getmaxy()/2,r=150;

    
    cleardevice();


    circle(x,y,r);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(x,y,WHITE);

    circle(x-r/3,y-r/3,r/6);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(x-r/3,y-r/3,WHITE);
    circle(x+r/3,y-r/3,r/6);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(x+r/3,y-r/3,WHITE);

    setcolor(BLACK);
    arc(x,y,220,320,r/2);


    
    


    getch(); // Wait for user input
    closegraph(); // Close the graphics mode
    return 0;
}