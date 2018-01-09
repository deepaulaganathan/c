#include<stdio.h>
void main()
{
float a,b,c;
printf("enter the three values");
scanf("%f %f %f",&a,&b,&c);
printf("\n LARGEST VALUE IS");
if(a>b)
{
if(a>c)
printf("%f\n",a);
else
printf("%f\n",c);
}
else
{
if(c>b)
printf("%f\n",c);
else
printf("%f\n",b);
}
}
