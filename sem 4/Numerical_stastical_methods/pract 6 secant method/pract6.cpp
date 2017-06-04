//warning this program is only for  polynomial
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
float f(vector<float>&,float);
int main()
{
    int degree;
    vector<float> vf;
    cout<<"enter the degree\n";
    cin>>degree;
    degree++;
    while(degree--)
    {
        float val;
        cout<<"enter the coefficient at degree "<<degree<<endl;
        cin>>val;
        vf.push_back(val);
    }

    float x0,x1,x2;
    cout<<"enter the lower limit and upper limit\n";
    cin>>x0>>x1;
    cout<<"enter the total iteration\n";
    int a;
    cin>>a;
    cout<<"iteration\tx_i-1\t\tx_i\t\tx_i+1\n";
    for(int i=0;i<a;i++)
    {
        float x2=x1-((f(vf,x1)*(x1-x0))/(f(vf,x1)-f(vf,x0)));
        cout<<i+1<<"\t\t"<<x0<<"\t\t"<<x1<<"\t\t"<<x2<<endl;
        x0=x1;
        x1=x2;
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
