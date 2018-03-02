#include <stdio.h>
#include<conio.h>
int main()
{
	int a[10];
	int i;
	printf("enter ten value");
	int greatest;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	greatest=a[i];
	for(i=0;i<10;i++)
	{
		if(a[i]>greatest)
		{
			greatest=a[i];
		}
	}
	printf("greatest of ten numbers is %d",greatest);
	return 0;
}
