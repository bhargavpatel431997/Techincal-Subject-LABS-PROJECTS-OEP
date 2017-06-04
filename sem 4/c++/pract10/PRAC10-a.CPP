#include<iostream.h>
#include<conio.h>
class student
{
   protected:
   int id;

};
class test:public virtual student
{
   protected:
   int part1,part2;

};
class sports:public virtual  student
{
   protected:
   float score;

};
class result:public sports,public test
{
   protected:
   float total;
   public:
   void get()
   {
	cout<<"enter id\n";
	cin>>id;
	cout<<"enter part1\n";
	cin>>part1;
	cout<<"enter part2\n";
	cin>>part2;
	cout<<"enter score\n";
	cin>>score;
	total=part1+part2;
   }
   void display()
   {
       cout<<"id:\t"<<id<<endl;
       cout<<"part1:\t"<<part1<<endl;
       cout<<"part2:\t"<<part2<<endl;
       cout<<"score:\t"<<score<<endl;
       cout<<"total:\t"<<total<<endl;
   }
};
int main()
{
   result a;
   clrscr();
   a.get();
   a.display();
   getch();
   return 0;
}