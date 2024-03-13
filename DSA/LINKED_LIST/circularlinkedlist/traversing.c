#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void CLLtransversal(struct node*head){
    struct node*ptr=head;
   do{
    printf("element is %d\n",ptr->data);
    ptr=ptr->next;
   }while(ptr !=head);
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
    third->next=head;

    CLLtransversal(head);
}