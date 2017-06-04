/*
* Write a program to perform addition of 1 to 100 numbers using 4 threads.
*/
class Addition{
	int additionValue;
	Addition(){
		this.additionValue=0;
	}
	void addition(int addNumber){
		this.additionValue+=addNumber;
	}
	void display(){
		System.out.println("addition is : "+this.additionValue);
	}
}
class Pr_9_3 extends Thread{
	public static void main(String args[]){
		Addition ad = new Addition();
		Pr_9_3 obj1 = new Pr_9_3(){
			public void run(){
				for(int i=1;i<=100;i+=4)
					ad.addition(i);
			}
		};		
		Pr_9_3 obj2 = new Pr_9_3(){
			public void run(){
				for(int i=2;i<=100;i+=4)
					ad.addition(i);
			}
		};		
		Pr_9_3 obj3 = new Pr_9_3(){
			public void run(){
				for(int i=3;i<=100;i+=4)
					ad.addition(i);
			}
		};		
		Pr_9_3 obj4 = new Pr_9_3(){
			public void run(){
				for(int i=4;i<=100;i+=4)
					ad.addition(i);
			}
		};
		obj1.start();
		obj2.start();
		obj3.start();
		obj4.start();
		try{
			obj1.join();
			obj2.join();
			obj3.join();
			obj4.join();
		}
		catch(Exception e){
			System.out.println(e);
		}
		ad.display();
	}
}