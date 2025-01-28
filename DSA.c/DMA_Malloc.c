#include<stdio.h>
#include<stdlib.h>
int main(){
    //Dynamically allocated array of size 5 though we can take user input size of array.
    int* ptr=(int*)malloc(5*sizeof(int));
    if(ptr==NULL){
        printf("No memory allocated\n");
        exit(0);
    }
    else{
    //All values at allocated memory are initialized to garbage values.
    printf("Due to no initialisation by user all values at allocated memory by malloc are initialized to garbage values:\n");
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