//Q.17)Identity Matrix.
#include<stdio.h>
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
    int p=0,t=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                if(a[i][j]!=1){
                    p=0;
                    break;
                }
                else p++;
            }
            else{
                if(a[i][j]!=0){
                    p=0;
                    break;
                }
                else t++;
            }
        }
    }
    if(p==n && t==(n*n)-n)
        printf("Identity matrix");
    else
        printf("Not an identity matrix");
    return 0;
}