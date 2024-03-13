#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int attack;
        int power;
        int speed;
        int hp;
        char tier[1024];
        char name[50];
    }pokemon;

    pokemon a,b;

      strcpy(a.name,"PIKA");
      a.attack=700;
      a.hp=23;
      a.speed=5000;
      strcpy(a.tier, "A");

b = a;
 strcpy(b.name,"PIKA"); //updating the value

 printf("name : %s\n",b.name);
 printf("tier : %s\n",b.tier);


}