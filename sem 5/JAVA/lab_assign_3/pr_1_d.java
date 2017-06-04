class pr_1_d
{
	boolean check(char c)
	{
		boolean b=false;
		String vowel=new String("AaEeIiOoUu");
		for(int j=0;j<vowel.length();j++)
		{
			if(vowel.charAt(j)==c)
			{
					b=true;
					break;
			}
		}
		return b;
	}
	public static void main(String args[])
	{
		pr_1_d obj = new pr_1_d();
		String s=new String("abcdefg");
		int count=0;
		for(int i=0;i<s.length();i++)
		{
			if(obj.check(s.charAt(i)))
			{
				count++;
			}
		}
		System.out.println("vowels :"+count);
		System.out.println("consonents :"+(s.length()-count));
	}
}
