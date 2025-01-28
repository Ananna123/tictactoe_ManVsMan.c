#include<stdio.h>
void merge(int a[],int low,int mid,int high){
    int i,j,k;
    i=low;
    j=mid+1;
    k=low;
    int b[high+1];
    while(i<=mid && j<=high){
        if(a[i]<a[j]){
            b[k]=a[i];
            i++; 
            k++;
        }
        else{
            b[k]=a[j];
            j++; 
            k++;
        }
    }
    while(i<=mid){
        b[k]=a[i];
        k++; i++;
    }
    while(j<=high){
        b[k]=a[j];
        k++; j++;
    }
    for(int i=low;i<=high;i++){
        a[i]=b[i];
    }
}
void mergesort(int a[], int low, int high){
    if(low<high){
        int mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}
int main(){
int n;
printf("Enter the size of the array: ");
scanf("%d",&n);
int a[n];
printf("Enter the array:\n");
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
mergesort(a,0,n-1);
printf("Sorted array:\n");
for(int i=0;i<n;i++){
    printf("%d ",a[i]);
}
return 0;
}