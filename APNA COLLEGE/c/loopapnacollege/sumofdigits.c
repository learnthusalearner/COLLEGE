#include<stdio.h>
int main() {
    int n;
    printf("enter a number : ");
    scanf("%d",&n);

    int sum =0,l;
    while(n>0) {
        l=n%10;
        sum=sum+l;
        n=n/10;
    }
    printf("sum is %d",sum);
}