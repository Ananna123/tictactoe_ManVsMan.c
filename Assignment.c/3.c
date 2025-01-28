//Q.3)Sum of 2 arrays.
#include<stdio.h>
int main(){
     int n;
    int a[8], b[8], c[8];
    printf("No of elements: ");
    scanf("%d",&n);
    printf("Enter elements of first array:");
    for(int i=0;i<=n-1;i++){
       scanf("%d",&a[i]);
    }
    printf("Enter elements of second array:");
    for(int j=0;j<=n-1;j++){
       scanf("%d",&b[j]);
    }
    printf("The array after adding given two arrays:");
    for(int k=0;k<=n-1;k++){
         c[k]=a[k]+b[k];
        printf("%d ",c[k]);
    }
    return 0;
}