#include<stdio.h>
#include<dos.h>
struct list
{
	int data;
	struct list *link;
};
struct list *head;

void inAtEn(int);
void inBeSp(int,int);
void deAfSp(int);
void deAtFr();
void display();

void main()
{
	int ch,i,ad;
	head=(struct list *)malloc(sizeof(struct list));
	head->link=head;
	do
	{
		clrscr();
		printf("\n\ncircular linked list:-\n1.insert at end\n2.insert before specified position\n3.delete first node\n4.delete after specified position\n5.display\n6.exit\n\nenter the choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			printf("enter the value\n");
			scanf("%d",&i);
			inAtEn(i);
			printf("value %d inserted successfully!\n",i);
			sleep(2);
			break;

			case 2:
			printf("enter the address\n");
			scanf("%d",&ad);
			printf("enter the value\n");
			scanf("%d",&i);
			inBeSp(ad,i);
			sleep(2);
			break;

			case 3:
			deAtFr();
			sleep(2);
			break;

			case 4:
			printf("enter the address\n");
			scanf("%d",&ad);
			deAfSp(ad);
			sleep(2);
			break;

			case 5:
			display();
			sleep(5);
			break;

			case 6:
			exit(1);
		}

	} while(1);
}
void inAtEn(int x)
{
	struct list *temp,*r;
	temp=(struct list *)malloc(sizeof(struct list));
	temp->data=x;
	if(head->link==head)
	{
		//printf("list is empty\n");
		temp->link=head;
		head->link=temp;
	}
	else
	{
		r=head->link;
		while(r->link!=head)
			r=r->link;
		temp->link=head;
		r->link=temp;
	}
}
void inBeSp(int addr,int x)
{
	struct list *r,*p,*temp;
	int flag=0;
	temp=(struct list *)malloc(sizeof(struct list));
	temp->data=x;
	if(head->link==addr)
	{
		temp->link=head->link;
		head->link=temp;
		printf("value %d inserted successfully!\n",x);
	}
	else
	{
		r=head->link;

			while(r->link!=head)
			{
				if(r->link==addr)
				{
					temp->link=r->link;
					r->link=temp;
					printf("value %d inserted successfully!\n",x);
					flag=1;
					break;
				}
				else
					r=r->link;
			}
			if(flag!=1)
				printf("address not found!\n");

	}
}
void deAtFr()
{
	if(head->link==head)
		printf("underflow!\n");
	else
	{
		printf("at %u deleted element %d",head->link,(head->link)->data);
		head->link=(head->link)->link;
	}
}
void deAfSp(int addr)
{
	struct list *r;
	int flag=0;
	if(head->link==head)
		printf("underflow!\n");
	else
	{
		r=head->link;
		while(r->link!=head)
			{
				if(r==addr)
				{
					printf("at %u element %d is deleted!\n",r->link,(r->link)->data);
					r->link=(r->link)->link;
					flag=1;
					break;
				}
				else
					r=r->link;
			}
			if(flag!=1)
			{
				if(r->link==head)
					{printf("at %u element %d is deleted\n",head->link,(head->link)->data);
					head->link=(head->link)->link;}
				else
					printf("address not found!\n");
			}

	}
}
void display()
{
	struct list *r;
	r=head->link;
	if(head->link==head)
		printf("list is empty\n");

	else
	{
		while(r!=head)
		{
		 printf("\nat : %u -> data: %d",r,r->data);
		 r=r->link;
		}
	}
}
