#include<Stdio.h>
int main() {
    int n,a=0,b=1,c,i;
    printf("the given series is : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        printf("%d\t",a);
        c=a+b;y
        a=b;
        b=c;
    }
    return 0;
}