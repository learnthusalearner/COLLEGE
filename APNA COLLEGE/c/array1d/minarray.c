#include<stdio.h>

int main() {
    int arr[6]={-1,-24,20,15,11,9};
        int min=arr[0];
    
  
     for(int i=0;i<=5;i++){
        if(min>arr[i]){
            min=arr[i];
        }
      }
     
      printf("the min of number is %d\n",min);
      return 0;
}
 