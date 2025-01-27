#include<iostream>
#include<vector>
using namespace std;

int pivot(vector<int> arr,int n){
    int start=0;
    int end=n-1;

    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }else{
            end=mid;
        }
    }
    return start;/*Returning start:
After the loop completes, start will point to the first element of the sorted portion of the array. This is because:
1)The loop continues until start and end converge.
2)When they converge, start will be just beyond the unsorted portion of the array.
Therefore, returning start gives us the index where the sorted portion of the array begins, effectively identifying the pivot.*/
}

int main(){
    vector<int> arr={8,9,10,1,2,3};
    int n=sizeof(int)/sizeof(arr[0]);

    int x=pivot(arr,n);
    cout<<x<<endl;

}