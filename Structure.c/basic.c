#include<stdio.h>
#include<string.h>
int main(){
     typedef struct student{
        char name[15];
        int roll;
        float marks;
    }std;
    std arr[3];
    strcpy(arr[0].name,"Ananna Ghosh");
    arr[0].roll=32;
    arr[0].marks=24;
    strcpy(arr[1].name,"Arjita Ghosh");
    arr[1].roll=33;
    arr[1].marks=26;
    strcpy(arr[2].name,"Sagar Sarkar");
    arr[2].roll=34;
    arr[2].marks=29;
    for(int i=0;i<3;i++){
        printf("%d.%s",i+1,arr[i].name);
        printf("\nRoll: %d",arr[i].roll);
        printf("\nMarks: %f\n",arr[i].marks);

    }
    
    
    return 0;
}