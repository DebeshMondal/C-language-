// sum of n natural numbers
#include<stdio.h>               
int main()
{
	int i=1,n,sum=0;         // (initiliazation)
	printf("Enter the range=");
	scanf("%d",&n);
	while (i<=n)            //(test condition)
 {
 	sum=sum+i; 
  //printf("SUM=%d",sum);     // loop body
  i++;                       // (updation)
 }
 printf("SUM=%d",sum); 
 return 0 ;
}
