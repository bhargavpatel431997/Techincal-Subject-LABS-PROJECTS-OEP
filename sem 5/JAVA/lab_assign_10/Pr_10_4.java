/*
Write a program to count number of files and sub-directories in a specified directory.
Take name of directory from user.
*/
import java.util.Scanner;
import java.io.*;
class Pr_10_4{
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		String dir=scanner.nextLine();
		File f = new File(dir);
    	File[] files = f.listFiles();
    	int count=0;
    	int countdir=0;
   		if (files != null)
    	for (int i = 0; i < files.length; i++) {
        	count++;
        	File file = files[i];

        	if (file.isDirectory()) {   
            	countdir++; 
        	}
    	}
    	count-=countdir;
    	System.out.println("total number of files :"+count);
    	System.out.println("total number of sub-directories :"+countdir);
	}
} 