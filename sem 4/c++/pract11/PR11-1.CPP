//#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
  //clrscr();
  int a=10,*p=&a;
  cout<<"value of a:-\t"<<a<<endl<<"address of p:-"<<p<<endl;
  *p=23;
  cout<<"value of a:-\t"<<a<<endl<<"address of p:-"<<p<<endl;
 // getch();
  return 0;
}
