#include<stdio.h>
//#include<conio.h>
int main() 
  {   
   int n,m,a;
   printf("enter the two numbers");
   scanf("%d%d",&n,&m);
   a=n*m; 
   
       if(a%2==0)
    {
        printf(" even number");
    }
    else
    {
        printf(" odd number");
    }
   return 0;
}
