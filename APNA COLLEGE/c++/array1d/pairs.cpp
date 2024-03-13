#include<iostream>
using namespace std;

int main(){
    int arr[10]={50,75,90,10,50,25,80,20,70,30};
    int count=0;
    int x=100;

    for(int i=0;i<=9;i++){
        for(int j=i+1;j<=9;j++){
            if(arr[i]+arr[j]==x){
                cout<<"("<<arr[i]<<","<<arr[j]<<")\n";
                count++;
            }
        }
    }
    cout<<"the total number of outputs"<<"\t"<<count<<endl;
}