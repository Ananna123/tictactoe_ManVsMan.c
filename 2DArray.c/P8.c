//WAP to print the transpose of a matrix entered by user.(Without changing the given array).
#include<stdio.h>
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
    int b[c][r];
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            b[i][j]=a[j][i];
        }
    }
    printf("The given matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("The transpose matrix:\n");
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}