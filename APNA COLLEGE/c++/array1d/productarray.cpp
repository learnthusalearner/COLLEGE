#include<iostream>
using namespace std;
int main(){
int arr[5];
int product=1;

for(int i=0;i<=4;i++){
    cin>>arr[i];
  }
for(int i=0;i<=4;i++){
    product=product*arr[i];
    cout<<arr[i]<<endl;
  }
  cout<<"the product of number is"<<product<<"\n"<<endl;
}

