#include<Stdio.h>
int main(){
    int n;
    printf("input : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<n+1;j++){
            printf("%d ",j);
    }
    printf("\n");
 }
}