#include<stdio.h>
int main(){
void India(); // function prototype
India();
return 0;
}
void India(){
    printf("Hello");
    return;
}
// Usually we know that the function being called shoud be above of that function in which it is called.
// But if we use function prototype then we need not to bother about the order of functions.