#include<iostream.h>
#include<conio.h>
int main()
{
	int a,b;
	clrscr();
	cout<<"enter two numbers\n";
	cin>>a>>b;
	a=(a<b)?a:b;
	cout<<"smallest number is "<<a;
	getch();
	return 0;
}