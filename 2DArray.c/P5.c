//Given a matrix a of dimensions n/m and two coordinates (l1,r1) and (l2,r2). return the sum of the rectangle from (l1,r1) to (l2,r2).
#include<stdio.h>
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
    int r1,c1,r2,c2,sum=0;
    printf("Enter row no of one edge point of the rectangle: ");
    scanf("%d",&r1);
    printf("Enter column no of one edge point of the rectangle: ");
    scanf("%d",&c1); 
    printf("Enter row no of the opposite edge point of the rectangle: ");
    scanf("%d",&r2);    
    printf("Enter column no of the opposite edge point of the rectangle: ");
    scanf("%d",&c2);
    for(int i=r1-1;i<=r2-1;i++){
     for(int j=c1-1;j<=c2-1;j++){
        sum=sum+a[i][j];
     }
    }
    printf("The sum of all elements of the rectangle is %d",sum);
    return 0;
}
   