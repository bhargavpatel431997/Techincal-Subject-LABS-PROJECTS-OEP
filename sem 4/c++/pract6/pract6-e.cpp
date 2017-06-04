#include<iostream>
using namespace std;
class dis
{
    int feet;
    float inches;
public:
   void assign()
   {
       cout<<"enter the inches\n";
       cin>>inches;
       cout<<"enter the feets\n";
       cin>>feet;
   }
   void display()
   {
       cout<<"feet  : "<<feet<<endl;
       cout<<"inches: "<<inches<<endl;
   }
   friend dis add(dis,dis);
};
dis add(dis a,dis b)
{
    dis x;
    x.inches=a.inches+b.inches;
    x.feet=a.feet+b.feet;
    if(x.inches>12)
    {
        int y=x.inches;
        float d=x.inches-y;
        x.feet+=y/12;
        y=y%12;
        d+=y;
        x.inches=d;
    }
    return x;
}
int main()
{
    dis a,b,c;
    a.assign();
    b.assign();
    cout<<"object a\n";
    a.display();
    cout<<"object b\n";
    b.display();
    c=add(a,b);
    cout<<"addition of a and b is\n";
    c.display();
    return 0;
}
