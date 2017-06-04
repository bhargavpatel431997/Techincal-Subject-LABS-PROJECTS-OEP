#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n;
    cout<<"WARNING: DO NOT ENTER EQUATOIN WHICH HAVE NO SOLUTION OR INFINITE SOLUTION\n";
    cout<<"enter the total equations\n";
    cin>>n;
    cout<<"MATRIX INSERTION\n";
    float m[n][n+1];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            cout<<"enter the m["<<i+1<<"]["<<j+1<<"] values:\n";
            cin>>m[i][j];
            m[i][j]=(float)m[i][j];
        }
    }
    for(int k=0;k<n-1;k++)
    {
        for(int i=k+1;i<n;i++)
        {
            int flag=0;
            for(int j=k;j<n+1;j++)
            {
                float val;
                if(flag==0)
                {
                    val=m[i][j];
                    flag=1;
                }
                m[i][j]-=(m[k][j]*(val/m[k][k]));
            }

        }
    }
   for(int i=0;i<n;i++)
    {
        int flag=0;
        for(int j=0;j<n+1;j++)
        {
            float val;
            if(flag==0)
            {
                flag=1;
                val=m[i][i];
            }
            m[i][j]/=val;
        }
    }
    int c=0,y=n-1;
    float ans[n];
    for(int i=n;i>=0;i--)
    {
        float x1=0;
        ans[c]=m[y][n];
        for(int b=n-1,k=0,it=0;it<c&&k<c;b--)
        {
            x1+=(ans[k]*m[y][b]);
            k++;
            it++;
        }
        ans[c]-=x1;
        c++;
        y--;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            if(m[i][j]==-0.000000)
                printf("%.3f\t\t",0.0000);
            else
                printf("%.3f\t\t",m[i][j]);
        }


        cout<<endl;
    }
    cout<<endl<<endl;
    char x='z';
    for(int i=0;i<n;i++)
    {
        printf("%c = %f",x,ans[i]);
        cout<<endl;
        x--;
    }
    return 0;
}
/*
  0  1  2  3
0 5 -2  3 18
1 1  7 -3 -22
2 2 -1  6 22
*/

