#include<iostream>
using namespace std;
ostream &manip(ostream &o)
{
    o<<"$";
    return o;
}
int main()
{
    cout<<manip<<4533<<endl;
    return 0;
}
