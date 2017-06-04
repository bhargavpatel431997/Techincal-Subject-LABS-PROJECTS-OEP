#include<stdio.h>
#include<sys/time.h>
#include<stdlib.h>
#define ll long long
#include<windows.h>
#include<math.h>
double PCFreq = 0.0;
__int64 CounterStart = 0;

void StartCounter()
{
    LARGE_INTEGER li;
    if(!QueryPerformanceFrequency(&li))
        printf("QueryPerformanceFrequency failed!\n");

    PCFreq = (double)(li.QuadPart);

    QueryPerformanceCounter(&li);
    CounterStart = li.QuadPart;
}
double GetCounter()
{
    LARGE_INTEGER li;
    QueryPerformanceCounter(&li);
    return (double)(li.QuadPart-CounterStart)/PCFreq;
}
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
	int a[100000],n,i,j,d,c;
	//struct timeval e;
	//struct timezone f;
	for(j=10000;j<=100000;j+=10000)
    {
        for(i=0;i<j;i++)
            a[i]=j-i;
        StartCounter();
        select_sort(a,j);
        printf("%lf\n",GetCounter()*1000000.0);
    }

	//gettimeofday(&e,&f);
	//c=e.tv_usec;

	//gettimeofday(&e,&f);
	//d=e.tv_usec;
	//printf("Microseconds: %d\n",d-c);

}
