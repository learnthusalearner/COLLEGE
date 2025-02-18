#include<iostream>
using namespace std;

int main(){
    int arr[2][3];//2Rows and 3Columns


//taking input
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

//printing output
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;   
}