#include<stdio.h>
int main(){
    int arr[50],size,pos,num;
    
    printf("size of array is :");
    scanf("%d",&size);


    printf("the elements are : \n");
    for(int i=0;i<=size;i++){
        scanf("%d",&arr[i]);
    }

    printf("the data u want to enter :");
    scanf("%d",&num);

    printf("position at which u have to enter");
    scanf("%d",&pos);

    if(pos<=0 || pos>size+1){
        printf("invalid");
    }else{
        for(int i=size-1;i>0;i--){
            arr[i+1]=arr[i];
        }
        arr[0]=num;
        size++;
    }
    printf("the given array is:");
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }


}