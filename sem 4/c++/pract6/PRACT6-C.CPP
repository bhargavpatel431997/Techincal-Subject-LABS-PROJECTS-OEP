#include<iostream.h>
#include<conio.h>
class time
{
	private:
	int min,hr;

	public:
	void getdata();
	void display();
};
void time::getdata()
{
	cout<<"enter the minutes and hours\n";
	cin>>min>>hr;
}
void time::display()
{
	cout<<"minutes:"<<min<<"\nhours:"<<hr<<endl;
}
int main()
{
	time a,b;
	clrscr();
	cout<<"object a\n\n";
	a.getdata();
	a.display();
	cout<<"\n\nobject b\n\n";
	b.getdata();
	b.display();
	getch();
	return 0;
}