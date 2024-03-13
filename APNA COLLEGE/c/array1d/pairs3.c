#include<Stdio.h>
int main(){
    int arr[9]={25,25,50,10,30,60,5,5,90};
    int count=0;
    int x=100;
    for(int i=0;i<=8;i++){
        for(int j=i+1;j<=8;j++){
            for(int k=j+1;k<=8;k++){
            if(arr[i]+arr[j]+arr[k]==x){
                printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
                count++;
          }
        }
      }
    }
        printf("\nthe total number of outputs: %d  ",count);


}