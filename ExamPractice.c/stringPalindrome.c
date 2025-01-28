#include<stdio.h>
#include<string.h>
int main(){
char str[30];
puts("Enter the string:");
gets(str);
int l=strlen(str);
char str1[l];
strcpy(str1,str);
for(int i=0,j=l-1;i<=j;i++,j--){
    int t=str[i];
    str[i]=str[j];
    str[j]=t;
}
int flag=0;
for(int i=0;i<l;i++){
 if(str[i]!=str1[i]){
    flag=0;
    break;
 }
 else{
    flag++;
 }
}
if(flag==l){
    printf("Palindrome");
}
else{
    printf("Not Palindrome");
}
return 0;

}