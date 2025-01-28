#include <stdio.h>
void prime(int n)
{   int i,flag=0;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        flag=1;
    }
    if(flag==1)
      printf("Not prime");
      else
      printf("prime");
}
void perfect(int n)
{   int i,sum=0;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        sum=sum+i;
    }
   if((sum+1)==n)
   printf("\nperfect");
   else
   printf("\nnot perfect");
}
void amstrong(int n)
{  int d,dsp=0,p=n;
    while(p!=0)
    {
     d=p%10;
     p=p/10;
    dsp=dsp+(d*d*d);
    }
    if(dsp==n)
    printf("\nit is a amstrong number");
    else
    printf("\nit is not a amstrong number");
    return;
}
int main(){
    int n;
    printf("enter the number :");
    scanf("%d",n);
    prime(n);
    perfect(n);
    amstrong(n);
     return 0;
}