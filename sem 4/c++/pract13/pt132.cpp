#include<iostream>
//#include<iomanip.h>
using namespace std;
int main()
{
    char string[10];
    int size=10;
    cout<<"enter the string"<<endl;
    cin.getline(string,size);
    cout.write(string,10);
    return 0;
}

