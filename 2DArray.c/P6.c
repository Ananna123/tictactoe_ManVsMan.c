//WAP to print the row number having the maximum sum in a given matrix and the value of maximum sum of that row.
#include<stdio.h>
#include<limits.h>
int main(){
    int r,c;
    printf("Enter the no of rows of the matrices: ");
    scanf("%d",&r);
    printf("Enter the no of columns of the matrices: ");
    scanf("%d",&c);
    int a[r][c];
    printf("Enter the matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        scanf("%d",&a[i][j]);
        }
    }
    int max_sum=INT_MIN,k,sum;
    for(int i=0;i<r;i++){
        sum=0;
    for(int j=0;j<c;j++){
        sum+=a[i][j];
    }
       if(sum>max_sum){
            k=i;
        max_sum=sum;}
    }
    printf("The row having maximum sum of elements is %d and the value of maximum sum is %d",k+1,max_sum);
    return 0;
}