#include<iostream>
using namespace std;
template<class t1,class t2>
class student
{
    int id;
    t1 marks1,marks2;
    t2 fee;
public:
    student(int a,t1 b,t1 c,t2 d)
    {
        id=a;
        marks1=b;
        marks2=c;
        fee=d;
    }
    void display()
    {
        cout<<"student id: "<<id<<endl;
        cout<<"student marks1: "<<marks1<<endl;
        cout<<"student marks2: "<<marks2<<endl;
        cout<<"tution fee : "<<fee<<endl;
    }

};
int main()
{
    student<int,float> s1(24,99,100,10000.34);
    s1.display();
    return 0;
}
