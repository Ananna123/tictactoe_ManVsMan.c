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
node* deletion_atfront(node* head){
    node* ptr=head;
    node* p=ptr->next;
    p->prev=NULL;
    free(ptr);
    return p;
}
node* deletion_atend(node* head){
    node* p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    node* ptr=p->prev;
    ptr->next=NULL;
    free(p);
    return head;
}
node* deletion_inbetween(node* head,int position){
    node* p=head;
    int i=1;
    while(i!=position){
        p=p->next;
        i++;
    }
    p->prev->next=p->next;
    p->next->prev=p->prev;
    free(p);
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
printf("Doubly linked list before deletion:\n");
traversal(head);
printf("Doubly linked list after deletion in between:\n");
head=deletion_inbetween(head,2);
traversal(head);
printf("Doubly linked list after deletion at front:\n");
head=deletion_atfront(head);
traversal(head);
printf("Doubly linked list after deletion at end:\n");
head=deletion_atend(head);
traversal(head);
return 0;
}