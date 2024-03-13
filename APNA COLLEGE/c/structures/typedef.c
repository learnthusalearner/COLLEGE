#include<Stdio.h>
#include<string.h>
int main(){
    typedef struct book{
        int price;
        int page;
        char name[1024];
    }book;

book alpha;
book beta;
book gamma;

gamma.price=80;
strcpy(gamma.name,"G");
gamma.page=200;

printf("enter the name of book : %s\n ",gamma.name);
printf("the price of book :%d\n",gamma.page);
printf("the price of book :%d\n ",gamma.price);

}