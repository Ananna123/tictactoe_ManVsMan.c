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
    printf("Given array is:\n");
    for(int i=0;i<5;i++){
        printf("%d ",*(ptr+i));
    }
    printf("\nAddress of ptr:%p",ptr);
    //realloc allocate extra memory to the previous memory pointed by the pointer ptr.
    ptr=realloc(ptr,7*(sizeof(int)));
    printf("\nEnter new array:\n");
    for(int i=0;i<7;i++){
        scanf("%d",(ptr+i));
    }
    printf("New array is:\n");
    for(int i=0;i<7;i++){
        printf("%d ",*(ptr+i));
    }
    printf("\n Now Address of ptr:%p",ptr);
    }
    //in realloc new extra memory, in that case extra (7-5)*4 byte memory is allocated contiguously after previous (5*4)bytes but if 
    // memory is not available after the priviously allocated memory then the whole memory (7*4)byte will move to some other
    //empty space of memory where it can exist in a contiguous manner. 
    //In above case memory is available hence both ptr contains same address of memory.
    return 0;  
}