//print even elements and reshufle array such that
//odd elements will come before even in a sorted order
#include<stdio.h>
#include<stdbool.h>
void Bubblesort(int b[], int j){
    for(int i=0;i<j-1;i++){
        bool flag=true;
     for(int m=0;m<j-1-i;m++){
        if(b[m]>b[m+1]){
        int t=b[m];
        b[m]=b[m+1];
        b[m+1]=t;
        flag=false;}
        if(flag==true) break;
        }
        }}
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int j=0, k=0;
    int b[n], c[n];
    for(int i=0;i<n;i++){
        if(a[i]%2!=0){
            b[j]=a[i];
            j++;
        }
        else{
            c[k]=a[i];
            k++;
        }
    }
    Bubblesort(b,j);
    Bubblesort(c,k);
    printf("Even elements of the array:\n");
    for(int i=0;i<k;i++){
        printf("%d ",c[i]);
    }
    for(int i=0;i<j;i++){
        a[i]=b[i];
    }
    for(int i=0;i<k;i++){
        a[i+j]=c[i];
    }
    printf("\nFinal array:\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}