#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the num ";
    cin>>n;

    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;//why int sum=sum+i givieng wrong output 
        cout<<sum<<endl;
    }
}