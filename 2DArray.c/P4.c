//WAP to find max and min value of element of a 2D array along with index
#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the no of rows of the matrices: ");
    scanf("%d",&r);
    printf("Enter the no of columns of the matrices: ");
    scanf("%d",&c);
    int a[r][c];
    printf("Enter the matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        scanf("%d",&a[i][j]);
        }
    }
    int max=a[0][0];
    int min=a[0][0];
    int idxr1,idxc1,idxr2,idxc2;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(max<a[i][j]){
            idxr1=i;
            idxc1=j;
            max=a[i][j];}
            if(min>a[i][j]){
            idxr2=i;
            idxc2=j; 
            min=a[i][j];}
        }
    }
    printf("The element having max value is %d which is at %d th row and %d th column",max,idxr1+1,idxc1+1);
    printf("\nThe element having min value is %d which is at %d th row and %d th column",min,idxr2+1,idxc2+1); 
     return 0;
}
    