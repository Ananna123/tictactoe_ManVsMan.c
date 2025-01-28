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
    printf("Enter the of position of the element: ");
    scanf("%d",&pos);
    for(int i=n-1;i>=pos-1;i--){
        arr[i+1]=arr[i];
    }
    printf("Enter the element in %d: ",pos);
    scanf("%d",&arr[pos-1]);
    for(int i=0;i<=n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
    