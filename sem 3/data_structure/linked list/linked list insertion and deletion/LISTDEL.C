#include<stdio.h>
#include<dos.h>
void insAtF(int);
void insAtL(int);
void insOrd(int);
void delAtF();
void delB(int);
void delA(int);
void display();
struct list{
 int data;
 struct list *link;
}*first;

void main()
{
	int n,i,z;
	int ab;
	first=NULL;
	clrscr();
	loop:
		clrscr();
		printf("\nlinked list:-\n\n1.delete first node\n2.delete before specified location\n3.delete after specified location\n4.insert at front\n5.insert at last\n6.insert in order\n7.display\n8.exit\n");
		printf("\nenter the choice:-\n");
		scanf("%d",&i);
		switch(i)
		{
			case 1:
			delAtF();
			sleep(1);
			goto loop;

			case 2:
			printf("enter the address\n");
			scanf("%u",&ab);
			delB(ab);
			sleep(1);
			goto loop;

			case 3:
			printf("enter the address\n");
			scanf("%u",&ab);
			delA(ab);
			sleep(1);
			goto loop;

			case 4:
			printf("enter the value\n");
			scanf("%d",&z);
			insAtF(z);
			printf("inserted successfully\n");
			sleep(1);
			goto loop;

			case 5:
			printf("enter the value\n");
			scanf("%d",&z);
			insAtL(z);
			printf("inserted successfully\n");
			sleep(1);
			goto loop;

			case 6:
			printf("enter the value\n");
			scanf("%d",&z);
			insOrd(z);
			printf("inserted successfully\n");
			sleep(1);
			goto loop;

			case 7:
			display();
			sleep(3);
			goto loop;

			case 8:
			exit(1);
		}

	//getch();
}
void delAtF()
{
	int y;
	struct list *r;
	if(first==NULL)
		printf("underflow!");
	else
	{
		y=first->data;
		r=first;
		first=first->link;
		printf("at: %u element %d is deleted\n",r,y);
	}

}
void delB(int addr)
{
	struct list *r,*p;
	int flag=0,count=0,y;
	r=first;
	if(r->link==NULL||r==addr)
		printf("address is not exist\n");
	else
	{

		while(r!=NULL)
		{
			r=r->link;
			if(r==addr)
				flag=1;
		}
		if(flag==1)
		{
			r=first;
			while(r!=addr)
			{
				if(count==0)
					p=r;
				else if(count>1)
					p=p->link;


				r=r->link;
				count++;
			}
				if(count==1)
				{
					y=first->data;
					printf("at: %u element %d is deleted\n",first,y);
				}
				else
				{
					y=(p->link)->data;
					printf("at: %u element %d is deleted\n",p->link,y);
				}
			if(count==1)
				first=first->link;
			else
				p->link=r;
		}
		else
			printf("address is not exist\n");

	}

}
void delA(int addr)
{
       struct list *r,*p;
	int flag=0,count=0,y;
	r=first;
	if(r->link==NULL)
		printf("address is not exist\n");
	else
	{
		while(r!=NULL)
		{
			if(r==addr&&r->link!=NULL)
				flag=1;
			r=r->link;
		}
		if(flag==1)
		{
			r=first;
			while(r!=addr)
			{
			     p=r;
			     r=r->link;
			}
			p=r;
			r=r->link;
			y=r->data;
			printf("at: %u element %d is deleted\n",r,r->data);
			p->link=r->link;

		}
		else
			printf("next or currrent address is not exist!\n");
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