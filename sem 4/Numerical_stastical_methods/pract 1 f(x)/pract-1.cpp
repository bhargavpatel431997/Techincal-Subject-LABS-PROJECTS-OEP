#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
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
    double val1,sum=0;
    int val2=v.size();
    cout<<"enter the value of x for find f(x)\n";
    cin>>val1;
    int i=0;
    while(val2--)
    {
        sum+=v[i]*pow(val1,val2);
        i++;
    }
    cout<<"f(x) = "<<sum<<endl;
    return 0;
}
