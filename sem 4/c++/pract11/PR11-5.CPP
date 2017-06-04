#include<iostream.h>
#include<conio.h>
class x
{
    public:
    int ab;
    x(int a=0)
    {
	 ab=a;
    }
    void fun()
    {
	cout<<"value of ab\t"<<ab<<endl;
    }
};
int main()
{
	clrscr();
	x a(20),*p=&a;
	cout<<"ab : "<<p->ab<<endl;
	p->fun();
	getch();
	return 0;
}