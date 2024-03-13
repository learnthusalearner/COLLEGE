#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the number : ";
    cin>>x;
    
    int arr[10]={11,22,33,44,55,66,13,43,12,6};
    bool flag=false;

    for(int i=0;i<=9;i++){
        if(arr[i]==x){
            flag=true;
        }
    }
    if (flag == true) {
        cout << "num is present";
    }else {
        cout << "num is absent";
    }
}