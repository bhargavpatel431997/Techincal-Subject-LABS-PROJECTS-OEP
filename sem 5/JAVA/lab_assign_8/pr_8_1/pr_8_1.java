/*  Write a program that demonstrates use of packages & import statements. (simple addition program)
	
	javac -d . sdf.java   that means create package directory and put classes into that directory.
	set classpath=" " that means you seting the class directory which you will use
	java packageName.className
*/

package Demo2;
import Demo1.*;
public class pr_8_1{
	public static void main(String args[]){
		Sub_8_1 a=new Sub_8_1();
		System.out.println("add :"+a.add(22,33));	
	}
}