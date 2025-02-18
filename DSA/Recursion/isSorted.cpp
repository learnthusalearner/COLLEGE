
#include <iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
    if (size == 0 || size == 1)
        return true;
    if (arr[0] > arr[1])
        return false;
    
        bool remainingPart = isSorted(arr + 1, size - 1);
        return remainingPart;
}

int main()
{
    int arr[] = {1, 3, 5, 7, 9, 9, 11};
    int size=sizeof(arr)/sizeof(arr[0]);

    int ans=isSorted(arr,size);
    cout<<ans<<endl;
}