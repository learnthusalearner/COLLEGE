#include<Stdio.h>
int main(){
    int n;
    printf("enter the no : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(j==1 || j==2){
            printf("%d",j);                                             
            }else{
            printf("%c",(char)j + 63);  
            }                                           
        }
        printf("\n");
    }
}