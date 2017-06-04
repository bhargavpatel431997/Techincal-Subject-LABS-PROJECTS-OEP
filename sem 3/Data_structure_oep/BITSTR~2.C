#include<stdio.h>
#include<stdlib.h>

struct info
{
    char *name,*regi_no,*address;

    struct gender
    {
	int M,F;
    }a;

    struct discipline
    {
	int AE,CE,CS,EC,EE,ME;
    }b;

    struct module
    {
	int C,P,D;
    }c;

    struct categor
    {
	int GN,SC,ST,OC;
    }d;

    struct info *next;
}*x;

void storing(char *,char *,int ,int ,int ,int ,char *);
void display_en();
void binary_re();
void cou_gen();
void cou_mod();
void cou_dis();
void cou_cat();
void male();
void female();
void main()
{
    int ch,gen,disci,modu,category;
    char *nam,*reg_no,*addr;
    x=NULL;
    while(1)
    {
	    clrscr();
	    printf("1.insert the data\n2.retrive the data\n3.exit\n");
	    printf("enter the choice\n");
	    scanf("%d",&ch);
	    fflush(stdin);
	    switch(ch)
	    {
		case 1:
		clrscr();
		nam=NULL;
		reg_no=NULL;
		addr=NULL;


		nam=(char *)malloc(25*sizeof(char));
		reg_no=(char *)malloc(15*sizeof(char));
		addr=(char *)malloc(50*sizeof(char));

		printf("\nenter the name\n");
		scanf("%25[^\n]",nam);
		fflush(stdin);
		printf("\n\nenter the reg_no\n");
		scanf("%15[^\n]",reg_no);
		fflush(stdin);

		loop:
		printf("\n\nGender:-\n1.male\n2.female\n");
		printf("enter the choice\n");
		scanf("%d",&gen);
		fflush(stdin);
		if(gen>2||gen<1)
		{
			printf("enter the proper choice again\n");
			goto loop;
		}

		loop2:
		printf("\n\nfield:-\n1.agricultaral engineering\n2.civil engineering\n3.computer science and engineering\n4.electronics and communication\n5.electrical engineering\n6.mechanical engineering\n\nenter the choice\n");
		scanf("%d",&disci);
		fflush(stdin);
		if(disci>6||disci<1)
		{
			printf("enter the proper choice again\n");
			goto loop2;
		}

		loop3:
		printf("\n\nmodule:-\n1.certificate\n2.diploma\n3.degree\n\nenter the choice\n");
		scanf("%d",&modu);
		fflush(stdin);
		if(modu>3||modu<1)
		{
			printf("enter the proper choice again\n");
			goto loop3;
		}

		loop4:
		printf("\n\ncategory\n1.general\n2.scheduled caste\n3.scheduled tribe\n4.other category\n\nenter the choice\n");
		scanf("%d",&category);
		fflush(stdin);
		if(category>4||category<1)
		{
			printf("enter the proper choice again\n");
			goto loop4;
		}

		printf("\n\nenter your residental address\n");
		scanf("%50[^\n]",addr);
		fflush(stdin);

		storing(nam,reg_no,gen,disci,modu,category,addr);
		printf("\ninformation inserted successfully.\n");
		getch();
		break;


		case 2:
		loopa:
		clrscr();
		printf("\nretrival of data\n1.display entire data\n2.specific condition retrival\n3.binary representation of data\n");
		scanf("%d",&ch);
		fflush(stdin);
		switch(ch)
		{
			case 1:
			display_en();
			getch();
			break;

			case 2:
			clrscr();
			loop11:
			printf("\n\t1.count by condition\n\t2.display by attribute condition\n\t");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
				loop12:
				printf("\n\t\t1.count persons gender wise\n\t\t2.count persons discipline or field wise\n\t\t3.count persons module wise\n\t\t4.count persons category wise\n");
				scanf("\t\t%d",&ch);
				switch(ch)
				{
					case 1:
					clrscr();
					cou_gen();
					getch();
					break;

					case 2:
					clrscr();
					cou_dis();
					getch();
					break;

					case 3:
					clrscr();
					cou_mod();
					getch();
					break;

					case 4:
					clrscr();
					cou_cat();
					getch();
					break;

					default:
					printf("enter the proper choice\n");
					getch();
					goto loop12;
				}
				break;


				case 2:
				loop13:
				printf("\n\t1.display the students which are males\n\t2.display the students which are females\n\tenter the choice\n");
				scanf("%d",&ch);
				if(ch==1)
				{
					clrscr();
					male();
					getch();
				}
				else if(ch==2)
				{
					clrscr();
					female();
					getch();
				}
				else
				{
					printf("enter the right choice\n");
					getch();
					goto loop13;
				}
				break;


				default:
				printf("enter the choice again\n");
				getch();
				goto loop11;
			}
			break;

			case 3:
			binary_re();
			getch();
			break;

			default:
			printf("enter the right choice again\n");
			getch();
			goto loopa;
		}

		break;

		case 3:
		exit(0);

		default:
		printf("enter the right choice\n");
		getch();
		break;
	    }
    }

}
void storing(char *nam,char *reg_no,int gend,int disci,int modu,int category,char *addr)
{
    struct info *temp,*r;
    temp=(struct info *)malloc(sizeof(struct info));

    temp->name=nam;
    temp->regi_no=reg_no;
    temp->address=addr;

    temp->a.M=0;
    temp->a.F=0;
    if(gend==1)
	temp->a.M=1;
    else
	temp->a.F=1;


	temp->b.AE=0;
	temp->b.CE=0;
	temp->b.CS=0;
	temp->b.EC=0;
	temp->b.EE=0;
	temp->b.ME=0;
    if(disci==1)
	temp->b.AE=1;
    else if(disci==2)
	temp->b.CE=1;
    else if(disci==3)
	temp->b.CS=1;
    else if(disci==4)
	temp->b.EC=1;
    else if(disci==5)
	temp->b.EE=1;
    else
	temp->b.ME=1;



     temp->c.C=0;
     temp->c.P=0;
     temp->c.D=0;
    if(modu==1)
	temp->c.C=1;
    else if(modu==2)
	temp->c.P=1;
    else
	temp->c.D=1;


    temp->d.GN=0;
    temp->d.SC=0;
    temp->d.ST=0;
    temp->d.OC=0;

    if(category==1)
	temp->d.GN=1;
    else if(category==2)
	temp->d.SC=1;
    else if(category==3)
	temp->d.ST=1;
    else
	temp->d.OC=1;

    if(x==NULL)
    {
	x=temp;
	temp->next=NULL;
    }
    else
    {
	r=x;
	while(r->next!=NULL)
	    r=r->next;
	r->next=temp;
	temp->next=NULL;
    }
}

