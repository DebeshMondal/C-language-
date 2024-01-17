//swapping....interchange
//insert
//shift
//  A  B  C
// insert C in A
// C  A  B
/* swap A and B
C  B  A */
  // Write a program to swap two no. taking input from user.

#include<stdio.h>
int main()
{
	int a,b,c;
printf("Enter two values \n");
scanf("%d%d",&a,&b);	               // &= ampersen or address of operator
printf("Before swapping first value= %d \n and Second value equal to = %d",a,b);
c=a,a=b,b=c;
 printf("\nAfter swapping first value= %d \n and Second value equal to = %d",a,b);
return 0;
}
