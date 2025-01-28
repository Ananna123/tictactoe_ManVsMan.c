//3)Largest & Smallest(DMA)
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
for(int i=0;i<n;i++){
    if(a[i]<min){
        min=a[i];
    }
    if(a[i]>max){
        max=a[i];
    }
}
printf("Minimum element: %d",min);
printf("\nMaximum element: %d",max);
return 0;
}