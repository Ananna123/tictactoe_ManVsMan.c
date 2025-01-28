//5)no of passed and failed students(DMA).
#include<stdio.h>
#include<stdlib.h>
int main(){
int n;
printf("Enter no of students: ");
scanf("%d",&n);
int* a=(int*)malloc(n*sizeof(int));
printf("Enter marks of students:\n");
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
int count=0;
printf("Pass mark:40");
for(int i=0;i<n;i++){
    if(a[i]>=40) count++;
} 
printf("\nNo of students passed:%d",count);
printf("\nNo of students failed:%d",n-count);
return 0;  
}