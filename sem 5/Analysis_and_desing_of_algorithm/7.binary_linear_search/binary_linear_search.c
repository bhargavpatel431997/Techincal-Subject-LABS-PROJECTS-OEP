#include<stdio.h>
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
ll binary_search(ll b[],ll low,ll high,ll c)
{
	ll middle;
	middle=(high+low)/2;
	if(high<=low)
		return -1;
	else
	{
		if(b[middle]>c)
            return binary_search(b,low,middle-1,c);
		else if(b[middle]<c)
            return binary_search(b,middle+1,high,c);
		else
			return middle;
	}
}
ll linear_search(ll b[],ll size,ll val)
{
    ll i;
    for(i=0;i<size;i++)
        if(b[i]==val)
            return i;
    return -1;
}
int main()
{

/*	ll found,size,i,val,x[100000];
	printf("enter size of the array\n");
	scanf("%lld",&size);

	for(i=0;i<size;i++)
        x[i]=i+i;
    printf("enter the value to search\n");
    scanf("%lld",&val);

    binary search
	StartCounter();
	found=binary_search(x,0,size-1,val);
	printf("Binary search Microseconds: %lf\n",GetCounter()*1000000.0);

	linear search
	StartCounter();
	found=linear_search(x,size,val);
	printf("Linear search Microseconds: %lf\n",GetCounter()*1000000.0);

	if(found<0)
        printf("element not found\n");
    else
        printf("element found at index: %lld\n",found);*/
int i;
        for(i=10000;i<=100000;i+=10000)
        {
            printf("%lf\n",log(i)/log(2));
        }
    return 0;
}
