#include<iostream>
using namespace std;
void devide(int a,int b)
{
    if(b!=0)
        cout<<"division is "<<((float)(a/b))<<endl;
    else
        throw(a);
}
int main()
{
    int a,b;
    cout<<"division"<<endl;
    cout<<"enter value of a"<<endl;
    cin>>a;
    cout<<"enter value of b"<<endl;
    cin>>b;
    try
    {
        cout<<"in try block"<<endl;
        devide(a,b);
    }
    catch(int x)
    {
        cout<<"by zero division is not possible of value "<<a<<endl;
    }
}
