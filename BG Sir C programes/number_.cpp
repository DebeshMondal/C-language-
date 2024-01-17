#include<stdio.h>
int main()
{
	int a=26;  // decimal a ache
	 int b=026;  // octal a ache karon prothom a zero ache..... kono no. er prothom a zero thkle a ota octal hoi
	 int c=0x26; // hexadecimal a ache a...as because 0x ache prothom a.. because ox denotes hexa decimal
	printf("a= %d, b=%d and c=%d",a,b,c);
	printf("\na= %o, b=%o and c=%o",a,b,c);
		printf("\na= %x, b=%x and c=%x",a,b,c);
	return 0;
}
