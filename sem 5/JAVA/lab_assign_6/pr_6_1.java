/*Three classes namely A, B, and C respectively forms a multilevel inheritance hierarchy. 
Each class declares a method named display() with the same type signature which displays name of the class. 
Write a program to demonstrate the  same by creating the object of each class*/
class A
{
	void display()
	{
		System.out.println("Class A");
	}
}
class B extends A
{
	void display()
	{
		System.out.println("Class B");
	}
}
class C extends B
{
	void display()
	{
		System.out.println("Class C");
	}
}
class test
{
	public static void main(String args[])
	{
		A a = new A();
		B b = new B();
		C c = new C();
		a.display();
		b.display();
		c.display();
	}
}