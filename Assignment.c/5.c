//Q.5)First repeated elemen in the array.
#include<stdio.h>
void fun(int arr[], int y){
    int i,k=0;
    for( i=0;i<y;i++){
      for(int j=i+1;j<y;j++){
        if(arr[i]==arr[j]){
        k=1;
        break;}
      }
       if(k==1)
       break;   
    }
    printf("The first element which is repeated in the array is %d",arr[i]);
    return;
}
int main(){
    int arr[10],n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements of array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    fun(arr,n); 
    return 0;
}