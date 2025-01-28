//WAP to print transpose of a n/n matrix.(Changing the given matrix).
#include<stdio.h>
int main(){
    int n;
    printf("Enter the no of rows and columns of the matrices: ");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter the matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int c=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=c;
        }
    }
    printf("The transpose matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
    
