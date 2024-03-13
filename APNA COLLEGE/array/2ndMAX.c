#include<Stdio.h>
 void bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
 }
    void printarray(int arr[],int size){
        int i;
        for(i=0;i<size;i++){
            printf("%d",arr[i]);
        }
            printf("\n");
    }
int main(){
    int arr[]={9,3,2,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);

   printf("The second largest number is: %d\n", arr[n - 2]);

}