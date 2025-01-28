//2)Read a 1D Array and print sum of elements(DMA)
#include<stdio.h>
#include<stdlib.h>
int main(){
int n;
printf("Enter the size of the array: ");
scanf("%d",&n);
int* a=(int*)malloc(n*sizeof(int));
printf("Enter the array:\n");
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
int sum=0;
printf("Your entered array:\n");
for(int i=0;i<n;i++){
    printf("%d ",a[i]);
    sum=sum+a[i];
}
printf("\nSum of elements is %d",sum);
return 0;
}