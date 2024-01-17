// WAP TO FIND FACTORIAL OF A GIVEN NO. USING RECURSION

#include<stdio.h>
int facto(int);
int main()
{
	int n;
	printf("Enter any no.:\n");
	scanf("%d",&n);                           
    int fact=facto(n);	
	printf("Factorial=%d",fact);
	return 0;
}
   int facto(int num){
   int f=1;
   if (num==1 || num==0) 
   {
   return 1;
   }
   else {
   	f=num*facto(num-1);
   return f;
   }
	 }
   
   
   
   
   
