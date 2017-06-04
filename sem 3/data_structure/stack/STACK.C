#include<stdio.h>
#include<process.h>
#define n 5
int top=-1,s[n],temp;

void push(int );
int pop();
void peep(int *);
void change(int *,int );
void display();
void menu();

void main ()
{
int a,j;
clrscr();
do
	{
	menu();
	printf("\nenter the choice:-\n");
	scanf("%d",&a);
	switch(a)
		{
		case 1:
		printf("enter the value that you want to store or push:-\n");
		scanf("%d",&temp);
		push(temp);
		break;

		case 2:
		printf("after the pop or droping operation value:-  %d",pop());
		break;

		case 3:
		printf("enter the index to print value:-\n");
		scanf("%d",&j);
		peep(&j);
		break;

		case 4:
		printf("enter the value and index at you want to change value:-\n");
		scanf("%d%d",&j,&temp);
		change(&j,temp);
		break;

		case 5:
		printf("the stored values:-");
		display();
		break;

		case 6:
		exit(0);
		}
	}while(a>0 && a<7);
getch();
}




void push(int temp)
{
	if(top>=4)
	{
	printf("the stack is overflow");
	}
	else
	{
	top++;
	s[top]=temp;
	}
}
int pop()
{
	if(top<0)
	{
	printf("the stack underflow");
	return 0;
	}
	else
	{
	temp=s[top];
	top--;
	return temp;
	}
}
void peep(int *j)
{
	int i=*j;
	if(top-i+1<0)
	{
	printf("element is not exist");
	}
	else
	{
	printf("the element at index is %d",s[top-i+2]);
	}
}
void change (int *j , int temp)
{
	int i=*j;
       //if(i>top)
       if(i>n)
	{
		printf("index is not exist");
	}
	else
	{
	  printf("value is successfully  changed");
	  s[i-1]=temp;
	}
}
void display()
{
	int k;
	printf("\n");
	for(k=0;k<=top;k++)
	{
	printf("%d  ",s[k]);
	}
}
void menu()
{
printf("\n\nstack operations:-\n1.push \n2.pop \n3.peep \n4.change \n5.display \n6.exit\n");
}