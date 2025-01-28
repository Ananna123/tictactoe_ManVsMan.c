#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
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
//Bubble sort (stable)
for(int i=0;i<n-1;i++){
    bool flag=true;
    for(int j=0;j<n-1-i;j++){
        if(*(p+j)>*(p+(j+1))){
        int t=*(p+j);
        *(p+j)=*(p+(j+1));
        *(p+(j+1))=t;
        flag=false;
        }
    }
    if(flag==true) break;
}
printf("sorted array:\n");
for(int i=0;i<n;i++){
    printf("%d ",*(p+i));
}
return 0;
}