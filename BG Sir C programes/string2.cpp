//WAP TO FIND THE LENGTH OF A STRING
#include<stdio.h>
int main()
{
	char str[20]="Debesh";
	printf("%s",str);
	
	int i=0;
	while(str[i]!=NULL) //while(str[i]!='\0')
	{
		printf("\n%c",str[i]);
		i++;
	}
}
