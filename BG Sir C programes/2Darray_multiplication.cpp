#include<stdio.h>
int main(){
	int A[2][3],B[3][2],C[2][2]={{0,0},{0,0}};
	printf("Enter the array of A: \n");
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&A[i][j]);
		}
	}
	printf("Enter the array of B: \n");
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			scanf("%d",&B[i][j]);
		}
	}
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			for(int k=0;k<3;k++){
				C[i][j]=C[i][j] +A[i][k] * B[k][j];
			}
		}
	}
	printf("Array A=\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			printf("%d ",A[i][j]);
		}
		printf("\n");
	}
	printf("Array B=\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			printf("%d ",B[i][j]);
		}
		printf("\n");
	}
	
	printf("Multiplication of A and B is:\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("%d ",C[i][j]);
		}
		printf("\n");
	}
	
}
