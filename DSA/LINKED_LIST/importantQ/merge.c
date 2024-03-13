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

struct node *sort(struct node *p,struct node *q,struct node *sorting) {
  struct node *new_head = NULL;
  if(p==NULL) return q;
  if(q==NULL) return p;
  
  if(p&&q){
    if(p->data<=q->data){
      sorting=p;
      p=p->next;
    }
    else{
      sorting=q;
      q=q->next;
    }
  }
  return new_head;

}

int main() {
  struct node *LL1;

  printf("Original linked list 1:\n");
  transversal(head1);
  printf("\nOriginal linked list 2:\n");
  transversal(head2);
  printf("\n");

  struct node *sortedList = sort(head1, head2, NULL);

  printf("Merged and sorted linked list in ascending order:\n");
  transversal(sortedList);

  return 0;
}