#include<stdio.h>
#include<string.h>
int main(){
    char str[]="kunal a allumini of KIIT";
    char *ptr=str;
    for(int i=0;*ptr != '\0';i++){
        printf("%p\n",*ptr);
        ptr++;
    }
    printf("\n");
    for(int i=0;str[i] != '\0';i++){
        printf("%p\n",str[i]);
        str[i]++;
    }
}