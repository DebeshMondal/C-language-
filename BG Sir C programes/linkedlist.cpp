// WRITE A MENU DRIVEN C PROGRAM TO PERFORM THE FOLLOWING OPERATION ON LINKED LIST
// 1. INSERT
// 
// 2. DELETE
// 
// 3. DISPLAY
// 4.COUNT


#include<stdio.h>
#include<stdlib.h>
void append();
void display();
void add_at_beg();
void count();

struct node
{
	int data;
	struct node *link;
}; 

struct node *root=NULL;

int main()
{
  int choice;
  while(1)
  {
  	printf("\nPress 1 to append.\nPress 2 to Add at beginning.\nPress 3 to count.");
  	printf("\nPress 4 to dispaly\nPress 5 to Exit\n");
  	scanf("%d",&choice);
  	
  	switch(choice)
  	{
  		case 1:
  		append();
  		break;
  			
  		case 2:
  		add_at_beg();
  		break;
  		
  		case 3:
  		count();
  		break;
  		
		case 4:
	    display();
		break;
		  
		case 5:
		exit(0);	
		
		default:
		exit(0);
	}
   }
	return 0;   	
}

void append()
{
	int n;
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	
printf("\nEnter the data to be inserted\n");
scanf("%d",&n);

temp->data=n;
temp->link=NULL;

if(root==NULL)
{
   root=temp;	
}
else
{
	struct node*p;
    p=root;
    
    //LINKEDLIST TRAVERSING
    while(p->link!=NULL)
	{    
         p=p->link;    	
	}  
	
	p->link=temp;
}
printf("\nData inserted successfully\n");
}

void add_at_beg()
{
	struct node *temp;
	int n;
	temp=(struct node *)malloc(sizeof(struct node));            //typecasting
	printf("\nEnter data to be inserted at beginning\n");
	scanf("%d",&n);
	temp->data=n;
	temp->link=NULL;
	temp->link=root;
	root=temp;
	printf("\nData Inserted successfully");
}

void display()
{
	struct node *p;
	p=root;
	if(root==NULL)
	{
		printf("\nEmpty List!!.\n");
	}
	else
	{
	printf("\nElements on the list are:\n\n");
	while(p!=NULL)
	{
		printf("%d-->",p->data);
		p=p->link;	
	}		
	}

}

void count()
{
	int count;
	{
	struct node *p;
	p=root;
	if(root==NULL)
	{
		printf("\nEmpty List!!.\n");
	}
	else
	{
	printf("\nTotal number of elements are:\n");
		while(p!=NULL)
	{
		p=p->link;	
		count ++;
	}
	printf("%d",count);
}
}
}
