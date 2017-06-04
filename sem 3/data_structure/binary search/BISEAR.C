#include<stdio.h>
void binary(int,int,int);
int *b;
void main()
{
	int c,n;
	clrscr();
	printf("enter the size\n");
	scanf("%d",&n);
	fflush(stdin);
	b=(int *)malloc(n,sizeof(int));
	loop:
	clrscr();
	c=0;
	while(c<n)
	{
		printf("enter the %d number\n",c+1);
		scanf("%d",&b[c]);
		fflush(stdin);
		if(c>0)
		{
			 if(b[c-1]>b[c])
			 {
				printf("please insert in ascending order!\n");
				getch();
				goto loop;
			 }
		}
		c++;
	}
	printf("*******************************************\n");
	do
       {
		int ch;
		printf("\n1.to search number \n2.exit \nenter the choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			printf("\nenter the value to find position\n");
			scanf("%d",&c);
			binary(c,n-1,0);
			getch();
			break;

			default:
			exit(0);
		}

       }while(1);
}

void binary(int c,int high,int low)
{
	int middle;
	middle=(high+low)/2;
	if(high<=low)
	{
		printf("element not found\n");
		return;
	}
	else
	{
		if(b[middle]>c)
			binary(c,middle-1,low);
		else if(b[middle]<c)
			binary(c,high,middle+1);
		else
		{
			printf("at %d position element found!\n",middle+1);
			return;
		}
	}
}