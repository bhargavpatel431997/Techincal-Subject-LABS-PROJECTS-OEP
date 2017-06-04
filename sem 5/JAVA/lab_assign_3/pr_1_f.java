class pr_1_f
{
	public static void main(String args[])
	{
		int count=0;
		for(String s:args)
		{
			if(s.charAt(0)>=65 && s.charAt(0)<=90)
				count+=1;
		}
		System.out.println("number of letters which starts with capital latter "+count);
	}
}