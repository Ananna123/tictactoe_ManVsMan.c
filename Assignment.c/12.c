#include<stdio.h>
void check(int x,int y,int k){
    
    return;
}
int main(){
    int n;
    printf("Enter the size of the matrix: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int k;
    printf("Enter the value: ");
    scanf("%d",&k);
    printf("The pairs are:\n");
    for(int i=0;i<n;i++){
        
        check(a[i],a[i+1],k);
    
        
    }
    return 0;
}