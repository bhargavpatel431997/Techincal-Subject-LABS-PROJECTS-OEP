#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    cout<<"lagrange interpolation method"<<endl<<endl;
    cout<<"enter TOTAL values of x\n"<<endl;
    int values;
    cin>>values;
    float ans=0.0;
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
    cout<<"enter the value of X\n";
    float x;
    cin>>x;
    for(int i=0;i<values;i++)
    {
        float ans1=1,ans2=1;
        for(int j=0;j<values;j++)
        {
            if(i!=j)
                ans1*=(x-x1[j]);
        }
        ans1*=y1[i];
        for(int j=0;j<values;j++)
        {
            if(i!=j)
                ans2*=(x1[i]-x1[j]);
        }
        ans+=(ans1/ans2);
    }
    cout<<"ans is : "<<ans<<endl;
    return 0;
}
