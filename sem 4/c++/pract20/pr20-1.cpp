#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream a;
    a.open("hi.txt");
    a << "hi bhaggu\n";
    a << "hi akku\n";
    a << "hi mehtu\n";
    a << "hi naittu\n";
    a.close();
    ifstream b;
    b.open("hi.txt");
    char line[23];
    while(b)
    {
        b.getline(line,23);
        cout<<line<<endl;
    }
    b.close();
    return 0;
}
