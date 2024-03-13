#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"a:";
    cin>>a;
    cout<<"b:";
    cin>>b;

    int temp;
    temp=b;
    b=a;
    a=temp;

    cout<<"\n";

    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;

}