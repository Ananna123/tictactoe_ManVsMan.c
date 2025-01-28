#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    struct date{
        int day;
        char month[15];
        int year;
    };
    struct date a[2];
    for(int i=0;i<2;i++){
        printf("Enter day of %dth date: ",i+1);
        scanf("%d",&a[i].day);
        printf("enter the month: ");
        scanf("%s",a[i].month);
        printf("enter the year: ");
        scanf("%d",&a[i].year);
    }
    if(a[0].day>a[1].day){
        printf("The differences between the days of the two dates is %d",a[0].day-a[1].day);
    }
    else{
        printf("The difference between the days of the two dates is %d",a[1].day-a[0].day);
    }
return 0;
}