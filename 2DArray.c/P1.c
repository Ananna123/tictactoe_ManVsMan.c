//WAP to store roll numbers and marks obtained by n students side by side in a matrix.
#include<stdio.h>
int main(){
    int r,c=2;
    printf("Enter the number of students: ");
    scanf("%d",&r);
    int arr[r][c];
    for(int i=0;i<r;i++){
     for(int j=0;j<c;j++){
        if(j%2==0){
        printf("Enter the roll number of %d th student: ",i+1);
        scanf("%d",&arr[i][j]);}
        else{
         printf("Enter mark of %d th student: ",i+1);
        scanf("%d",&arr[i][j]);}
     }
    }
    printf("The matrix:\n");
    printf("Roll Marks\n");
    for(int i=0;i<r;i++){
     for(int j=0;j<c;j++){
        printf("%d    ",arr[i][j]);
     }
     printf("\n");
    }
    return 0;
}