#include<stdio.h>
#include<string.h>
int main(){
    char* input;
    int count= 0;
    scanf("%s",input);
    while(*input!='\0'){
        if(*input=='A'|| *input=='E' || *input=='I' || *input=='O' || *input=='U')
        {
            count++;
        }
        input++;
    }
    printf("%d",count);
    return 0;
}