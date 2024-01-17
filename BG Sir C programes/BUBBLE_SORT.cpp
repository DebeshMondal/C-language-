//  BUBBLE SORT

#include<stdio.h>
int main()
{
	int ARR[100],n,i,j,temp;
	
	printf("How many elements?\n");
	scanf("%d",&n);
	
	printf("\nEnter %d elements\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&ARR[i]);
	}
	
	printf("\n\nBefore sorting, elements are:\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d ",ARR[i]);
	}
	
	  // SORTING TECHNIQUE GOES HERE
	  
	  for(i=0;i<n-1;i++) // HANDELS NO. OF ITERATION
	  {
	  	for(j=0;j<n-i-1;j++)  // DEALS WITH NO. OF COMPARISONS
	  	{
	  	    if(ARR[j]>ARR[j+1])
			   {
			    	temp=ARR[j];
			  	    ARR[j]=ARR[j+1];
			  	     ARR[j+1]=temp;
			   }	
		}
	  }
	  printf("\n\nAfter sorting,elements are:\n");
	  for(i=0;i<n;i++)
	  {
	  	printf("%d ",ARR[i]);
	  }
	return 0;
}
