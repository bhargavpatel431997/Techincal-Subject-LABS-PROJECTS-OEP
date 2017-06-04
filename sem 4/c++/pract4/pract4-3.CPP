#include<iostream.h>
#include<conio.h>
int main()
{
	int a,b;
	clrscr();
	cout<<"enter two numbers\n";
	cin>>a>>b;
	a^=b^=a^=b;
	cout<<"swaped number is "<<a<<" and "<<b;
	getch();
	return 0;
}