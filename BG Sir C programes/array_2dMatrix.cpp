//WAP TO TAKE ALL THE ELEMENTS OF A 3X4 MATRIX FROM USER. ALSO PRINT THOSE ELEMENTS IN MATRIX FORMAT.

#include<stdio.h>
int main(){
	int A[3][4];
	printf("Enter the array elements\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			scanf("%d",&A[i][j]);
		}
	}
	printf("Your Array is:\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			printf("%d ",A[i][j]);
		}
		printf("\n");
	}
	
	
	
	
return 0;	
}
