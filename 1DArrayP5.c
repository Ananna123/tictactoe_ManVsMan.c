//Find the second largest no of a given array.
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
    int k;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j])
           { k=arr[i];
            arr[i]=arr[j];
            arr[j]=k;}
        }
    }
    printf("The second largest no of the array is %d",arr[n-2]);
    return 0;
}
