#include<iostream>
using namespace std;
int main()
{
    int i=0;
    try
    {
        if(i==0)
            throw(23);
        else if(i==1)
            throw('c');
        else if(i==-1)
            throw(66.666);
        else
            throw("string");
    }
    catch(int i)
    {
        cout<<"integer value caught\n";
    }
    catch(char c)
    {
        cout<<"char. caught\n";
    }
    catch(float f)
    {
        cout<<"float value caught\n";
     }
    catch(string s)
    {
        cout<<"string is caught\n";
    }
    return 0;
}
