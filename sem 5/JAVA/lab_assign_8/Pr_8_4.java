/* 
Write a program that generates a Custom Exception if any of its command line arguments are negative.
*/
class ex extends Exception{
	void show(){
		System.out.println("negitive value exception");
	}
}
class Pr_8_4{
	public static void main(String args[]){
		try{
			for(String s:args){
				if(Integer.parseInt(s)<0)
					throw new ex();
			}
		}
		catch(ex e){
			e.show();
		}
		catch(NumberFormatException e){
			System.out.println("Error: "+e.getMessage());
		}
	}	
}