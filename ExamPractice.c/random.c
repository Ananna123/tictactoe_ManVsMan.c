#include<stdio.h>
int main(){
  int a[3][2][3];
  printf("Enter the array: ");
  for(int i=0;i<3;i++){
    for(int j=0;j<2;j++){
       for(int k=0;k<3;k++){
        scanf("%d",&a[i][j][k]);
       }
    }
  }
       printf("%d",a[1][0][2]);
    return 0;
}