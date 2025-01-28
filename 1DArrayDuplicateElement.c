#include<stdio.h>
int main(){
    int arr[7]={1,6,5,2,6,7,2};
    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
            if(arr[i]==arr[j]){
             printf("The dublicate element is %d\n",arr[i]);
             break;
            } 
               
        }
    }
    return 0;
}