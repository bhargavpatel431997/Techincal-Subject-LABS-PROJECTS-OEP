#include<iostream.h>
#include<conio.h>
class numbers
{
	int a,b;

	public:
	void getdata()
	{
		cout<<"enter two nums\n";
		cin>>a>>b;
	}
	inline int swap()
	{
		a^=b^=a^=b;
	}
	void display()
	{
		cout<<"a: "<<a<<endl<<"b: "<<b<<"\n\n";
	}
}
int main()
{
	numbers a;
	a.getdata();
	a.display();
	a.swap();
	a.display();
	getch();
	return 0;
}