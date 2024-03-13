#include<stdio.h>
#include<string.h>
int main(){
    char str[]="kunal a allumini of KIIT";
    char *ptr=str;
    printf("%p\n",&str[0]);
    printf("%p\n",str);
}