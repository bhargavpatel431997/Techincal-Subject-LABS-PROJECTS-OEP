#include<stdio.h>
#include<stdlib.h>
int *x;
void quicksort(int,int);

int main()
{
	int size,i;
	clrscr();
	printf("quick sort\n\n");
	printf("enter size of the array\n");
	scanf("%d",&size);
	x=(int *)malloc(size*sizeof(int));

	for(i=0;i<size;i++)
	{
		printf("enter %d element\n",i+1);
		scanf("%d",&x[i]);
	}

	quicksort(0,size-1);

	printf("sorted elements\n");
	for(i=0;i<size;i++)
	printf("%d  ",x[i]);
	getch();
return 0;
}

void quicksort(int first,int last)
{
	int pivot,j,temp,i;

	if(first<last)
	{
		pivot=first;
		i=first+1;
		j=last;

		while(i<=j)
		{
			while(x[i]<=x[pivot])
				i++;
			while(x[j]>x[pivot])
				j--;
			if(i<j)
			{
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			}
		}

		temp=x[pivot];
		x[pivot]=x[j];
		x[j]=temp;
		quicksort(first,j-1);
		quicksort(j+1,last);

	 }
}
