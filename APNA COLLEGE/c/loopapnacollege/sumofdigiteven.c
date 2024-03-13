#include<stdio.h>
int main() {
    int n,l;
    printf("enter a number : ");
    scanf("%d",&n);

    int sum =0;
    while(n>0) {
        l=n%10;
        if(l%2==0){
            sum=sum+l;
        }
        n=n/10;
    }
    printf("sum is %d",sum);
}