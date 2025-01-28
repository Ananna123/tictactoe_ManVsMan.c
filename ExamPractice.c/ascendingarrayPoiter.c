#include<stdio.h>
void fun(int n, int* a){
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(*(a+i)>*(a+j)){
        int t=*(a+i);
        *(a+i)=*(a+j);
        *(a+j)=t;
        }
    }
}
return;
}
int main(){
  int n;
  printf("Enter the number of elements: ");
  scanf("%d",&n);
  int a[n];
  printf("Enter the elements of the array:\n");
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
fun(n,a);
printf("The array in ascending order:\n");
for(int i=0;i<n;i++){
    printf("%d ",a[i]);
}
return 0;
}