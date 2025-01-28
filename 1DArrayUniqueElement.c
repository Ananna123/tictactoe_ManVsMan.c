#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[7]={1,2,5,2,3,5,3};
    for(int i=0;i<7;i++){
        bool flag=false;
        for(int j=i+1;j<7;j++){
            if(arr[i]==arr[j]){
             flag=true;}
        }
        if(flag==false){
         printf("The unique element is %d",arr[i]);
         break;
        }
    }
    return 0;
}