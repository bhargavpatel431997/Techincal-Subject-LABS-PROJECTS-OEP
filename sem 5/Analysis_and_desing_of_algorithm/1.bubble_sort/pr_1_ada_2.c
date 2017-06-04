#include<stdio.h>
#include<stdlib.h>
#include<sys/time.h>
void bubble(int a[],int n)
{
	int i,j,temp=0,flag;
	for(i=0;i<n;i++)
	{
		flag=0;
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
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
}
int main()
{
	int n,a[100000],i,c,d;
	struct timeval e;
	struct timezone f;
	
	printf("enter the values to scan\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		a[i]=rand()%10000;
	
	gettimeofday(&e,&f);
	c=e.tv_usec;
	bubble(a,n);
	gettimeofday(&e,&f);
	d=e.tv_usec;
	printf("microseconds: %d \n",d-c);
	return 0;
}
