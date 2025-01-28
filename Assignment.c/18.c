//Q.18)Sum of each row of a matrix.
#include<stdio.h>
int main(){
    int r,c;
    printf("Enter no of rows: ");
    scanf("%d",&r);
    printf("Enter no of columns: ");
    scanf("%d",&c);
    int a[r][c];
    printf("Enter the matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int sum;
    for(int i=0;i<r;i++){
        sum=0;
     for(int j=0;j<c;j++){
        sum=sum+a[i][j];
     }
     printf("Tne sum of elements of %d th row is %d\n",i+1,sum);
    }
    return 0;
}