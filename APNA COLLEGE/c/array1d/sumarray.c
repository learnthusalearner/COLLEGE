#include<stdio.h>

int main() {
    int sum=0;
    int arr[6]={1,3,5,7,9,11};
    
  
     for(int i=0;i<=5;i++){
      sum = sum+ arr[i];
     }
      printf("the sum of number is %d\n",sum);
      return 0;
}
