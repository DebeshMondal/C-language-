//WAP TO TAKE A STRING FROM USER AND PRINT THAT STRING
#include<stdio.h>
int main(){                                 // gets and puts are only used in string.. 
                                            // as here the s stands for string
	char str[100];                          // null character is denoted by '\0'
	printf("Enter any string\n");           // last character of a string is known aas null character
	//scanf("%s",str);
	//scanf("%[^\n]s",str);
	gets(str);
	//printf("\n\nEntered string =%s ",str);
	puts("\nEntered string=");
	puts(str);
	
	return 0;
}
