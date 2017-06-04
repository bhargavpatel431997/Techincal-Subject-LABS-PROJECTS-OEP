#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[10];
    cout<<"enter the string\n";
    cin.getline(a,10);
    int len=strlen(a);
    for(int i=1;i<len+1;i++)
    {
        cout.write(a,i);
        cout<<endl;
    }
    return 0;
}
