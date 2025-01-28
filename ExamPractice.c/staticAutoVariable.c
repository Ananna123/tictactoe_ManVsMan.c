#include<stdio.h>
int x=10;
static int y=10;
void fun(int a, int b){
    a=y;
    b=x;
    printf("%d",a);
    printf("\n%d",b);
}
int main(){
    int a,b;
    fun(a,b);
   return 0; 
}