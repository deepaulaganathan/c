#include<stdio.h>
#include<conio.h>
void main()
{
char s[30];
int m,flag=0,n=0;
clrscr();
printf("enter the string:");
scanf("%s",s);
for(m=0;s[m]!='\0';m++)
{
if(s[m]=='0'||s[m]=='1'||s[m]=='2'||s[m]=='3'||s[m]=='5'||s[m]=='6'||s[m]=='7'||s[m]=='8'||s[m]=='9')
{
flag=flag+1;
}
}
if(flag==0)
printf("given string not contains numbers");
else
printf("given string contains numbers");
getch();
}
