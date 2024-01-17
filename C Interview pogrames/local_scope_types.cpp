// local scope types

#include<stdio.h>
   
int main()
{
	int a=30;
	printf("%d",a);
	{			   // block   --- o/p: 30 29 30 12 30
		int a=29;
		printf("\n%d",a);
	}
	printf("\n%d",a);
	{
		int a=12;
		printf("\n%d",a);
	}
	printf("\n%d",a);
	return 0;
}
