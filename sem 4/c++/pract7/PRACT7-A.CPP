#include<iostream.h>
#include<conio.h>

class employee
{
	int e_id;
	float e_sal;
	public:
	employee(int id=0,float sal=0.0)
	{
	   e_id=id;
	   e_sal=sal;
	}
	~employee()
	{
	       cout<<"destrocrtor is called\n";
	}
	void read();
	void display();
};
void employee::read()
{
    cout<<"enter id:"<<endl;
    cin>>e_id;
    cout<<"enter salary:"<<endl;
    cin>>e_sal;
}
void employee::display()
{
    cout<<"id: "<<e_id<<endl;
    cout<<"salary: "<<e_sal<<endl;
}
int main()
{
	clrscr();
	employee a,b(10,2000.00);

	cout<<"obj A:\n";
	a.display();
	cout<<endl<<endl;

	cout<<"obj B:\n";
	b.display();
	cout<<endl<<endl;

	cout<<"obj A:\n";
	a.read();
	cout<<endl;
	a.display();
	cout<<endl<<endl;

	cout<<"obj B:\n";
	b.read();
	cout<<endl;
	b.display();

	getch();
	return 0;
}