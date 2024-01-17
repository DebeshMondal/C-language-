#include<stdio.h>
int main(){
int A[3][4],B[3][4];
printf("Enter numbers:");
for(int i=0;i<3;i++){
   for(int j=0;j<4;j++){
 scanf("%d",&A[i][j]);
}
}
printf("Enter numbers:");
for(int i=0;i<3;i++){
for(int j=0;j<4;j++){
 scanf("%d",&B[i][j]);
}
}
printf("The 1st matrix is:\n");
for(int i=0;i<3;i++){
for(int j=0;j<4;j++){
printf("%d ",A[i][j]);
}
printf("\n");
}
printf("\n");
printf("The 2nd matrix is:\n");
for(int i=0;i<3;i++){
for(int j=0;j<4;j++){
printf("%d ",B[i][j]);
}
printf("\n");
}
printf("\n");
printf("The sum is:\n");
for(int i=0;i<3;i++){
for(int j=0;j<4;j++){
printf("%d ",A[i][j]+B[i][j]);
}
printf("\n");
}
//printf("\n");

	
return 0;	
}
