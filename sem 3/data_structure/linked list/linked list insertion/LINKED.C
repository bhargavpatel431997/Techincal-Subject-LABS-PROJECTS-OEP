#include<stdio.h>
#include<dos.h>
void insAtF(int);
void insAtL(int);
void insOrd(int);
void display();
struct list
{
 int data;
 struct list *link;
}*first;

void main()
{
	int n,i,z;
	first=NULL;
	clrscr();
	loop:
		clrscr();
		printf("\nlinked list:-\n\n1.insert at front\n2.insert at last\n3.insert in order\n4.display\n5.exit\n");
		printf("\nenter the choice:-\n");
		scanf("%d",&i);
		switch(i)
		{
			case 1:
			printf("enter the value\n");
			scanf("%d",&z);
			insAtF(z);
			printf("inserted successfully\n");
			sleep(1);
			goto loop;

			case 2:
			printf("enter the value\n");
			scanf("%d",&z);
			insAtL(z);
			printf("inserted successfully\n");
			sleep(1);
			goto loop;

			case 3:
			printf("enter the value\n");
			scanf("%d",&z);
			insOrd(z);
			printf("inserted successfully\n");
			sleep(1);
			goto loop;

			case 4:
			display();
			getch();
			goto loop;

			case 5:
			exit(1);
		}

	//getch();
}
void insAtF(int val)
{
	struct list *temp;
	temp=(struct list *)malloc(sizeof(struct list));
	temp->data=val;
	if(first==NULL)
	{
		first=temp;
		temp->link=NULL;
	}
	else
	{
		temp->link=first;
		first=temp;
	}

}
void display()
{
	struct list *r;
	r=first;
	if(r==NULL)
		printf("list is empty\n");

	else
	{
		while(r!=NULL)
		{
		 printf("\nat : %u -> data: %d",r,r->data);
		 r=r->link;
		}
	}
}
void insAtL(int val)
{
	struct list *temp,*r;
	temp=(struct list *)malloc(sizeof(struct list));
	temp->data=val;
	if(first==NULL)
	{
		first=temp;
		temp->link=NULL;
	}
	else
	{
		r=first;
		while(r->link!=NULL)
			r=r->link;
		r->link=temp;
		temp->link=NULL;

	}

}
void insOrd(int val)
{
	struct list *temp,*r,*p;
	int flag=0,c=0;
	temp=(struct list *)malloc(sizeof(struct list));
	temp->data=val;
	if(first==NULL)
	{
		first=temp;
		temp->link=NULL;
	}
	else
	{
		r=first;
		while(flag!=1)
		{
			if(temp->data <= r->data)
			{
				flag=1;
				if(c==0)
				{
					temp->link=first;
					first=temp;
				}
				else
				{
					p->link=temp;
					temp->link=r;
				}

			}
			else if(r==NULL)
			{
				flag=1;
				p->link=temp;
				temp->link=NULL;
			}
			else
			{
				p=r;
				r=r->link;
			}
			c++;
		}

	}

}