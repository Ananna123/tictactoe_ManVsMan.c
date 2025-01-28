#include<stdio.h>
#include<stdbool.h>
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int k;
    printf("Enter the element to be searched: ");
    scanf("%d",&k);
    bool flag=false;
    for(int i=0;i<n;i++){
        if(a[i]==k){
            printf("Element found at index %d",i);
            flag=true;
            break;
        }
    }
    if(flag==false){
        printf("Element not found");
    }
    return 0;
}