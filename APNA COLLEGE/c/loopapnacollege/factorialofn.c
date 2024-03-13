#include<Stdio.h>
int main() {
    int n,fact=1;
     printf("enter a number : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
     fact=fact*i;
    }
    printf("factorial of the number is :%d",fact);
} 