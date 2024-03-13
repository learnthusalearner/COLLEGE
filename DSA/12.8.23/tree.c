#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int key) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = key;
    newNode->left = newNode->right = NULL;
    return newNode;
}

struct Node* insert(struct Node* root, int key) {
    if (root == NULL) {
        return createNode(key);
    }

    if (key < root->data) {
        root->left = insert(root->left, key);
    } else if (key > root->data) {
        root->right = insert(root->right, key);
    }

    return root;
}

void iterativeInorderTraversal(struct Node* root) {
    if (root == NULL) {
        printf("BST is empty.\n");
        return;
    }

    struct Node* stack[100];
    int top = -1;

    while (root != NULL || top != -1) {
        while (root != NULL) {
            stack[++top] = root;
            root = root->left;
        }

        root = stack[top--];
        printf("%d ", root->data);

        root = root->right;
    }

    printf("\n");
}

struct Node* findMinNode(struct Node* root) {
    while (root->left != NULL) {
        root = root->left;
    }
    return root;
}

struct Node* deleteNode(struct Node* root, int key) {
    if (root == NULL) {
        printf("Key not found in the BST.\n");
        return root;
    }

    if (key < root->data) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->data) {
        root->right = deleteNode(root->right, key);
    } else {
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }

        struct Node* temp = findMinNode(root->right);
        root->data = temp->data;

        root->right = deleteNode(root->right, temp->data);
    }

    return root;
}

void menu() {
    printf("\n1. Create/Insert into BST\n");
    printf("2. Inorder Traverse (Iterative)\n");
    printf("3. Delete from BST\n");
    printf("4. Exit\n");
}

int main() {
    struct Node* root = NULL;
    int choice, key;

    do {
        menu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the key to insert: ");
                scanf("%d", &key);
                root = insert(root, key);
                break;
            case 2:
                printf("Iterative Inorder Traversal: ");
                iterativeInorderTraversal(root);
                break;
            case 3:
                printf("Enter the key to delete: ");
                scanf("%d", &key);
                root = deleteNode(root, key);
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}