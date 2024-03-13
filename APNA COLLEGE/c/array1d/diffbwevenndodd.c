#include<Stdio.h>
int main(){
    int even=0;
    int odd=0;
    int arr[7]={1,2,3,4,5,6,7};
    for(int i=0;i<=6;i++){
        if(i%2==0){
           even+=arr[i];
        }
        else{
             odd+=arr[i];
        }
    }
    printf("the diffrence even and odd indices : %d\n ",even-odd);
    
}