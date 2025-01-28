//Q.27)Length of string without using strlen.
#include<stdio.h>
#include<string.h>
int length( char str[]){
    int i=0,l=0;
    while(str[i]!='\0'){
        l++;
        i++;
    }
  return l;  
}
int main(){
  char str[40];
  puts("Enter the string:");
  gets(str);
  int l=length(str);
  printf("Length of the string is %d",l);
  return 0;
}