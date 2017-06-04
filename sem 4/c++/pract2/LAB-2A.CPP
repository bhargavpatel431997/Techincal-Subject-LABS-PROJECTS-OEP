#include<iostream.h>
#include<conio.h>
int odd();
int even();
int main()
{
	clrscr();
	int val;
	cout<<"1.odd sum from 1 to 100\n2.even sum from 1 to 100\nenter the choice\n";
	cin>>val;
	switch(val)
	{
		case 1:
		cout<<"sum of odd num is "<<odd()<<endl;
		getch();
		break;

		case 2:
		cout<<"sum of even num is "<<even()<<endl;
		getch();
		break;

		default:
		cout<<"enter the right choice\n";
		getch();
		break;
	}
	return 0;
}
int odd()
{
   int sum=0;
   for(int i=1;i<101;i++)
   {
	if(i%2!=0)
		sum+=i;
   }
   return sum;
}
int even()
{
   int sum=0;
   for(int i=1;i<101;i++)
   {
	if(i%2==0)
		sum+=i;
   }
   return sum;
}