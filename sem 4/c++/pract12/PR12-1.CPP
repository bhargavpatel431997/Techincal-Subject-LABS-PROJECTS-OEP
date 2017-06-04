#include<iostream.h>
#include<conio.h>
class add
{
	int a;
public:
	add(int b=0)
	{
		a=b;
	}
	add greater(add b,add c)
	{
	      if(b.a>c.a)
	      {
            this->a=b.a;
            return *this;
	      }
	      else
	      {
            this->a=c.a;
            return *this;
	      }
	}
	void display()
	{
		cout<<"value of a:"<<this->a<<endl;
	}
};
int main()
{
	clrscr();
	add a(20),b(30);
	add c,d;
	d=c.greater(a,b); // here same copy will generate like c d objects\
	d.display();

	getch();
	return 0;
}
