#include<stdio.h>
#include<string.h>

typedef struct pokemon{
    int hp;
    int speed;
    int attack;
    char name[50];
}pokemon;

void fun(pokemon p){
    printf("%d\n",p.hp);
    return ;
}

int main(){

pokemon pikachu;
pikachu.hp=50;
fun(pikachu);

return 0;
}