#include <stdio.h>
int main(){
  int n;
  printf("enter the given number : ");
  scanf("%d", &n);
    for(int i = 1 ;i <= n; i++){
    if(i%2 == 1){
      for(int j = 1; j <= i; j++)
        printf("%d", j);
    }else{
      for(int j = 1; j <= i; j++)
        printf("%c", j+64);
    }
    printf("\n");
  }
}