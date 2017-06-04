#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    cout<<"CURVE FITTING Straight line\n";
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
    cout<<"enter the value of X\n";
    float x;
    cin>>x;
    float sigma_x=0,sigma_y=0,sigma_x_sqr=0,sigma_x_y=0;
    for(int i=0;i<values;i++)
    {
        sigma_x+=x1[i];
        sigma_y+=y1[i];
        sigma_x_sqr+=(x1[i]*x1[i]);
        sigma_x_y+=(x1[i]*y1[i]);
    }
    float a1=(((values*sigma_x_y)-(sigma_x*sigma_y))/((values*sigma_x_sqr)-(sigma_x*sigma_x)));
    float a2=((sigma_y/values)-((a1*sigma_x)/values));
    float ans=(a2+(a1*x));
    cout<<"ans is "<<ans<<endl;
    return 0;
}
