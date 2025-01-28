#include <stdio.h>
int delete(int j,int n,int a[]){
    for(int k=j;k<n;k++){
        int t=a[k];
        a[k]=a[k+1];
        a[k+1]=t;
    }
    return n-1;
}
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                n=delete(j,n,a);
            }
        }
    }
    printf("Given array after removal of duplicate elements:\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}