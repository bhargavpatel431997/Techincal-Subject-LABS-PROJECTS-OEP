#include<iostream>
using namespace std;
class beta;
class alpha
{
    int data;
public:
    void getdata()
    {
        cout<<"enter the data in alpha\n";
        cin>>data;
    }
    friend void max(alpha,beta);
};
class beta
{
    int data;
public:
    void getdata()
    {
        cout<<"enter the data in beta\n";
        cin>>data;
    }
    friend void max(alpha,beta);
};
void max(alpha a,beta b)
{
    if(a.data<b.data)
        cout<<"beta class data is greater then alpha\n";
    else
        cout<<"alpha class data is greater then beta\n";
}
int main()
{
    alpha a;
    beta b;
    a.getdata();
    b.getdata();
    max(a,b);
    return 0;
}
