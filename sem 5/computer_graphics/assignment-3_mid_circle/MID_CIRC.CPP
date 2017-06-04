#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void circlea(float r,float xc,float yc)
{
     float pk=1-r;
     float x=0;
     float y=r;
     //putpixel(0,r,3);
     while(x<=y)
     {
	putpixel(x+xc,y+yc,3);
	putpixel(xc-x,yc+y,3);
	putpixel(xc+x,yc-y,3);
	putpixel(xc-x,yc-y,3);

	putpixel(xc+y,yc+x,3);
	putpixel(xc+y,yc-x,3);
	putpixel(xc-y,yc+x,3);
	putpixel(xc-y,yc-x,3);
	if(pk<0)
	{

		x+=1;
		pk=pk+(2*x)+1;

	}
	else
	{
		x+=1;
		y-=1;
		pk=pk+(2*x)-(2*y)+1;

	}
     }

}
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C://TurboC3//BGI");
	cleardevice();
	circlea(50,250,200);
	getch();
	//closegraph();
	return 0;
}
