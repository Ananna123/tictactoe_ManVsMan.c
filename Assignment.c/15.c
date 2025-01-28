//Q.15)Sort array using pointers.
#include<stdio.h>
void sort(int* a,int* n){
    for(int i=0;i<*n;i++){
    for(int j=i+1;j<*n;j++){
        if(*(a+i)>*(a+j)){
        int t=*(a+i);
        *(a+i)=*(a+j);
        *(a+j)=t;
        }
    }
    }
    return;
}
int main(){
    int n;
    printf("Enter the number of elements of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements of the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,&n);
    printf("The sorted array(Using pointers):\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
return 0;
}