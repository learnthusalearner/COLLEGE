#include<Stdio.h>
int main(){
    int r;
    printf("number of rows: ");
    scanf("%d",&r);
    int c;
    printf("number of column: ");
    scanf("%d",&c);

    int arr[r][c];

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }

printf("\n");

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}