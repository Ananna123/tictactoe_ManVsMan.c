#include<stdio.h>
int HCF(int a,int b){
    if(b==0){
        return a;
    }
    return HCF(b,a % b);
}
int LCM(int a,int b){
    return(a*b) / HCF(a,b);
}
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    int hcf= HCF(a,b);
    int lcm= LCM(a,b);
    printf("HCF of %d and %d is: %d\n",a,b,hcf);
    printf("LCM of %d and %d is: %d",a,b,lcm);
    return 0;
}