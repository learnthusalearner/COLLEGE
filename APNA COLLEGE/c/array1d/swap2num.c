 #include<stdio.h>
 int main(){
    int num1;
    scanf("%d",&num1);

     int num2;
    scanf("%d",&num2);

    int temp;
    temp=num1;
    num1=num2;
    num2=temp;

    printf("num1=%d",num1);
    printf("\nnum2=%d",num2);
 }