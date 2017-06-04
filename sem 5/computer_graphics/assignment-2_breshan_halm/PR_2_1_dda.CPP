#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>

//radious 49
void dda(int x1,int y1,int x2,int y2)
{
	float dx=abs(x2-x1),dy=abs(y2-y1);
	if(dx!=0&&dy!=0)
	{
		float m=dy/(dx*1.0);
		if(m<=1)
		{

			float i=(x2>x1)?x1:x2;
			float j=(x2>x1)?y1:y2;
			float x=(x1>x2)?x1:x2;
			for(;i<x;)
			{
				putpixel(i,j,3);
				j+=m;
				i+=1;
			}
		}
		else
		{
			float j=(y2>y1)?x1:x2;
			float i=(y2>y1)?y1:y2;
			float x=(y1>y2)?y1:y2;
			for(;i<x;)
			{
				putpixel(i,j,3);
				j+=1/m;
				i+=1;
			}
		}
	}
}
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:/TC/BGI");
	cleardevice();
	dda(250,250,100,100);
	getch();
	closegraph();
	return 0;
}