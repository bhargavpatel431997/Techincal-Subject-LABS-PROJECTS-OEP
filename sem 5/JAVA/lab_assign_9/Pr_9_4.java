/*
Write a program to increment the value of a variable by one and display it after one 
second using thread.
*/ 
class Pr_9_4 extends Thread{
	int variable;
	Pr_9_4(){
		variable=0;
	}
	public void run(){
		for(int i=0;i<5;i++){
			try{
				this.variable++;
				System.out.println("variable value :"+variable);
				sleep(1000);
			}
			catch(Exception e){
				System.out.println(e);
			}
		}
	}
	public static void main(String[] args) {
		Pr_9_4 obj = new Pr_9_4();
		obj.start();
	}
}