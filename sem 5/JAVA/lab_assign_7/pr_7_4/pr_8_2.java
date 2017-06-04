package p2;
import p1.*;
public class pr_8_2{
	float avg;
	public static void main(String args[]){
		int total=0;
		for(String a:args)
		{
			total+=Integer.parseInt(a);	
		}
		pr_8_2 b=new pr_8_2();
		b.avg=(float)(total/5.0);
		Student b1=new Student();
		b1.name="bhaggu";
		b1.er_no="140010116024";
		System.out.println("Student information");		
		System.out.println("name:    "+b1.name);
		System.out.println("en_no:   "+b1.er_no);
		System.out.println("average: "+b.avg);
	}
}