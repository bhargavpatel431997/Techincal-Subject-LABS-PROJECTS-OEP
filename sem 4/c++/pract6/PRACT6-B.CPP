#include<iostream.h>
#include<conio.h>
inline void swap(int a,int b)
{
      a^=b^=a^=b;
      cout<<"a: "<<a<<"\nb: "<<b<<endl;
}
int main()
{
	int a,b;
	clrscr();
	cout<<"enter the two nums\n";
	cin>>a>>b;
	swap(a,b);
	getch();
	 return 0;
}