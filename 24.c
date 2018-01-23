#include <stdio.h>
#include<conio.h>
void main()
{
    int array[MAXSIZE];
    int i, m, num, temp;
    printf("Enter the value of num \n");
    scanf("%d", &num);
    printf("Enter the elements one by one \n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Input array is \n");
    for (i = 0; i < num; i++)
    {
        printf("%d\n", array[i]);
    }
    for (i = 0; i < num; i++)
    {
        for (m = 0; m < (num - i - 1); m++)
        {
            if (array[m] > array[m + 1])
            {
                temp = array[m];
                array[m] = array[m + 1];
                array[m + 1] = temp;
            }
        }
    }
    printf("Sorted array is\n");
    for (i = 0; i < num; i++)
    {
        printf("%d\n", array[i]);
    }
}
