#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
struct list{
 int data;
 struct list *rptr;
 struct list *lptr;
}*l,*r;
void inAtFr(int);
void inAtLa(int);
void display(int);
void delAtLa();
void delBeSp(struct list *);

int main()
{
	int n,i,z;
	struct list *x;
	l=NULL,r=NULL;
	//clrscr();
	loop:
		//clrscr();
		printf("\ndoubly linked list:-\n\n1.insert at front\n2.insert at last\n3.delete last node\n4.delete before specified position \n5.display\n6.reset list\n7.exit\n");
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
			delAtLa();
			sleep(2);
			goto loop;

			case 4:
			printf("enter the address\n");
			scanf("%u",x);
			delBeSp(x);
			sleep(2);
			goto loop;

			case 5:
			printf("\n1.display right to left\n2.display left to right\n\nenter the choice \n");
			scanf("%d",&z);
			display(z);
			sleep(5);
			goto loop;


			case 6:
			r=NULL,l=NULL;
			printf("reset successfull!\n");
			sleep(1);
			goto loop;

			case 7:
			return 0;

			default:
            printf("enter the correct choice\n");
            goto loop;

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

void delAtLa()
{
	if(l==NULL)
		printf("underflow!\n");
	else
	{
		printf("at %u element %d deleted!\n",r,r->data);
		r=r->lptr;
		r->rptr=NULL;
	}
}
void delBeSp(struct list *addr)
{
	struct list *x;
	int flag=0;
	if(l==NULL)
		printf("underflow!\n");
	else
	{
		x=l;
		while(x->rptr!=NULL)
		{
			if(x->rptr==addr)
			{
				if(l==addr)
					printf("element is not exist!\n");
				else
				{
					printf("at %u element %d element is deleted!\n",x,x->data);
					if(l==r)
						l=NULL,r=NULL;
					else if(l->rptr==addr)
					{
						l=l->rptr;
						l->lptr=NULL;
					}
					else
					{
						(x->lptr)->rptr=x->rptr;
						(x->rptr)->lptr=x->lptr;
					}
				}
				flag=1;
				break;
			}
			else
				x=x->rptr;
		}
		if(flag!=1)
			printf("element not found!\n");
	}

}
