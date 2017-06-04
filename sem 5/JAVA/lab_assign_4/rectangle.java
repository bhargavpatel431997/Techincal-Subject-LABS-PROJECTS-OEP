class rectangle
{
	double width,height;
	rectangle()
	{
		width=height=1;
	}
	void setwidth(double w)
	{
		width=w;
	}
	void setheight(double h)
	{
		height=h;
	}
	double getwidth()
	{
		return width;
	}
	double getheight()
	{
		return height;
	}
	void area()
	{
		System.out.println("area is "+(width*height));
	}
	
}
class test
{
	public static void main(String args[])
	{
		rectangle r=new rectangle();
		r.setwidth(10.03);
		r.setheight(11.3);
		System.out.println("width is"+r.getwidth()+"\nheight is "+r.getheight());		
		r.area();
	}
}
