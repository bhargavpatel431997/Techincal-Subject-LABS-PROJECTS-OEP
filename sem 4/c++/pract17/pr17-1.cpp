#include<iostream>
using namespace std;
template <class t>
void sw(t& a,t& b)
{
    t c;
    c=a;
    a=b;
    b=c;
}
int main()
{
    float a=10,b=20;
    cout<<"before swap\n";
    cout<<"value of a "<<a<<" value of b "<<b<<endl;
    sw(a,b);
    cout<<"after swap\n";
    cout<<"value of a "<<a<<" value of b "<<b;
    return 0;
}
