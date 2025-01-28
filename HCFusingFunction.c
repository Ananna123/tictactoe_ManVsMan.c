#include<stdio.h>
int min( int a, int b){
    if(a<b) 
    return a;
    else 
    return b;
}
int HCF( int a, int b){
    int hcf;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0)
         hcf=i;
    }
    return hcf;
}
int main(){
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    int hcf=HCF(a,b);
    printf("%d",hcf);
    return 0;
}