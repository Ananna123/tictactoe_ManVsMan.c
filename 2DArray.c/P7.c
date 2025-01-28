// Given a matrix having 0 and 1 only. Find the row with the maximum number of 1's.
#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the no of rows of the matrices: ");
    scanf("%d",&r);
    printf("Enter the no of columns of the matrices: ");
    scanf("%d",&c);
    int a[r][c];
    printf("Enter the matrix having elements 0 or 1:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        scanf("%d",&a[i][j]);
        }
    }
    int sum,max_sum=0,k;
    for(int i=0;i<r;i++){
        sum=0;
     for(int j=0;j<c;j++){
        sum+=a[i][j];
     }
       if(sum>max_sum){
        max_sum=sum;
        k=i;
       }
    }
    printf("The row having max no of 1 is %d and the sum of all elements of the row is %d",k+1,max_sum);
    return 0;
}