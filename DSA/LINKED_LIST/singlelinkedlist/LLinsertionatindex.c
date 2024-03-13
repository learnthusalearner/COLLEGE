#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void linkedlisttransversal(struct node*ptr){
    while(ptr!=NULL){
        printf("element-%d\n",ptr->data);
        ptr=ptr->next;
    }
}

struct node *insertionatindex(struct node*head,int data,int index){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    struct node*p=head;
    
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }

ptr->data=data;
ptr->next=p->next;
p->next=ptr;
return head;
}

int main(){

    struct node *head;
    struct node *second;
    struct node *third;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    
    
    head->data=11;
    head->next=second;
    
    second->data=17;
    second->next=third;
    
    third->data=66;
    third->next=NULL;
    
    linkedlisttransversal(head);
    printf("\n");
    head=insertionatindex(head,25,3);
    linkedlisttransversal(head);
    
}