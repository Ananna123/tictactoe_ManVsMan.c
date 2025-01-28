#include<stdio.h>
#include<stdlib.h>
int main(){
int n;
printf("Enter the size of array:");
scanf("%d",&n);
int* ptr=(int*)malloc(n*sizeof(int));
printf("Enter Array elements:\n");
for(int i=0;i<n;i++){
    scanf("%d",(ptr+i));
}
int k;
printf("Enter the elemnt whose occurence to be checked: ");
scanf("%d",&k);
int count=0;
for(int i=0;i<n;i++){
    if(*(ptr+i)==k){
        count++;
    }
}
printf("the number of occurence of the element %d in the array is %d",k,count);
return 0;
}