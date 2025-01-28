//Q.19)i)Average of each coloumn of a matrix.
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
    int sumc;
    for(int j=0;j<c;j++){
        sumc=0;
     for(int i=0;i<r;i++){
        sumc+=a[i][j];
     }
     printf("Tne average of elements of %d th column is %f\n",j+1,sumc/3.0);
    }
    return 0;
}