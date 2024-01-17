  //MEMORY ADDRESS

#include<stdio.h>

int main()
{
	int a=12;
	int *b;
	b=&a;
	printf("a= %d",a);  //12
	printf("\nAddress of a= %u",&a); //2293436
	printf("\nb= %u",b);  //2293436 (ei gulo change hotei pare)
	printf("\nAddress of b= %u",&b); //2293432
	
	printf("\n*b=%d",*b);    //12
	return 0;
}
