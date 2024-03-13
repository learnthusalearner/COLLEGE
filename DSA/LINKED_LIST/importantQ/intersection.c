#include<stdio.h>
#include<stdlib.h>

struct Node {
  int data;
  struct Node *next;
};

struct Node *newNode(int data) {
  struct Node *new_node = malloc(sizeof(struct Node));
  new_node->data = data;
  new_node->next = NULL;
  return new_node;
}

struct Node *Intersection(struct Node *head1, struct Node *head2) {
  struct Node *current1 = head1;0
  struct Node *current2 = head2;


  while (current1 != NULL && current2 != NULL) {
    if (current1 == current2) {
      return current1;
    }

    current1 = current1->next;
    current2 = current2->next;
  }

  return NULL;
}
int main() {
  struct Node *head1 = newNode(1);
  head1->next = newNode(2);
  head1->next->next = newNode(3);
  head1->next->next->next = newNode(4);

  struct Node *head2 = newNode(5);
  head2->next = head1->next->next;

  struct Node *intersection = Intersection(head1, head2);

  if (intersection != NULL) {
    printf("Intersection found at node %d.\n", intersection->data);
  } else {
    printf("No intersection found.\n");
  }

  return 0;
}
