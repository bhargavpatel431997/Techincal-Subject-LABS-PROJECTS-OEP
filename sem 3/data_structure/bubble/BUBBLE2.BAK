#include<stdio.h>
#include<conio.h>

void swap(int *b,int *c);

void main ()
	{
	int *a,i,j,c=0,s=0,n;
	clrscr();
	printf("enter the total number of value that you want to store:-\n");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
		{
		printf("enter the element %d :\n",i+1);
		scanf("%d",(a+i));
		}
	for(i=0;i<n;i++)
	{

		for(j=0;j<n-i;j++)
			{
			c++;
			if(*(a+j)>*(a+j+1))
				{
				swap((a+j),(a+j+1));
				s++;
				}
			}

	}


	printf("compared %d times and swap %d times\n",c,s);
	printf("sorted elements are:-\n");

	for(i=0;i<n;i++)
		printf("%d  ",*(a+i));
	getch();
}
void swap(int *b,int *c)
{
	int x;
	x=*b;
	*b=*c;
	*c=x;
}