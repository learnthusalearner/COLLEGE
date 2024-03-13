#include<Stdio.h>
#include<stdbool.h>
int main(){
    int x;
    printf("enter the num x :");
    scanf("%d",&x);
    int arr[15]={45,76,89,21,34,45,92,33,18,67,36,27,77,79,80};
    bool flag =false;
    for(int i=0;i<=14;i++){
        if(arr[i]==x){
               flag=true;
        }
    }
    if(flag=true){
        printf("\n the num is present in array");
    }else{
        printf("\n the num is not present in array");
    }
}