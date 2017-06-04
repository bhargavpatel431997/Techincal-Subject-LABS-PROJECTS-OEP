#include<conio.h>
#include<iostream.h>

class counter
{
   unsigned int count;
   public:
     counter()
     {
       count=0;
     }
     void display()
     {
	cout<<"count:"<<count<<endl;
     }
     void operator ++()
     {
	   count++;
     }

};
int main()
{

  counter a;
	cout<<"obj a\n";
	a.display();
	a++;
	a.display();

  return 0;
}