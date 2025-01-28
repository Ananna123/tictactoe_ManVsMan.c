//1)Number of occurence of element(DMA)
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
int k,count=0;
printf("Enter the element occurence to be check: ");
scanf("%d",&k);
for(int i=0;i<n;i++){
 if(a[i]==k){
    count++;
 }}
 printf("No of occurence of %d is: %d",k,count);
 return 0;
}