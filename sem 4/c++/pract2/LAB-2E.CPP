#include<iostream.h>
#include<conio.h>
int main()
{
	clrscr();
	cout<<"feet\t"<<"meter"<<endl;
	for(int i=1;i<=100;i++)
	{
	    cout<<i<<"\t"<<i*0.3048<<endl;
	    if(i%10==0)
		cout<<endl;
	}
	getch();
	return 0;
}