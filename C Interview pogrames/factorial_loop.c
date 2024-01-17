// sum of n natural numbers
#include<stdio.h>               
int main()
{
	int i=1,n,fact=1;         // (initiliazation)
	printf("Enter the range=");
	scanf("%d",&n);
	while (i<=n)            //(test condition)
 {
 	fact=fact*i; 
  //printf("SUM=%d",sum);     // loop body
  i++;                       // (updation)
 }
 printf("FACT=%d",fact); 
 return 0 ;
}
