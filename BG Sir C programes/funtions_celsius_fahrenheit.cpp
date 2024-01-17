#include<stdio.h>

float celsiusToFahrenheit(float celsius){
float fahrenheit=(celsius*9/5)+32;
return fahrenheit;}

int main(){
float celsius,fahrenheit;
printf("Enter the temp in Celsius:");
scanf("%f",&celsius);
fahrenheit=celsiusToFahrenheit(celsius);
printf("The temp in fahrenheit is:%0.2f",fahrenheit);
return 0;	
}


