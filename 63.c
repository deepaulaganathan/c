#include<stdio.h>
#include<conio.h>
void main()
{
  char a[200];
	int len,i,word=1;
	clrscr();
	printf("\n enter a string: ");
	gets(a);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if(a[i]!=' ' && a[i+1]==' ')
			word=word+1;
	}
	printf("\n there are %d words in the string",word);
	getch();
  }
