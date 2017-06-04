#include<iostream.h>
#include<conio.h>
//#include<string>
//using namespace std;
class employee
{
    //string name;
    char name[20];
    int id;
    char desi[20];
public:
    void read()
    {
	cout<<"enter the name\n";
	cin>>name;
	cout<<"enter id\n";
	cin>>id;
	cout<<"enter the designation name\n";
	cin>>desi;
    }
   /* give()
    {
	return name;
    }  */
    char* getname()
    {
	return name;
    }
    char* getdesi()
    {
	return desi;
    }
    int getid()
    {
	return id;
    }
};
class salary:public employee
{
    float basic,hra;
public:
    void get()
    {
	read();
	cout<<"enter the salary\n";
	cin>>basic;
	hra=(basic*0.9);
    }
    void display()
    {
	cout<<"name:\t"<<getname()<<endl;
	cout<<"id:\t"<<getid()<<endl;
	cout<<"designation:\t"<<getdesi()<<endl;
	cout<<"basic:\t"<<basic<<endl;
	cout<<"hra:\t"<<hra<<endl;
    }
};
int main()
{
    clrscr();
    salary x;
    x.get();
    x.display();
    getch();
    return 0;
}
