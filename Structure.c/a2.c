#include<stdio.h>
#include<string.h>
int main(){
    struct std{
        char name[20];
        int roll;
        float marks;
    };
    struct std a[5];
    a[0].roll=1;
    a[0].marks=25.4;
    strcpy(a[0].name,"Shreya Roy");
    a[1].roll=2;
    a[1].marks=28.3;
    strcpy(a[1].name,"Soham Roy");
    a[2].roll=3;
    a[2].marks=30;
    strcpy(a[2].name,"Shree Raj");
    a[3].roll=4;
    a[3].marks=28.52;
    strcpy(a[3].name,"Mehul Roy");
    a[4].roll=5;
    a[4].marks=36;
    strcpy(a[4].name,"Riya Roy");
    for(int i=0;i<5;i++){
        printf("%d.Name:%s\n",i+1,a[i].name);
        printf(" Roll: %d\n",a[i].roll);
        printf(" Marks: %f\n\n",a[i].marks);
    }
return 0;
}