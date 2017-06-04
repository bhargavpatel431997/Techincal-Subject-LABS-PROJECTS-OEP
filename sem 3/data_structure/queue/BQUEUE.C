#include<stdio.h>
#include<conio.h>
int *q,n,f=-1,r=0;
void menu();
void qins(int);
void qdel();
void display();
void main()
{
	int choice,z,i;
	clrscr();
	printf("enter the size of circlular queue\n");
	scanf("%d",&n);
	q=(int *) calloc(n,sizeof(int));
		loop:
		menu();
		printf("\nenter the choice:-\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			printf("enter the value\n");
			scanf("%d",&z);
			qins(z);
			goto loop;

			case 2:
			qdel();
			goto loop;

			case 3:
			display();
			goto loop;

			case 4:
			break;
		}

 getch();

}
void qins(int x)
{
	if(f==(r+1)%n)
		printf("circular queue overflow\n");
	else
	{
		if(f==-1)
			f=r=0;
		else
		r=(r+1)%n;
		q[r]=x;
	}
}
void qdel()
{
	int y;
	if(f==-1)
		printf("circular queue underflow\n");
	else
	{
		y=q[f];
		if(f==r)
			f=r=-1;
		else
			f=(f+1)%n;
		printf("deleted element is %d",y);
	}
}
void display()
{
 int i;
	if(f==-1)
		printf("nothig to show\n");
	else
	{
		//i=f;
		printf("stored values:-\n");
	       /*	while(i!=r)
		{
			printf(" %d",q[i]);
			i=(i+1)%n;
		}
		printf(" %d",q[i]);*/
		for(i=0;i<n;i++)
			 printf("%d ",q[i]);

	}
}
void menu()
{
 printf("\n\ncircular queue operations :-\n1.insert\n2.delete\n3.display\n4.exit\n");
}