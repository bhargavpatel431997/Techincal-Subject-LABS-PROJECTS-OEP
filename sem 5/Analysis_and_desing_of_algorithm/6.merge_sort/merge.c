#include<sys/time.h>
#include<stdio.h>
#define ll long long
void mergesort(ll a[],ll f,ll l)
{
    ll m=(f+l)/2;
    if(f<l)
    {
        mergesort(a,f,m);
        mergesort(a,m+1,l);
        merge(a,f,m,l);
    }
}
void merge(ll a[],ll f,ll m,ll l)
{
    ll b[100000],k=0,i=f,j=m+1;
    while(i<=m && j<=l)
    {
        if(a[i]>a[j])
        {
            b[k]=a[j];
            j++;
            k++;
        }
        else
        {
            b[k]=a[i];
            i++;
            k++;
        }
    }
    while(i<=m)
    {
        b[k]=a[i];
        i++;
        k++;
    }
    while(j<=l)
    {
        b[k]=a[j];
        j++;
        k++;
    }
    k=0;
    for(i=f;i<=l;i++)
    {
        a[i]=b[k];
        k++;
    }
}
int main()
{

	ll size,i,d,c,x[100000];
	struct timeval e;
	struct timezone f;
	//printf("quick sort\n\n");
	printf("enter size of the array\n");
	scanf("%lld",&size);

	for(i=0;i<size;i++)
        x[i]=rand()%10000;
    gettimeofday(&e,&f);
	c=e.tv_usec;
	mergesort(x,0,size-1);
	gettimeofday(&e,&f);
	d=e.tv_usec;
	for(i=0;i<size;i++)
        printf("%lld\n",x[i]);
    printf("Microseconds: %lld\n",d-c);
    return 0;
}
