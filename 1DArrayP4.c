//Find the total no of pairs in the array whose sum is equal to the given number x.
#include<stdio.h>
int main(){
    int n;  
    int arr[20];
    printf("Enter the number of elements of array: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
     int a=i+1;
     printf("Enter element no %d: ",a);
     scanf("%d",&arr[i]);
    }
    int m,count=0;
    printf("\nEnter the number: ");
    scanf("%d",&m);
    for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]+arr[j]==m)
        count++;
    }
    }
    printf("\nThe no of pairs are %d",count);
    return 0;
}