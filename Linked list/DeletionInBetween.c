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
void deletioninbetween(node* head,int position){
node*p=head;
int i=1;
while(i!=position-1){
    p=p->next;
    i++;
}
node*q=p->next;
p->next=q->next;
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
    deletioninbetween(head,3);
    printf("Linked list after deletiion:\n");
    traversal(head);
    return 0;
}