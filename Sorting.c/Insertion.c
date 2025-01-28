#include<stdio.h>
#include<stdlib.h>
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
//Insertion sort(stable)
for(int i=1;i<=n-1;i++){
    int j=i;
    while(j>=1 && *(p+j)<*(p+j-1)){
        int t=*(p+j);
        *(p+j)=*(p+j-1);
        *(p+j-1)=t;
        j--;
    }
}
printf("sorted array:\n");
for(int i=0;i<n;i++){
    printf("%d ",*(p+i));
}
return 0;
}