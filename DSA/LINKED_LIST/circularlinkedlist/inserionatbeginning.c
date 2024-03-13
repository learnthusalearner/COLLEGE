#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void CLLtransversal(struct node *head)
{
    struct node *ptr = head;
    
    do{
        printf("element is %d\n", ptr->data);
        ptr = ptr->next;
    }while (ptr != head);
    return;
}

struct node *insertionatbeginning(struct node *head, int data)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = data;
    p->next = head;
    struct node *temp = head;
    do{
        temp = temp->next;
    }while(temp->next != head);
    temp->next = p;
    head = p;
    return p;
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 66;
    third->next = head;

    CLLtransversal(head);
    printf("\n");
    head = insertionatbeginning(head, 5);
    CLLtransversal(head);

    return 0;
}