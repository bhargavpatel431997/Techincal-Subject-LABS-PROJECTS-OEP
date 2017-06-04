/*. Write a program that creates an Integer object. Then obtain the associated Class object. 
Invoke the getSuperclass() method to get the Class object for the super class of Integer. 
Invoke the getName() method to obtain the name of the class and super class and display them.*/
class A
{
	A()
	{
		System.out.println("Class A!!");
	}	
}
class B extends A
{

	public static void main(String[] args) 
	{
		Integer i = new Integer(10);
		B b = new B();
		System.out.print(i.getClass().getName());
		System.out.print(i.getClass().getSuperclass());
		System.out.print(b.getClass().getName()); 
		System.out.print(b.getClass().getSuperclass());
	}

}