#include<stdio.h>
void fun(int x,int y,int a[][y]){
    for(int i=0;i<x;i++){
     for(int j=0;j<y;j++){
        printf("%d ",a[i][j]);
     }
     printf("\n");
    }
    return;
}
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
    printf("The matrix you have entered:\n");
    fun(r,c,a);
    return 0;
}
