#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int position;
    printf("Enter the position: ");
    scanf("%d",&position);
    for(int i=position,j=n-1;i<j;i++,j--){
        int t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    printf("Final array:\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}