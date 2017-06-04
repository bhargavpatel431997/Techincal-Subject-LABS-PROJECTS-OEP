#include<conio.h>
#include<iostream.h>
int main()
{
  clrscr();
  int a[5],*p=a;
  for(int i=0;i<5;i++)
  {
     cin>>*p;
     p++;
  }
  p=&a;
  for(int i=0;i<5;i++)
  {
    cout<<*p;
    p++;
  }
  getch();
  return 0;
}