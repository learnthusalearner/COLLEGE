#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};

void linkedlisttransversal(struct node *ptr){
    while(ptr!=NULL){
        printf("element:%d\n",ptr->data);
        ptr=ptr->next;
    }
}

struct node*deletionatbeginning(struct node *head){
    struct node *p=head;
    head=head->next;
    free(p);
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
    
    printf("linked list before deletion\n");
    linkedlisttransversal(head);
    printf("\n");
    printf("linked list after deletion\n");
    head=deletionatbeginning(head);
    linkedlisttransversal(head);

}
