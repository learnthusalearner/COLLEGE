#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void linkedlisttransversal(struct node*ptr){
    while(ptr !=NULL){
        printf("Element:%d\n",ptr->data);
        ptr=ptr->next;
    }
}

struct node* insertionatbeginning(struct node*heap,int data){
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=heap;
    ptr->data=data;
}

int main(){
    struct node *head;
    struct node *second;
    struct node *third;

    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));

    head->data=7;
    head->next=second;

    second->data=11;
    second->next=third;

    third->data=66;
    third->next=NULL;

    linkedlisttransversal(head);
    printf("\n");
    head=insertionatbeginning(head,25);
    linkedlisttransversal(head);




}