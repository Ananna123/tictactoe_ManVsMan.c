#include<stdio.h>
int delete(int a[],int idx,int n){
    for(int i=idx;i<n-1;i++){
        a[i]=a[i+1];
    }
    return n-1;
}
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int x;
    printf("Enter the elemnt to be deleted: ");
    scanf("%d",&x);
    for(int i=0;i<n;){
       if(a[i]==x){
        n=delete(a,i,n);
       }
       else{
        i++;
       }
    }
    printf("The final matrix:\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}

