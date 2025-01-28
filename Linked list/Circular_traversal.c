#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* next;
}node;
void traversal(node* head){
    node* p=head;
    do{
        printf("%d\n",p->data);
        p=p->next;
    }
    while(p!=head);
}
int main(){
    node* head=(node*)malloc(sizeof(node));
    node* second=(node*)malloc(sizeof(node));
    node* third=(node*)malloc(sizeof(node));
    node* fourth=(node*)malloc(sizeof(node));
    head->data=5;
    head->next=second;
    second->data=7;
    second->next=third;
    third->data=9;
    third->next=fourth;
    fourth->data=11;
    fourth->next=head;
    traversal(head);
    return 0; 
}