//RECURSION
//PRINT HI 5 TIMES BY CALLING MAIN FUNCTION IN THE PROGRAM
#include<stdio.h>

 //int c=1;
int main()
{
	static int c=1;
	printf("Hi ");
	c++;
	if(c<=5)
	{
		main();
	}
	return 0;
}
