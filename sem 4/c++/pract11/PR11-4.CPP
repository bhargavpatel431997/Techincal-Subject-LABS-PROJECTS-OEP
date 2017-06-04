#include<iostream.h>
#include<conio.h>

class x
{
     int a;
public:
	x(int b=0)
	{
		a=b;
	}
	void display(int x)
	{
		cout<<"value of a+x is:"<<a+x;
	}
};
typedef void (x::*c) (int);
int main()
{
	clrscr();
	c b = &(x::display);
	x obj;
	(obj.*b)(10);
	/* remember that without object we cant call the function of
	class*/
	getch();
	return 0;
}