#include<iostream>
using namespace std;
int main(){
    int arr[10]={10,80,10,20,70,10,25,25,50,100};
    int x=100;
    int count=0;
    for(int i=0;i<=9;i++){
        for(int j=i+1;j<=9;j++){
            for(int k=j+1;k<=9;k++){
                if(arr[i]+arr[j]+arr[k]==x){
            cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<"\n";
            count++;
        }
      }
    }
  }
    cout<<"total number of outputs"<<"\t"<<count<<endl;
}