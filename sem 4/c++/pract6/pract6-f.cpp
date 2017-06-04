#include<iostream>
using namespace std;
class time
{
    int minutes;
    int hours;
public:
    void assign()
    {
       cout<<"enter minutes\n";
       cin>>minutes;
       cout<<"enter hours\n";
       cin>>hours;
   }
   void display()
   {
       cout<<"hours  : "<<minutes<<endl;
       cout<<"minutes: "<<hours<<endl;
   }
  friend time add(time ,time );
   
};
time add(time a,time b)
{
       time c;
      c.minutes=a.minutes+b.minutes;
       c.hours=a.hours+b.hours;
       if(c.minutes>60)
       {
           c.hours+=(c.minutes/60);
           c.minutes=c.minutes%60;
       }
	return c;
}
int main()
{
    time a,b,c;
    a.assign();
    b.assign();
    c=add(a,b);
    cout<<"addition of a and b is\n";
    c.display();
    return 0;
}
