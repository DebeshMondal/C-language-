// mathematical calculation

#include<stdio.h>
#include<math.h>
int main ()
{
	int a,b,c;
	printf("Enter any number\n");
	scanf("%d",&a); // & -- ampersand  -- address of operator
	
	b=pow(a,2);
	 c=pow(a,3);
	printf("\n%d square = %d",a,b);   // f er age 0.2 dele  decimal er por 2 to digit asbe
	printf("\n%d cube = %d",a,c);
	return 0;
}
