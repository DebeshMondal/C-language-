#include<stdio.h>
int sum(int n);
int main(){
int n,sumn;
printf("Enter any no.");
scanf("%d",&n);

printf("Summation=%d",sumn);	
	
return 0;
}
int sum(int n){
if(n==1){
return 1;
}
int s=sum(n-1);
int sumn=s+n;
return sumn;
}

