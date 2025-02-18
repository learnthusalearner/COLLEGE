#include<iostream>
#include<vector>
using namespace std;

vector<int> wave(vector<int> arr,int nRows,int nCols){
    for(int i=0;i<nCols;i++){
        if(i%2==0){
            for(int j=0;j<nRows;j++){
                cout<<arr[j*nCols+i]<<" ";//this is the formula to access the elements of the 2D array in wave form
            }
        }
        else{
            for(int j=nRows-1;j>=0;j--){
                cout<<arr[j*nCols+i]<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    int nRows,nCols;
    cout<<"Enter the number of rows and columns of the 2D array: ";
    cin>>nRows>>nCols;
    vector<int> arr(nRows*nCols);
    cout<<"Enter the elements of the 2D array: ";
    for(int i=0;i<nRows*nCols;i++){
        cin>>arr[i];
    }
    wave(arr,nRows,nCols);
    return 0;
}