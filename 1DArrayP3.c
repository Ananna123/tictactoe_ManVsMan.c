//Find the diff between the sum of elements at even indices to the sum of elements at odd indices.
#include<stdio.h>
int main(){
    int n;
    int arr[20];
    printf("No of elements: ");
    scanf("%d",&n);
    for(int i=0;i<=n-1;i++){
       int a=i+1;
       printf("Enter element no %d: ",a);
       scanf("%d",&arr[i]);
    }
    int sumEven=0;
    int sumOdd=0;
    for(int i=0;i<n;i++){
        if(i%2==0)
        sumEven+=arr[i];
        else
        sumOdd+=arr[i];
    }
    int k=sumEven-sumOdd;
    printf("\nThe difference is %d",k);
    return 0;
}


