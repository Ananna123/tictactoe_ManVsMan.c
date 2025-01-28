//WAP to rotate a n/n matrix by 90 degree.
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
    printf("The transpose Matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<n;i++){
       for(int j=0,k=n-1;j<=k;j++,k--){
        int c=a[i][j];
        a[i][j]=a[i][k];
        a[i][k]=c;
       }
    }
    printf("The rotated matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
    
