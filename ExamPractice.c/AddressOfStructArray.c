#include<stdio.h>
int main(){
    struct person{
        char n;
        char m;
        int age;
    };
    struct person list[10];
    printf("%p",&list[0]);
    printf("\n%p",&list[1].n);
    printf("\n%p",&list[1]);
    return 0;
}