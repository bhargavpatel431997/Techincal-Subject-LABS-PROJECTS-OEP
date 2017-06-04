#include<iostream.h>
#include<conio.h>

int main()
{
	int n,*a;
	clrscr();
	cout<<"enter the number of total values\n";
	cin>>n;
	a=new int[n];
	for(int i=0;i<n;i++)
	{
		cout<<"enter "<<i+1<<" value"<<endl;
		cin>>a[i];
	}
	int max=a[0],min=a[0];
	for(i=0;i<n;i++)
	{
	   if(max<a[i])
		max=a[i];
	   if(min>a[i])
		min=a[i];
	}
	cout<<"maximum num is "<<max<<endl;
	cout<<"minimum num is "<<min<<endl;
	getch();
	return 0;
}
