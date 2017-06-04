/*
The Transport interface declares a deliver() method. 
The abstract class Animal is the super class of the Tiger, Camel, Deer, and Donkey classes. 
The Transport interface is implemented by the Camel and Donkey classes. 
Write a demo program that initializes an array of four Animal objects. 
If the object implements the Transport interface, the deliver() method is invoked.
*/
interface Transport
{
	public void deliver();
}
abstract class Animal
{
}
class Tiger extends Animal
{
}
class Camel extends Animal implements Animal
{
}
class Deer extends Animal
{
}
class Donkey extends Animal implements Animal
{
}
class test
{
	public static void main(String args[])
	{
		
	}
}
