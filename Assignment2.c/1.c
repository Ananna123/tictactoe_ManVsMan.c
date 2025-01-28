//Convert 10 decimal numbers to binary numbers
#include<stdio.h>
void binary(int n, int k){
    int a[32];
    int p=n;
    int i=0;
    if(n==0){
    printf("\nBinary conversion of %dth element: 0",k);
    }
    else{
    while(p!=1){
       a[i]= p%2;
       p=p/2;
       i++;
    }
    printf("\nBinary conversion of %dth element: 1",k);
    for(int j=i-1;j>=0;j--){
        printf("%d",a[j]);
    } 
    } 
}
int main(){
    printf("Enter 10 decimal numbers: ");
    int arr[10];
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
        binary(arr[i],i+1);
    }
    return 0;
}