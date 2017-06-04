class pr_1_e
{
	public static void main(String args[])
	{
		String s=new String("abcba");
		boolean b=true;
		for(int i=0;i<s.length()/2;i++)
		{
			if(s.charAt(s.length()-i-1)!=s.charAt(i))
			{
				b=false;
				break;
			}
		}
		if(b==false)
		{
			System.out.println("no this string is not palindrome!");
		}
		else
		{
			System.out.println("yes this string is palindrome!");
		}
	}
}
