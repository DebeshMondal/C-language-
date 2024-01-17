#include<stdio.h>
int main(){
	char str[50];
	printf("Enter a string\n");
	gets(str);
	
	int i=0;
	while (str[i]!=NULL)
	{
		printf("%c",str[i]);
		i++;
	}
	printf("\nLength=%d",i);
	return 0;
}
