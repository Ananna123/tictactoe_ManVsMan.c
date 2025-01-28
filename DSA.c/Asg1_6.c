//Write a programme in c to find out the largest number using Dynamic Memory Allocation.
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main(){
int n;
printf("Enter number of numbers: ");
scanf("%d",&n);
int* ptr=(int*)malloc(n*sizeof(int));
printf("Enter the numbers:\n");
for(int i=0;i<n;i++){
scanf("%d",(ptr+i));    
}
int max=INT_MIN;
for(int i=0;i<n;i++){
    if(*(ptr+i)>max){
        max=*(ptr+i);
    }
}
printf("The largest number is %d",max);
return 0;
}