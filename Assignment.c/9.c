//Q.9)Shifing all elements to right,and last element to first position.
#include<stdio.h>
void fun(int a[],int si,int ei){
    for(int i=si,j=ei;i<j;i++,j--){
        int t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
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
    fun(a,0,n-1);
    fun(a,1,n-1);
    printf("The final array:\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}