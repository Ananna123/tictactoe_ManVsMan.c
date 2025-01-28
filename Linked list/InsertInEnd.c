#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* next;
}node;
void insertinend(node* head,int data){
node* new_node=(node*)malloc(sizeof(node));
new_node->data=data;
new_node->next=NULL;
node* p=head;
while(p->next!=NULL){
    p=p->next;
}
p->next=new_node;
}
void traversal(node* head){
    node* ptr=head;
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
int main(){
node* head=(node*)malloc(sizeof(node));
node* second=(node*)malloc(sizeof(node));
node* third=(node*)malloc(sizeof(node));
head->data=5;
head->next=second;
second->data=6;
second->next=third;
third->data=7;
third->next=NULL;
printf("Linked list before insertion:\n");
traversal(head);
insertinend(head,10);
printf("Linked list after insertion:\n");
traversal(head);
return 0;
}