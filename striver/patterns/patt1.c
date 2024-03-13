//* * *
//* * *
//* * *
#include<Stdio.h>
int main(){
    int n;
    printf("input : ");
    scanf("%d",&n);

    for(int i=0;i<=n-1;i++){
        for(int j=0;j<n;j++){
            printf("* ");
    }
    printf("\n");
 }
}