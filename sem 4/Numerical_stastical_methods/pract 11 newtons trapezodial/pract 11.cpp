#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    cout<<"newtons trapezodial method"<<endl<<endl;
    cout<<"enter TOTAL values of x\n"<<endl;
    int values;
    cin>>values;
//    float ans=0.0;
    float x1[values],y1[values];
    cout<<endl;

    for(int i=0;i<values;i++)
    {
        cout<<"enter the value of x row and element "<<i+1<<" st value"<<endl;
        cin>>x1[i];
    }
    cout<<endl;
    for(int i=0;i<values;i++)
    {
        cout<<"enter the value of y or f(x) row and element "<<i+1<<" st value"<<endl;
        cin>>y1[i];
    }
    cout<<endl;
    cout<<"enter the value of x1 boundary\n";
    float a;
    cin>>a;
    cout<<"enter the value of x2 boundary\n";
    float b;
    cin>>b;
    float h=(x1[1]-x1[0]);
    float ans1=0,ans;
    for(int i=1;i<values-1;i++)
        ans1+=y1[i];
    ans1*=2;
    ans=(h/2.0)*(ans1+y1[0]+y1[values-1]);
    cout<<"ans is "<<ans<<endl;
    return 0;
}
