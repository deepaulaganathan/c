#include<stdio.h>
#include<conio.h>
void main()
{
        longint sum=0,i,n;
        clrscr();
        printf("\n Please Give the Value of N:  ");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            printf("\n 5 * %d = %d",i,5*i);
        }
        
        getch();
}
