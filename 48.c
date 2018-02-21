#include<stdio.h>
void main()
{
  int i,n,sum=0,numbers;
  float Average;
  printf("\n Enter the number \n");
  scanf("%d",&n);
  printf("\n Enter the elements one by one\n");
  for(i=0;i<n;++i)
   {
     scanf("%d",&numbers);
     Sum = Sum +numbers;
   }
  Average = Sum/n;
  printf("\nsum of the %d Numbers = %d",n, Sum);
  printf("\n average of the %d Numbers = %.2f",n, Average);
 }
