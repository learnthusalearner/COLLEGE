#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
int searchElement(struct Node* head, int data) {
    struct Node* current = head;
    int position = 1;
    while (current != NULL) {
        if (current->data == data) {
            return position;
        }
        current = current->next;
        position++;
    }
    return 0;
}
void sortList(struct Node* head) {
    int swapped, temp;
    struct Node* current;
    struct Node* last = NULL;
    if (head == NULL)
        return;
    do {
        swapped = 0;
        current = head;
        while (current->next != last) {
            if (current->data > current->next->data) {
                temp = current->data;
                current->data = current->next->data;
                current->next->data = temp;
                swapped = 1;
            }
            current = current->next;
        }
        last = current;
    } while (swapped);
}
struct Node* reverseList(struct Node* head) {
    struct Node* prev = NULL;
    struct Node* current = head;
    struct Node* next = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev;
}

void displayList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
   
    struct Node* head = NULL;
    int choice, element, position;
    while (1) {
        printf("\nLinked List Operations\n");
        printf("1. Insert an element\n");
        printf("2. Search an element\n");
        printf("3. Sort the list\n");
        printf("4. Reverse the list\n");
        printf("5. Display the list\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter an element to insert: ");
                scanf("%d", &element);
                struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
                newNode->data = element;
                newNode->next = head;
                head = newNode;
                break;
            case 2:
                printf("Enter an element to search: ");
                scanf("%d", &element);
                position = searchElement(head, element);
                if (position != -1) {
                    printf("Element %d found at position %d in the list.\n", element, position);
                } else {
                    printf("Element %d not found in the list.\n", element);
                }
                break;
            case 3:
                sortList(head);
                printf("List sorted in ascending order.\n");
                break;
            case 4:

                head = reverseList(head);
                printf("List reversed.\n");
                break;
            case 5:
                printf("Linked List: ");
                displayList(head);
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}