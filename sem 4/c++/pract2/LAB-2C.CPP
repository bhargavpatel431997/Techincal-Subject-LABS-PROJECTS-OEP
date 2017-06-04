#include<iostream.h>
#include<conio.h>
int main()
{
	int a[5];
	clrscr();
	for(int j=0;j<5;j++)
	{
		cout<<"enter "<<j+1<<" element\n";
		cin>>a[j];
	}
	for(int i=0;i<5;i++)
	{

		for(j=0;j<5-i;j++)
			{
			if(a[j]>a[j+1])
				{
					int val;
					val=a[j];
					a[j]=a[j+1];
					a[j+1]=val;
				}
			}

	}
	cout<<"in ascending order\n";
	for(int h=1;h<=5;h++)
		cout<<a[h]<<" ";
	cout<<"\nin decending order\n";
	for(h=5;h>0;h--)
		cout<<a[h]<<" ";
	getch();
	return 0;
}
