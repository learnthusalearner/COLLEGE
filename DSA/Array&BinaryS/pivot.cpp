// Given a rotated sorted array, find the index of the pivot element (the smallest element in the array, which is also the point where the array was rotated).
#include<iostream>
#include<vector>
using namespace std;

int pivot(vector<int> arr,int n){
    int start=0;
    int end=n-1;

    while(start<end){ 
        int mid=start+(end-start)/2; 
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
    vector<int> arr={8,9,10,2,3,4};
    int n=arr.size();

    int x=pivot(arr,n);
    cout<<"INDEX OF PIVOT ELEMENT:"<<x<<endl;

    return 0;
}