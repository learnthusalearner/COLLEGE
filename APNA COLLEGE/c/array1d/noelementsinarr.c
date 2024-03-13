#include<stdio.h>
int main() {
    int arr[]={8,2,3,4,5,6};
    int count=0;
    for(int i=0;i<=sizeof(arr)/sizeof(arr[0]);i++){
        count++;
    }
    printf("the number of digits : %d",count-1);

    return 0;
}