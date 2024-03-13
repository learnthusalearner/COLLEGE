#include<stdio.h>
int main() {
    int arr[10];

    for(int i=0;i<=9;i++){
        printf("the given array %d: ",i);
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<=9;i++){
        if(i%2 !=0) arr[i]*=2;
        else arr[i]+=10;
    }
    for(int i=0;i<=9;i++){
        printf("%d\t",arr[i]);
    }
}