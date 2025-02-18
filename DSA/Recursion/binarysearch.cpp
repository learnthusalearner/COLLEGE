#include <iostream>
using namespace std;

bool binarySearch(int arr[], int s, int e, int target)
{
    if (s > e)
        return false;
    int mid = s + (e - s) / 2; 
    if (arr[mid] == target)
        return true;
    if (arr[mid] < target)
        return binarySearch(arr, mid + 1, e, target);
    else
        return binarySearch(arr, s, mid - 1, target);
}

int main()
{
    int arr[] = {6, 2, 3, 4, 5, 6, 7};
    int elem = 6;
    int size = sizeof(arr) / sizeof(arr[0]);
    int s = 0;
    int e = size - 1;


    bool ans = binarySearch(arr, s, e, elem); 
    cout <<boolalpha<< ans << endl;

    return 0; 
}