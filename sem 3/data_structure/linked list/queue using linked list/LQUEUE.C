#include<stdio.h>
#include<dos.h>
struct list{
 int data;
 struct list *link;
}*first;
void qIns(int);
void qDel();
void display();

void main()
{
	int n,i,z;
	first=NULL;
	clrscr();
	do{
		clrscr();
		printf("\nqueue using linked list:-\n\n1.queue insert\n2.queue delete\n3.display\n4.exit");
		printf("\nenter the choice:-\n");
		scanf("%d",&i);
		switch(i)
		{
			case 1:
			printf("enter the value\n");
			scanf("%d",&z);
			qIns(z);
			printf("!!! value %d has been inserted !!!\n",z);
			sleep(2);
			break;

			case 2:
			qDel();
			sleep(2);
			break;

			case 3:
			display();
			sleep(4);
			break;

			case 4:
			exit(1);
		}
	}while(1);

}

void qIns(int val)
{
	struct list *temp,*r;
	temp=(struct list *) malloc(sizeof(struct list));
	temp->data=val;
	if(first==NULL)
		first=temp;
	else
	{
		r=first;
		while(r->link!=NULL)
			r=r->link;
		r->link=temp;

	}
	temp->link=NULL;

}
void qDel()
{
	int y;
	if(first!=NULL)
	{
		y=first->data;
		printf("!!! value at: %u and data: %d is deleted !!!\n",first,y);
		first=first->link;
	}
	else
		printf("!!! lQueue is underflow !!!\n");
}
void display()
{
	struct list *r;
	r=first;
	if(r==NULL)
		printf("!!! lQueue is empty !!!\n");
	else
	{
		while(r!=NULL)
		{
			printf(" at:%u  val:|%d|\n",r,r->data);
			r=r->link;
		}
	}

}