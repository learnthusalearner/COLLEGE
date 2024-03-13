#include<Stdio.h>
int main(){
    int arr[5]={6,8,3,7,2};
    for(int i=0;i<=4;i++){
        printf("%p\n",&arr[i]);
    }
}