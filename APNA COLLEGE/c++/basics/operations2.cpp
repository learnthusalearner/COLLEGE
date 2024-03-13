#include<iostream>
using namespace std;
int main(){
    int num1=5; //0101
    cout<<"left shift = "<<(num1<<1)<<endl; //10
    cout<<"right shift = "<<(num1>>1)<<endl; //2

    cout<<"\n";

    int num2=8; //1000
    cout<<"and opertor = "<<(num1&num2)<<endl; //0
    cout<<"or operator = "<<(num1|num2)<<endl; //1101=13

}  