#include<stdio.h>
int main()
{
	int s=10;
	int *pt;
	{
		int x=200;
		pt=&x;
	//	printf("x=%d\n",x);
	//	printf("s=%d\n",s);
	}
	 //	printf("x=%d\n",x);  // AS X IS DEFINED ON A SEPERATE BLOCK, TAI SUDHU OI BLOCK EI KAJ DEBE A
	//	printf("s=%d\n",s);
	printf("*pt= %d\n",*pt); // DANGLING POINTER = MAJHE MAJHE GHOST POINTER O BOLE A	
		
	return 0;
}
