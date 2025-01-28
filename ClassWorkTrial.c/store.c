#include<stdio.h>
#include<limits.h>
void fun(int x, int y, int a[][y]){
  int max1=INT_MIN;
    int min1=INT_MAX;
    for(int i=0;i<x;i++){
      for(int j=0;j<y;j++){
        if(a[i][j]>max1){
          max1=a[i][j];
        }
        if(a[i][j]<min1){
          min1=a[i][j];
        }
      }
    }
 
    printf("The  maximun element is %d",max1);
    printf("\nThe minimum element is %d",min1);
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
    fun(r,c,a);
    return 0;
}
  