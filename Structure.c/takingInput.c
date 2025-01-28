#include<stdio.h>
#include<string.h>
int main(){
    struct employee{
        char fname[10];
        char sname[10];
        int age;
        int salary;
    };
    struct employee a[3];
    for(int i=0;i<3;i++){
        scanf("%s",a[i].fname);
        scanf("%s",a[i].sname);
        scanf("%d",&a[i].age);
        scanf("%d",&a[i].salary);
    }
    for(int i=0;i<3;i++){
        printf("%d.Name: %s %s\n",i+1,a[i].fname,a[i].sname);
        printf("age: %d\n",a[i].age);
        printf("salary: %d\n\n",a[i].salary);
    }
return 0;
}