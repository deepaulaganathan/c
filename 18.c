#include <stdio.h>
int main()
{
    int number,a, remainder, result = 0;

    printf("Enter a three digit integer: ");
    scanf("%d", &a);

    originalNumber = a;

    while (originalNumber != 0)
    {
        remainder = originalNumber%10;
        result += remainder*remainder*remainder;
        originalNumber /= 10;
    }

    if(result == a)
        printf("%d is an Armstrong number.",a);
    else
        printf("%d is not an Armstrong number.",a);

    return 0;
}
