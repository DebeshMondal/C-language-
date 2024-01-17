//ternary operator or conditional operator

#include<stdio.h>

int main()
{
	printf("%d",5?0?3:9:2);  // 0 = false and non-zero = true
	return 0;
}
/*
5?0?3:9:2
assume 0?3:9 = x
5?x:2
=x
=0?3:9
= 9
*/