void display_en()
{
	int j=0;
	char g,*d,m,*ca;
	struct info *r;
	d=(char *)malloc(2*sizeof(char));
	ca=(char *)malloc(2*sizeof(char));
      if(x==NULL)
	printf("No Data Available\n");
      else
      {
	r=x;
	while(r!=NULL)
	{

		if(r->a.M==1)
		g='M';
		else
		g='F';

		if(r->b.AE==1)
		d="AE";
		else if(r->b.CE==1)
		d="CE";
		else if(r->b.CS==1)
		d="CS";
		else if(r->b.EC==1)
		d="EC";
		else if(r->b.EE==1)
		d="EE";
		else
		d="ME";

		if(r->c.C==1)
		m='C';
		else if(r->c.P==1)
		m='P';
		else
		m='D';

		if(r->d.GN==1)
		ca="GN";
		else if(r->d.SC==1)
		ca="SC";
		else if(r->d.ST==1)
		ca="ST";
		else
		ca="OC";
		printf("\ninfo.%d\n",j+1);
		printf("\nName:       %s\nReg.no:     %s\nGender:     %c\nDiscipline: %s\nModule:     %c\nCategory:   %s\nAddress     %s\n\n",r->name,r->regi_no,g,d,m,ca,r->address);
		r=r->next;
		j++;
	}
	printf("\ntotal %d data available\n",j);
      }
}
void binary_re()
{
	struct info *r;
	int i=0;
	if(x==NULL)
	printf("No Data Available\n");
   else
     {	r=x;
	printf("Array\t\tBit String\n\n");
	printf("M\t\t");
	while(r!=NULL)
	{
		printf("%d",r->a.M);
		r=r->next;
	}

	printf("\nF\t\t");
	r=x;
	while(r!=NULL)
	{
		printf("%d",r->a.F);
		r=r->next;
	}

	printf("\nAE\t\t");
	r=x;
	while(r!=NULL)
	{
		printf("%d",r->b.AE);
		r=r->next;
	}

	printf("\nCE\t\t");
	r=x;
	while(r!=NULL)
	{
		printf("%d",r->b.CE);
		r=r->next;
	}

	printf("\nCS\t\t");
	r=x;
	while(r!=NULL)
	{
		printf("%d",r->b.CS);
		r=r->next;
	}

	printf("\nEC\t\t");
	r=x;
	while(r!=NULL)
	{
		printf("%d",r->b.EC);
		r=r->next;
	}

	printf("\nEE\t\t");
	r=x;
	while(r!=NULL)
	{
		printf("%d",r->b.EE);
		r=r->next;
	}

	printf("\nME\t\t");
	r=x;
	while(r!=NULL)
	{
		printf("%d",r->b.ME);
		r=r->next;
	}

	printf("\nC\t\t");
	r=x;
	while(r!=NULL)
	{
		printf("%d",r->c.C);
		r=r->next;
	}

	printf("\nP\t\t");
	r=x;
	while(r!=NULL)
	{
		printf("%d",r->c.P);
		r=r->next;
	}

	printf("\nD\t\t");
	r=x;
	while(r!=NULL)
	{
		printf("%d",r->c.D);
		r=r->next;
	}

	printf("\nGN\t\t");
	r=x;
	while(r!=NULL)
	{
		printf("%d",r->d.GN);
		r=r->next;
	}

	printf("\nSC\t\t");
	r=x;
	while(r!=NULL)
	{
		printf("%d",r->d.SC);
		r=r->next;
	}

	printf("\nST\t\t");
	r=x;
	while(r!=NULL)
	{
		printf("%d",r->d.ST);
		r=r->next;
	}

	printf("\nOC\t\t");
	r=x;
	while(r!=NULL)
	{
		printf("%d",r->d.OC);
		r=r->next;
	}
    }

}
void cou_gen()
{
	int m=0,f=0;
	struct info *r;
	if(x==NULL)
	printf("No Data Available\n");
       else
       {
	r=x;
	while(r!=NULL)
	{
		if(r->a.M==1)
		m++;
		else
		f++;
		r=r->next;
	}
	printf("\n\t\tfemales:- %d\n\t\tmales:-   %d\n",f,m);
       }
}

