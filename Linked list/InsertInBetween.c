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
void insertionInBetween(node* head,int k,int position){
node* curr_node=(node *)malloc(sizeof(node));
node* p=head;
int i=1;
while(i!=position-1){
    p=p->next;
    i++;
}
curr_node->data=k;
curr_node->next=p->next;
p->next=curr_node;
}
int main(){
 node* head=(node*)malloc(sizeof(node));
 node* second=(node*)malloc(sizeof(node));
 node* third=(node*)malloc(sizeof(node));
 node* fourth=(node*)malloc(sizeof(node));
 head->data=5;
 head->next=second;
 second->data=6;
 second->next=third;
 third->data=8;
 third->next=fourth;
 fourth->data=9;
 fourth->next=NULL;
 printf("Before insertion:\n");
 traversal(head);
 insertionInBetween(head,7,3);
 printf("After insertion:\n");
 traversal(head);
 return 0;
}