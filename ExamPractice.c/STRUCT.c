#include<stdio.h>
#include<string.h>
struct student{
    char name[30];
    char dept[30];
    int roll;
};
void fun(struct student* std){
    printf("\nName:%s",std->name);
    printf("\nDepartment:%s",std->dept);
    printf("\nRoll No.:%d",std->roll);
    return;
}
int main(){
    struct student std;
    printf("Name: ");
    gets(std.name);
    printf("\nDepertment: ");
    gets(std.dept);
    printf("\nRoll No.: ");
    scanf("%d",&std.roll);
    fun(&std);
    return 0;
}