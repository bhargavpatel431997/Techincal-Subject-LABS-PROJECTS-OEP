#include<stdio.h>
#include<dos.h>

struct list{
 int data;
 struct list *rptr;
 struct list *lptr;
}*l,*r;
void inAtFr(int);
void inAtLa(int);
void display(int);

void main()
{
	int n,i,z;
	l=NULL,r=NULL;
	clrscr();
	loop:
		clrscr();
		printf("\ndoubly linked list:-\n\n1.insert at front\n2.insert at last\n3.display\n4.reset list\n5.exit\n");
		printf("\nenter the choice:-\n");
		scanf("%d",&i);
		switch(i)
		{
			case 1:
			printf("enter the value\n");
			scanf("%d",&z);
			inAtFr(z);
			printf("!!! value %d iserted at front !!!\n",z);
			sleep(1);
			goto loop;

			case 2:
			printf("enter the value\n");
			scanf("%d",&z);
			inAtLa(z);
			printf("!!! value %d iserted at last !!!\n",z);
			sleep(1);
			goto loop;

			case 3:
			printf("\n1.display right to left\n2.display left to right\n\nenter the choice \n");
			scanf("%d",&z);
			display(z);
			sleep(5);
			goto loop;

			case 4:
			r=NULL,l=NULL;
			printf("reset successfull!\n");
			sleep(1);
			goto loop;

			case 5:
			exit(1);

		}

}


void inAtFr(int val)
{
   struct list *temp;
   temp=(struct list *) malloc(sizeof(struct list));
   temp->data=val;
   if(l==NULL)
   {
	l=temp;
	r=temp;
	temp->rptr=NULL;
	temp->lptr=NULL;

   }
   else
   {
	//r->rptr=NULL;
	temp->lptr=NULL;
	temp->rptr=l;
	l->lptr=temp;
	l=temp;
   }

}

void inAtLa(int val)
{
     struct list *temp;
   temp=(struct list *) malloc(sizeof(struct list));
   temp->data=val;
   if(r==NULL)
   {
	r=temp;
	l=temp;
	temp->rptr=NULL;
	temp->lptr=NULL;
   }
   else
   {
	  r->rptr=temp;
	  temp->lptr=r;
	  temp->rptr=NULL;
	  r=temp;
	
   }

}
void display(int ch)
{
	struct list *x;

	if(l==NULL)
		printf("nothing to show!\n");

	else if(ch==1)
	{
		x=r;
		while(x!=NULL)
		{
			printf("at: %u data: %d    rptr %u    lptr %u\n",x,x->data,x->rptr,x->lptr);
			x=x->lptr;
		}
	}
	else if(ch==2)
	{
		x=l;
		while(x!=NULL)
		{
			printf("at: %u data: %d    lptr %u    rptr %u\n",x,x->data,x->lptr,x->rptr);
			x=x->rptr;
		}
	}
	else
		printf("enter the correct choice\n");


}
