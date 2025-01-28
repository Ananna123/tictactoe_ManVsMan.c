#include<stdio.h>
int main(){
    int arr[20];
    int n;
    printf("No of elements: ");
    scanf("%d",&n);
    for(int i=0;i<=n-1;i++){
       int a=i+1;
       printf("Enter element no %d: ",a);
       scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int i=0;i<=n-1;i++){
        if(max<arr[i])
        max=arr[i];
    }
    printf("%d",max);
    return 0;
}