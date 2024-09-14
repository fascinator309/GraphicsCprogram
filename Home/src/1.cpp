#include <graphics.h>
#include <conio.h>
#include<stdio.h>

int main() {
    
    int gd = DETECT, gm;
    initgraph(&gd, &gm, ""); // Initialize graphics mode
    
    
    int x,y,x1,y1,x2,y2,dx,dy,p,i;

    x1=100,y1=100;
    x2=200,y2=200;

    dx=x2-x1;
    dy= y2-y1;

    p = 2*dy - dx;

    x=x1;
    y=y1;
    i=0;

    while(i<=dx)
    {
        putpixel(x,y,WHITE);
    
        if(p<0)
        {
            x++;
            p = p + 2*dy;
        }
        else
        {
            x++;
            y++;
            p = p + 2*dy - 2*dx;
            
        }
        i++;
    }

    getch(); // Wait for user input
    closegraph();// Close the graphics mode
    return 0;
}
