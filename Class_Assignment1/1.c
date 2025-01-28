//1)Insertion of element at a given location in an array.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int a[n+1];
    printf("Enter the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int k,e;
    printf("Enter the postion of insertion: ");
    scanf("%d",&k);
    printf("Enter the element to be inserted: ");
    scanf("%d",&e);
    for(int i=n;i>=k;i--){
       a[i+1]=a[i]; 
    }
    a[k]=e;
    printf("Array after insertion if %dth position:\n",k);
    for(int i=0;i<n+1;i++){
        printf("%d ",a[i]);
    }
    return 0;
}