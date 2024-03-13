#include<iostream>
using namespace std;
int main(){
int arr[]={8,4,6,1,7,9,5};
int count=0;

for(int i=0;i<=sizeof(arr)/sizeof(arr[0]);i++){
    count++;
}
cout<<"the given number of arrays are : "<<count-1<<endl;
}