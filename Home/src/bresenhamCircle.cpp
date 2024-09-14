#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main()
{
    int x,y,xc,yc,d,r;
    int gd = DETECT,gm;

    printf("enter the center of circle:");
    scanf("%d%d",&xc,&yc);
    printf("enter the radius of circle:");
    scanf("%d",&r);

    initgraph(&gd,&gm,"");

    d = 3 - 2*r;
    x=0;
    y=r;

    while(x<=y)
    {
        putpixel(x+xc,y+yc,WHITE);
        putpixel(x+xc,-y+yc,WHITE);
        putpixel(-x+xc,-y+yc,WHITE);
        putpixel(-x+xc,y+yc,WHITE);
        putpixel(y+xc,x+yc,WHITE);
        putpixel(y+xc,-x+yc,WHITE);
        putpixel(-y+xc,-x+yc,WHITE);
        putpixel(-y+xc,x+yc,WHITE);

        // putpixel(x + xc, y + yc, WHITE);
        // putpixel(y + xc, x + yc, WHITE);
        // putpixel(-x + xc, y + yc, WHITE);
        // putpixel(-y + xc, x + yc, WHITE);
        // putpixel(-x + xc, -y + yc, WHITE);
        // putpixel(-y + xc, -x + yc, WHITE);
        // putpixel(x + xc, -y + yc, WHITE);
        // putpixel(y + xc, -x + yc, WHITE);


        if(d <= 0)
        {
            x++;
            d = d + 4*x + 6;
        }
        else
        {
            x++;
            y--;
            d = d + 4*(x-y) + 10;
        }
    }
    getch();
    closegraph();
    return 0;
}