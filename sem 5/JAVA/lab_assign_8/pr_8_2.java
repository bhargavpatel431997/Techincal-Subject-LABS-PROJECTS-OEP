/*
Write a program that accepts the fully qualified name of a class as its argument. 
Compute & display how many super classes exist for that class. 
(HINT. Use the forName() and getSuperClass() methods of class.) 
If a ClassNotFoundException occurs, catch it & provide an error for the user. 
*/
class Pr_8_2{
	public static void main(String args[]){
		Class a=null;
		try{
			a= Class.forName(args[0]);
			System.out.println(a.getSuperclass());
		}
		catch(ClassNotFoundException e){
			System.out.println("Error: "+e.getMessage());
		}
	}
}