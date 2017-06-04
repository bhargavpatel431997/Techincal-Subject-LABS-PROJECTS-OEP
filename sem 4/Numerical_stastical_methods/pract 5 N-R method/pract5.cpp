//warning this program is only for  polynomial
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
float f(vector<float>&,float);
int main()
{
    int degree;
    vector<float> vf,vf_d;
    cout<<"enter the degree\n";
    cin>>degree;
    degree++;
    while(degree--)
    {
        float val;
        cout<<"enter the constant at "<<degree<<endl;
        cin>>val;
        vf.push_back(val);
    }
    degree=vf.size();
    int q=0;
    while(degree--)
    {
        if(q==vf.size()-1)
            break;
        vf_d.push_back((degree*vf[q]));
        q++;
    }
    float x0,x1,x2;
    cout<<"enter the lower limit and upper limit\n";
    cin>>x0>>x1;
    x2=(x0+x1)/2.0;
    if(f(vf,x1)==0||f(vf,x0)==0)
    {
        if(f(vf,x1)==0)
        cout<<"your root is upper limit!\n";
        else
        cout<<"your root is lower limit!\n";
    }

    else
    {
        cout<<"enter the total iteration\n";
        int a;
        cin>>a;
        cout<<"iteration\tx\t\troot\n";
        for(int i=0;i<a;i++)
        {
            float x1=x2-(f(vf,x2)/f(vf_d,x2));
            cout<<i+1<<"\t\t"<<x2<<"\t\t"<<x1<<endl;
            x2=x1;
        }
    }

    return 0;
}
float f(vector<float>& v,float x)
{
    float sum=0;
    int i=v.size(),j=0;

    while(i--)
    {
        sum+=v[j]*pow(x,i);
        j++;
    }
    return sum;
}
