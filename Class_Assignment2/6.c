//6)2nd Largest & 2nd Smallest(DMA)
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main(){
int n;
printf("Enter the size of the array: ");
scanf("%d",&n);
int* a=(int*)malloc(n*sizeof(int));
printf("Enter the array:\n");
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
int min=INT_MAX, max=INT_MIN;
int min2=INT_MAX, max2=INT_MIN;
for(int i=0;i<n;i++){
    if(a[i]<min){
        min=a[i];
    }
    if(a[i]>max){
        max=a[i];
    }
}
for(int i=0;i<n;i++){
    if(a[i]<min2 && a[i]>min){
        min2=a[i];
    }
    if(a[i]>max2 && a[i]<max){
        max2=a[i];
    }}
printf("Maximum element:%d",max);
printf("\nMinimum element:%d",min);
printf("\nSecond Maximum element:%d",max2);
printf("\nSecond Minimum element:%d",min2);
return 0;
}