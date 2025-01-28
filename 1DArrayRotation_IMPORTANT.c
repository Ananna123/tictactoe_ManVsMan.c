#include<stdio.h>
void fun(int a[],int si,int ei){
    for(int i=si,j=ei;i<=j;i++,j--){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    return;
}
int main(){
    int n;  
    int arr[10];
    printf("Enter the number of elements of array: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
     int a=i+1;
     printf("Enter element no %d: ",a);
     scanf("%d",&arr[i]);
    }
    int k;
    printf("No of rotations: ");
    scanf("%d",&k);
    fun(arr,0,n-1);
    fun(arr,0,k%n-1);
    fun(arr,k%n,n-1);
    printf("The rotated array: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
    