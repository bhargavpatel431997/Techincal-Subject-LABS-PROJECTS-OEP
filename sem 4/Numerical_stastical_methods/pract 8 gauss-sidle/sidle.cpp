#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter total equations:-\n";
    cin>>n;
    float m[n][n+1];
    for(int i=0;i<n;i++)
    {
        char c='a';
        cout<<endl<<endl;
        cout<<"equation "<<i+1<<":-"<<endl<<endl;
        for(int j=0;j<n+1;j++)
        {
            if(j==n)
            {
                cout<<"enter value of constant\n";
                cin>>m[i][j];
            }
            else
            {
                cout<<"enter coefficient value of '"<<c<<"' variable\n";
                cin>>m[i][j];
            }
            c++;
        }
    }
    int loc[n],c=0;
    for(int h=0;h<n;h++)
    {
        float val=0.0;
        c=0;
        for(int i=0;i<n;i++)
        {
            float z=0.0;
            for(int j=h-1;j>=0;j--)
                z+=m[i][j];
            for(int k=h+1;k<n;k++)
                z+=m[i][k];
            if(m[i][h]>z)
            {
                loc[h]=i;
                c++;
                if(c>1)
                   break;
            }
        }

    }

    if(c<2&&c>0)
    {
        int m1[n][n+1];
        for(int z=0;z<n;z++)
        {
            int i=loc[z];
            for(int j=0;j<n+1;j++)
                m1[z][j]=m[i][j];
        }
        float a[n][n];
        for(int i=0;i<n;i++)
        {
            int flag=0;
            for(int j=0;j<n+1;j++)
            {
                if(i!=j)
                {
                    if(j!=n)
                    {
                        if(flag==1)
                            a[i][j-1]=(m1[i][j]*(-1.0))/(m1[i][i]*1.0);
                        else
                            a[i][j]=(m1[i][j]*(-1.0))/(m1[i][i]*1.0);
                    }
                    else
                        a[i][j-1]=(m1[i][j]*1.0)/(m1[i][i]*1.0);
                }
                else
                    flag=1;
            }

        }
        float x[n][n+1];
        for(int i=0;i<n;i++)
        {
            int k=0;
            for(int j=0;j<n+1;j++)
            {
                if(i!=j)
                {
                    x[i][j]=a[i][k];
                    k++;
                }
                else
                    x[i][j]=0;
            }
        }
        float d[n+1];
        for(int i=0;i<n+1;i++)
        {
            if(i!=n)
                d[i]=0;
            else
                d[i]=1;
        }
        int it;
        cout<<"enter total iteration\n"<<endl;
        cin>>it;
        for(int k=0;k<it;k++)
        {
            char c='a';
            cout<<"iteration "<<k+1<<endl;
            for(int i=0;i<n;i++)
            {
                float sum=0.0;
                for(int j=0;j<n+1;j++)
                {
                    if(i!=j)
                        sum+=(x[i][j]*d[j]);
                }
                cout<<c<<" = "<<sum<<endl;
                d[i]=sum;
                c++;
            }
            cout<<endl<<endl;
        }
    }
    else
        cout<<"this method is not apply on this equations\n";

    return 0;
}
