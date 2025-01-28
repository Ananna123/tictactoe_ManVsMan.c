#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct student{
    char branch[40];
    int roll;
}std;
int main(){
    int n;
    printf("Enter no of students: ");
    scanf("%d",&n);
    std* ptr=(std*)malloc(n*sizeof(std));
    for(int i=1;i<=n;i++){
        printf("Enter branch of %dth student:",i);
        scanf("%s",(ptr+i)->branch);
    }
    for(int i=1;i<=n;i++){
        printf("Enter roll no of %dth student:",i);
        scanf("%d",&(ptr+i)->roll);
    }
    for(int i=1;i<=n;i++){
        printf("\nBranch of %dth student:%s",i,(ptr+i)->branch);
    }
    for(int i=1;i<=n;i++){
        printf("\nRoll no of %dth student:%d",i,(ptr+i)->roll);
    }
return 0;
}
