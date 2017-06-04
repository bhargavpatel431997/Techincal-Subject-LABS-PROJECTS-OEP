#include<iostream>
using namespace std;
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
        if(b!=0)
        {
            cout<<"division value is "<<((float)(a/b))<<endl;
        }
        else
        {
            throw(a);
        }
    }
    catch(int x)
    {
         cout<<"by zero division is not possible of "<<a<<endl;
    }
}
