#include <stdio.h>
int main()
{
    int a, i;
    unsigned long long factorial = 1;

    printf("Enter an integer: ");
    scanf("%d",&a);
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");

    else
    {
        for(i=1; i<=a; ++i)
        {
            factorial *= i;              
        }
        printf("Factorial of %d = %llu", a, factorial);
    }

    return 0;
}
