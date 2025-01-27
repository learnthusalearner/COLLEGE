// Find the 2nd Largest

#include <iostream>
#include <vector>
using namespace std;

int Second_largest(vector<int> &arr)
{
int largest = arr[0], second_largest = -1;
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > largest) {//if the current element is greater than the largest element then update the largest and second largest element arr[1]>arr[0]
            second_largest = largest;//second largest is updated to the largest element here second_largest=arr[0] i.e 10
            largest = arr[i];//largest is updated to the current element here largest=arr[1]
        } else if (arr[i] > second_largest && arr[i] != largest) {//here arr[1]>arr[0] and arr[1]!=arr[1] so second_largest=arr[1] (second_largest=324)
            second_largest = arr[i];//second_largest is updated to the current element here the second_largest=arr[1]
        }
    }
    return second_largest;
}
int main()
{
    vector<int> arr1 = {10, 324, 45, 90, 9808};
    vector<int> arr2 = {10, 5, 8, 20, 12};
    cout << Second_largest(arr2);
    return 0;
}