#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
float g(vector<float>&,float,float);
int main()
{
    int degree;
    float power;
    vector<float> v;
    cout<<"WARNING: g(x) insertion not f(x)"<<endl;
    cout<<"NOTE: 1.enter the max degree of equation which is in parenthesis first \n 2.power of whole equation enter at last \n\n";
    cout<<"1.enter the max degree of equation which is in parenthesis \n";
    cin>>degree;
    degree++;
    while(degree--)
    {
        float val;
        cout<<"enter the constant at "<<degree<<endl;
        cin>>val;
        v.push_back(val);
    }
    cout<<"2. enter  power of whole equation\n";
    cin>>power;
    float x0,x1,x2;
    cout<<"enter the lower limit and upper limit\n";
    cin>>x0>>x1;
    x2=(x0+x1)/2.0;
    int it,y=1;
    cout<<"enter the total iteration\n";
    cin>>it;
    cout<<"iteration\tx\tg(x)\n";
    while(it--)
    {
        cout<<y<<"\t\t"<<x2<<"\t"<<g(v,x2,power)<<endl;
        x2=g(v,x2,power);
        y++;
    }
    return 0;
}
float g(vector<float>& v,float x,float power)
{
    float sum=0;
    int i=v.size(),j=0;

    while(i--)
    {
        sum+=v[j]*pow(x,i);
        j++;
    }
    sum=pow(sum,power);
    return sum;
}
