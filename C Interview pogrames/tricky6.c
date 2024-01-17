// C interview quetions
#include<stdio.h>

int main()
{
	int a=10,b=12;
	printf("%d %d %d",a&&b,a||b,!b); // 1 1 0
	printf("\n%d %d %d",a&b,a|b,a^b); // 
	return 0;
}
/*
a=10 ---> 1010
b=12 ---> 1100
---------------------
         1000 = 8 
         1110 = 14
         0110 = 6
         
         c=a'b+ab'

*/
