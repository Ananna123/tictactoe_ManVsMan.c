//Define a structure that takes two integers as arguments(call by reference) and calculate their sum and differences.Display both 
//results in main function.
#include<stdio.h>
 typedef struct result{
    int sum;
    int diff;
}result;
void calculate(int* a,int* b,result* res){
    res->sum= *a+*b;
    res->diff=*a-*b;
    return;
}
int main(){
 int a,b;
 printf("Enter two integers: ");
 scanf("%d %d",&a,&b);
 result res;
 calculate(&a,&b,&res);
 printf("Sum: %d",res.sum);
 printf("\ndifference: %d",res.diff);
return 0;
}
