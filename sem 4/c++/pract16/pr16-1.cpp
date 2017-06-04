#include<iostream>
using namespace std;
template<class t>
class student_marks
{
    int id;
    t marks1,marks2;
public:
    student_marks()
    {
        cout<<"enter student id\n";
        cin>>id;
        cout<<"enter marks1\n";
        cin>>marks1;
        cout<<"enter marks2\n";
        cin>>marks2;
    }
    t add()
    {
        return (marks1+marks2);
    }
};
int main()
{
    student_marks<int> s1;
    student_marks<float> s2;
    cout<<"int object"<<endl;
    cout<<"sum is "<<s1.add()<<endl<<endl;
    cout<<"float object"<<endl;
    cout<<"sun is "<<s2.add()<<endl;
    return 0;
}
