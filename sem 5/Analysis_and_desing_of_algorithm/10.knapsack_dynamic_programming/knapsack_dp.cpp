#include<iostream>
#include<vector>
#include<windows.h>
using namespace std;
/*
v[i][j]=max(v[i-1,j],v[i-1,j-wi]+vi)
*/
int main()
{
    vector<pair<int,int> >vw;
    int m,n;
    cout<<"enter total number of objects\n";
    cin>>m;
    cout<<"enter weight capacity\n";
    cin>>n;
    int table[m+1][n+1];
    for(int j=0;j<m;j++)
    {
        int a,b;
        cout<<"enter "<<j+1<<" value and weight"<<endl;
        cin>>a>>b;
        vw.push_back(make_pair(a,b));
    }
    for(int i=0;i<m+1;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            if(i==0||j==0)
                table[i][j]=0;
            else if(vw[i-1].second<=j)
                table[i][j]=max(table[i-1][j],table[i-1][j-vw[i-1].second]+vw[i-1].first);
            else
                table[i][j]=table[i-1][j];
        }
    }
    for(int i=0;i<n+1;i++)
        table[0][i]=i;
    for(int i=0;i<m+1;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            if(i>0&&j==0)
                cout<<vw[i-1].first<<","<<vw[i-1].second<<"\t";
            else
                cout<<table[i][j]<<"\t";
        }
        cout<<endl;
    }

    cout<<"\nbacktracking portion\n\n";
    int total_w=0;
    for(int i=m;i>=1;)
    {
        for(int j=n;j>=1;)
        {
            if(table[i][j]==table[i-1][j])
                i=i-1;
            else if(table[i-1][j-vw[i-1].second]+vw[i-1].first==table[i][j])
            {
                i=i-1;
                j=j-vw[i-1].second;
            }
            else
                break;
            total_w+=vw[i-1].second;
            cout<<"table"<<"["<<i<<"]"<<"["<<j<<"]"<<" value,weight: "<<vw[i-1].first<<","<<vw[i-1].second<<"  table value:"<<table[i][j]<<endl;
            if(total_w==n)
                    exit(0);
        }
    }
    return 0;
}
