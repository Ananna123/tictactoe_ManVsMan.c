//8)Sparse matrix(DMA)
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
 }}
int p=0,q=0;
for(int i=0;i<r;i++){
 for(int j=0;j<c;j++){
    if(a[i][j]==0) p++;
    else q++;
 }} 
if(p>q){printf("Sparse matrix");}
else{printf("Not sparse matrix");}
return 0;
}