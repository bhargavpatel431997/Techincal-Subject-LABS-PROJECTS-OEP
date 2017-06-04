#include<iostream>
#include<math.h>
 //                   x3=(x1+x2)/2.0;
#include<vector>
using namespace std;
int f1(vector<double>&,double,double);
int main()
{
    vector<double> v;
    int degree;
    cout<<"enter the degree \n";
    cin>>degree;
    degree++;
    while(degree--)
    {
        double val;
        cout<<"enter the constant's value of degree"<<degree<<endl;
        cin>>val;
        v.push_back(val);
    }
    double x1,x2,x3;
    cout<<"enter the lower limit and upper limit\n";
    cin>>x1>>x2;
    x3=(x1+x2)/2.0;
    cout<<"enter the value of iteration\n";
    int n;
    cin>>n;
    cout<<"iteration step\tlower limit\thigher limit\troot\n";
    for(int i=0;i<n;i++)
    {
        int x=f1(v,x1,x3);
        if(i!=0)
        {
                if(x<0)
                {
                    cout<<i+1<<"\t\t"<<x1<<"\t\t"<<x3<<"\t\t"<<((x1+x3)/2.0)<<endl;
                    x2=x3;
                    x3=(x1+x2)/2.0;
                }
 // x3 is root x1 is lower x2 is upper
                else
                {
                    cout<<i+1<<"\t\t"<<x3<<"\t\t"<<x2<<"\t\t"<<((x3+x2)/2.0)<<endl;
                    x1=x3;
                    x3=(x1+x2)/2.0;
                }
        }
        else
            cout<<i+1<<"\t\t"<<x1<<"\t\t"<<x2<<"\t\t"<<x3<<endl;

    }
    return 0;
}

int f1(vector<double>& v,double val1,double val2)
{
    double sum1=0,sum2=0;
    int s=v.size();
    int i=0;
    while(s--)
    {
        sum1+=v[i]*pow(val1,s);
        sum2+=v[i]*pow(val2,s);
        i++;
    }
    if(sum1*sum2<0)
        return -1;
    else
        return 1;
}
