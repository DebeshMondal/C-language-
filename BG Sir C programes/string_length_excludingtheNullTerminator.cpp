//WAP TO COUNT THE NO. OF CHARACTERS IN A GIVEN STRING (EXCLUDING THE NULL TERMINATOR)
#include<stdio.h>
int main()
{
	char str[100];
	int count = 0;
	printf("Enter a string");
	gets(str);
	for(int i=0;str[i]!='\0';i++){
		count++;
	}
	printf("\nNumbers of characters in the string:%d",count);
	return 0;
}
