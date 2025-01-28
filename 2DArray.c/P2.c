//WAP to add two matrices without taking extra matrix.
#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the no of rows of the matrices: ");
    scanf("%d",&r);
    printf("Enter the no of columns of the matrices: ");
    scanf("%d",&c);
    int a[r][c],b[r][c];
    printf("Enter first matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        scanf("%d",&a[i][j]);
        }
    }
     printf("Enter second matrix:\n");
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        scanf("%d",&b[i][j]);
        }
    }
    printf("Sum of the given two matrices:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
    return 0;
}