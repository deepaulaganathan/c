#includ<stdio.h>
void main()
{
int n,rev,rem;
printf("enter the number");
scanf("%d",n);
while(n>0)
rem=n%10;
rev=rev*10+rem;
n=n/10;
if(n==rev)
{
printf("palindrome");
}
else
{
printf("not palindrome");
}
}

