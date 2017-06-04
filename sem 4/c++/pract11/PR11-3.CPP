#include<iostream.h>
#include<conio.h>
typedef int (*fptr) (int,int);
int add(int a,int b)
{
      return (a+b);
}
int sub(int a,int b)
{
      return (a-b);
}
int main()
{
	int a=20,b=12,ad,su;
	fptr x;
	x=&add;
       ad=x(a,b);
       x=&sub;
       su=x(a,b);
       cout<<"addition:"<<ad<<endl;
       cout<<"subtraction:"<<su<<endl;
       return 0;
}