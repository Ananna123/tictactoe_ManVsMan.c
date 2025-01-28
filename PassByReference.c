#include<stdio.h>
void fun(int* x){
    *x=5;
    return;
}
int main(){
    int x;
    x=4;
    printf("%d\n",x);
    fun(&x); //pass by reference.
    printf("%d",x);
    return 0;
}