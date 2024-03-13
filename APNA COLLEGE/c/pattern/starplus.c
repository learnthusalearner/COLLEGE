#include<Stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(j%3==0 || i%3==0){
            printf("*");
        }else{
            printf(" ");
        }
    }
        printf("\n");
}
}