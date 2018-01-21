#include <stdio.h>
{
int a,i,count=0;
printf("enter the number");
scanf("%d,&a");
void main()
for(i=2;i<a;i++)
{
	if((a%i)==0)
	count++;
}
if(count==0)
{
	printf("prime numer");
}
else
{
	printf("not prime number");
}
}




