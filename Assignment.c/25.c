//Q.25)Reversed string.
#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    puts("Enter the string:");
    scanf("%[^\n]s",str);
    int l=strlen(str);
    char* ptr=str;
    for(int i=0,j=l-1;i<=j;i++,j--){
        char t=*(ptr+i);
        *(ptr+i)=*(ptr+j);
        *(ptr+j)=t;
    }
    puts("The reversed string:");
    puts(str);
    return 0;
}