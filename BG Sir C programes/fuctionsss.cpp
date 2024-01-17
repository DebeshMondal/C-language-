#include<stdio.h>
int main(){
int area_rec(int,int);  //funtion declration or funtion prototype
int a,b,area;
printf("Enter the length and breadth of the rectrangle=");
scanf("%d%d",&a,&b);
area=area_rec(a,b);   //fuction calling or funtion invoke //(a,b)=eita hoyche argument
printf("Area of the rectrangle is=%d",area);
return 0;
}
  int area_rec(int a,int b){    //funtion defination or funtion body
  int area;
  area=a*b;
  return area;
  }
