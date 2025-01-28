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
int length(node* head){
    node* p=head;
    int count=1;
    while(p->next!=NULL){
        p=p->next;
        count++;
    }
return count;
}
void reverse(node* head, int len){
    node* p=head;
    node* ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    int i=0;
    while(i!=len/2){
        int temp=p->data;
        p->data=ptr->data;
        ptr->data=temp;
        p=p->next;
        ptr=ptr->prev;
        i++;
    }
}
int main(){
node* head=(node*)malloc(sizeof(node));
node* second=(node*)malloc(sizeof(node));
node* third=(node*)malloc(sizeof(node));
node* fourth=(node*)malloc(sizeof(node));
node* fifth=(node*)malloc(sizeof(node));
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
fourth->next=fifth;
fifth->data=5;
fifth->prev=fourth;
fifth->next=NULL;
int len=length(head);
printf("length of the lined list:%d\n",len);
printf("Given doubly linked list:\n");
traversal(head);
printf("Reversed Doubly linked list:\n");
reverse(head,len);
traversal(head);
return 0;
}