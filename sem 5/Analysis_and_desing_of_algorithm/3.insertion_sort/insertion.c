#include<stdio.h>
#include<sys/time.h>
#include<stdlib.h>
void insertion_sort(long long a[],long long n)
{
	long long i,j,min,temp;
	for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while((temp<a[j])&&(j>=0))
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
}
int main()
{
	long long a[100000],n,i,d,c;
	struct timeval e;
	struct timezone f;
	printf("enter the size of array:-\n");
	scanf("%lld",&n);
	for(i=0;i<n;i++)
		a[i]=rand()%100000;
	gettimeofday(&e,&f);
	c=e.tv_usec;
	insertion_sort(a,n);
	gettimeofday(&e,&f);
	d=e.tv_usec;
	printf("Microseconds: %lld\n",d-c);
	return 0;
}
