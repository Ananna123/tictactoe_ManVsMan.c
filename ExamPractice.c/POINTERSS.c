#include<stdio.h>
int main(){
int a[4]={1,4,8,16};
int* ip;
ip=a;//pointing to 1
printf("%p",&a[1]);
printf("\n%p",++ip);
//another question.
printf("%d",*ip++);//first print 1 then point to 4
printf("\n%d",*++ip);// first move forward from 4 and point to 8 then print 8
printf("\n%d",++*ip);//pointer is now pointing to 8. increment 8(*ip) by 1 which is equal to 9
return 0;
}