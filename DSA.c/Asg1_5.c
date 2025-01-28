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
printf("Inputted array elements are:\n");
for(int i=0;i<n;i++){
    printf("%d ",*(ptr+i));
}
int sum=0;
for(int i=0;i<n;i++){
    sum=sum+*(ptr+i);
}
printf("\nSum of all elements of the array:%d",sum);
return 0;
}