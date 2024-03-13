#include<stdio.h>//running in other comiplers
#include<string.h>
int main(){
char str[1024];
puts("the given string is");
gets(str);

int size=0;
for(int i=0;str[i] != '\0';i++){
    size++;
}
printf("the size of string is :%d\n ",size);

}

