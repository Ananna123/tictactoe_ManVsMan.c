//Q.7)Counting no of words in a string.
#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    puts("Enter the string:");
    gets(str);
    int size=0,i=0;
    while(str[i]!='\0'){
        size++;
        i++;
    }
    int count=0;
    for(int i=0;i<size;i++){
        if(str[i]==' ')
        continue;
        else
        count++;
    }
    printf("The number of words in the string is %d",count);
    return 0;
}