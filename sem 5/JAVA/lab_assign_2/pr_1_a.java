class pr_1_a
{
	public static void main(String args[])
	{
		int marks[]={99,88,96,98,96,90};
		int sum=0;		
		for(int i:marks)
		{
			sum+=i;
		}
		System.out.println("average: "+(sum/6.0));
	}
}
