//Q.19)ii)Average of each row of a matrix.
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
    int sumr,sumc;
    for(int i=0;i<r;i++){
        sumr=0;
     for(int j=0;j<c;j++){
        sumr+=a[i][j];
     }
     printf("Tne average of elements of %d th row is %f\n",i+1,sumr/3.0);
    }
    return 0;
}