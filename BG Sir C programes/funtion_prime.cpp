#include<stdio.h>
int isPrime(int n){
if (n<=1){
return 0;
}
for(int i=2;i<=n/2;i++){
if(n%i==0){
return 0;
}
}
return 1;
}
int main(){
int number;
printf("Enter a no.:");
scanf("%d",&number); 
if (isPrime(number)){
printf("The no. is a prime no.\n",number);
}else{
printf("The no. is not a prime no.",number);
}
return 0;
}
	



