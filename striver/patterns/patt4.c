#include<Stdio.h>
int main(){
    int n;
    printf("input : ");
    scanf("%d",&n);

    for(int i=0;i<=n;i++){
        for(int j=0;j<i;j++){
            printf("%d ",i);
    }
    printf("\n");
 }
}