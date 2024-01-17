// WRITE A MENU DRIVEN PROGRAM TO PERFORM THE FOLLOWING OPERATION ON QUEUE
// INSERT, DELETE, DISPLAY, COUNT, EXIT

#include<stdio.h>
#include<stdlib.h>

#define MAX 6

int front=-1, rear=-1;
int QUEUE[MAX];

void insertq();
void deleteq();
void display();
int count();

int main()
{
	int choice;
	printf("Initially the QUEUE was empty. front= %d and rear= %d\n",front,rear);
	
	while(1)
	{
		printf("\nPress 1 to insert\nPress 2 to delete\nPress 3 to display");
	  	printf("\nPress 4 to count\nPress 5 to exit\n");
	  	
	  	printf("\nEnter your choice from 1 to 5\n");
	  	scanf("%d",&choice);
	  	
	  	switch(choice)
	  	{
	  		case 1:
	  			insertq();
	  			break;
	  			
	  		case 2:
			  deleteq();
			  break;
			
			case 3:
			  display();
			  break;
								 
			case 4:
			  printf("\nNo. of elements present in the QUEUE = %d",count());
			  break;
			
			case 5:
				exit(0);
				break;
				
			default:
			    printf("\nWrong choice.");	
		  }
	}
	return 0;
 } 
 
 void insertq()
 {
 	int data;
 	if(rear==MAX-1)
 	{
 	   printf("The QUEUE is full. Overflow. Insertion not possible.\n");	
	 }
	 else
	 {
	 	printf("\nEnter the element to be inserted.\n");
	 	scanf("%d",&data);
	 	
	 	rear++;
	 	if(front==-1)
	 	{
	 		front++;
		 }
		 QUEUE[rear]=data;
		 printf("\nInsertion successfull. front= %d and rear= %d\n",front,rear);
		 
		  }
	}
	void deleteq()
	{
		int temp;
		if(front==-1)
		{
			printf("\nThe QUEUE is empty.Underflow.Delete not possible");
			}
			else
			{
			   temp=QUEUE[front];
			   QUEUE[front]=NULL;
			   
			   if(front== rear)	
			   {
			   	 front =-1;
			   	 rear=-1;
			   }
			   else
			   {
			   	front++;
			   }
			   printf("Deletion operation succesfull. front= %d and rear= %d\n",front,rear);
			}
	}
void display()
{
	int i;
	if(front==-1 && rear==-1)
	{
		printf("\nThe QUEUE is empty. Nothing to Display");
	}
	else
	{
	printf("\nElements in the QUEUE are:\n");
	for(i=front;i<=rear;i++)
     	{
		printf("%d ",QUEUE[i]);
		}	
	}
}
int count()
{
 	if(front==-1)
 	{
 		return(0);
	 }
	 else
	 {
	 	return(rear-front+1);
	 }
}	
 	
 	
 
