/*
Write a program that illustrates interface inheritance. 
Interface K1 declares method mK() and a variable intK that is initialized to 1. 
Interface K2 extends K1 & declares mK(). 
Interface K3 extends K2 & declares mK(). 
The return type of mK() is void in all interfaces. 
Class U implements K3. 
Its version of mK() displays the value of intK. 
Instantiate U & invoke its method.
*/
interface K1
{
	int intK=1;
	public void mK();
}
interface K2 extends K1
{
	public void mK();
}
interface K3 extends K2
{
	public void mK();
}
class U implements K3
{
	public void mK()
	{
		System.out.println(intK);
	}
}
class test
{
	public static void main(String args[])
	{
		U a =new U();
		a.mK();
	}
}