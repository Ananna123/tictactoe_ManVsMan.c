#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* prev;
    struct node* next;
}node;
node* traversal(node* head){
    node* p=head;
    while(p!=NULL){
    printf("%d\n",p->data);
    p=p->next;
    }
return head;
}
node* traversal_bothside(node* head){
    node* p=head;
    while(p!=NULL){
      printf("%d\n",p->data);
      p=p->next;
    }
    node* ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    while(ptr!=NULL){
      printf("%d\n",ptr->data);
      ptr=ptr->prev;
    }
return head;
}
int main(){
node* head=(node*)malloc(sizeof(node));
node* second=(node*)malloc(sizeof(node));
node* third=(node*)malloc(sizeof(node));
node* fourth=(node*)malloc(sizeof(node));
head->data=1;
head->prev=NULL;
head->next=second;
second->data=2;
second->prev=head;
second->next=third;
third->data=3;
third->prev=second;
third->next=fourth;
fourth->data=4;
fourth->prev=third;
fourth->next=NULL;
//traversal(head);
traversal_bothside(head);
return 0;
}