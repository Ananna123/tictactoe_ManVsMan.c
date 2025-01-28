#include<stdio.h>
#include<math.h>
int main(){
    struct circle{
        float radi;
    }c1,c2;
    printf("Enter the radius of first circle: ");
    scanf("%f",&c1.radi);
    printf("Enter the radius of second circle: ");
    scanf("%f",&c2.radi);
    const float pi=3.14;
    float area1=pi*c1.radi*c1.radi;
    float area2=pi*c2.radi*c2.radi;
    float per1=2*pi*c1.radi;
    float per2=2*pi*c2.radi;
printf("The area of first circle: %f",area1);
printf("\nThe area of second circle: %f",area2);
printf("\nThe perimeter of first circle: %f",per1);
printf("\nThe perimeter of second circle: %f",per2);
return 0;
}

