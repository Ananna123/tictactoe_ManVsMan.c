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
node* insertion_atfront(node* head, int data){
    node* p=(node*)malloc(sizeof(node));
    p->data=data;
    p->prev=NULL;
    p->next=head;
    head->prev=p;
    return p;
}
node* insertion_atend(node* head, int data){
    node* p=(node*)malloc(sizeof(node));
    p->data=data;
    p->next=NULL;
    node* ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=p;
    p->prev=ptr;
    return head;
}
node* insertion_atgivenposition(node* head,int data,int position){
    node* p=(node*)malloc(sizeof(node));
    p->data=data;
    int i=1;
    node* ptr=head;
    while(i!=position-1){
        ptr=ptr->next;
        i++;
    }
    p->next=ptr->next;
    ptr->next->prev=p;
    p->prev=ptr;
    ptr->next=p;
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
printf("Doubly linked list before insertion:\n");
traversal(head);
printf("Doubly linked list after insertion at front:\n");
head=insertion_atfront(head,0);
traversal(head);
printf("Doubly linked list after insertion at end:\n");
head=insertion_atend(head,5);
traversal(head);
printf("Doubly linked list after insertion at a given position:\n");
head=insertion_atgivenposition(head,10,3);
traversal(head);
return 0;
}