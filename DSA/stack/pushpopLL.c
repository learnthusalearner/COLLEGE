#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}
struct node*next;
void POP(){
    new=(struct node*)malloc(sizeof(struct node));
    new->data=x;
    new->next=top;
    top=new;
}