#include<stdio.h>
#include<string.h>
int main(){
    struct student {
        char name[30];
        char dept[30];
        int roll;
    };
    struct student std[3];
    for(int i=0;i<3;i++){
        printf("Enter Name of %dth student: ",i+1);
        gets(std[i].name);
        }
    for(int i=0;i<3;i++){
        printf("Enter Department of %dth student: ",i+1);
        gets(std[i].dept);
        }
    for(int i=0;i<3;i++){
        printf("Enter Roll no of %dth student: ",i+1);
        scanf("%d",&std[i].roll);
        }
    for(int i=0;i<3;i++){
        printf("\n%d. Name:%s",i+1,std[i].name);
        printf("\nDepartment:%s",std[i].dept);
        printf("\nRoll No.:%d\n",std[i].roll);
    }
return 0;
}