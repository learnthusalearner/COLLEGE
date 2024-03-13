#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *next;
};

void transversal(struct node *ptr) {
  while (ptr != NULL) {
    printf("element: %d\n", ptr->data);
    ptr = ptr->next;
  }
}

struct node *reverse(struct node *head) {
  struct node *prev = NULL;
  struct node *curr = head;
  while (curr != NULL) {
    struct node *next = curr->next; 
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  return prev;
}

int main() {
  struct node *head = NULL;
  struct node *second = NULL;
  struct node *third = NULL;

  head = malloc(sizeof(struct node));
  second = malloc(sizeof(struct node));
  third = malloc(sizeof(struct node));

  head->data = 7;
  head->next = second;

  second->data = 11;
  second->next = third;

  third->data = 66;
  third->next = NULL;

  transversal(head);
  printf("\n");
  head = reverse(head);
  transversal(head);
}
