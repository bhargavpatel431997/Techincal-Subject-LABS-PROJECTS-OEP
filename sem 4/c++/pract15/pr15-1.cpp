#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a=0;
    cout.setf(ios::showpoint);
    cout.setf(ios::showpos);
    cout<<setprecision(4);
    cout<<setiosflags(ios::scientific);
    cout<<setw(10)<<56453.456445<<endl;
    return 0;
}
