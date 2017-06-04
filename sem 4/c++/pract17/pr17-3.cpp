#include<iostream>
using namespace std;
template <class t>
class p
{
    t x;
public:
    p(t y)
    {
        x=y;
    }
    void display(t y)
    {
        cout<<"value of x "<<x<<endl;
        cout<<"value of y "<<y<<endl;
    }
};
int main()
{
    p<float> s(20.003);
    s.display(22.0022);
    return 0;
}
