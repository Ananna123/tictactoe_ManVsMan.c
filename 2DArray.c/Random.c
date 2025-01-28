#include<stdio.h>
int main(){
    int a[3]={1,2,3};
    printf("%p",&a);
    printf("\n%p",&a[0]);
    printf("\n%p",&a[1]);
    printf("\n%p",&a[2]);
    printf("\n%p",&a+1);
    printf("\n%p",(&a)+1);
    printf("\n%p",&a[1]+1);
    printf("\n%p",(&a[1])+1);
    return 0;
}