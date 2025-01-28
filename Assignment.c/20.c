//Q.20)Transpose of matrix using pointers.
#include<stdio.h>
void trans(int *n, int (*a)[*n]){
    printf("The transpose of the matrix:\n");
    for(int i=0;i<*n;i++){
        for(int j=0;j<*n;j++){
            printf("%d ",*(*(a+j)+i));
        }
        printf("\n");
    }
    return;
}
int main(){
   int n;
    printf("Enter no of rows and columns: ");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter the matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }}
    trans(&n,a);
    return 0;
}