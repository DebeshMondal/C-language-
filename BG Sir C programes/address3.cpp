   //MEMORY ADDRESS
   
#include<stdio.h>
int main()
{
	int a;
	char ch;
	
	int *p;    // INTEGER POINTER
	char *c;   // CHARCERTER POINTER
	void *d;  // VOID POINTER IS KNOWN AS GENERIC POINTER
	
	a=100;
	ch='s';
	
	//d=&ch;
	d=&a;
	return 0;
}
