#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    cout<<"newtons simpson 3/8 method"<<endl<<endl;
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
    float h=x1[1]-x1[0];
    float ans1=0,ans2=0,ans;
    for(int i=3;i<values-1;i+=3)
        ans1+=y1[i];
    for(int i=1;i<values-1;i++)
        if(i%3!=0)
            ans2+=y1[i];
    ans1*=2;
    ans2*=3;
    ans=((3*h)/8)*(y1[0]+y1[values-1]+ans1+ans2);
    cout<<"ans is "<<ans;
    return 0;
}
