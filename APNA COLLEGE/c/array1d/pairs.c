#include<Stdio.h>
int main(){
    int arr[8]={50,90,10,60,40,50,25,75};
    int count=0;
    int x=100;
    for(int i=0;i<=7;i++){
        for(int j=i+1;j<=7;j++){
            if(arr[i]+arr[j]==x){
                printf("(%d,%d)\n",arr[i],arr[j]);
                count++;
            }
        }
    }
        printf("\nthe total number of outputs: %d  ",count);


}