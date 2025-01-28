//7)Sum of diagonals of 2D dynamic array.
#include<stdio.h>
#include<stdlib.h>
int main(){
int r,c;
printf("Enter no of rows: ");
scanf("%d",&r);
printf("Enter no of coloumns: ");
scanf("%d",&c);
int** a=(int**)malloc(r*sizeof(int*));
for(int i=0;i<r;i++){
    a[i]=(int *)malloc(c*sizeof(int));
}
for(int i=0;i<r;i++){
 for(int j=0;j<c;j++){
    scanf("%d",&a[i][j]);
 }
}
int sum=0;
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        if(i==j){
            sum=sum+a[i][j];
        }}
}
printf("Sum of diagonal elements:%d",sum);
return 0;
}