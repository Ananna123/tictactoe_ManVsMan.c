//Q.21)Multiplication of two matrices.
#include<stdio.h>
int main(){
    int r,c,m,n;
    printf("Enter the no of rows of first the matrix: ");
    scanf("%d",&r);
    printf("Enter the no of columns of first the matrix: ");
    scanf("%d",&c);
    int a[r][c];
    printf("Enter first matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        scanf("%d",&a[i][j]);
        }
    }
     printf("Enter the no of rows of second matrix: ");
    scanf("%d",&m);
    printf("Enter the no of columns of second matrix: ");
    scanf("%d",&n);
    int b[m][n];
    printf("Enter second matrix:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
        scanf("%d",&b[i][j]);
        }
    }
    int arr[r][n];
    if(c!=m){
        printf("Multiplication of the given two matrices is not possible.");
    }
    else{
    for(int i=0;i<r;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=0;
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<c;k++){
                arr[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("The resultant matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    }
    return 0;
    }
