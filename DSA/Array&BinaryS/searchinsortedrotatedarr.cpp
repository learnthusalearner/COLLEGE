// C++ program to search an element in sorted and rotated 
// array using binary search twice

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &arr, int start, int end, int x) {
    while (start <= end) {
        int mid = (start + end)/2;
        if (arr[mid] == x) return mid;
        if (arr[mid] < x) start = mid + 1;
        else end = mid - 1;
    }
    return -1;
}   

int findPivot(vector<int> &arr, int start, int end) {
    while (start <= end) {
        int mid = (start + end) / 2;
      
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }else{
            end=mid;
        }
    return start;
    }
}

int search(vector<int> &arr, int key) {
    int n = arr.size();
    int pivot = findPivot(arr, 0, n - 1);

    if (arr[pivot] == key)
        return pivot;
    //vector<int> arr = {5, 6, 7, 8, 9, 10, 1, 2, 3}; pivot=6
    if (arr[0] <= key)//5<=3 F arr->7 to 8 
        return binarySearch(arr, 0, pivot - 1, key);
    return binarySearch(arr, pivot + 1, n - 1, key);
}

int main() {
    vector<int> arr = {5, 6, 7, 8, 9, 10, 1, 2, 3};
    int key = 3;
    cout << search(arr, key);
    return 0;
}