//2)a) Merge two arrays(arrays are sorted).
#include<stdio.h>
int main(){
    int n,m;
    printf("Enter the size of first array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter first array(sorted):\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the size of second array: ");
    scanf("%d",&m);
    int b[m];
    printf("Enter second array(sorted):\n");
    for(int i=0;i<m;i++){
        scanf("%d",&b[i]);}
    int p[n+m],i=0,j=0,k=0;
    while(i<=n-1 && j<=m-1){
        if(a[i]<b[j]){
            p[k]=a[i];
            i++;k++;}
        else{
            p[k]=b[j];
            j++;k++;}}
    while(i<=n-1){
      p[k]=a[i];
      i++;k++; }
    while(j<=m-1){
        p[k]=b[j];
        j++;k++;}
printf("Final sorted array:\n");
for(int k=0;k<(n+m);k++){    
printf("%d ",p[k]);    
}
return 0;
}