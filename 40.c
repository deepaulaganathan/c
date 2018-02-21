#include <stdio.h>
#include<conio.h>
void main()
{
    int f1 = 0, f2 = 1, f3, num, count = 0;
    printf("Enter the value of num \n");
    scanf("%d", &num);
    printf("First %d fibonacci numbers \n", num);
    printf("%d\n", f1);
    printf("%d\n", f2);
    count = 2; 
    while (count < num)
    {
        f3 = f1 + f2;
        count++;
        printf("%d\n", f3);
        f1 = f2;
        f2 = f3;
   }
}
