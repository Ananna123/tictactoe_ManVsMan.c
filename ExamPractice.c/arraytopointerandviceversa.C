#include<stdio.h>
int main(){
 // pointer to 0 th element of an array
 int a[5]={1,2,3,4,5};
 int* ptr=a;
 printf("\n%p",&a[0]);
 printf("\n%p",ptr);
 // pointer to a whole array
 int b[5]={0,1,2,3,4};
 int (*p)[5]=&b;
 printf("\n%p",&b[0]);
 printf("\n%p",p);
 //array of pointers
 int m=10, n=20;
  printf("\n%p",&m);
  printf("\n%p",&n);
 int* c[2]={&m,&n};
  printf("\n%p",c[0]);
  printf("\n%p",c[1]);
return 0;
}
