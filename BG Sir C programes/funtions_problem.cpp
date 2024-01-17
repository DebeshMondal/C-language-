#include<stdio.h>
#define pi 3.14
double area_circle (double);  
float  area_sqr (float);
double circum_circle (double);

int main(){
double r,area,c,circum;
 float s_area,side;
 
  //Area of the square
 
 printf("Enter the side of the square:");
 scanf("%f",&side);
 s_area=area_sqr(side);
 printf("The area of the square is:%f",s_area);

//Area of the circle

printf("\n\nEnter the radius of the circle:");
scanf("%lf",&r);
area=area_circle(r);
printf("Area of the circle is:%lf",area);	

//Circumference of circle

 printf("\n\nEnter the radius of the circle:");
 scanf("%lf",&c);
 circum=circum_circle(c);
 printf("Circumference of the circle is:%lf",circum);
 return 0;
}

float area_sqr(float s){
float area=s*s;
return area;	
}
double area_circle(double r){
double area=pi*r*r;
return area;
}
double circum_circle(double c){
double circum= 2*pi*c;
return circum;
}

