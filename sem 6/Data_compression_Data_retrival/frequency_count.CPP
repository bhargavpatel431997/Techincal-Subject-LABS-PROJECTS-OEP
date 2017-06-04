#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
int main()
{
	FILE *fp;
	int word_count[26],total_count=0,j;
	double prob[26],entropy=0.0;
	clrscr();
	for(int i=0;i<26;i++)
		word_count[i]=0;
	char c;
	fp = fopen("data.txt","r");
	while((c = getc(fp)) != EOF)
	{
	       //printf("%c",c);
	       if(isalpha(c))
	       {
		  c=toupper(c);
		  word_count[c-'A']++;
		  total_count++;
	       }
	}
	fclose(fp);
	char x='A';

	printf("symbols\tfrequency\tprobability\tselfinfo\n");
	for( i=0;i<26;i++)
	{
		if(word_count[i]!=0)
		{
			printf("%c\t %d\t\t",x,word_count[i]);
			prob[i]=word_count[i]/(total_count*1.0);
			printf("%f\t%f\n",prob[i],(-1.0*log10(prob[i])/log10(2)));
			entropy+=(-1.0*prob[i]*(log10(prob[i])/log10(2)));
		}
		x++;
	}
	printf("\n\n");
	x='A';
	printf("   ");
	for(i=0;i<26;i++)
	{
		printf("%c ",x);
		x++;
	}
	int limit=0;
	for(i=0;i<26;i++)
	{ limit=(word_count[i]<limit)?limit:word_count[i];}
	printf("\n");
	for(i=0;i<limit;i++)
	{
		for(j=-1;j<26;j++)
		{
			if(j==-1)
				printf("%d  ",i+1);
			else
			{
				if(word_count[j]!=0)
				{
					printf("| ");
					word_count[j]--;
				}
				else
					printf("  ");
			}
		}
		printf("\n");
	}

	printf("\n\nentropy: %f",entropy);

	getch();
	return 0;
}