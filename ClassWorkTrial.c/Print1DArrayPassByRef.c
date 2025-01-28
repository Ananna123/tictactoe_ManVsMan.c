#include<stdio.h>
void fun(int* x, int* a){
    for(int i=0;i<*x;i++){
        printf("%d ",*(a+i));
    }
    return;
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
    printf("Your entered array is:\n");
    fun(&n,a);
return 0;
}
