#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>

//radious 49
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:/TC/BGI");
	cleardevice();
	//ellipse()
	int x=getmaxx()/2-20,y=getmaxy()/2 -20,r=10;
	float theta=0;
	float inc1=0.5,inc2=1.0,inc3=1.5;
	for(theta=0;theta<22.0*2/7.0;theta+=0.1)
	{
		setfillstyle(SOLID_FILL,6);
		setcolor(6);
		circle(x,y,r);
		floodfill(x,y,6);
		setcolor(15);
		circle(x,y,r+50);
		circle(x,y,r+100);
		circle(x,y,r+150);
		circle(x,y,r+200);
		setfillstyle(SOLID_FILL,1);
		setcolor(1);
		circle(x+((r+50)*cos(theta)),y+((r+50)*sin(theta)),6);
		floodfill(x+((r+50)*cos(theta)),y+((r+50)*sin(theta)),1);

		setfillstyle(SOLID_FILL,2);
		setcolor(2);
		circle(x+((r+100)*cos(theta+inc1)),y+((r+100)*sin(theta+inc1)),8);
		floodfill(x+((r+100)*cos(theta+inc1)),y+((r+100)*sin(theta+inc1)),2);

		setfillstyle(SOLID_FILL,3);
		setcolor(3);
		circle(x+((r+150)*cos(theta+inc2)),y+((r+150)*sin(theta+inc2)),9);
		floodfill(x+((r+150)*cos(theta+inc2)),y+((r+150)*sin(theta+inc2)),3);

		setfillstyle(SOLID_FILL,4);
		setcolor(4);
		circle(x+((r+200)*cos(theta+inc3)),y+((r+200)*sin(theta+inc3)),11);
		floodfill(x+((r+200)*cos(theta+inc3)),y+((r+200)*sin(theta+inc3)),4);

		inc1+=0.1;
		inc2+=0.150;
		inc3+=0.180;
		delay(150);
		cleardevice();
	}
	getch();
	closegraph();
	return 0;
}