#include<iostream>
using namespace std;
class vehicle
{
protected:
    float speed;
    float price;
public:
    vehicle()
    {
        cout<<"enter max speed\n";cin>>speed;
        cout<<"enter price\n";cin>>price;
    }
};
class car:public vehicle
{
    char name[20];
    int id;
public:
    car()
    {
        cout<<"enter the name of car\n";cin>>name;
        cout<<"enter the id of car\n";cin>>id;
    }
    void display()
    {
        cout<<"\n\n";
        cout<<"car\n\n";
        cout<<"name:\t\t"<<name<<endl<<"id :\t\t"<<id<<endl<<"max speed:\t"<<speed<<endl<<"price:\t\t"<<price<<endl;
    }
};
int main()
{
  car a;
  a.display();
 return 0;
}
