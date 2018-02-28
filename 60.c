#include<stdio.h>
#include<conio.h>
void main()
{
 int n,n1,n2,n3,count=0;
 printf("enter the value");
 scanf("%d",&n);
 printf("%d fibonacci series \n,",n);
 printf("%d\n",&n1);
 printf("%d\n",&n2);
 count=2;
 while(count<n)
 {
 n3=n1+n2;
 count++;
 printf("%d\n",n3);
 n1=n2;
 n2=n3;
 }
 }