void cou_dis()
{
	int ae=0,ce=0,cs=0,ec=0,ee=0,me=0;
	struct info *r;
	if(x==NULL)
	printf("No Data Available\n");
else
{
	r=x;
	while(r!=NULL)
	{
		if(r->b.AE==1)
		ae++;
		else if(r->b.CE==1)
		ce++;
		else if(r->b.CS==1)
		cs++;
		else if(r->b.EC==1)
		ec++;
		else if(r->b.EE==1)
		ee++;
		else
		me++;
		r=r->next;
	}
	printf("\n\t\tAgricultaral engineering students          %d\n\t\tcivil engineering students                 %d\n\t\tcomputer science and engineering students  %d\n\t\telectronics and communication students     %d\n\t\telectrical engineering students            %d\n\t\tmechanical engineering students            %d\n",ae,ce,cs,ec,ee,me);
 }
}

void cou_mod()
{
	int s=0,p=0,d=0;
	struct info *r;
	if(x==NULL)
	printf("No Data Available\n");
    else
    {
	r=x;
	while(r!=NULL)
	{
	 if(r->c.C==1)
	 s++;
	 else if(r->c.P==1)
	 p++;
	 else
	 d++;

	 r=r->next;
	}
	printf("\n\t\tstudents who have certificate         %d\n\t\tstudent who are from diploma          %d\n\t\tstudent who are from 12 th for degree %d\n",s,p,d);
    }
}
void cou_cat()
{
 int gn=0,sc=0,st=0,oc=0;
 struct info *r;
 if(x==NULL)
	printf("No Data Available\n");
 else
 {
	r=x;
	while(r!=NULL)
	{
		 if(r->d.GN==1)
		 gn++;
		 else if(r->d.SC==1)
		 sc++;
		 else if(r->d.ST==1)
		 st++;
		 else
		 oc++;
		 r=r->next;
	}
	printf("\n\t\tgeneral category students  %d\n\t\tscheduled caste students   %d\n\t\tscheduled tribe students   %d\n\t\tother category students    %d",gn,sc,st,oc);
 }
}

