#include<stdio.h>
int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
    fact=fact*i;
}
return fact;
}
int main() {
    
    int n,factorial;
    printf("enter a given number : ");
    scanf("%d",&n);

    factorial= fact(n);

    printf("the factorial of th given number is :%d",factorial);


}