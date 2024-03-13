#include<stdio.h>
int main() {
    int arr[4];
    

    for(int i=0;i<=3;i++){
        printf("enter the given array %d : ",i);
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<4;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}