void male()
{
	int j=0;
	char g,*d,m,*ca;
	struct info *r;
	d=(char *)malloc(2*sizeof(char));
	ca=(char *)malloc(2*sizeof(char));
	if(x==NULL)
	printf("No Data Available\n");
else
{
	r=x;
	while(r!=NULL)
	{

		if(r->a.M==1)
		{
			g='M';

			if(r->b.AE==1)
			d="AE";
			else if(r->b.CE==1)
			d="CE";
			else if(r->b.CS==1)
			d="CS";
			else if(r->b.EC==1)
			d="EC";
			else if(r->b.EE==1)
			d="EE";
			else
			d="ME";

			if(r->c.C==1)
			m='C';
			else if(r->c.P==1)
			m='P';
			else
			m='D';

			if(r->d.GN==1)
			ca="GN";
			else if(r->d.SC==1)
			ca="SC";
			else if(r->d.ST==1)
			ca="ST";
			else
			ca="OC";
			printf("\ninfo.%d\n",j+1);
			printf("\nName:       %s\nReg.no:     %s\nGender:     %c\nDiscipline: %s\nModule:     %c\nCategory:   %s\nAddress     %s\n\n",r->name,r->regi_no,g,d,m,ca,r->address);
			r=r->next;
			j++;
		}
		else
			r=r->next;
	}
	printf("\ntotal %d data available\n",j);
}
}
void female()
{
	int j=0;
	char g,*d,m,*ca;
	struct info *r;
	d=(char *)malloc(2*sizeof(char));
	ca=(char *)malloc(2*sizeof(char));

	if(x==NULL)
	printf("No Data Available\n");
   else
   {	r=x;
	while(r!=NULL)
	{

		if(r->a.F==1)
		{
			g='F';

			if(r->b.AE==1)
			d="AE";
			else if(r->b.CE==1)
			d="CE";
			else if(r->b.CS==1)
			d="CS";
			else if(r->b.EC==1)
			d="EC";
			else if(r->b.EE==1)
			d="EE";
			else
			d="ME";

			if(r->c.C==1)
			m='C';
			else if(r->c.P==1)
			m='P';
			else
			m='D';

			if(r->d.GN==1)
			ca="GN";
			else if(r->d.SC==1)
			ca="SC";
			else if(r->d.ST==1)
			ca="ST";
			else
			ca="OC";
			printf("\ninfo.%d\n",j+1);
			printf("\nName:       %s\nReg.no:     %s\nGender:     %c\nDiscipline: %s\nModule:     %c\nCategory:   %s\nAddress     %s\n\n",r->name,r->regi_no,g,d,m,ca,r->address);
			r=r->next;
			j++;
		}
		else
			r=r->next;
	}
	printf("\ntotal %d data available\n",j);
   }
}