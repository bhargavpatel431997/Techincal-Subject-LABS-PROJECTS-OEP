/*
* Write a program to create thread which displays “Hello World” message by extending
* Thread class.
*/
class pr_9_1 extends Thread{
	public void run(){
		System.out.println("Hello World");
	}
	public static void main(String[] args) {
		pr_9_1 obj = new pr_9_1();
		obj.start();
	}
}