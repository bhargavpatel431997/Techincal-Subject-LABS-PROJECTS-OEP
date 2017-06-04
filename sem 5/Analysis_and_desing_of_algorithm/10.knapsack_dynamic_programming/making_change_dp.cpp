#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    int m,n;
    cout<<"enter total number of coins\n";
    cin>>m;
    cout<<"enter amount for which you want to find minimum coins\n";
    cin>>n;
    int table[m+1][n+2];
    for(int i=1;i<m+1;i++)
    {
        cout<<"enter "<<i<<" coin value\n";
        cin>>table[i][0];
    }
    for(int j=1;j<n+2;j++)
        table[0][j]=j-1;
    table[0][0]=0;
    for(int i=1;i<m+1;i++)
    {
        for(int j=1;j<n+2;j++)
        {
            if(i==1)
                if(i==1&&j!=1)
                    table[i][j]=1+table[i][j-table[i][0]];
                else
                    table[i][j]=0;
            else if(j<table[i][0])
                table[i][j]=table[i-1][j];
            else
                table[i][j]=min(table[i-1][j],1+table[i][j-table[i][0]]);
        }
    }
    for(int i=0;i<m+1;i++)
    {
        for(int j=0;j<n+2;j++)
        {
            cout<<table[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"\n\nbacktracking portion\n"<<endl;
    int j=n+1;
    for(int i=m;i>=1&&table[i][j]!=0;)
    {
        for(int j=n+1;j>=1;)
        {
            if(table[i-1][j]==table[i][j])
                i=i-1;
            else if(1+table[i][j-table[i][0]]==table[i][j])
                j=j-table[i][0];
            else
                break;
            if(table[i][j]==0)
                    exit(0);
            cout<<"table"<<"["<<i<<"]"<<"["<<j-1<<"]"<<" coin: "<<table[i][0]<<"  table value:"<<table[i][j]<<endl;
        }
    }
    return 0;
}
