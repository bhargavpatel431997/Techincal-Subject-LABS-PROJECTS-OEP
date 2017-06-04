#include<stdio.h>
struct tree {

	int data;
	struct tree *lchild;
	struct tree *rchild;
}*root;

struct tree *tins(int , struct tree *);
void display(int);
void inOrd(struct tree *);
void preOrd(struct tree *);
void postOrd(struct tree *);

void main()
{
	int ch,valu;


	do
	{
		clrscr();
		printf("tree operations:-\n1.insertion in tree\n2.travers to display\n3.reset tree\n4.exit\n\nenter the choice\n");
		scanf("%d",&ch);
		fflush(stdin);
		switch(ch)
		{
			case 1:
			if(root==NULL)
				printf("\nWARNING:DO NOT INSERT SAME VALUE OTHER WISE PROGRAM WILL EXIT\n\n");

			printf("enter the value\n");
			scanf("%d",&valu);
			fflush(stdin);
			tins(valu,root);
			getch();
			break;

			case 2:
			printf("\n\n1.in order\n2.pre order\n3.post order\n\nenter the choice:-\n");
			scanf("%d",&valu);
			fflush(stdin);
			display(valu);
			getch();
			break;

			case 3:
			root=NULL;
			printf("reset successfull!\n");
			getch();
			break;

			case 4:
			free(root);
			exit(0);

			default:
			printf("enter the correct choice\n");
			getch();
		}
	}while(1);

}

struct tree *tins(int val,struct tree *xroot)
{

	if(xroot==NULL)
	{
		xroot=(struct tree *)malloc(sizeof(struct tree));
		xroot->data=val;
		xroot->lchild=NULL;
		xroot->rchild=NULL;
		printf("inserted successfully!\n");
		if(root==NULL)
		root=xroot;
	}
	else
	{
		if(xroot->data>val)
			xroot->lchild=tins(val,xroot->lchild);
		else if(xroot->data<val)
			xroot->rchild=tins(val,xroot->rchild);
		else
		{
			printf("same value not allowed. program crashed!\n");
			getch();
			exit(0);
		}
	}
return(xroot);

}
void display(int ch)
{
	switch(ch)
	{

		case 1:
			inOrd(root);
			break;
		case 2:
			preOrd(root);
			break;
		case 3:
			postOrd(root);
			break;
		default:
			printf("enter the right choice\n");
	}

}



void inOrd(struct tree *yroot)
{
	if (yroot == NULL)
		return;
	inOrd(yroot->lchild);
	printf("%d  ",yroot->data);
	inOrd(yroot->rchild);
}

void preOrd(struct tree *yroot)
{
	if(yroot ==NULL)
		return;
	printf("%d  ",yroot->data);
	preOrd(yroot->lchild);
	preOrd(yroot->rchild);
}

void postOrd(struct tree *yroot)
{
	if(yroot ==NULL)
		return;
	postOrd(yroot->lchild);
	postOrd(yroot->rchild);
	printf("%d  ",yroot->data);
}
