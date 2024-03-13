#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int power;
        int speed;
        int hp;
        char tier[1024];
        char name[50];
    }pokemon;

    pokemon arr[2]; //important to rememeber

      for(int i=0;i<2;i++){
        scanf("%d\n",&arr[i].power);
        scanf("%d\n",&arr[i].speed);
        scanf("%d\n",&arr[i].hp);
        scanf("%s\n",arr[i].tier);
        scanf("%s\n",arr[i].name);
      }
      
      for(int i=0;i<2;i++){
        printf("power %d\n",arr[i].power);
        printf("speed %d\n",arr[i].speed);
        printf("hp %d\n",arr[i].hp);
        printf("tier %s\n",arr[i].tier);
        printf("name %s\n",arr[i].name);   
      }
    
}