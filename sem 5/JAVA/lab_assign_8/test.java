class test extends thread
{
	public void run()
	{
		for(int i=0;i<10;i++)
		{
			System.out.println("i is:"+i);
	 	 	sleep(1000);
		}
	}
	public static void main(String args[])
	{
		test t=new test();
		t.start();
	}
}
