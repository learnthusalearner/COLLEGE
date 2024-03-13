#include<stdio.h>
int main() 
{
    int n, rev =  0;
    printf("the given number is : ");
    scanf("%d" ,&n);

    int orig_n = n;

    while(n > 0){
        int rem = n % 10;
        rev = rev * 10 + rem;
         n =n/ 10;
    }


    printf("reverse of the number :%d\n", rev);
    int sum = orig_n + rev;    

    printf("the sum of the number and its reverse is :%d\n", sum);
    return 0;
}     