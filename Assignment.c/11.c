//Q.11)Reversed array.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements of the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0,j=n-1;i<=j;i++,j--){
        int t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    printf("The reversed array:\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}