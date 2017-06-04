#include<iostream>
using namespace std;
class abstract_base
{
	protected:
	int x;
	public:
	virtual int get(int)=0;
	virtual void display()=0;
};
class child_1:public abstract_base
{
	public:
	int get(int z)
	{
		x=z;
	}
	void display()
	{
		cout<<"class 1\tx = "<<x<<endl;
	}
};
class child_2:public abstract_base
{
	public:
	int get(int z)
	{
		x=z/2;
	}
	void display()
	{
		cout<<"class 2\tx = "<<x<<endl;
	}
};
int main()
{
	child_1 a;
	child_2 b;
	abstract_base *c=&a;
	abstract_base *d=&b;
	c->get(20);
	c->display();
	d->get(20);
	d->display();
	return 0;
}
