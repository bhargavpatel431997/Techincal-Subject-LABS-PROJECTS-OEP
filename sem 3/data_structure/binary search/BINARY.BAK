#include<stdio.h>

void binary(int,int,int);
int *b;

void main()
{
	int n,i=0,val;
	clrscr();

	printf("enter the size of list:-\n\n");
	scanf("%d",&n);

	b=(int *)malloc(n * sizeof(int));

	while(i<n)
	{
		printf("enter the %d value\n",i+1);
		scanf("%d",&b[i]);
		i++;
	}

	printf("enter the value that you want to search\n");
	scanf("%d",&val);

	binary(val,0,n-1);

	getch();
}
void binary(int key,int low,int high)
{
	int i=0,middle,j=high,flag=0;
	while(low<=high)
	{
		middle=(low+high)/2;
		if(b[middle]==key)
		{
			printf("at %d th position element is found\n",middle+1);
			flag=1;
			break;
		}
		else
		{

			if(b[middle]>key)
				high=middle-1;
			else
				low=middle+1;
		}
	}
	if(flag!=1)
		printf("value is not found!\n");

}