#include<graphics.h>
#include<conio.h>

void drawCar(int x,int y)
{
    rectangle(x,y,x+100,y+40);
    rectangle(x+20,y-20,x+80,y);
    circle(x+25,y+40,15);
    circle(x+75,y+40,15);
}

int main()
{
    int x = 0;
    int y = 300;

    int gd = DETECT,gm;
    initgraph(&gd,&gm,"");

    while(1)
    {
        cleardevice();
        drawCar(x,y);
        x+=5;
        delay(50);
    }

    getch();
    closegraph();
    return 0;
}