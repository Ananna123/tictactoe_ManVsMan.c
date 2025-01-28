#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main(){
int n;
printf("Enter the size of the array: ");
scanf("%d",&n);
int* arr=(int *)malloc(n*sizeof(int));
int* p=arr;
printf("Enter the array:\n");
for(int i=0;i<n;i++){
    scanf("%d",(p+i));
}
//selection sort(unstable)
for(int i=0;i<n-1;i++){
    int min=INT_MAX;
    int minidx=-1;
   for(int j=i;j<=n-1;j++){
    if(*(p+j)<min){
        min=*(p+j);
        minidx=j;
    }
   }
   int t=*(p+i);
   *(p+i)=*(p+minidx);
   *(p+minidx)=t;
}
printf("sorted array:\n");
for(int i=0;i<n;i++){
    printf("%d ",*(p+i));
}
return 0;
}