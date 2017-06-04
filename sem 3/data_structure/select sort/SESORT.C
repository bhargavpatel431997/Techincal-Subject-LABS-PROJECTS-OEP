#include<stdio.h>
void main()
{
	int i,j,min,c=0,s=0,*a,n,temp;
	clrscr();
	printf("enter the size of array:-\n");
	scanf("%d",&n);
	a=(int *) calloc(n,sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("enter a[%d] element:-\n",i+1);
		scanf("%d",&a[i]);
	}

	for(i=0;i<n-1;i++)
	{
	    min=i;
		for(j=i+1;j<n;j++)
		{
		  if(a[j]<a[min])
			min=j;
		  c++;
		}
		if(min!=i)
		{
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
			s++;
		}
	}
	printf("stored element in ascending order:-\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\ncomparision:- %d \n\nswaping:- %d\n",c,s);
	getch();

}