#include<iostream>
using namespace std;
class x
{
protected:
    int a;
public:
    virtual void get()
    {
        cout<<"enter the value of a"<<endl;
        cin>>a;
    }

};
class y:public x
{
    int b;
public:
    void get()
    {
        x::get();
        cout<<"enter the value of b"<<endl;
        cin>>b;
    }
};
int main()
{
    y a;
    cout<<"after declaring the function as virtual get() will call from the derived class"<<endl;
    a.get();
    return 0;
}
