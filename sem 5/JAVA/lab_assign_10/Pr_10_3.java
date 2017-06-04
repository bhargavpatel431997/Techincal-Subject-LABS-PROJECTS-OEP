/* 
Refine the student manager program to manipulate the student information from files 
by using the BufferedReader and BufferedWriter
*/
import java.io.*;
class Pr_10_3{
	public static void main(String args[]){
		try{
			FileReader fr = new FileReader("student_info.txt");
        	BufferedReader br = new BufferedReader(fr);
        	FileWriter fw = new FileWriter("student_info.csv");
        	BufferedWriter bw= new BufferedWriter(fw);
        	String s ="";
        	while ((s=br.readLine())!= null) {
        	    String words[] = s.split(" ");
       	 		    for(String word:words){
            		bw.write(word+",");
            	}
            	bw.write("\n");
        	}	
        	br.close();
        	bw.close();
		}
		catch(Exception e){
			System.out.println(e);
		}
	}
}