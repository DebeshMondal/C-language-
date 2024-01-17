 // write a program to find average of three numbers..
 
 #include<stdio.h>
 int main ()
 {
 	float a,b,c,d;                      // decimal a value chai bole a float use korche int er jaigai
 	printf("Enter three numbers\n");
 	scanf("%f%f%f",&a,&b,&c);
 	d=(a+b+c)/3;
 	printf("Average of the three numbers is equal to %0.2f",d);                // r %d ta %f use korche ,, decimal er por jota number chai ota %f er  majhe lekhte hobe
 }
