#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#define n 25
int top=-1;
char *s;
int isoperator(char);
void push(char);
int ssp(char);
int csp(char);
char pop ();
void main()
{
	int i,k=0;
	char *in,*po,y;
	clrscr();
	s=(char*)calloc(n,sizeof(char));
	//in=(char *)calloc(n,sizeof(char));
	//po=(char *) calloc(n,sizeof(char));
	push('#');
	printf("enter the infix operation:-\n");
	scanf("%s",in);
	for(i=0;in[i]!='\0';i++)
	{
		if(in[i]=='(')
			push(in[i]);
		else if(in[i]==')')
		{
			while(s[top]!='(')
			{
			 po[k]=pop();
			 k++;
			}
		}
		else if(isalnum(in[i]))
		{

		 po[k]=in[i];
		 k++;
		}
		else if(isoperator(in[i]))
		{
			if(top==0)
				push(in[i]);
			else
			{
				while(csp(in[i])<=ssp(s[top]))
				{
				if(s[top]=='#'||s[top]=='(')
					break;
				else {

					 po[k]=pop();
					 k++;
				  }
				}
				push(in[i]);

			}

		}
	}
	while(s[top]!='#')
	{
		if(s[top]=='(')
		{
			y=pop();
			k++;
		}
		else
		{
			po[k]=pop();
			k++;
		}
	}
	printf("the postfix expressions:-\n");
	i=0;
	while(i<strlen(in))
	{
		printf("%c",po[i]);
		i++;
	}
	free(s);
	free(po);
	free(in);
	getch();
}
void push(char temp)
{
	top++;
	s[top]=temp;
}
char pop()
{     char temp;
	temp=s[top];
	top--;
	return temp;
}
int ssp(char d)
{
	int ch;
	if(isalnum(d))
	ch=8;
	switch(d)
	{
		case '+':
		case '-':
		ch=2;
		break;
		case '*':
		case '/':
		ch=4;
		break;
		case '^':
		ch=5;
		break;
	}
	return ch;
}
int csp(char d)
{
	int ch;
	if(isalnum(d))
	ch=7;
	switch(d)
	{
		case '+':
		case '-':
		ch=1;
		break;
		case '*':
		case '/':
		ch=3;
		break;
		case '^':
		ch=6;
		break;
	}
	return ch;
}
int isoperator(char a)
{
	if(a=='+'||a=='-'||a=='*'||a=='/'||a=='^')
		return 1;
	else
		return 0;
}
