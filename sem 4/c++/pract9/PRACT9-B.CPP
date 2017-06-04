#include<conio.h>
#include<iostream.h>

class vehicle
{
	protected:
	int number;
};
class car:public vehicle
{
	int seat,splim;
	public:
	void getdata()
	{
		cout<<"enter car number\n";
		cin>>number;//here we can acess protected element directly
		cout<<"enter total seats\n";
		cin>>seat;
		cout<<"enter speed limit\n";
		cin>>splim;
	}
	void display()
	{
		cout<<"car number\t"<<number<<endl;
		cout<<"total seats\t"<<seat<<endl;
		cout<<"speed limit\t"<<splim<<endl;
	}
};
int main()
{
  clrscr();
  car b;
  b.getdata();
  b.display();
  getch();
  return 0;
}