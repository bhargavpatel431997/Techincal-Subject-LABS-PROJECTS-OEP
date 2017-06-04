#include<iostream>
using namespace std;
class x
{
protected:    
	int a;
public:    
	void get()    
	{
	        cout<<"enter value of a"<<endl;
 	       cin>>a;
	}
};
class y:public x
{
    int b;
public:
    void getdata()
    {        
	get();
        cout<<"enter value of b"<<endl;
        cin>>b;
        cout<<endl;
    }
    void display()
    {
        cout<<"value of a"<<a<<endl;
        cout<<"value of b"<<b<<endl;
    }
};
int main()
{
    x *p,a;
    y b;
    p=&a;
    p->get();
    p=&b;
  //  p->getdata();not accessible
    p->get();
    b.display();
    //int b IS NOT ACCESSIBLE via pointer of base class
    cout<<endl;
}