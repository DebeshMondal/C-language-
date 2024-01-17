#include<stdio.h>
int main ()
{
	int f,c;
	printf("Enter the value of fahrenheit=");
	scanf("%d",&f);
	c=((f-32)*5)/9;
	printf("Fahrenheit to celsius=%d",c);
}
