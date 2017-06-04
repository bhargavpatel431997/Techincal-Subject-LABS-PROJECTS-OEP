/*
Create a class called Student. Write a student manager program to manipulate the
student information from files by using FileInputStream and FileOutputStream  
*/
import java.io.*;
class Student{
	public static void main(String args[]){
		try{
			FileInputStream fin = new FileInputStream("student_info.txt");
			FileOutputStream fout = new FileOutputStream("student_info.csv");
			int a;
			while((a=fin.read())!=-1){
				// System.out.print((char)a);
				if((char)a==' ')
				{
					a=(int)',';
					fout.write((byte)a);
				}
				else
					fout.write((byte)a);
			}	
		}
		catch(Exception e){
			System.out.println(e);
		}
	}
}