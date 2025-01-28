//Q.10)Remove all occurence of specific value.
#include<stdio.h>
int delete(int a[],int n, int idx){
    for(int i=idx;i<n-1;i++){
        a[i]=a[i+1];
    }
    return n-1;
}
int main(){
    int n;
    printf("Enter the number of elements of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements of the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int x;
    printf("Enter the element to be removed: ");
    scanf("%d",&x);
    for(int i=0;i<n;){
        if(a[i]==x){
            n=delete(a,n,i);
        }
        else{
            i++;
        }
    }
    printf("Array after removal of %d: ",x);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}