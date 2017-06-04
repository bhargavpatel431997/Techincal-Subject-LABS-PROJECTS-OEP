#include<stdio.h>
int n,f=-1,r=-1,*q;
void qins(int );
void display();
void qdel();
void menu();
void main()
{
	int choice,z,i;
	clrscr();
	printf("enter the size of queue\n");
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
			exit(0);
		}

 getch();
}

void qins(int x)
{
	if(r>=n-1)
		printf("queue overflow");
	else
	{

		r=r+1;
		q[r]=x;
		if(f==-1)
			f=0;
	}
}
void qdel()
{
	int y;
	if(f==-1)
		printf("queue underflow");
	else
	{
		y=q[f];
	       //	f=f+1;
		if(f==r)
		{
			f=-1;
			r=-1;
		}
		else
		{
			f++;
		}
		printf("deleted element %d successfully\n",y);
	}

}
void display()
{
	int i;
	if(f==-1)
		printf("nothing to show");
	else
	{
		printf("stored values:-\n");
		for(i=f;i<=r;i++)
			printf("%d ",q[i]);
	}

}
void menu()
{
 printf("\n\nqueue operations :-\n1.insert\n2.delete\n3.display\n4.exit\n");
}