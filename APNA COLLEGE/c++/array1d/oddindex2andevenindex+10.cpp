#include<iostream>
using namespace std;
int main(){
int arr[10];

for(int i=0;i<=9;i++){
    cout<<"array"<<i<<":";
    cin>>arr[i];
}

for(int i=0;i<=9;i++){
    if(i%2!=0) arr[i]=arr[i]*2;
    else arr[i]=arr[i]+10;
}
for(int i=0;i<=9;i++){
    cout<<arr[i]<<"\t";
}
}