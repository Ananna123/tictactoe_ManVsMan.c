#include<stdio.h>
#include<math.h>
#include<float.h>
int main(){
    struct point{
        int x;
        int y;
    };
    struct point a[10];
    printf("Enter x and y coordinate of 10 points:\n");
    for(int i=0;i<10;i++){
        scanf("%d%d",&a[i].x,&a[i].y);
    }
    float p,q;
    float min=FLT_MAX;
    float b[10];
    for(int i=0;i<10;i++){
        b[i]=sqrt(((a[i].x)*(a[i].x))+((a[i].y)*(a[i].y)));
        if(b[i]<min){
            min=b[i];
            p=a[i].x;
            q=a[i].y;
        }
    }
    printf("Closest point to (0,0) is:(%f,%f)",p,q);
    return 0;
}