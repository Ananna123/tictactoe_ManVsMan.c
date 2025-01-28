#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    int m;
    (a>b)?((a>c)?(m=a):(m=c)):((b>c)?(m=b):(m=c));
    printf("The maximum of these three numbers is %d",m);
    return 0;
}