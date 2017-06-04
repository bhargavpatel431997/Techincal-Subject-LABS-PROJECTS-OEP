#include<iostream.h>
#include<conio.h>
int main()
{
	clrscr();
	double val1,val2;
	int i;
	cout<<"simple calculator\n\nenter two numbers\n";
	cin>>val1>>val2;
	cout<<"\n1.sum\n2.subtraction\n3.division\n4.multiplication\n\nenter the choice\n";
	cin>>i;
	if(i==1)
		cout<<"sum is "<<val1+val2<<endl;
	else if(i==2)
		cout<<"subtraction is "<<val1-val2<<endl;

	else if(i==3)
		cout<<"division is "<<val1/val2<<endl;

	else if(i==4)
		cout<<"multiplication is"<<val1*val2<<endl;

	else
		cout<<"enter the right choice\n";
	getch();
	return 0;
}