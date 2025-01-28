//Q.26)Copy a string to another string without using strcpy.
#include<stdio.h>
#include<string.h>
int main(){
    char str1[40];
    puts("Enter string 1:");
    gets(str1);
    int l=strlen(str1);
    char str2[l];
    char* ptr1=str1;
    char* ptr2=str2;
    for(int i=0;i<l;i++){
        *(ptr2+i)=*(ptr1+i);
    }
    puts("string 1:");
    puts(str1);
    puts("String 2:");
    for(int i=0;i<l;i++){
        printf("%c",str2[i]);
    }
    return 0;
}