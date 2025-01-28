#include<stdio.h>
#include<stdlib.h>
int main(){
    //Dynamically allocated array of size 5
    int* ptr=(int*)calloc(5,sizeof(int));
    if(ptr==NULL){
        printf("No memory allocated\n");
        exit(0);
    }
    else{
    //All values at allocated memory are initialized to 0.
    printf("Due to no initialisation by user all values at allocated memory by calloc are initialized to 0:\n");
    for(int i=0;i<5;i++){
        printf("%d ",*(ptr+i));
    }
    printf("\nEnter the array:\n");
    for(int i=0;i<5;i++){
        scanf("%d",(ptr+i));
    }
    printf("Given array is:\n");
    for(int i=0;i<5;i++){
        printf("%d ",*(ptr+i));
    }
    }
    return 0;  
}