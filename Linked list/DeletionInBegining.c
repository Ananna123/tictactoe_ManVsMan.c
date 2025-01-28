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
node* deletioninbegining(node* head){
    node* p=head;
    head=head->next;
    free(p);
    return head;
}
int main(){
    node* head=(node*)malloc(sizeof(node));
    node* second=(node*)malloc(sizeof(node));
    node* third=(node*)malloc(sizeof(node));
    head->data=7;
    head->next=second;
    second->data=5;
    second->next=third;
    third->data=8;
    third->next=NULL;
    printf("Linked list before deletion:\n");
    traversal(head);
    printf("Linked list after deletion:\n");
   head=deletioninbegining(head);
    traversal(head);
    return 0;
}