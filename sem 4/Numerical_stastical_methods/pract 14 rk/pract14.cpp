#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"r-k method\n\n";
    cout<<"enter the total terms of equations\n";
    cin>>n;
    float c[n],dx[n],dy[n];
    for(int i=0;i<n;i++)
    {
        cout<<"term: "<<i+1<<endl;
        cout<<"enter the degree of x"<<endl;
        cin>>dx[i];
        cout<<"enter the degree of y"<<endl;
        cin>>dy[i];
        cout<<"enter the value of coefficient"<<endl;
        cin>>c[i];
        cout<<endl<<endl;
    }
    cout<<"enter the value of h"<<endl;
    float h;
    cin>>h;
    float x,y;
    cout<<"enter the value of x0\n";
    cin>>x;
    cout<<"enter the value of y0\n";
    cin>>y;
    cout<<"enter the total steps\n";
    int step;
    cin>>step;
    for(int i=0;i<step;i++)
    {
        //y+=f(x,y);
        cout<<"step "<<i+1<<endl;
        float ans=0;
        for(int j=0;j<n;j++)
        {
            float valx,valy;
            valx=pow(x,dx[j]);
            valy=pow(y,dy[j]);
            ans+=(valy*valx*c[j]);
        }
        //cout<<ans<<endl;
        float k1=(ans*h);
        cout<<"k"<<i+1<<" = "<<k1<<endl;
        ans=0;
        for(int j=0;j<n;j++)
        {
            float valx,valy;
            valx=pow(x+h,dx[j]);
            valy=pow(y+k1,dy[j]);
            ans+=(valy*valx*c[j]);
        }
        float k2=h*ans;
        x+=h;
        cout<<"k"<<i+2<<" = "<<k2<<endl;
        y+=(0.5*(k1+k2));
        cout<<"x"<<i+1<<" = "<<x<<endl;
        cout<<"y"<<i+1<<" = "<<y<<endl;
        cout<<endl;
    }
    return 0;
}

