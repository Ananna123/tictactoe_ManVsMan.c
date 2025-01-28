#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* next;
}node;
void traverse(node* head){
    node* ptr=head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
node* new_node(int k,int i,int n){
    
}
int main(){
int n,k;
printf("Enter the size of linked list: ");
scanf("%d",&n);
printf("Enter datas:\n");
for(int i=0;i<n;i++){
    scanf("%d",&k);
if(i==0){
node* head;
head->data=k;
} 
}

return 0;
}