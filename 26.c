#include<stdio.h>
#include<conio.h>
void quicksort (int [], int, int);
int main()
{
    int list[50];
    int n, m;
    printf("Enter the number of elements: ");
    scanf("%d", &n); 
    printf("Enter the elements to be sorted:\n");
    for (m = 0; m < n; m++)
    {
        scanf("%d", &list[i]);
    } 
    quicksort(list, 0, n - 1);
    printf("After applying quick sort\n");
    for (m = 0; m < n; m++)
    {
        printf("%d ", list[m]);
    }
    printf("\n");
 
    return 0;
}
void quicksort(int list[], int low, int high)
{
    int pivot, m, j, temp;
    if (low < high)
    {
        pivot = low;
        m = low;
        j = high;
        while (i < j) 
        {
            while (list[m] <= list[pivot] && m <= high)
            {
                m++;
            }
            while (list[j] > list[pivot] && j >= low)
            {
                j--;
            }
            if (m < j)
            {
                temp = list[m];
                list[m] = list[j];
                list[j] = temp;
            }
        }
        temp = list[j];
        list[j] = list[pivot];
        list[pivot] = temp;
        quicksort(list, low, j - 1);
        quicksort(list, j + 1, high);
    }
    }
