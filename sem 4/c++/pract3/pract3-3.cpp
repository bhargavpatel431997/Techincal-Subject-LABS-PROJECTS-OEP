#include<iostream.h>
#include<conio.h>
int main()
{
	int a;
	clrscr();
	cout<<"enter the number\n";
	cin>>a;
	if(a%2==0)
	{
		if(a!=0)
		cout<<"number is even\n";
		else
		cout<<"number is nither even nor odd\n";
	}
	else
		cout<<"number is odd\n";
	getch();	
	return 0;
}