#include<stdio.h>

int main() {
    int product=1;
    int arr[6]={1,1,1,5,11,1};
    
  
     for(int i=0;i<=5;i++){
      product=product*arr[i];
     }
      printf("the product of number is %d\n",product);
      return 0;
}
