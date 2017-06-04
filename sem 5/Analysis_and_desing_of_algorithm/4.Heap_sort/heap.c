#include<stdio.h>
#include<sys/time.h>
#include<stdlib.h>
#define ll long long
void max_heapify(ll a[],ll n,ll i)
{
    ll l=2*i+1,r=2*i+2,largest,temp;
    if(l<n && a[l]>a[i])
        largest=l;
    else
        largest=i;
    if(r<n && a[r]>a[largest])
        largest=r;
    if(largest!=i)
    {
        temp=a[largest];
        a[largest]=a[i];
        a[i]=temp;
        max_heapify(a,n,largest);
    }
}
void build_max_heap(ll a[],ll n)
{
    ll i;
    for(i=(n-1)/2;i>=0;i--)
        max_heapify(a,n,i);
}
void heap_sort(ll a[],ll n)
{
    ll size1,temp,j;
    build_max_heap(a,n);
    size1=n-1;
    for(j=n-1;j>0;j--)
    {
        temp=a[0];
        a[0]=a[j];
        a[j]=temp;
        max_heapify(a,size1,0);
        size1--;
    }
}
int main()
{
	ll a[100001],n,i,d,c;
	struct timeval e;
	struct timezone f;
	printf("enter the size of array:-\n");
	scanf("%lld",&n);
	for(i=0;i<n;i++)
		a[i]=rand()%10000;
	gettimeofday(&e,&f);
	c=e.tv_usec;
	heap_sort(a,n);
	gettimeofday(&e,&f);
	d=e.tv_usec;
	/*for(i=0;i<n;i++)
    {
        printf("%lld\n",a[i]);
    }*/
	printf("Microseconds: %lld\n",d-c);
	return 0;
}
