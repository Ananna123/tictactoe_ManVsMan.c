//Q.23)No of vowels in a string.
#include<stdio.h>
#include<string.h>
int vowel(int l,char* str){
    int count=0;
    for(int i=0;i<l;i++){
        if(*str=='a'||*str=='e'||*str=='i'||*str=='o'||*str=='u'||*str=='A'||*str=='E'||*str=='I'||*str=='O'||*str=='U'){
            count++;
        }
        str++;
    }
    return count;
}
int main(){
    char str[40];
    puts("Enter the string:");
    gets(str);
    int l=strlen(str);
    int count=vowel(l,str);
    printf("The no of vowels in the string is %d",count);
    return 0;
}