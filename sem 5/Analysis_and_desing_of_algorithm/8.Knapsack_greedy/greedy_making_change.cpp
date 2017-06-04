#include<iostream>
#include<cstdio>
#include<vector>
#define ll long long
using namespace std;

int main()
{
/*    ll n;
    printf("enter amount to convert into coins\n");
    scanf("%lld",&n);
	ll coins[9]={1,2,5,10,20,50,100,500,1000};
    vector<ll> v;
    ll sum=0,counter=8;
    bool no_solution=false;
    while(sum!=n&&counter>=0)
    {
        while(sum+coins[counter]<=n)
        {
            v.push_back(coins[counter]);
            sum+=coins[counter];
        }
        counter--;
    }
    if(sum!=n)
        cout<<"No possible solution"<<endl;
    else
    {
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
        cout<<endl<<"minimum total number of coins required :"<<v.size()<<endl;
        cout<<endl;
    }*/
    for(int i=0;i<=256;i++)
    printf("%d\t%c\n",i,i);
    return 0;
}

