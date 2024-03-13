#include<Stdio.h>
int main(){
    int a;
    printf("enter the given number a : ");
    scanf("%d",&a);
    int b;
    printf("enter the given number b : ");
    scanf("%d",&b);

    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("the given number a :%d\n",a);
    printf("the given number b :%d\n",b);
}
