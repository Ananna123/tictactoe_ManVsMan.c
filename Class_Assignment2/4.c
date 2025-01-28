//4)Reverse sequence of array after given location.
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
int k;
printf("Enter the location: ");
scanf("%d",&k);
for(int i=k,j=n-1;i<=j;i++,j--){
    int t=a[i];
    a[i]=a[j];
    a[j]=t;
}
printf("Final array:\n");
for(int i=0;i<n;i++){
    printf("%d ",a[i]);
}
return 0;  
}