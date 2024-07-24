#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the num";
    cin>>n;

    if(n==1 | n%2==1){
        cout<<"PRIME";    
    }else{
        cout<<"not PRIME";
    }
}