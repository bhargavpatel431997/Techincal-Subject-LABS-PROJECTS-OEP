#include<iostream.h>
#include<conio.h>
int& sum(int&,int&,int&);
int main()
{
	int a,b,c;
	clrscr();
	cout<<"enter three values\n";
	cin>>a>>b>>c;
	int& s=sum(a,b,c);
	cout<<"sum is "<<s;
	getch();
	return 0;
}
int& sum(int& a,int& b,int& c)
{
	int& s=a+b+c;
	return s;
}