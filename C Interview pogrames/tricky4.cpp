#include<stdio.h>

int main()
{
	int a=10,b=4,c;
	//c=(a<=b)?3:20;  // ? : ternary / conditional operator
	//c=a?3:20;
//	c=5?0?6:9:40;    // RUN korle a 9
 c=0?34?1:90:432;   // run korle a 432 as prothom ei ZERO ache a...tai assum kore a r bhetore a dhukbe nah
	printf("c= %d",c);
	return 0;
}

/*
c=5?0?6:9:40;
assume 0?6:9 = x
c=5?x:40;
c=x
c=0?6:9;
c=9

*/
