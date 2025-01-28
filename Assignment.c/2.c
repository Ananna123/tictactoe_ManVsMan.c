//Q.2)Counting the occurence of a specific value.
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
    int m;
    printf("Enter the element whose no of occurrence to be checked: ");
    scanf("%d",&m);
    int k=0;
    for(int i=0;i<n;i++){
       if(arr[i]==m)
       k++;
    }
    printf("The element %d occurred %d times in the array",m,k);
    return 0;
}
