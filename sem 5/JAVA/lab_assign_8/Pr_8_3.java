/* A method named average() has one argument that is an array of strings. 
It converts these to double values and returns their average. 
The method generates a NullPointerException if an array element is null or a NumberFormatException if an element is incorrectly formatted. 
Write a program that illustrates how to declare and use this method. 
Include a throws clause in the method declaration to indicate that these problems can occur*/
class Pr_8_3{
	double average(String a[]) throws NullPointerException,NumberFormatException{
		double total=0.0;
		try{
			if(a.length ==0)
				throw new NullPointerException();
			for(String as:a){
				total+=Double.parseDouble(as);
			}
		}
		catch(NumberFormatException e){
			System.out.println("Error1: "+e.getMessage());
		}
		catch(NullPointerException e){
			System.out.println("Error2: "+e.getMessage());
		}
		return (total/a.length);
	}
	public static void main(String args[]){
		Pr_8_3 obj=new Pr_8_3();
		System.out.println(obj.average(args));
	}
}
