#include<stdio.h>
int main(){
    int a[50],size;
    printf("the size of the array is: ");
    scanf("%d",&size);
    printf("the given array is: \n");
    for(int i=0;i<=size;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<=size;i++){
        printf("%d",a[i]);
    }



}