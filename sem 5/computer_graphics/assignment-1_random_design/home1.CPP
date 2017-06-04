#include<iostream.h>
#include<conio.h>
#include<graphics.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:/TurboC3/BGI/");
	cleardevice();
	int x=150,y=200;
	line(x,y,x,y+30);
	line(x,y+30,x+30,y+30);
	line(x+30,y+30,x+30,y);
	line(x+30,y,x,y);

	line(x-30,y-30,x-30,y+60);
	line(x-30,y-30,x+60,y-30);
	line(x+60,y-30,x+60,y+60);
	line(x+60,y+60,x-30,y+60);

	line(x+15,y-90,x-30,y-30);
	line(x+15,y-90,x+60,y-30);

	line(x+15,y-90,x+135,y-90);
	line(x+60,y-30,x+170,y-30);
	line(x+135,y-90,x+170,y-30);

	line(x+170,y-30,x+170,y+60);
	line(x+60,y+60,x+170,y+60);
	line(x+95,y+60,x+95,y+20);
	line(x+125,y+60,x+125,y+20);
	line(x+125,y+20,x+95,y+20);
	getch();
	return 0;
}