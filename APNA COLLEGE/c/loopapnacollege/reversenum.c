#include<stdio.h>
int main() {
    int n;
    printf("the given number is : ");
    scanf("%d",&n);

    int r;
    while(n>0){
        r=n%10;
        printf("%d",r);
        n=n/10;
       
    }


}