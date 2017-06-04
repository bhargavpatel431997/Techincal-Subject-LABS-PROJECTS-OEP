/*Create a circle class with 2 constructors. 
The first form takes a double value that represents the radius of a circle; 
this constructor assumes that circle is centered at the origin. 
The second form takes 3 double values, the first 2 arguments define the coordinates of the 
center & third argument defines the radius. Also declare one member function which calculates an area of a circle. 
Write a program to demonstrate the same. */
class circle
{
	double r,x,y;
	circle(double r)
	{
		this.r=r;	
		this.x=0;
		this.y=0;
	}
	circle(double x,double y,double r)
	{
		this.x=x;
		this.y=y;
		this.r=r;	
	}
	void area()
	{
		System.out.println("Area is :"+(3.14*r*r));
	}
}
class test
{
	public static void main(String args[])
	{
		circle a = new circle(12,22,4);
		a.area();
	}
}