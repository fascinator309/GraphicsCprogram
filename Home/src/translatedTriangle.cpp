#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main()
{
    
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    
    // original triangle
    line(200,100,300,200);
    line(200,100,100,200);
    line(100,200,300,200);
    outtextxy(130,210,"Original triangle");

    // translated triangle
    line(400,300,500,400);
    line(400,300,300,400);
    line(300,400,500,400);
    outtextxy(330,410,"translated triangle");


    getch();
    closegraph();
    return 0;
}