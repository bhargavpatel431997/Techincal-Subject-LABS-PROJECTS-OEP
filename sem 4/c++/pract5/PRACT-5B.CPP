#include<iostream.h>
#include<conio.h>
class item
{
	private:
	char iname[20];
	int icode,prize;

	public:
	void getdata(int);
	void display();
};

int main()
{
	item s[10];
	clrscr();
	for(int i=0;i<10;i++)
	{
		s[i].getdata(i);
		cout<<endl<<endl;
	}
	for(i=0;i<10;i++)
	{
		cout<<"item "<<i+1<<endl;
		s[i].display();
	}
	getch();
	return 0;
}

void item::display()
{
	cout<<"name of item\t"<<iname<<"\nitem code\t"<<icode<<"\nitem prize\t"<<prize<<"\n\n";
}
void item::getdata(int a)
{
	cout<<"enter the item name of "<<a+1<<" item"<<endl;
	cin>>iname;
	cout<<"enter the item code of "<<a+1<<" item"<<endl;;
	cin>>icode;
	cout<<"enter the item prize of "<<a+1<<" item"<<endl;
	cin>>prize;
}