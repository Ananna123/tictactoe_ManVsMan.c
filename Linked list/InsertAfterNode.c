#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* next;
}node;
void insertafternode(node* p,int data){
    node* new_node=(node*)malloc(sizeof(node));
    new_node->data=data;
    new_node->next=p->next;
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
 printf("Before insertion:\n");
 traversal(head);
 printf("After insertion:\n");
insertafternode(second,10);
traversal(head);
return 0;
}