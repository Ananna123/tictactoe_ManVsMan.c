#include<stdio.h>
int main(){
    int arr[10]={1,2,3,4,5,7,8,9,10};
    int sum1=0;
    for(int i=0;i<=8;i++){
        sum1=sum1+arr[i];
    }
    int n=10;
    int sum2=(10*(10+1))/2;
    int miss=sum2-sum1;
    printf("The missing element is %d",miss);
    return 0;
}