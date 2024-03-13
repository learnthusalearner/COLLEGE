#include<Stdio.h>
int main(){
    int a;
    printf("enter the given number a : ");
    scanf("%d",&a);
    int b;
    printf("enter the given number b : ");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("the given number a :%d\n",a);
    printf("the given number b :%d\n",b);
}
