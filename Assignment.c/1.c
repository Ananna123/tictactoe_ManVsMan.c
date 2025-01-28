//Q.1)Finding 2nd largest and 2nd smallest values.
#include<stdio.h>
#include<limits.h>
void fun(int n, int a[]){
  int max1=INT_MIN, min1=INT_MAX,max2=INT_MIN, min2=INT_MAX;
  for(int i=0;i<n;i++){
    if(a[i]>max1){
      max1=a[i];
    }
      if(a[i]<min1){
        min1=a[i];
      }
  }
  for(int i=0;i<n;i++){
    if(a[i]>max2 && a[i]<max1){
      max2=a[i];
    }
      if(a[i]<min2 && a[i]>min1){
        min2=a[i];
      }
  }
printf("Second largest element is %d",max2);
printf("\nSecond smallest element is %d",min2);
return;
}
int main(){
  int n;
  printf("Enter the size of the array: ");
  scanf("%d",&n);
  int a[n];
  printf("Enter the elements of the array:\n");
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  fun(n,a);
  return 0;
}