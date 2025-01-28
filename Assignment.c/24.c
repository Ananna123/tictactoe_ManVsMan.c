//Q.24)No of elements in a array greater than given value.
#include<stdio.h>
int fun(int* n,int* a,int* x){
    int count=0;
    for(int i=0;i<*n;i++){
        if(*(a+i)>*x){
            count++;
        }
    }
return count;
}
int main(){
    int n;
    printf("Enter the no of elements of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int x;
    printf("Enter a value: ");
    scanf("%d",&x);
    int count=fun(&n,a,&x);
    if(count==0){
        printf("There is no element in the array greater than the given value.");
    }
    else{
    printf("The no of elements in the array greater than the given value is %d",count);
    }
    return 0;
}