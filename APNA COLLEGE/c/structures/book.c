#include<Stdio.h>
#include<string.h>
int main(){
    struct book{
        int price;
        int page;
        char name[1024];
    }a,b,c;

    printf("enter the name of book : ");
    gets(a.name);
    printf("the price of book : ");
    scanf("%d",a.price);
    printf("the page of book : ");
    scanf("%d",a.page);

}