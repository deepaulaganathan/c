#include <stdio.h>
#includ<conio.h>
 void main() 
 {
     int hour, minu, second, timeinsecond;
     printf("Enter the value for hour:")
     scanf("%d", &hour);
     printf("Enter the value for minu:");
     scanf("%d", &minu);
     printf("Enter the value for seconds:");
     scanf("%d", &second);
     timeinsecond = second + (minu * 60) + (hour * 60 * 60);
   printf("Total seconds in %02dH:%02dM:%02dS is %d\n" hour, minu, second, timeinsecond);
     return 0;
  }

