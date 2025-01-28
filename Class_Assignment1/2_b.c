//2)a) Merge two arrays(arrays are unsorted).
#include<stdio.h>
#include<stdbool.h>
int main(){
    int n,m;
    printf("Enter the size of first array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter first array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the size of second array: ");
    scanf("%d",&m);
    int b[m];
    printf("Enter second array:\n");
    for(int i=0;i<m;i++){
        scanf("%d",&b[i]);}
    int c[n+m];
    for(int i=0;i<n;i++){    
        c[i]=a[i];}
    for(int j=0;j<m;j++){
        c[j+n]=b[j];}
    for(int k=0;k<n+m-1;k++){   
        bool flag=true;
        for(int p=0;p<n+m-1-k;p++){
            if(c[p]>c[p+1]){
                int t=c[p];
                c[p]=c[p+1];
                c[p+1]=t;
                flag=false;} }
    if(flag==true) break;
    }
printf("Final sorted array:\n");
for(int k=0;k<n+m;k++){    
printf("%d ",c[k]);}
return 0;
}
