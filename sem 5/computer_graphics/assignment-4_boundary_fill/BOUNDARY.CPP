#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void b_fill(int x,int y,int color,int color_fill)
{
	int current=getpixel(x,y);
	if(current!=color && color_fill!=current)
	{
		putpixel(x,y,color_fill);
		b_fill(x+1,y,color,color_fill);
		b_fill(x-1,y,color,color_fill);
		b_fill(x,y-1,color,color_fill);
		b_fill(x,y+1,color,color_fill);
	}
}
int main()
{
    int x1,y1,x2,y2;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C://TurboC3//BGI");
    clrscr();
    cleardevice();
    setcolor(3);
    line(200,100,200,150);
    line(200,150,250,150);
    line(250,150,250,100);
    line(250,100,200,100);
    b_fill(203,145,3,6);
    getch();
    closegraph();
    return 0;
 }