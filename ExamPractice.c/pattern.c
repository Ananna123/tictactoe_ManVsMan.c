#include<stdio.h>
int main(){
    int n;
    printf("enter number of lines: ");
    scanf("%d",&n);
    int a=(n+1)/2;
    int str=1, sp=a-1;
    for(int i=1;i<=n;i++){
    for(int j=1;j<=sp;j++){
        printf(" ");
    }
     for(int k=1;k<=str;k++){
        printf("*");
     }
     if(i<a){
        str+=2;
        sp--;
     }
     else{
        str-=2;
        sp++;
     }
    printf("\n");
}
return 0;
}