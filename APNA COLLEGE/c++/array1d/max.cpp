#include<iostream>
using namespace std;

int main(){
    int arr[9]={2,4,6,8,10,12,-22,16,18};
    int max=arr[0];

    for(int i=0;i<=8;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<"the min of the given number is : "<<max<<endl;

}