#include<stdio.h>
int main(){
    int n;
    printf("enter the given : ");
    scanf("%d",&n);
    int a=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=a;j++){
            printf("* ");
        }
        a--;
        printf("\n");
    }
}
