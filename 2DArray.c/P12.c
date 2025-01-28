//WAP to print a matrix in wave1 order.
#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the no of rows of the matrices: ");
    scanf("%d",&r);
    printf("Enter the no of columns of the matrices: ");
    scanf("%d",&c);
    int a[r][c];
    printf("Enter elements of the matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        scanf("%d",&a[i][j]);
        }
    }
    printf("The resultant matrix:\n");
    for(int i=0;i<r;i++){
        if(i%2==0){
    for(int j=0;j<c;j++){
        printf("%d ",a[i][j]);
    }
        }
        else{
    for(int j=c-1;j>=0;j--){
        printf("%d ",a[i][j]);
    }
        }
        printf("\n");
    }
    return 0;
}
