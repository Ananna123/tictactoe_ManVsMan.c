#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the array:\n");
    int* a=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("The array:\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
return 0;
}