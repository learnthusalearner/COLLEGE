#include<stdio.h>
int main(){
    for(int i=1;i<=4;i++){
        for(int j=0;j<=i-1;j++){
            printf("* ");
        }
        printf("\n");
    }
}