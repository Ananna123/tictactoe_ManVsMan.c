//Q.6)checking presence of substring.
#include<stdio.h>
#include<string.h>
int main(){
    char str1[40],str2[40];
    printf("Enter the string:\n");
    gets(str1);
    printf("Enter the substring:\n");
    gets(str2);
    int size1=0,i=0;
    while(str1[i]!='\0'){
        size1++;
        i++;
    }
    int size2=0,j=0,p,k;
    while(str2[j]!='\0'){
        size2++;
        j++;
    }
    int idx;
   char* result=strstr(str1,str2);
   if(result){
    printf("The substring is present in the main string");
    for(int i=0;i<size1;i++){
        if(str1[i]==*result){
            idx=i;
            break;
        }
    }
    printf("\n the index of it's first occurence in main string is %d",idx);
   }
   else{
    printf("The substring is not present in the main string");
   }
return 0;
}