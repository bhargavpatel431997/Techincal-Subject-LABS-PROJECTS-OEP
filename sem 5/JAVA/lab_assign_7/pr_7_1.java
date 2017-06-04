/*
Write a program that creates one interface LO declares lightOff & lightOn methods.
create a class light_status which keeps track of status of light using a variable.
create another class LC that implements LO and extends light_status.
Implement the methods lightoff and lighton in this class.
Use interface reference to refer to those objects. 
Invoke the method of the LO interface via the interface reference.
*/

interface LO
{
	public void lightoff();
	public void lighton();	
}
class light_status
{
	String status;
}
class LC extends light_status implements LO
{
	public void lightoff()
	{
		status="OFF";
		System.out.println("Light is "+status);
	}
	public void lighton()
	{
		status="ON";
		System.out.println("Light is "+status);
			
	}
}
class test
{
	public static void main(String args[])
	{
		LO ref=new LC();
		ref.lighton();
		ref.lightoff();		
	}
}