#include<iostream.h>
#include<conio.h>
class x
{
    double n;
    int p;
    public:
    x(double n1=0.0,int p1=2)
    {
        n=n1;
        p=p1;
    }
    ~x()
    {
        cout<<"destructor is called\n";
    }
    double pow()
    {
        double c=n;
        while(--p)
            n=n*c;
        return n;
    }

};
int main()
{
	x a,b(2.0,3);
	clrscr();
	cout<<"object a\n";
	cout<<a.pow();
	cout<<endl;
	cout<<"object b\n";
	cout<<b.pow();
	getch();
	return 0;
}
