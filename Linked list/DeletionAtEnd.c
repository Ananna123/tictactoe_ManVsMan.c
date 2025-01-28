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
void deletionatend(node* head){
    node* p=head;
    while(p->next->next!=NULL){
        p=p->next;
    }
    node*q=p->next;
    p->next=NULL;
    free(q);
}
int main(){
    node* head=(node*)malloc(sizeof(node));
    node* second=(node*)malloc(sizeof(node));
    node* third=(node*)malloc(sizeof(node));
    node* fourth=(node*)malloc(sizeof(node));
    head->data=7;
    head->next=second;
    second->data=5;
    second->next=third;
    third->data=8;
    third->next=fourth;
    fourth->data=9;
    fourth->next=NULL;
    printf("Linked list before deletion:\n");
    traversal(head);
    deletionatend(head);
    printf("Linked list after deletion:\n");
    traversal(head);
    return 0;
}