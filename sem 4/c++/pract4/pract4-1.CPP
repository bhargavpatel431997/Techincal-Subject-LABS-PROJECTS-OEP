#include<iostream.h>
#include<conio.h>
int main()
{
	int a,sum=0;
	clrscr();
	cout<<"enter number\n";
	cin>>a;
	while(a>0)
	{
		sum+=a%10;
		a=a/10;
	}
	cout<<"sum is\n"<<sum;
	getch();
	return 0;
}