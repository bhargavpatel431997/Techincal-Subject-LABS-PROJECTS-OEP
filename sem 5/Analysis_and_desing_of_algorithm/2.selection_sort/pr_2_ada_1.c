#include<stdio.h>
#include<sys/time.h>
#include<stdlib.h>
void select_sort(int a[],int n)
{
	int i,j,min,temp;
	for(i=0;i<n-1;i++)
	{
	    min=i;
		for(j=i+1;j<n;j++)
		{
		  if(a[j]<a[min])
			min=j;
		}
		if(min!=i)
		{
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
}
void main()
{
	int a[100000],n,i,d,c;
	struct timeval e;
	struct timezone f;
	printf("enter the size of array:-\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		a[i]=rand()%99999;
	gettimeofday(&e,&f);
	c=e.tv_usec;
	select_sort(a,n);
	gettimeofday(&e,&f);
	d=e.tv_usec;
	printf("Microseconds: %d\n",d-c);

}
