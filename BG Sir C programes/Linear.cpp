// WRITE A CPROGRAM TO FIND A PARTICULAR ELEMENT
// FROM A SET OF ELEMENTS USING LINEAR SEARCH (SEQENTIAL SEARCH) TECHINIQUE

#include<stdio.h>

int main()
{
	int arr[100],key,i,n;
	
	printf("How many element?\n");
	scanf("%d",&n);
	
	printf("\nEnter %d elements\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("\n\nData you entered:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	
	 printf("\nEnter key element to be searched:\n");
	 scanf("%d",&key);
	 
	   // SEARCHING TECHNIQUE GOES HERE
	   
	   for(i=0;i<n;i++)
	   {
	   	if(arr[i]==key)
	   	{
	   		printf("\nSuccess. Position= %d",i+1);
	   		break;
		   }
	   }
	   
	   if(i==n)
	   {
	   	 printf("\n\nFailure. Data not found");
	   }
	   
	return 0;
}
