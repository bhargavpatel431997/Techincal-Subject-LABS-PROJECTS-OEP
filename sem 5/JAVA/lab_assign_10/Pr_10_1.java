/*
Create a class which ask the user to enter a sentence, and it should display count of each 
vowel      type in the sentence. The program should continue till user enters a word
quit. Display the total count of each vowel for all sentences.
*/
import java.util.*;
class Pr_10_1{
	static int countVowels(String line){
		int count=0;
		for(int i=0;i<line.length();i++){
			if("aAeEiIoOuU".indexOf(line.charAt(i))!=-1)
				count+=1;
		}
		return count;
	}
	public static void main(String args[]){
		Scanner scanner=new Scanner(System.in);
		String line=" ";
		while(!(line=scanner.nextLine()).equals("quit")){
			System.out.println("total vowls in this sentence: "+countVowels(line));
		}
		System.out.println("program end!!");
	}
}
