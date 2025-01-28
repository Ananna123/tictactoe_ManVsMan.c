#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* next;
}node;
void traversal(node* ptr){
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
node* insertInBegining(node* p,int k){
node* new_head=(node*)malloc(sizeof(node));
new_head->data=k;
new_head->next=p;
return new_head;
}
int main(){
node* head=(node*)malloc(sizeof(node));
node* second=(node*)malloc(sizeof(node));
node* third=(node*)malloc(sizeof(node));
head->data=7;
head->next=second;
second->data=8;
second->next=third;
third->data=9;
third->next=NULL;
 printf("Before insertion:\n");
 traversal(head);
node* new_head=insertInBegining(head,5);
printf("Ater insertion:\n");
traversal(new_head);
return 0;
}