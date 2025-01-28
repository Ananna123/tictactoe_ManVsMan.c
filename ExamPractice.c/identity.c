#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    printf("Enter number of columns: ");
    scanf("%d",&c);
    int a[r][c];
    printf("Enter the matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int flag1=0, flag2=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
    if(i==j){
        if(a[i][j]!=1){
            flag1=0;
            break;
        }
        else flag1++;
    }
    else{
        if(a[i][j]!=0){
            flag2=0;
            break;
        }
        else flag2++;
    
        }
    }
}
if(flag1==r && flag2==(r*c)-r){
    printf("Identity Matrix");
}
else{
    printf("Not Identity matrix");
}
return 0;
}