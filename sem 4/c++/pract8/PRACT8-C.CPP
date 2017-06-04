#include<iostream>
//#include<conio.h>
using namespace std;
class fahrenheit;
class celsius
{
   float cel;
   public:
   celsius(float i=0)
   {
	cel=i;
   }
   celsius(fahrenheit);
   void display()
   {
      cout<<"celsius: "<<cel<<endl;
   }
};
class fahrenheit
{
   float fer;
   public:
   fahrenheit(float i=0)
   {
	fer=i;
   }

   void display()
   {
      cout<<"fahrenheit: "<<fer;
   }
   float getdata()
   {
       return fer;
   }

};

celsius::celsius(fahrenheit f)
{
      cel=(f.getdata()-32.00)*(5.0/9.0);
}


int main()
{
//	clrscr();
	fahrenheit f(88);
	celsius c;
	cout<<"before\n";
	c.display();
	c=f;
	cout<<"after\n";
	c.display();
//	getch();
	return 0;
}
