#include<stdio.h>
#include<stdbool.h>
int main(){
    int n,arr[10];
    printf("Enter the number of elements of the array: ");
    scanf("%d",&n);
     for(int i=0;i<=n-1;i++){
       int a=i+1;
       printf("Enter element no %d: ",a);
       scanf("%d",&arr[i]);
    }
    int x;
    printf("Enter the element to find: ");
    scanf("%d",&x);
    bool flag=false;
    int idx=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            idx=i;
            flag=true;
            break;
        }
    }
    if(flag==false){
        printf("%d is not present in the array",x);
    }
    else{
        printf("%d is present in the array and it's index is %d",x,idx);
    }
    return 0;
}