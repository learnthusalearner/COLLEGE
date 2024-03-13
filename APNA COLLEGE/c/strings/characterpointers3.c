#include<stdio.h>
#include<string.h>
int main(){
    char str[]="kunal a allumini of KIIT";
    char *ptr=str;
    *ptr='P';
    printf("%s",str);
    } 