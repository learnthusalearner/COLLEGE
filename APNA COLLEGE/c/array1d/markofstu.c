#include<stdio.h>
int main() {
  int marks[10];

  for(int i=1;i<=10;i++){
  printf("\nenter the mark %d: ",i);
  scanf("%d",&marks[i]);
  }
  for(int i=0;i<=9;i++){
    if(marks[i]<=35){
      printf("%d\t",i);
    } 
    
    
  }
  return 0;
}

