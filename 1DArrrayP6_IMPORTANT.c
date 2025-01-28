//print two different arrays. One of positive values and another of negative values of a given array.
#include<stdio.h>
int main(){
    int n;
    int arr[10];
    printf("No of elements: ");
    scanf("%d",&n);
    for(int i=0;i<=n-1;i++){
       int a=i+1;
       printf("Enter element no %d: ",a);
       scanf("%d",&arr[i]);
    }
    int pos[10],neg[10],pos_count=0,neg_count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            pos[pos_count]=arr[i];
            pos_count++;
        }
        else{
            neg[neg_count]=arr[i];
            neg_count++;
        }
    }
    printf("The elements of positive array: ");
    for(int i=0;i<pos_count;i++){
        printf("%d ",pos[i]);
    }
    printf("\nThe elements of negative array: ");
    for(int i=0;i<neg_count;i++){
        printf("%d ",neg[i]);
    }
    return 0;
}
