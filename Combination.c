#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int Combination(int n, int r){
    int comb= factorial(n)/( factorial(r)*factorial(n-r));
    return comb;
}
int main(){
    int n,r;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("Enter r: ");
    scanf("%d",&r);
    int comb= Combination(n,r);
    printf("%d",comb);
    return 0;
}