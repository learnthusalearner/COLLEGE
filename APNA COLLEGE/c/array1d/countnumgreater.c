#include<Stdio.h>
int main(){
    int count=0;
    int x[5]={12,6,3,8,4};
    for(int i=0;i<=5;i++){
        if(x[2]<x[i]){
            count++;
    }
    
}
        printf("%d\t",count-1);
}