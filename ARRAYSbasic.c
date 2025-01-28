#include<stdio.h>
int main(){
    int array[20];
    int n;
    printf("No of elements: ");
    scanf("%d",&n);
    for(int i=0;i<=n-1;i++){
       int a=i+1;
       printf("Enter element no %d: ",a);
       scanf("%d",&array[i]);
    }
    for(int i=0;i<=n-1;i++){
        printf("%d ",array[i]);
    }
    return 0;
}