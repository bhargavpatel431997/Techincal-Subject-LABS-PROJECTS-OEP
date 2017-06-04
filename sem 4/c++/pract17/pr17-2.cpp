#include<iostream>
using namespace std;
template <class t>
void print(t a,int b)
{
    cout<<"value of a is"<<a<<endl;
    cout<<"value of b is"<<b<<endl;
}
template <class t>
void print(t a)
{
    cout<<"value of a is"<<a<<endl;
}
int main()
{
    int a=10;
    float b=10.222;
    cout<<" print with two parameter\n";
    print(b,a);
    cout<<endl<<"print with one parameter\n";
    print(b);
    return 0;
}
