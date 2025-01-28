#include<stdio.h>
struct student{
        char name[30];
        char dept[30];
        int roll;
    };
void fun(struct student *std){
    for(int i=0;i<5;i++){
        printf("%d. Name:%s",i+1,std->name);
        printf("\nDepartment:%s",std->dept);
        printf("\nRoll No:%d\n\n",std->roll);
        std++;
    }
    return;
}
int main(){
    struct student std[5];
    for(int i=0;i<5;i++){
        printf("Enter name of %dth student: ",i+1);
        gets(std[i].name);
    }
     for(int i=0;i<5;i++){
        printf("Enter Department of %dth student: ",i+1);
        gets(std[i].dept);
    }
     for(int i=0;i<5;i++){
        printf("Enter roll no of %dth student: ",i+1);
        scanf("%d",&std[i].roll);
    }
     fun(std);
return 0;
}