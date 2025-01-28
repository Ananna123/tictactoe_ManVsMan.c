#include<stdio.h>
#include<stdlib.h>
int main(){
    int r,c;
    printf("Enter no of rows: ");
    scanf("%d",&r);
    printf("Enter no of coloums: ");
    scanf("%d",&c);
    int** arr=(int**)malloc(r*sizeof(int*));
    for(int i=0;i<r;i++){
        arr[i]=(int*)malloc(c*sizeof(int));
    }
    printf("Enter the matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Your entered matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    free(arr);
return 0;
}