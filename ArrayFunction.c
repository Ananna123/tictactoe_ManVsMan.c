#include<stdio.h>
void fun(int arr[]){
     arr[3]=10;
    return;
}
int main(){
    int arr[5]={1,2,3,4,5};
    printf("%d\n",arr[3]);
    fun(arr);
    printf("%d\n",arr[3]);
    return 0;
}
//In case of arrays pass by reference happens not pass by values. We do not need to use pointers to pass the reference. 
//it will directly pass the reference.But in case of integers and others to pass reference to a function we need to use functions.