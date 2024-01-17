// Find addition subtraction multiplication and divisiom of two numbers taking input from user
 #include<stdio.h>
int main()
{
int num1,num2,add,sub,multi,div;

printf("Enter two numbers\n");
 scanf("%d%d",&num1,&num2); //user input
  add=num1+num2;
  sub=num1-num2;
  multi=num1*num2;
  div=num1/num2;
printf("Addition=%d\n Subtration=%d\n Multiplication=%d\n Division=%d",add,sub,multi,div);
return 0;
}
