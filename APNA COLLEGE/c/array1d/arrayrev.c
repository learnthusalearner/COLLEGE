#include<Stdio.h>
int main(){
    int arr[5];
    int rev[5];
    for(int i=0;i<=4;i++){
        printf("array %d : ",i);
        scanf("%d",&arr[i]);
         rev[4-i]=arr[i];
    }
    for(int i=0;i<=4;i++){
    printf("%d\t",rev[i]);
  }
}