//Q.13)merge two arrays in a sorted array.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements of the first array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements of the first array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int m;
    printf("Enter the number of elements of the second array: ");
    scanf("%d",&m);
    int b[m];
    printf("Enter elements of the second array:\n");
    for(int i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    int c[m+n];
    for(int i=0;i<n;i++){
        c[i]=a[i];}
    for(int i=n;i<m+n;i++){
        c[i]=b[i-n];}
    for(int i=0;i<m+n;i++){
    for(int j=i+1;j<m+n;j++){
        if(c[i]>c[j]){
            int t=c[i];
            c[i]=c[j];
            c[j]=t;}   
    }}
    printf("The final sorted merged array:\n");
    for(int i=0;i<m+n;i++){
     printf("%d ",c[i]);
    }
    return 0;
}
