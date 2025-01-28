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
node* insertatbegining(node* head, int data){
    node* new_head=(node*)malloc(sizeof(node));
    new_head->data=data;
    new_head->next=head;
    node* p=head;
    do{ p=p->next;
    }while(p->next!=head);
    p->next=new_head;
    return new_head;
}
node* insertinbetween(node* head,int data,int position){
node* new_node=(node*)malloc(sizeof(node));
new_node->data=data;
node* p=head;
int i=1;
while(i!=position-1){
    p=p->next;
    i++;
}
new_node->next=p->next;
p->next=new_node;
return head;
}
node* insertatend(node* head,int data){
    node* new_node=(node*)malloc(sizeof(node));
    new_node->data=data;
    node* p=head;
    do{
        p=p->next;
    }while(p->next!=head);
    p->next=new_node;
    new_node->next=head;
    return head;
}
node* insertaftergivennode(node* head,int data,node* ptr){
    node* new_node=(node*)malloc(sizeof(node));
    new_node->data=data;
    new_node->next=ptr->next;
    ptr->next=new_node;
    return head;
}
void insertaftergivenvalue(node* head,int data,int value){
node* new_node=(node*)malloc(sizeof(node));
new_node->data=data;
node* p=head;
while(p->data!=value && p->next!=head){
    p=p->next;
}
if(p->next==head){
    printf("Given value is not present in the circular linked list\n");
}
else{
new_node->next=p->next;
p->next=new_node;
  printf("Insertion after a given value:\n");
  traversal(head);
}  
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
    printf("Before Insertion:\n");
    traversal(head);
     head=insertatbegining(head,1);
    printf("after insertion at begining:\n");
    traversal(head);
    head=insertinbetween(head,50,5);
    printf("after insertion in between the list:\n");
    traversal(head);
    head=insertatend(head,13);
    printf("after insertion at end of link list:\n");
    traversal(head);
    head=insertaftergivennode(head,8,third);
    printf("Inserted after a given node:\n");
    traversal(head);
    insertaftergivenvalue(head,0,9);
    return 0; 
}