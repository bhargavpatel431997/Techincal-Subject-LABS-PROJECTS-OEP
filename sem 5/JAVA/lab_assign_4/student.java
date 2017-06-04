class student
{
	static int num=1;
	int id;
	student()
	{
		id=num;
		num++;
	}
	void display()
	{
		System.out.println("id no "+id);
	}

}
class test
{
	public static void main(String args[])
	{
		student s[] = new student[50];
		for(int i=0;i<50;i++)
		{
			s[i]=new student();
			s[i].display();
		}
			
	}
}
