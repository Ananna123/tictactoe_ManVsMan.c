#include<stdio.h>
int main(){
    int arr[20];
    int n;
    printf("Enter no of elements: ");
    scanf("%d",&n);
    for(int i=0; i<=n-1;i++){
        int a=i+1;
        printf("Enter the element no %d: ",a);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n-1;i++){
        for(int j=i+1;j<=n-1;j++){
            if(arr[i]>arr[j])
            {
             int k=arr[i];
             arr[i]=arr[j];
             arr[j]=k;   
            }
        }
        printf("%d ",arr[i]);
    }
     int max=arr[n-1];
     printf("\nMax of the elements is %d",max);
    return 0;
}