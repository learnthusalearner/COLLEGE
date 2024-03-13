4.1-

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL; // Declare a global head pointer.

// Function to insert a node at a given position.
void insertAtPosition(int data, int position)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;

    if (position == 1)
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {
        struct node *current = head;
        for (int i = 1; i < position - 1; i++)
        {
            if (current == NULL)
            {
                printf("Position out of range\n");
                return;
            }
            current = current->next;
        }
        if (current == NULL)
        {
            printf("Position out of range\n");
            return;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

// Function to search for an element in the list.
int search(int data)
{
    struct node *current = head;
    int position = 1;
    while (current != NULL)
    {
        if (current->data == data)
        {
            printf("%d found at position %d\n", data, position);
            return position;
        }
        current = current->next;
        position++;
    }
    printf("%d not found in the list\n", data);
    return -1;
}

// Function to traverse and print the list.
void traverse()
{
    struct node *current = head;
    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// Function to sort the list in ascending order.
void sort()
{
    struct node *current = head;
    while (current != NULL)
    {
        struct node *next = current->next;
        while (next != NULL)
        {
            if (current->data > next->data)
            {
                int temp = current->data;
                current->data = next->data;
                next->data = temp;
            }
            next = next->next;
        }
        current = current->next;
    }
}

// Function to reverse the list.
void reverse()
{
    struct node *current = head;
    struct node *prev = NULL;
    struct node *next = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

int main()
{
    int n, data;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    printf("Enter data for node 1: ");
    scanf("%d", &data);
    head = (struct node *)malloc(sizeof(struct node));
    head->data = data;
    head->next = NULL;

    for (int i = 1; i < n; i++)
    {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);
        insertAtPosition(data, i + 1);
    }

    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Search an element in the list\n");
        printf("2. Sort the list in ascending order\n");
        printf("3. Reverse the list\n");
        printf("4. Exit\n");

        int choice;
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element to search: ");
            scanf("%d", &data);
            search(data);
            break;
        case 2:
            sort();
            traverse();
            break;
        case 3:
            reverse();
            traverse();
            break;
        case 4:
            return 0; // Exit the program.
        default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}


4.2-

//Insert and delete at any given position in a circular linked list.
//After any operation traverse the list to show the elements.
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *start = NULL;//Global Variable
//Function for creating new node
struct node *CreateNode(int x)
{
    struct node *new_node;
    new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node != NULL)
    {
        new_node->data = x;
        new_node->next = NULL;
        return new_node;
    }
    else
    {
        printf("Memory is not allocated\n");
        exit(0);
    }
}
//Function to traverse linked list
void TraverseLinkedList()
{
    struct node *ptr = start;
    printf("The data(s): ");
    if (ptr == ptr->next)
        printf("%i\n", ptr->data);
    else
    {
        do 
        {
        printf("%i ", ptr->data);
        ptr = ptr->next;
        } while (ptr != start);
        printf("\n");
    }
}
//Function for inserting new node at given position
void InsertNodeAtPosition(int item, int givenPosition)
{
    --givenPosition;
    struct node *inserted_node = CreateNode(item);
    int position = 0, flag = 0;
    struct node *ptr = start;
    if (start == NULL)
    {
        printf("No linked list exists...\nEntering as first element...\n");
        start = inserted_node;
        inserted_node->next=start;
        flag = 1;
    }
    while (ptr != NULL)
    {
        if (++position == givenPosition )
        {
            inserted_node->next = ptr->next;
            ptr->next = inserted_node;
            flag = 1;
            break;
        }
        ptr = ptr->next;
    }
    if (flag == 1)
    {
        printf("The element is inserted\n");
        TraverseLinkedList();
    }
    else
        printf("Position not found\n");
}
//Function for deleting new node of given position
void DeleteNodeAtPosition(int givenPosition)
{
    --givenPosition;
    int position = 0, flag = 0;
    struct node *ptr = start;
    struct node *deletedNode;
    while (ptr != NULL)
    {
        if (givenPosition == (++position) + 1)
        {
            deletedNode = ptr->next;
            ptr->next = deletedNode->next;
            free(deletedNode);
            flag = 1;
            break;
        }
        ptr = ptr->next;
    }
    if (flag == 1)
    {
        printf("The element is deleted\n");
        TraverseLinkedList();
    }
    else if (start == NULL)
    {
        printf("No linked list exists\n");
    }
    else
        printf("Position not found\n");
}
//Function to free memory
void FreeMemory()
{
    struct node *ptr = start;
    struct node *deletedNode;
    while (ptr != NULL)
    {
        deletedNode = ptr->next;
        ptr->next = deletedNode->next;
        free(deletedNode);
        ptr = ptr->next;
    }
}
int main()
{
    //Creating a circular linked list
    struct node *new_node;
    int x;
    do
    {
        new_node = CreateNode(x);
        printf("Enter data or -1 to exit: ");
        scanf("%i", &x);
        if (start == NULL)
        {
            start = new_node;
            start->next = start;
        }
        else
        {
            struct node *ptr = start;
            while (ptr->next != start)
                ptr = ptr -> next;
            ptr->next = new_node;
            new_node->next = start;
        }
    } while (x != -1);
    int option;
    do
    {
        printf("*MENU*\n");
        printf("1. Insert a node at specific position\n");
        printf("2. Deletion of an element from specific position\n");
        printf("3. Exit\n");
        printf("Enter your option:");
        scanf("%i", &option);
        switch (option)
        {
            case 1:
            {
                printf("Enter the data: ");
                int item, givenPosition;
                scanf("%i", &item);
                printf("Enter the position: ");
                scanf("%i", &givenPosition);
                InsertNodeAtPosition(item, givenPosition);
                break;
            }
            case 2:
            {
                int givenPosition;
                printf("Enter the position: ");
                scanf("%i", &givenPosition);
                DeleteNodeAtPosition(givenPosition);
                break;
            }
            case 3:
            {
                option = 0;
                printf("The program was closed\n");
                TraverseLinkedList();
                break;
            }
            default:
            {
                printf("Invalid option\n");
                option = -1;
            }
        }
    }
    while (option != 0);
    
    return 0;
}

