#include<Stdio.h>
int main(){
    int count=0;
    int arr[8]={1,2,3,4,5,6,7,8};
    int x;
    printf("the given num x : ");
    scanf("%d",&x);
    for(int i=0;i<=7;i++){
       if(x%arr[i]==0){
        printf("%d\t",arr[i]);
       }
    }
  }