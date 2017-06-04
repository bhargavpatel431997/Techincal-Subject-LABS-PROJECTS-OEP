#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void bres(int x1,int y1,int x2,int y2)
{
     int dx,dy,p,x,y;
     dx=(x2-x1);
     dy=(y2-y1);
     p=2*(dy)-(dx);
     x=x1;
     y=y1;
     putpixel(x,y,4);
     while(x<=x2)
     {
	if(p<0)
	{
		x=x+1;
		p=p+2*(dy);
	}
	else
	{
		x=x+1;
		y=y+1;
		p=p+2*(dy-dx);
	}
	putpixel(x,y,4);
    }
}
int main()
{
    int x1,y1,x2,y2;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C://TurboC3//BGI");
    clrscr();
    printf("\t\nEnter the co-ordinates of first point :");
    scanf("%d %d",&x1,&y1);
    printf("\t\nEnter the coordinates of second point:");
    scanf("%d %d",&x2,&y2);
    cleardevice();
    bres(x1,y1,x2,y2);
    getch();
    closegraph();
    return 0; 
 }