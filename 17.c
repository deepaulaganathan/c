#include <stdio.h>
void main()
{
    int n, a, remainder, result = 0;

    printf("Enter a three digit integer: ");
    scanf("%d", &n);

    a = n;

    while (a != 0)
    {
        remainder =a%10;
        result += remainder*remainder*remainder;
        a /= 10;
    }

    if(result == n)
        printf("%d is an Armstrong number.",n);
    else
        printf("%d is not an Armstrong number.",n);

    return 0;
}
