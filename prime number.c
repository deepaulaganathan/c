#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n,c=0;
 printf("enter a number");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 if(n%i==0)
 c=c+1;
 }
 if(c==2)
 printf("the number is prime");
 }
