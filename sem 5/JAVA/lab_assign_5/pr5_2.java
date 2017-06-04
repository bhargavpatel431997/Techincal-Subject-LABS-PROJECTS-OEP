/*Create a class named absolute.
 Define the method named findAbs() to find absolute value for integer, float and double. 
Pass the appropriate type of argument to the method to overload it. 
Write a program to invoke this overloaded method. */
class absolute
{
	void findAbs(int a)
	{
		if(a>0)
			System.out.println("int absolute: "+a);
		else
			System.out.println("int absolute: "+(-1.0*a));
	}
	void findAbs(float a)
	{
		if(a>0)
			System.out.println("float absolute: "+a);
		else
			System.out.println("float absolute: "+(-1.0*a));
	}
	void findAbs(double a)
	{
		if(a>0)
			System.out.println("double absolute: "+a);
		else
			System.out.println("double absolute: "+(-1.0*a));
	}
}
class test
{
	public static void main(String args[])
	{
		absolute a = new absolute();
		a.findAbs(23.2323);
		a.findAbs(22);
	}
}