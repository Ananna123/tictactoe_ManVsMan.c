//count the number of elements in a given array greater than a given number.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int arr[5]={6,8,-1,0,3};
    int k=0;
    for(int i=0;i<5;i++){
        if(arr[i]>n)
         k=k+1;
    }
    printf("The number of elements greater than %d is %d",n,k);
    return 0;
}