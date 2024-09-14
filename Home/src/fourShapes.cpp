#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main()
{
    
    int gd = DETECT, gm;
    initgraph(&gd,&gm,"");

    line(10,10,200,80);
    circle(500,100,80);
    rectangle(50,300,200,400);
    // ellipse(500,350,100,100,100,50);
    ellipse(500,350,0,360,100,50);

    getch();
    closegraph();
    return 0;
    
}