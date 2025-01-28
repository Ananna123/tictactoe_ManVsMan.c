#include<stdio.h>
int main(){
    int a=5;
    int* x=&a;
    int** y=&x;
    printf("%d\n",a);
    printf("%p\n",&a);
    printf("%d\n",*x);
    printf("%p\n",&x);
    printf("%d\n",**y);
    printf("%p\n",*y);
    printf("%p\n",x);
    printf("%p\n",y);
    return 0;
}