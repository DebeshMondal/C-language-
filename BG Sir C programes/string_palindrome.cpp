/*
Write a C program to check whether a given string
is palindrome or not (using string library function).
*/

#include<stdio.h>
#include<string.h>

int main()
{
	char str1[100],str2[100];
	puts("Enter any string");
	gets(str1);
	
	strcpy(str2,str1);
	//printf("str1= %s and str2= %s",str1,str2);
	strrev(str2);
	//printf("reverse word= %s",str2);

	
	if(strcmp(str1,str2)==0)
	{
		printf("\nThe given string is a Palindrome");
	}
	else
	{
		printf("\nThe given string is not a Palindrome");
	}

	
	return 0;
}
