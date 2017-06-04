#include<stdio.h>
#include<dos.h>
struct list{
 int data;
 struct list *link;
}*first;
void lPush(int);
void lPop();
void display();

void main()
{
	int n,i,z;
	first=NULL;
	clrscr();
	do{
		clrscr();
		printf("\nstack using linked list:-\n\n1.push\n2.pop\n3.display\n4.exit");
		printf("\nenter the choice:-\n");
		scanf("%d",&i);
		switch(i)
		{
			case 1:
			printf("enter the value\n");
			scanf("%d",&z);
			lPush(z);
			printf("!!! value %d has been pushed !!!\n",z);
			sleep(1);

			case 2:
			lPop();
			sleep(1);


			case 3:
			display();
			sleep(3);


			case 4:
			exit(1);
		}
	}while(1);

}

void lPush(int val)
{
	struct list *temp;
	temp=(struct list *) malloc(sizeof(struct list));
	temp->data=val;
	if(first==NULL)
		first=temp;
	else
	{
		temp->link=first;
		first=temp;
	}
}
void lPop()
{
	int y;
	if(first!=NULL)
	{
		y=first->data;
		printf("!!! value at: %u and data: %d is poped !!!\n",first,y);
		first=first->link;
	}
	else
		printf("!!! Lstack is underflow !!!\n");
}
void display()
{
	struct list *r;
	r=first;
	if(r==NULL)
		printf("!!! Lstack is empty !!!\n");
	else
	{
		while(r!=NULL)
		{
			printf("at: %u  value: %d\n",r,r->data);
			r=r->link;
		}
	}

}