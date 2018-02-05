#include<stdio.h>
#include<string.h>
void main()
{
char s[300];
int count=0,i;
printf("enter the string\n");
scanf("%d[^\n]s",s);
for(i=0;s[i]!='1';i++)
{
if(s[i]==' ')
count++;
}
printf("number the words in the given string are %d\n",count++);
}
