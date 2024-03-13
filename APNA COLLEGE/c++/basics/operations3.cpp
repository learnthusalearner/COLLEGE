#include<iostream>
using namespace std;
int main(){
    int a=4; //0101
    cout<<"size of int= "<<sizeof(a)<<endl;

      cout<<"\n";
    
    char name=a;
    cout<<"size of char = "<<sizeof(name)<<endl;


     cout<<"\n";

    bool flag;
    a==name?flag=true:flag=false;
    cout<<"true/false ="<<flag<<endl;

    cout<<"address = "<<(&a)<<endl;
}  