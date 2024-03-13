#include<stdio.h>
int main(){
    int n;
    printf("enter the given number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=0;j<=i-1;j++){
            printf("*");
        }
        printf("\n");
    }
}