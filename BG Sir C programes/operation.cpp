 /* #include<stdio.h>
  int main ()
 {
  int a=10;
  char b='p';
  float c=2.34;
  double d= 3.43;
  	printf("%d\n%d\n%d\n%d ",sizeof(a),sizeof(b),sizeof(c),sizeof(d));
  //	scanf("",&);
  	
  }    */
  
  
  // program on operators
  /* #include<stdio.h>
  int main()
  {
  	int a=10,b=2;
  	printf("%d",a<b);        //0= false,1=true
  }  */
  
//program on if else
// WAP to find whether a no. is even or odd and also say its +ve or -ve.
#include<stdio.h>
int main()  
  {
int a;
printf("Enter any no. \n");
scanf("%d",&a);
if(a%2==0)             //condition
{
	printf("The no. is Even");
}
else
{       
printf("The no. is odd");
}	
if(a>0)
{
	printf("\nThe no. is also positive");
	}
	else{
		printf("\nThe no. is also negative");
	}
	return 0;
}
  
  
  
  
  
  
