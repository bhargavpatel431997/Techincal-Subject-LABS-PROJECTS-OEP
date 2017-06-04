#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
float f(vector<float>&,float);
int main()
{
    int degree;
    vector<float> v;
    cout<<"enter the degree\n";
    cin>>degree;
    degree++;
    while(degree--)
    {
        float val;
        cout<<"enter the constant at "<<degree<<endl;
        cin>>val;
        v.push_back(val);
    }
    float x0,x1,x2;
    cout<<"enter the lower limit and upper limit\n";
    cin>>x0>>x1;
    int i,j=1;
    cout<<"enter the total iteration\n";
    cin>>i;
    cout<<"\n\nthe equation is :\n";
    for(int m=0,n=v.size()-1;m<v.size();m++)
    {
        if(v[m]!=0&&n!=0)
        {
                if(v[m]==-1)
                    cout<<"-"<<"x^"<<n;
                else if(v[m]==1)
                    cout<<"+"<<"x^"<<n;
                else
                    cout<<v[m]<<"x^"<<n;
        }
        else
        {
            if(n==0)
                cout<<v[m];
        }
        n--;
    }
    cout<<"\n\n\n";

    cout<<"iteration\tlower limit\tupper limit\troot\n";
    while(i--)
    {
        x2=((x0*f(v,x1))-(x1*f(v,x0)))/(f(v,x1)-f(v,x0));
        if(j!=1)
        {
            cout<<j<<"\t\t"<<x0<<"\t\t"<<x1<<"\t\t"<<x2<<endl;
            if(f(v,x0)*f(v,x2)<0)
                x1=x2;
            else
                x0=x2;
        }
        else
        {
            cout<<j<<"\t\t"<<x0<<"\t\t"<<x1<<"\t\t"<<x2<<endl;
            if(f(v,x0)*f(v,x2)<0)
                x1=x2;
            else
                x0=x2;
        }

        j++;
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
