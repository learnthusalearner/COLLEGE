#include <stdio.h>
#define size 5

int stack[size];
int top = -1;

void push(int element) {
  if (top == size - 1) {
    printf("Stack overflow\n");
  } else {
    top++;
    stack[top] = element;
  }
}

 pop() {
  if (top == -1) {
    printf("Stack underflow\n");
    return -1;
  } else {
    int element = stack[top];
    top--;
    return element;
  }
}
void traversal(){
  for(int i=top;i>=0;i--){
    printf("%d\n",stack[i]);
  }
}

int main() {
  int choice, element;

  printf("1. Push\n2. Pop\n3. traversal\n4. exit\n");

  do {
    printf("Enter your choice:");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        printf("Enter the element to push: ");
        scanf("%d", &element);
        push(element);
        break;

      case 2:
        element = pop();
        if (element != -1) {
          printf("The popped element is %d\n", element);
        }
        break;
      
      case 3:
      traversal();
      break;

      default:
        printf("Invalid choice\n");
    }
  } while (choice != 4);

  return 0;
}
