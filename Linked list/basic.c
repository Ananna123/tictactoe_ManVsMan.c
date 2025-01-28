#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* next;
}node;
int main(){
int n;
printf("Enter the size of linked list: ");
scanf("%d",&n);
node* a=(node*)malloc(n*sizeof(node));
printf("Enter datas:\n");
for(int i=0;i<n;i++){
    scanf("%d",&(a+i)->data);
    (a+i)->next=(a+i+1);
}
(a+n-1)->next=NULL;
node* p=a;
printf("Your entered linked list:\n");
while(p!=NULL){
printf("%d ",p->data);
p=p->next;
}
return 0;
}