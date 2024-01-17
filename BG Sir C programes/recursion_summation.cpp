// WAP TO FIND SUM OF N NATURAL NO. A GIVEN NO. USING RECURSION

#include<stdio.h>
int summation(int);
int main()
{
	int n;
	printf("Enter any no.:\n");
	scanf("%d",&n);                           
    int s=summation(n);	
	printf("Summation=%d",s);
	return 0;
}
   int summation(int num){
   int i,f=1;
   if (num==1) 
   {
   return 1;
   }
   else {
   	f=num+summation(num-1);
   return f;
   }
	 }
   
