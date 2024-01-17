/*
write a menu driven program to perfrom the following 
operations on STACK.

i. PUSH
ii. POP
iii. DISPLAY
iv. COUNT
v. EXIT

output:

Initially the STACK is empty. top= -1
Press 1 to PUSH
Press 2 to POP
Press 3 to DISPLAY
Press 4 to COUNT
Press 5 to EXIT

Enter your choice
2
The STACK is empty. Underflow.

Press 1 to PUSH
Press 2 to POP
Press 3 to DISPLAY
Press 4 to COUNT
Press 5 to EXIT

Enter your choice
3

The STACK is empty. Nothing to display.

Press 1 to PUSH
Press 2 to POP
Press 3 to DISPLAY
Press 4 to COUNT
Press 5 to EXIT

Enter your choice
4

Total no of elements in the STACK = 0

Press 1 to PUSH
Press 2 to POP
Press 3 to DISPLAY
Press 4 to COUNT
Press 5 to EXIT

Enter your choice
1

Enter the element to be pushed
12
PUSH operation successful. top = 0

Press 1 to PUSH
Press 2 to POP
Press 3 to DISPLAY
Press 4 to COUNT
Press 5 to EXIT

Enter your choice
1

Enter the element to be pushed
98
PUSH operation successful. top = 1

*/
#include <stdio.h>
#include <stdlib.h>

#define MAX 6

int STACK[MAX];
int top=-1;

void PUSH();
void POP();
void DISPLAY();
int COUNT();

int main()
{
	int choice;
	printf("\nInitially the STACK is empty. top=%d",top);
	
	while (1)
	{
		printf("\nPress 1 to PUSH\nPress 2 to POP");
		printf("\nPress 3 to DISPLAY\nPRESS 4 to COUNT");
		
		printf("\nPress 5 to exit\nEnter your choice:\t");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
			     PUSH();
			     break;
			     
			case 2:
			     POP();
				 break;  
			
			case 3:
			      DISPLAY();
				  break;
			
			case 4:
			      printf("\n Total no. of elements =%d",COUNT());
				  break;
			
			case 5:
			    exit(0);
				
			default:
			    printf("\nWrong choice.\n");	  	  	    
		}
	}
    return 0;
}
 
 void PUSH()
 {
 	int data;
 	if(top==MAX-1)
 	{
 		printf("\nThe STACK is full. Overflow\n");
 	}
 	else
 	{
 		printf("\n Enter the element to be pushed");
 		scanf("%d",&data);
 		top++;
 		STACK[top]=data;
 		printf("\nPush operation successful. top=%d",top);
	 }
 }
 
 void POP()
 {
 	int temp;
 	if(top==-1)
 	{
 		printf("\nThe STACK is empty. Underflow.\n");
 	}
 	else
 	{
 		temp=STACK[top];
 		STACK[top]=NULL;
 		top--;
 		printf("\n POP operation succesful.");
 		printf("\n Popped element= %d and top=%d",temp,top);
	 }
 }
 
 void DISPLAY()
 {
 	int i;
 	if(top==-1)
 	{
 		printf("\nThe STACK is empty.Nothing to display");
	 }
	 else
	 {
	 	printf("\nElements in the STACK are:\n");
	 	for(i=0;i<=top;i++)
	 	{
	 	printf("%d ",STACK[i]);
		 }
	 }
  }
  
  int COUNT()
  {
  	return(top+1);
  }
 


