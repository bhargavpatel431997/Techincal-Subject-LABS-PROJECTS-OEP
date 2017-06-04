/*
* Write a program to create thread which displays “Hello World” message by
* implementing Runnable interface.
*/ 
class Pr_9_2 implements Runnable{
	public void run(){
		System.out.println("Hello World");
	}
	public static void main(String[] args) {
		Pr_9_2 obj = new Pr_9_2();
		Thread obj2= new Thread(obj);
		obj2.start();
	}
}