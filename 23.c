#include <stdio.h>
void main() 
{
    int array[100], minimum, size, m, location = 1;
    printf("Enter the number of elements in array\n");
    scanf("%d",&size);
    printf("Enter %d integers\n", size);
    for ( m = 0 ; m < size ; m++ )
        scanf("%d", &array[m]);
    minimum = array[0];
    for ( m = 1 ; m < size ; m++ ) 
    {
        if ( array[m] < minimum ) 
        {
           minimum = array[m];
           location = m+1;
        }
    } 
    printf("Minimum element is present at location %d and it's value is %d.\n", location, minimum);
   return 0;
}
