#include<stdio.h>
#include<stdlib.h>
int main(){
    //Dynamically allocated array of size 5
    int* ptr=(int*)malloc(5*sizeof(int));
    if(ptr==NULL){
        printf("No memory allocated\n");
        exit(0);
    }
    else{
    printf("\nEnter the array:\n");
    for(int i=0;i<5;i++){
        scanf("%d",(ptr+i));
    }
    for(int i=0;i<2;i++){
        free(ptr+i);
    }
    printf("Given array after deleting first two elements of the array:\n");
    for(int i=2;i<5;i++){
        printf("%d ",*(ptr+i));
    }
    }
    return 0;  
}