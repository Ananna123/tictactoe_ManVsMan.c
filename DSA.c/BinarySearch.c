#include<stdio.h>
#include<stdbool.h>
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array in sorted manner:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int k;
    printf("Enter the element to be searched: ");
    scanf("%d",&k);
    int l,h,mid;
    l=0;
    h=n-1;
    bool flag=false;
    while(l<=h){
        mid=(l+h)/2;
        if(a[mid]==k){
            printf("Element found at index %d",mid);
            flag=true;
            break;
        }
        if(k>a[mid]){
            l=mid+1;
        }
        if(k<a[mid]){
            h=mid-1;
        }
    }
if(flag==false){
    printf("Element not found");
}
return 0;
}