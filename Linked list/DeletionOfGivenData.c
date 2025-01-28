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
void deletionofgivenvalue(node* head,int data){
    node* p=head;
    while(p->next->data!=data && p->next->next!=NULL){
        p=p->next;
    }
    if(p->next->data==data){
    node* q=p->next;
    p->next=q->next;
    free(q);}
    else{
        printf("Element is not present in linked list\n");
    }
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
    printf("Before deletion:\n");
    traversal(head);
    deletionofgivenvalue(head,9);
    printf("After deletion:\n");
    traversal(head);
    return 0;
}