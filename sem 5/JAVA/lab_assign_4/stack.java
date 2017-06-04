class stack
{
	int tos;
	int item[];
	stack()
	{
		tos=-1;
		item=new int[10];
	}
	void push(int n)
	{
		if(tos==10)
			System.out.println("Stack overflow!");
		else
		{
			tos++;
			item[tos]=n;
			System.out.println("number "+n+"is pushed!!");
		}
	}
	void pop()
	{
		if(tos==-1)
			System.out.println("Stack underflow!");
		else
		{
			System.out.println("number "+item[tos]+" is poped!");
			tos--;
		}
	}		

}
class test
{
	public static void main(String args[])
	{
		stack s=new stack();
		s.push(10);
		s.push(11);
		s.pop();
	}
}