#include<iostream>
using namespace std;
int main()
{
    cout.fill('*');
    cout.precision(3);
    cout.setf(ios::internal,ios::adjustfield);
    cout<<123.29299292;
    cout.unsetf(ios::internal);
    return 0;
}
