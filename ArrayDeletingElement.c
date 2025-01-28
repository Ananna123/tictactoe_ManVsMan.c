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
    int pos;
    printf("Enter the position of the element: ");
    scanf("%d",&pos);
    for(int i=0;i<pos-1;i++){
        printf("%d ",arr[i]);
    }
    for(int i=pos;i<=n-1;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
    