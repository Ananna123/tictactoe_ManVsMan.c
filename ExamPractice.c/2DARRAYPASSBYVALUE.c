#include<stdio.h>
void fun(int r, int c, int a[][c]){
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf("%d ",a[i][j]);
    }
    printf("\n");
  }
  return;
}
int main(){
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    fun(3,3,a);
    return 0;
}