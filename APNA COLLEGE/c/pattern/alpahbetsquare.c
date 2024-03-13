#include<Stdio.h>
int main(){
    int n;
    printf("enter the no : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int i=(char)j + 64;
            printf("%c",i);
        }
        printf("\n");
    }
}