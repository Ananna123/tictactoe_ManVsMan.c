//Q.4)Reverse array.
#include<stdio.h>
int main(){
    int arr[10];
    int n;
    printf("Enter no of elements: ");
    scanf("%d",&n);
    for(int i=0; i<=n-1;i++){
        int a=i+1;
        printf("Enter the element no %d: ",a);
        scanf("%d",&arr[i]);
    }
    printf("The reversed array:");
    for(int i=n-1;i>=0;i--){
          printf("%d ",arr[i]);
    }
    return 0;
}