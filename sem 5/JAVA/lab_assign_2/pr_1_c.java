class pr_1_c
{

	public static void main(String args[])
	{
		int i,j,temp=0,flag;
		int a[]={12,42,2,11,23};
		int n=5;
		for(i=0;i<n;i++)
		{
			flag=0;
			for(j=0;j<n-i-1;j++)
			{
				if(a[j]<a[j+1])
				{
					flag=1;
					temp=a[j+1];
					a[j+1]=a[j];
					a[j]=temp;
				}
			}
			if(flag!=1)
				break;
		}
		for(i=0;i<n;i++)
			System.out.print(a[i]+" ");
		System.out.println();
	}
}
