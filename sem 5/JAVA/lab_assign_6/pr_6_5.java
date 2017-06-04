/*The abstract class Fruit has four sub classes named Apple, Banana, Orange and Strawberry. 
Write an application that demonstrates how to establish this class hierarchy. Declare one instance variable of type String that indicates the color of a fruit. 
Create instances of these objects and display output in the form 
super class name: sub class name: color with and without overriding toString() method of Object class. */

abstract class Fruit{
String color;
abstract String display();
}
class Apple extends Fruit{
	String display()
	{
		color="Red";
		return color;
	} 
}
class Banana extends Fruit{
	String display()
	{
		color="Yellow";
		return color;
	}
}
class Orange extends Fruit{
	String display()
	{
		color="Orange";
		return color;
	}
}
class Strawberry extends Fruit{
	String display()
	{
		color="Pink";
		return color;
	}
}
class test{
	public static void main(String args[]){
		Apple a = new Apple();
		Banana b = new Banana();
		Orange o = new Orange();
		Strawberry s = new Strawberry();
		System.out.println(a.getClass().getSuperclass().getName()+"\t"+a.getClass().getName()+"\t"+a.display());
		System.out.println(b.getClass().getSuperclass().getName()+"\t"+b.getClass().getName()+"\t"+b.display());
		System.out.println(o.getClass().getSuperclass().getName()+"\t"+o.getClass().getName()+"\t"+o.display());
		System.out.println(s.getClass().getSuperclass().getName()+"\t"+s.getClass().getName()+"\t"+s.display());
		
	}
}