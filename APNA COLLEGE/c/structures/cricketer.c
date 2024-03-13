#include<stdio.h>
#include<string.h>
int main(){
    typedef struct cricketer{
        int age;
        int matches;
        char name[50];
    }cricketer;

    cricketer arr[2]; //important to rememeber

      for(int i=0;i<2;i++){
        scanf("%s\n",arr[i].name);
        scanf("%d\n",&arr[i].age);
        scanf("%d\n",&arr[i].matches);
      }
      
      for(int i=0;i<2;i++){
        printf("name of cricketer is %s\n",arr[i].name);   
        printf("age of cricketer is %d\n",arr[i].age);
        printf("no of matches played by cricketer is %d\n",arr[i].matches);
      }
    
}