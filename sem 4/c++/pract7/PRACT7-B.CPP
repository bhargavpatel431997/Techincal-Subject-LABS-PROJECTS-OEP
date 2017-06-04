#include<iostream.h>
#include<conio.h>
class room
{
  float h,w,l;
  public:
  room(float h1=0.0,float w1=0.0,float l1=0.0)
  {
	h=h1;
	w=w1;
	l=l1;
  }
  ~room()
  {
	cout<<"destroctor is called\n";
  }
  void display()
  {
     cout<<"height :"<<h<<endl;
     cout<<"width  :"<<w<<endl;
     cout<<"length :"<<l<<endl;
  }
};
int main()
{
	clrscr();
	room a(10.00),b(10.00,10.00),c(10.00,10.00,10.00);
	cout<<"object a"<<endl;
	a.display();
	cout<<endl;

	cout<<"object b"<<endl;
	b.display();
	cout<<endl;

	cout<<"object c"<<endl;
	c.display();
	cout<<endl;
	getch();
	return 0;
}