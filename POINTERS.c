#include<stdio.h>
int main(){
    int a=5;
    int* x=&a;
    printf("%d\n",a);
    printf("%p\n",&a);
    printf("%p\n",x);
    printf("%d\n",*x);
    printf("%p\n",&x);
    *x=7;
    //Now the value of the variable a will be 7 but addresses of the variable and the pointer pointing that variable will remain same.
    printf("%d\n",a);
    printf("%p\n",&a);
    printf("%p\n",x);
    printf("%d\n",*x);
    printf("%p\n",&x);

    return 0;
}