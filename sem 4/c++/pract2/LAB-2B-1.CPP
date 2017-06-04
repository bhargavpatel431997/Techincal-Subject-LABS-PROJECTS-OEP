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
	switch(i)
	{
		case 1:
		cout<<"sum is "<<val1+val2<<endl;
		break;

		case 2:
		cout<<"subtraction is "<<val1-val2<<endl;
		break;

		case 3:
		cout<<"division is "<<val1/val2<<endl;
		break;

		case 4:
		cout<<"multiplication is"<<val1*val2<<endl;
		break;

		default:
		cout<<"enter the right choice\n";
		break;
	}
	getch();
	return 0;
}
