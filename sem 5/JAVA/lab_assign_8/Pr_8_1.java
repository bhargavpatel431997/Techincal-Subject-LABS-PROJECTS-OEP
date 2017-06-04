/*
 Write a program that reads two arguments from the prompt & perform the division operation on them. 
Write the appropriate exception handling code.
*/
class Pr_8_1{
	public static void main(String args[]){
		try{
			System.out.println(Float.parseFloat(args[0])/Float.parseFloat(args[1]));
		}
		catch(ArithmeticException e){
			System.out.println(e.getMessage());
		}
	}
}	