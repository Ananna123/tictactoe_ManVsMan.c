#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    typedef struct student{
        char name[30];
        char branch[30];
        int roll;
    }std;
    int n;
    printf("Enter no of students: ");
    scanf("%d",&n);
    std* p=(std*)malloc(n*sizeof(std));
    for(int i=0;i<n;i++){
        printf("Enter name of %dth student: ",i+1);
        scanf("%s",(p+i)->name);
    }
     for(int i=0;i<n;i++){
        printf("Enter branch of %dth student: ",i+1);
        scanf("%s",(p+i)->branch);
    }
     for(int i=0;i<n;i++){
        printf("Enter roll no of %dth student: ",i+1);
        scanf("%d",&(p+i)->roll);
    }
    for(int i=0;i<n;i++){
        printf("\n%d. Name:%s",i+1,(p+i)->name);
        printf("\n  Branch:%s",(p+i)->branch);
        printf("\n  Roll:%d\n",(p+i)->roll);
    }
    return 0;
}