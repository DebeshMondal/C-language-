// MEMORY ADDRESS

#include<stdio.h>
int main()
{
	char ch='p';
	char *x;
	x=&ch;
	printf("ch= %c\n",ch);  //p
	printf("&ch= %u\n",&ch);   //2293439(ei gulo change hotei pare)
	printf("x= %u\n",x);         //2293439
	printf("&x= %u\n",&x);       //2293432
	printf("*x= %c",*x);    //p
	
	return 0;
}
