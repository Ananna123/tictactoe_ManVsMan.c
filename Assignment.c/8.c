//Q8)Kth largest element in the unsorted array.
#include<stdio.h>
#include<limits.h>
void fun(int n, int a[],int k){
    for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(a[i]<a[j]){
            int t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    }
    printf("%d th largest element of the array is %d",k,a[k-1]);
     return;
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
    int k;
    printf("Enter the value of k: ");
    scanf("%d",&k);
    fun(n,a,k);
    return 0;
}

