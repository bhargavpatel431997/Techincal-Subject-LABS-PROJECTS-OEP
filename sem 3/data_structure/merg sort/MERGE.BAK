#include<stdio.h>
int *x,n;

void merge(int ,int ,int );
void m_sort(int,int );

void main()
{

    int i;
    clrscr();
    printf("enter the size\n");
    scanf("%d",&n);
    x=(int *)malloc(n*sizeof(int));

    for(i=0;i<n;i++)
    {
	printf("enter %d element\n",i+1);
	scanf("%d",&x[i]);
    }

    m_sort(0,n-1);

    printf("sorted elements\n");
    for(i=0;i<n;i++)
	printf("%d ",x[i]);
    getch();
}

void m_sort(int low,int high)
{

    int mid;

    if(low<high)
    {
	mid=(low+high)/2;
	m_sort(low,mid);
	m_sort(mid+1,high);
	merge(low,mid,high);
    }
}

void merge(int low,int mid,int high)
{

    int i,m,k,l,*temp;
	temp=(int *)malloc((high-low+1)*sizeof(int));

    l=low;
    i=low;
    m=mid+1;

    while((l<=mid)&&(m<=high))
    {

	if(x[l]<=x[m])
	{
	    temp[i]=x[l];
	    l++;
	}
	else
	{
	    temp[i]=x[m];
	    m++;
	}
	i++;
      }

      /*if(l>mid)
	{
	    for(k=m;k<=high;k++)
	    {
		temp[i]=x[k];
		i++;
	    }
	}
	else
	{
	    for(k=l;k<=mid;k++)
	    {
		temp[i]=x[k];
		i++;
	    }
	}*/
	if(l<=mid)
	{
	    for(k=l;k<=mid;k++)
	    {
		temp[i]=x[k];
		i++;
	    }
	}
	else
	{
	    for(k=m;k<=high;k++)
	    {
		temp[i]=x[k];
		i++;
	    }
	}
	for(k=low;k<=high;k++)
	    x[k]=temp[k];
}
