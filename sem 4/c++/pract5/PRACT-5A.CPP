#include<iostream.h>
#include<conio.h>
class student
{
	private:
	char name[20];
	int age;

	public:
	void read();
	void display();
};

int main()
{
	student s;
	clrscr();
	s.read();
	s.display();
	getch();
	return 0;
}

void student::display()
{
	cout<<"name\t"<<name<<"\nage\t"<<age<<endl;
}
void student::read()
{
	cout<<"enter the name and age\n";
	cin>>name>>age;
}
