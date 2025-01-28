#include<stdio.h>
#include<string.h>
int main(){
    struct employee{
        char fname[10];
        char sname[10];
        int age;
        int TotalMarks;
    };
    struct employee a[2];
    for(int i=0;i<2;i++){
        printf("Enter name of %dth student: ",i+1);
        scanf("%s",a[i].fname);
        scanf("%s",a[i].sname);
        printf("Enter age of that student: ");
        scanf("%d",&a[i].age);
        printf("Enter Tolal marks of that student: ");
        scanf("%d",&a[i].TotalMarks);
    }
    for(int i=0;i<2;i++){
        printf("%d.Name: %s %s\n",i+1,a[i].fname,a[i].sname);
        printf("age: %d\n",a[i].age);
        printf("Total Marks: %d\n\n",a[i].TotalMarks);
    }
    float avg=(a[0].TotalMarks+a[1].TotalMarks)/2;
    printf("The average of total marks of given two students:%f",avg);
return 0;
}