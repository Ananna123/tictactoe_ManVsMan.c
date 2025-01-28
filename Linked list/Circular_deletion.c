#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* next;
}node;
void traversal(node* head){
    node* ptr=head;
    do{
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    while(ptr!=head);
}
node* deletionatfront(node* head){
    node* p=head;
    while(p->next!=head){
        p=p->next;
    }
    p->next=head->next;
    node* ptr=head;
    head=ptr->next;
    free(ptr);
    return head;
}
node* deletionatend(node* head){
    node* p=head;
    while(p->next->next!=head){
        p=p->next;
    }
    node* ptr=p->next;
    p->next=head;
    free(ptr);
    return head;
}
node* deletioninbetween(node* head,int position){
    node* p=head;
    int i=1;
    while(i!=position-1){
        p=p->next;
        i++;
    }
    node* ptr=p->next;
    p->next=ptr->next;
    free(ptr);
    return head;
}
void deletionofgivenvalue(node* head,int value){
    node* p=head;
    while(p->next->data!=value && p->next!=head){
        p=p->next;
    }
    node* ptr=p->next;
    if( ptr->data==value){
    p->next=ptr->next;
    if(ptr==head){
    node* new_head=ptr->next;
    free(ptr);
    printf("Circular linked list after deletion of the given value:\n");
    traversal(new_head);
    }
    else{
    free(ptr);
     printf("Circular linked list after deletion of the given value:\n");
     traversal(head);   
    }
    }
    else{
    printf("Given value is not present in the Circular Linked list\n");
    }
}
int main(){
node* head=(node*)malloc(sizeof(node));
node* second=(node*)malloc(sizeof(node));
node* third=(node*)malloc(sizeof(node));
node* fourth=(node*)malloc(sizeof(node));
node* fifth=(node*)malloc(sizeof(node));
head->data=5;
head->next=second;
second->data=7;
second->next=third;
third->data=9;
third->next=fourth;
fourth->data=11;
fourth->next=fifth;
fifth->data=13;
fifth->next=head;
printf("Circular Linked list before deletion:\n");
traversal(head);
head=deletionatfront(head);
printf("Circular Linked list after deletion at front:\n");
traversal(head);
head=deletionatend(head);
printf("Circular Linked list after deletion at end:\n");
traversal(head);
head=deletioninbetween(head,2);
printf("Circular Linked list after deletion in between:\n");
traversal(head);
deletionofgivenvalue(head,9);
return 0;
}