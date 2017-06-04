/*Three classes namely A, B, and C declare an instance variable named a, b, and c of type int respectively. 
These variables are initialized in its respective constructor. 
Each constructor also displays a message to indicate that it has started execution. 
The main() method begins by instantiating class C.
The instance variables for the object   are then displayed.
Write a program to demonstrate the same.*/
class A
{
	int a;
	A(int a)
	{
		this.a=a;
		System.out.println("in class A!!\n"+"value a: "+this.a);
	}
}
class B extends A
{
	int b;
	B(int b,int c)
	{
		super(c);
		this.b=b;
		System.out.println("in class B!!\n"+"value b: "+this.b);
	}
}
class C extends B
{
	int c;
	C(int a,int b,int c)
	{
		super(b,c);
		this.c=c;
		System.out.println("in class C!!\n"+"value c: "+this.c);
	}
}
class test
{
	public static void main(String args[])
	{
		C c= new C(1,2,3); 
	}
}