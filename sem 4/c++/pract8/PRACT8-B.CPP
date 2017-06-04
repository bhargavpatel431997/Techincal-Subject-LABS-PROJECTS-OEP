#include<iostream.h>
#include<conio.h>
class dist
{
    int feet,inches;
    public:
    void display()
    {
      cout<<"inches:"<<inches<<endl<<"feets:"<<feet<<endl;
    }
    dist(int i=0,int j=0)
    {
	if(i>=12)
	{
	    feet=(i/12)+j;
	    inches=i%12;
	}
	else
	{
	    inches=i;
	    feet=j;
	}
    }
    dist operator +(dist a)
    {
	dist b;
	b.feet=((a.inches+inches)>12)?(((a.inches+inches)/12)+a.feet+feet):(a.feet+feet);
	b.inches=((a.inches+inches)>12)?((a.inches+inches)%12):(a.inches+inches);
	return b;
    }
};
int main()
{
	clrscr();
	dist a(11,2),b(22,3),c;
	c=a+b;
	c.display();
	getch();
	return 0;
}