#include<iostream.h>
#include<conio.h>
class student
{
	protected:
	int en;
	char name[20];
	public:
	void get()
	{
		cout<<"enter the name\n";
		cin>>name;
		cout<<"enter enroll num\n";
		cin>>en;
	}

};
class test
{
	protected:
	int s1,s2;
	public:
	void getsm()
	{
		cout<<"enter sub 1 marks\n";
		cin>>s1;
		cout<<"enter sub 2 marks\n";
		cin>>s2;
	}
};
class statement:public student,public test
{
      public:
      void display()
      {
		cout<<"name:\t"<<name<<endl;
		cout<<"en_no:\t"<<en<<endl;
		cout<<"sub1 marks:\t"<<s1<<endl;
		cout<<"sub2 marks:\t"<<s2<<endl;
		cout<<"average:\t"<<((s1+s2)/2.0);
      }
};
int main()
{
	statement s;
	clrscr();
	s.get();
	s.getsm();
	s.display();
	getch();
	return 0;
}