#include<iostream>
#include<sys/time.h>
#include<stdio.h>
#include<stdlib.h>
#define ll long long
void quicksort(ll x[],ll first,ll last)
{
	ll pivot,j,temp,i;

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
		quicksort(x,first,j-1);
		quicksort(x,j+1,last);

	 }
}

int main()
{
	ll x[100000],size,i,d,c;
	struct timeval e;
	struct timezone f;
	//printf("quick sort\n\n");
	printf("enter size of the array\n");
	scanf("%lld",&size);

	for(i=0;i<size;i++)
        x[i]=rand()%10000;
    gettimeofday(&e,&f);
	c=e.tv_usec;
	quicksort(x,0,size-1);
	gettimeofday(&e,&f);
	d=e.tv_usec;
	for(i=0;i<size;i++)
        printf("%lld\n",x[i]);
    printf("Microseconds: %lld\n",d-c);

return 0;
}

