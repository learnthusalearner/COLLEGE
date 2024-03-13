#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i=0;i<=4;i++){
        cout<<"\n"<<"array"<<i<<" ";
        cin>>arr[i];
    }
    for(int i=4;i>=0;i--){
        cout<<arr[i]<<"\t";
    }
}