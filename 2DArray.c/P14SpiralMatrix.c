#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the no of rows of the matrices: ");
    scanf("%d",&r);
    printf("Enter the no of columns of the matrices: ");
    scanf("%d",&c);
    int a[r][c];
    printf("Enter elements of the matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        scanf("%d",&a[i][j]);
        }
    }
    int maxr=r-1,maxc=c-1,minr=0,minc=0,count=0,tel=r*c;
    printf("The spiral matrix:\n");
    while(count<tel){
        for(int j=minc;j<=maxc && count<tel;j++){
            printf("%d ",a[minr][j]);
            count++;
        }
        minr++;
        for(int i=minr;i<=maxr && count<tel;i++){
            printf("%d ",a[i][maxc]);
            count++;
        }
        maxc--;
        for(int j=maxc;j>=minc && count<tel;j--){
            printf("%d ",a[maxr][j]);
            count++;
        }
        maxr--;
        for(int i=maxr;i>=minr && count<tel;i--){
            printf("%d ",a[i][minc]);
            count++;
        }
        minc++;
    }
    return 0;
}
