#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
#define pi 3.14
//radious 49
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:/TC/BGI");
	cleardevice();
	int x=150,y=250;
	//line(x+50,y,x+250,y);
	for(int i=0;i<70;i++)
	{
	setcolor(i);
	line(x+50,y,x+50,y+49+49);
	circle(x+50,y+49,49);
	line(x+1,y+49,x+98,y+49);
	line(x+50+(49*cos(pi/4.0)),y+49+(49*sin(pi/4.0)),x+50-(49*cos(pi/4.0)),y+49-(49*sin(pi/4.0)));
	line(x+50-(49*cos(pi/4.0)),y+49+(49*sin(pi/4.0)),x+50+(49*cos(pi/4.0)),y+49-(49*sin(pi/4.0)));

	line(x+250+40,y,x+250+40,y+49+49);
	circle(x+250+40,y+49,49);
	line(x+201+40,y+49,x+298+40,y+49);
	line(x+250+40+(49*cos(pi/4.0)),y+49+(49*sin(pi/4.0)),x+250+40-(49*cos(pi/4.0)),y+49-(49*sin(pi/4.0)));
	line(x+250+40-(49*cos(pi/4.0)),y+49+(49*sin(pi/4.0)),x+250+40+(49*cos(pi/4.0)),y+49-(49*sin(pi/4.0)));

	line(x+70+(40*cos(pi*75.0/180.0)),y+30-(125*sin(pi*75.0/180.0)),x+50,y+49);

	line(x+200,y+60,x+250+40,y+49);
	circle(x+200,y+60,7);

	line(x+200,y+60,x+210,y-20);
	line(x+210,y-20,x+68.5,y-30);
	line(x+200,y+60,x+65,y-20);
	line(x+210,y-20,x+250+40,y+49);
	line(x+210,y-20,x+210,y-50);
	line(x+200,y-50,x+220,y-50);
	line(x+70+(40*cos(pi*75.0/180.0)),y+30-(125*sin(pi*75.0/180.0)),x+55,y-50);
	line(x+55,y-50,x+55,y-70);
	line(x+70+(40*cos(pi*75.0/180.0)),y+30-(125*sin(pi*75.0/180.0)),x+90,y-105);
	line(x+90,y-105,x+90,y-120);

	line(x+200,y+60,x+190,y+70);
	line(x+190,y+70,x+185,y+60);
	line(x+200,y+60,x+210,y+50);
	line(x+210,y+50,x+215,y+55);
	delay(1000/10);
	x-=1;
	//y-=1;
	if(i!=69)
	   cleardevice();
	}
	getch();
	closegraph();
	return 0;
}