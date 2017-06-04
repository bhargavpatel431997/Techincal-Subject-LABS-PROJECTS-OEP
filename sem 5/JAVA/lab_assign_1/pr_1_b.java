import java.lang.*;
class pr_1_b
{
	public static void main(String args[])
	{
		int a= Integer.parseInt(args[0]);
		int b= Integer.parseInt(args[1]);
		switch(args[2])
		{
			case "+":
				System.out.println("sum is: "+(a + b));			
				break;
			case "-":
				System.out.println("subtraction is: "+(a - b));			
				break;
			case "*":
				System.out.print("multiplication is: "+(a * b));			
				break;
			case "/":
				System.out.println("division is: "+(a / b));			
				break;
		}

	}
}
