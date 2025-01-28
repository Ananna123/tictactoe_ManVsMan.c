//Q.14)Next bigger element.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements of the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int k;
    printf("Enter a element: ");
    scanf("%d",&k);
    int nb,p=0;
    for(int i=0;i<n;i++){
     if(a[i]==k){
    for(int j=i+1;j<n;j++){
        if(a[j]>a[i]){
            nb=a[j];
            p=1;
            break;
        }
        else{
            nb=-1;
            p=0;
        }}}}
    if(p==0){
      printf("The next bigger element of the entered element in the array is -1");   
    }
    else{
    printf("The next bigger element of the entered element in the array is %d",nb);
    }
    return 0;
}