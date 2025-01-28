#include<stdio.h>
int main(){
    int r1,c1,r2,c2;
    printf("Enter the number of rows of first matrix: ");
    scanf("%d",&r1);
    printf("Enter no of columns of first matrix: ");
    scanf("%d",&c1);
    int a[r1][c1];
    printf("Enter the elements of first matrix:\n");
    for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
        scanf("%d",&a[i][j]);
    }
    }
     printf("Enter the number of rows of second matrix: ");
    scanf("%d",&r2);
    printf("Enter no of columns of second matrix: ");
    scanf("%d",&c2);
    int b[r2][c2];
    printf("Enter the elements of second matrix:\n");
    for(int i=0;i<r2;i++){
    for(int j=0;j<c2;j++){
        scanf("%d",&b[i][j]);
    }
    }
    int c[r1][c2];
    if(c1!=r2){
        printf("Multiplication of given two matrices is not possible");
    }
    else{
      for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            c[i][j]=0;
        }
      }
      for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
          for(int k=0;k<c1;k++){
            c[i][j]+=a[i][k]*b[k][j];
          }
        }
      }
    printf("The resultant matrix:\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    }
return 0;
}