#include<Stdio.h>
int main() {
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    int count = 0;
    for (int i = 1; n != 0; i++) {
    n =n/10;
    count++;
  }
    printf("the given digits are : %d",count);


    }


    
    
