#include<iostream>
using namespace std;
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int x;
    cout<<"x is : ";
    cin>>x;

    for(int i=0;i<=7;i++){
        if(x % arr[i]==0){
            cout<<arr[i]<<"\t";
        }
    }
}