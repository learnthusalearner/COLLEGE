#include <iostream>
#include <vector>
using namespace std;

int reverseArr(vector<int>&arr,int value){
    int start=value+1;//4
    int end=arr.size()-1;//8

    while(start<=end){//4<=8
        swap(arr[start++],arr[end--]);
    }
}

int main(){
    vector<int> arr={1,2,3,4,5,6,7,8,9};
    int value=3;
    reverseArr(arr,value);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}